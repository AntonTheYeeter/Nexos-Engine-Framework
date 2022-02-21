#include "nexos/nx.h"

#include <stdio.h>

NX_B8 NX_LibInit(NX_LibFeature feature)
{
    NX_B8 windowEnabled = NX_FALSE;
    NX_B8 graphicsEnabled = NX_FALSE;
    NX_B8 audioEnabled = NX_FALSE;
    NX_B8 physicsEnabled = NX_FALSE;
    NX_B8 inputEnabled = NX_FALSE;

    switch(feature)
    {
        case NX_WINDOW: windowEnabled = NX_TRUE; break;
        case NX_GRAPHICS: graphicsEnabled = NX_TRUE; break;
        case NX_AUDIO: audioEnabled = NX_TRUE; break;
        case NX_PHYSICS: physicsEnabled = NX_TRUE; break;
        case NX_INPUT: inputEnabled = NX_TRUE; break;
        case NX_ALL:
            windowEnabled = NX_TRUE;
            graphicsEnabled = NX_TRUE;
            audioEnabled = NX_TRUE;
            physicsEnabled = NX_TRUE;
            inputEnabled = NX_TRUE;
            break;

        default: break;
    }

    if(windowEnabled)
    {
        printf("Initializing Window\n");
    }

    if(graphicsEnabled)
    {
        printf("Initializing Graphics\n");
    }

    if(audioEnabled)
    {
        printf("Initializing Audio\n");
    }

    if(physicsEnabled)
    {
        printf("Initializing Physics\n");
    }

    if(inputEnabled)
    {
        printf("Initializing Input\n");
    }
}

NX_B8 NX_AppInit(NX_U32 windowWidth, NX_U32 windowHeight, NX_String appName)
{

}

NX_B8 NX_SetStartFunction(NX_U8(func)())
{
    func();
}

NX_B8 NX_SetUpdateFunction(NX_U8(func)())
{
    while(NX_IsRunning())
    {
        func();
    }
}

NX_B8 NX_AppShutdown()
{

}

NX_B8 NX_LibShutdown()
{

}