#include "platform/nx_platform.h"

#ifdef NX_PLATFORM_WINDOWS

#include <stdlib.h>
#include <assert.h>
#include <windows.h>

typedef struct NX_Win32PlatformContext
{
    HINSTANCE hInstance;
    HWND hwnd;
} NX_Win32PlatformContext;

void NX_PlatformInit(NX_PlatformContext platContext)
{
    platContext.internalContext = malloc(sizeof(NX_Win32PlatformContext));

    NX_Win32PlatformContext* context = (NX_Win32PlatformContext*)platContext.internalContext;

    context->hInstance = GetModuleHandleA(0);
}

NX_KeyState NX_GetKeyInput(NX_KeyCode key)
{

}

NX_B8 NX_IsRunning()
{
    return NX_TRUE;
}

void NX_PlatformShutdown(NX_PlatformContext platContext)
{
    free(platContext.internalContext);
}

#endif