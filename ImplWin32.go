package imgui

// #include "wrapper/ImplWin32.h"
import "C"
import "unsafe"

func Win32Init(hwnd unsafe.Pointer) bool {
	return C.iggWin32Init(hwnd) != 0
}

func Win32Shutdown() {
	C.iggWin32Shutdown()
}

func Win32NewFrame() {
	C.iggWin32NewFrame()
}

func Win32WndProcHandler(hwnd unsafe.Pointer, msg uint32, wParam, lParam unsafe.Pointer) bool {
	return C.iggWin32WndProcHandler(hwnd, C.uint(msg), wParam, lParam) != 0
}
