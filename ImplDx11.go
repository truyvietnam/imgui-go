package imgui

// #include "wrapper/ImplDx11.h"
import "C"
import "unsafe"

func Dx11Init(device, device_context unsafe.Pointer) bool {
	return C.iggDx11Init(device, device_context) != 0
}
func Dx11Shutdown() {
	C.iggDx11Shutdown()
}
func Dx11NewFrame() {
	C.iggDx11NewFrame()
}
func Dx11RenderDrawData(draw_data DrawData) {
	C.iggDx11RenderDrawData(draw_data.handle())
}
