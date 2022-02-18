#ifndef NX_H
#define NX_H

#include "nx_def.h"
#include "../platform/nx_platform.h"

typedef enum NX_LibFeature
{
    NX_UNKNOWN_PARAMETER = -1,
    NX_ALL = 0,
    NX_WINDOW = 1,
    NX_AUDIO = 2,
    NX_PHYSICS = 3,
} NX_LibFeature;

NX_B8 NX_LibInit(NX_LibFeature feature);
NX_B8 NX_AppInit(NX_U32 windowWidth, NX_U32 windowHeight, NX_String appName);

NX_B8 NX_SetStartFunction(NX_U8(func)());
NX_B8 NX_SetUpdateFunction(NX_U8(func)());

NX_B8 NX_AppShutdown();
NX_B8 NX_LibShutdown();

#endif