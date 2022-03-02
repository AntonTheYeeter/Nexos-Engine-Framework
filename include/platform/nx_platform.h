#ifndef NX_PLATFORM_H
#define NX_PLATFORM_H

#include "../nexos/nx_def.h"

typedef enum NX_KeyCode
{
    NX_KEY_UNKNOWN = -1
} NX_KeyCode;

typedef enum NX_KeyState
{
    NX_KEY_STATE_UNKNOWN = -1,
    NX_KEY_STATE_PRESSED = 1,
    NX_KEY_STATE_HOLD = 2
} NX_KeyState;

void NX_SetWindowSize(NX_U32 w, NX_U32 h)
void NX_PlatformInit();
NX_KeyState NX_GetKeyInput(NX_KeyCode key);
NX_B8 NX_IsRunning();
void NX_PlatformShutdown();

#endif