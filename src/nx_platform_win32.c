#include "platform/nx_platform.h"

#ifdef NX_PLATFORM_WINDOWS

#include <stdlib.h>
#include <assert.h>
#include <windows.h>

static HWND window = 0;
static NX_B8 running = NX_TRUE;

static NX_U32 width = 0;
static NX_U32 height = 0;

LRESULT CALLBACK windowCallback(HWND window, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch(msg)
    {
        case WM_CLOSE:
            running = NX_FALSE;
            break;
    }

    return DefWindowProcA(window, msg, wParam, lParam);
}

void NX_SetWindowSize(NX_U32 w, NX_U32 h)
{
    width = w;
    height = h;
}

void NX_PlatformInit()
{
    HINSTANCE hInstance = GetModuleHandleA(0);

    WNDCLASSA wc = {};
    wc.hInstance = hInstance;
    wc.lpfnWndProc = windowCallback;
    wc.hCursor = LoadCursor(0, IDC_ARROW);
    wc.lpszClassName = "Nexos_Engine_Window";

    if(!RegisterClassA(&wc))
    {
        WriteConsoleA(GetStdHandle(STD_OUTPUT_HANDLE), "Failed to register window class!!!", 0, 0, 0);
    }

    DWORD style = WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX;

    if(!CreateWindowExA(WS_EX_APPWINDOW, "Nexos_Engine_Window", "Test", style, CW_USEDEFAULT, CW_USEDEFAULT, width, height, 0, 0, hInstance, 0));
    {
        WriteConsoleA(GetStdHandle(STD_OUTPUT_HANDLE), "Failed to register window class!!!", 0, 0, 0);
    }
}

NX_KeyState NX_GetKeyInput(NX_KeyCode key)
{

}

NX_B8 NX_IsRunning()
{
    return running;
}

void NX_PlatformShutdown()
{
    DestroyWindow(window);
}

#endif