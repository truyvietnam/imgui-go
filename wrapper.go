package imgui

// #cgo CPPFLAGS: -I./imgui -DIMGUI_DISABLE_WIN32_DEFAULT_IME_FUNCTIONS
// #cgo CXXFLAGS: -std=c++11
// #cgo CXXFLAGS: -Wno-subobject-linkage
// #cgo CFLAGS: -I${SRCDIR}/lib -I.
// #cgo LDFLAGS: -L${SRCDIR}/lib/d3d11.a -L${SRCDIR}/lib/d3dcompiler.a -L${SRCDIR}/lib/dxgi.a -ld3dcompiler -ld3d11 -ldxgi -ldwmapi -lgdi32
import "C"

// Note: imgui_freetype.cpp compilation gives these warnings, hence it's disabled in CXXFLAGS
//
// In file included from wrapper.cpp:10:
// .\imgui/misc/freetype/imgui_freetype.cpp:294:8: warning: 'ImFontBuildSrcGlyphFT' has a field 'ImFontBuildSrcGlyphFT::Info' whose type uses the anonymous namespace [-Wsubobject-linkage]
//   294 | struct ImFontBuildSrcGlyphFT
//       |        ^~~~~~~~~~~~~~~~~~~~~
// .\imgui/misc/freetype/imgui_freetype.cpp:301:8: warning: 'ImFontBuildSrcDataFT' has a field 'ImFontBuildSrcDataFT::Font' whose type uses the anonymous namespace [-Wsubobject-linkage]
//   301 | struct ImFontBuildSrcDataFT
//       |        ^~~~~~~~~~~~~~~~~~~~
