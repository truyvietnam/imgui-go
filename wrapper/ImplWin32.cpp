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
    WPARAM wp;
    if (wparam)
        wp = *reinterpret_cast<WPARAM*>(wparam);

    LPARAM lp;
    if (lparam)
        lp = *reinterpret_cast<LPARAM*>(lparam);

    return FAILED(ImGui_ImplWin32_WndProcHandler((HWND)hwnd, (UINT)msg, wp, lp) ? 0 : 1;
}