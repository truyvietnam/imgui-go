#include "ConfiguredImGui.h"

#include "ImplWin32.h"

IggBool iggWin32Init(void* hwnd)
{
    return ImGui_ImplWin32_Init(hwnd) ? 1 : 0;
}

void iggWin32Shutdown()
{
    ImGui_ImplWin32_Shutdown();
}

void iggWin32NewFrame()
{
    ImGui_ImplWin32_NewFrame();
}

IggBool iggWin32WndProcHandler(void* hwnd, unsigned int msg, void* wparam, void* lparam)
{
    return FAILED(ImGui_ImplWin32_WndProcHandler((HWND)hwnd, (UINT)msg, *reinterpret_cast<WPARAM*>(wparam), *reinterpret_cast<LPARAM*>(lparam))) ? 0 : 1;
}