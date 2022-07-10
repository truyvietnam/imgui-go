#include "ConfiguredImGui.h"

#include "ImplDx11.h"

struct ID3D11Device;
struct Id3D11DeviceContext;

IggBool iggDx11Init(void* device, void* device_context) {
    return ImGui_ImplDX11_Init(reinterpret_cast<ID3D11Device*>(device), reinterpret_cast<ID3D11DeviceContext*>(device_context)) ? 1 : 0;
}
void iggDx11Shutdown() {
    ImGui_ImplDX11_Shutdown();
}
void iggDx11NewFrame() {
    ImGui_ImplDX11_NewFrame();
}
void iggDx11RenderDrawData(IggDrawData draw_data) {
    ImGui_ImplDX11_RenderDrawData(reinterpret_cast<ImDrawData*>(draw_data));
}