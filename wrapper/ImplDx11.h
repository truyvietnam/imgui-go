#pragma once

#include "Types.h"

#ifdef __cplusplus
extern "C" {
#endif

struct ID3D11Device;
struct Id3D11DeviceContext;

extern IggBool iggDx11Init(void* device, void* device_context);
extern void iggDx11Shutdown();
extern void iggDx11NewFrame();
extern void iggDx11RenderDrawData(IggDrawData draw_data);

#ifdef __cplusplus
}
#endif