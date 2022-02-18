#ifndef NX_H
#define NX_H

#include "nx_def.h"
#include "../platform/nx_platform.h"

void NX_SetLibInitParameter(NX_I8 parameter, NX_B8 enabled);
NX_B8 NX_LibInit();
void NX_SetAppInitParameter(NX_I8 parameter, NX_B8 enabled);
NX_B8 NX_AppInit();

NX_B8 NX_SetStartFunction(NX_U8(func)());
NX_B8 NX_SetUpdateFunction(NX_U8(func)());

NX_B8 NX_AppShutdown();
NX_B8 NX_LibShutdown();

#endif