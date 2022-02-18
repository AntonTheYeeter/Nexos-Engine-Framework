#ifndef NX_PLATFORM_H
#define NX_PLATFORM_H

#include "../nexos/nx_def.h"

typedef struct NX_PlatformContext
{
    void* internalContext;
} NX_PlatformContext;

typedef struct NX_Window
{
    NX_U32 w;
    NX_U32 h;
    NX_String title;
    NX_U8* flags;
} NX_Window;

typedef enum NX_KeyCode
{
    NX_KEY_UNKNOWN = -1
} NX_KeyCode;

void NX_PlatformInit();
NX_Window* NX_CreateWindow(NX_U32 width, NX_U32 height, const NX_String title, NX_U8* flags);
void NX_PlatformShutdown();

#endif