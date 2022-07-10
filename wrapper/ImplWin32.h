#pragma once

#include "Types.h"

#ifdef __cplusplus
extern "C" {
#endif


extern IggBool iggWin32Init(void* hwnd);

extern void iggWin32Shutdown();
extern void iggWin32NewFrame();

extern IggBool iggWin32WndProcHandler(void* hwnd, unsigned int msg, void* wparam, void* lparam);


#ifdef __cplusplus
}
#endif