package s2sdk

/*
#include "debug.h"
#cgo noescape DebugBreak
#cgo noescape DebugDrawBox
#cgo noescape DebugDrawBoxDirection
#cgo noescape DebugDrawCircle
#cgo noescape DebugDrawClear
#cgo noescape DebugDrawLine
#cgo noescape DebugDrawLine_vCol
#cgo noescape DebugDrawScreenTextLine
#cgo noescape DebugDrawSphere
#cgo noescape DebugDrawText
#cgo noescape DebugScreenTextPretty
#cgo noescape DebugScriptAssert
*/
import "C"
import (
	"errors"
	"github.com/untrustedmodders/go-plugify"
	"reflect"
	"runtime"
	"unsafe"
)

var _ = errors.New("")
var _ = reflect.TypeOf(0)
var _ = runtime.GOOS
var _ = unsafe.Sizeof(0)
var _ = plugify.Plugin.Loaded

// Generated from s2sdk (group: debug)

// DebugBreak
//
//	@brief Triggers a breakpoint in the debugger.
func DebugBreak() {
	C.DebugBreak()
}

// DebugDrawBox
//
//	@brief Draws a debug overlay box.
//
//	@param center: Center of the box in world space.
//	@param mins: Minimum bounds relative to the center.
//	@param maxs: Maximum bounds relative to the center.
//	@param r: Red color value.
//	@param g: Green color value.
//	@param b: Blue color value.
//	@param a: Alpha (transparency) value.
//	@param duration: Duration (in seconds) to display the box.
func DebugDrawBox(center plugify.Vector3, mins plugify.Vector3, maxs plugify.Vector3, r int32, g int32, b int32, a int32, duration float32) {
	__center := *(*C.Vector3)(unsafe.Pointer(&center))
	__mins := *(*C.Vector3)(unsafe.Pointer(&mins))
	__maxs := *(*C.Vector3)(unsafe.Pointer(&maxs))
	__r := C.int32_t(r)
	__g := C.int32_t(g)
	__b := C.int32_t(b)
	__a := C.int32_t(a)
	__duration := C.float(duration)
	C.DebugDrawBox(&__center, &__mins, &__maxs, __r, __g, __b, __a, __duration)
}

// DebugDrawBoxDirection
//
//	@brief Draws a debug box oriented in the direction of a forward vector.
//
//	@param center: Center of the box.
//	@param mins: Minimum bounds.
//	@param maxs: Maximum bounds.
//	@param forward: Forward direction vector.
//	@param color: RGB color vector.
//	@param alpha: Alpha transparency.
//	@param duration: Duration (in seconds) to display the box.
func DebugDrawBoxDirection(center plugify.Vector3, mins plugify.Vector3, maxs plugify.Vector3, forward plugify.Vector3, color plugify.Vector3, alpha float32, duration float32) {
	__center := *(*C.Vector3)(unsafe.Pointer(&center))
	__mins := *(*C.Vector3)(unsafe.Pointer(&mins))
	__maxs := *(*C.Vector3)(unsafe.Pointer(&maxs))
	__forward := *(*C.Vector3)(unsafe.Pointer(&forward))
	__color := *(*C.Vector3)(unsafe.Pointer(&color))
	__alpha := C.float(alpha)
	__duration := C.float(duration)
	C.DebugDrawBoxDirection(&__center, &__mins, &__maxs, &__forward, &__color, __alpha, __duration)
}

// DebugDrawCircle
//
//	@brief Draws a debug circle.
//
//	@param center: Center of the circle.
//	@param color: RGB color vector.
//	@param alpha: Alpha transparency.
//	@param radius: Circle radius.
//	@param zTest: Whether to perform depth testing.
//	@param duration: Duration (in seconds) to display the circle.
func DebugDrawCircle(center plugify.Vector3, color plugify.Vector3, alpha float32, radius float32, zTest bool, duration float32) {
	__center := *(*C.Vector3)(unsafe.Pointer(&center))
	__color := *(*C.Vector3)(unsafe.Pointer(&color))
	__alpha := C.float(alpha)
	__radius := C.float(radius)
	__zTest := C.bool(zTest)
	__duration := C.float(duration)
	C.DebugDrawCircle(&__center, &__color, __alpha, __radius, __zTest, __duration)
}

// DebugDrawClear
//
//	@brief Clears all debug overlays.
func DebugDrawClear() {
	C.DebugDrawClear()
}

// DebugDrawLine
//
//	@brief Draws a debug overlay line.
//
//	@param origin: Start point of the line.
//	@param target: End point of the line.
//	@param r: Red color value.
//	@param g: Green color value.
//	@param b: Blue color value.
//	@param zTest: Whether to perform depth testing.
//	@param duration: Duration (in seconds) to display the line.
func DebugDrawLine(origin plugify.Vector3, target plugify.Vector3, r int32, g int32, b int32, zTest bool, duration float32) {
	__origin := *(*C.Vector3)(unsafe.Pointer(&origin))
	__target := *(*C.Vector3)(unsafe.Pointer(&target))
	__r := C.int32_t(r)
	__g := C.int32_t(g)
	__b := C.int32_t(b)
	__zTest := C.bool(zTest)
	__duration := C.float(duration)
	C.DebugDrawLine(&__origin, &__target, __r, __g, __b, __zTest, __duration)
}

// DebugDrawLine_vCol
//
//	@brief Draws a debug line using a color vector.
//
//	@param start: Start point of the line.
//	@param end: End point of the line.
//	@param color: RGB color vector.
//	@param zTest: Whether to perform depth testing.
//	@param duration: Duration (in seconds) to display the line.
func DebugDrawLine_vCol(start plugify.Vector3, end plugify.Vector3, color plugify.Vector3, zTest bool, duration float32) {
	__start := *(*C.Vector3)(unsafe.Pointer(&start))
	__end := *(*C.Vector3)(unsafe.Pointer(&end))
	__color := *(*C.Vector3)(unsafe.Pointer(&color))
	__zTest := C.bool(zTest)
	__duration := C.float(duration)
	C.DebugDrawLine_vCol(&__start, &__end, &__color, __zTest, __duration)
}

// DebugDrawScreenTextLine
//
//	@brief Draws text at a specified screen position with line offset.
//
//	@param x: X coordinate in screen space.
//	@param y: Y coordinate in screen space.
//	@param lineOffset: Line offset value.
//	@param text: The text string to display.
//	@param r: Red color value.
//	@param g: Green color value.
//	@param b: Blue color value.
//	@param a: Alpha transparency value.
//	@param duration: Duration (in seconds) to display the text.
func DebugDrawScreenTextLine(x float32, y float32, lineOffset int32, text string, r int32, g int32, b int32, a int32, duration float32) {
	__x := C.float(x)
	__y := C.float(y)
	__lineOffset := C.int32_t(lineOffset)
	__text := plugify.ConstructString(text)
	__r := C.int32_t(r)
	__g := C.int32_t(g)
	__b := C.int32_t(b)
	__a := C.int32_t(a)
	__duration := C.float(duration)
	plugify.Block{
		Try: func() {
			C.DebugDrawScreenTextLine(__x, __y, __lineOffset, (*C.String)(unsafe.Pointer(&__text)), __r, __g, __b, __a, __duration)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__text)
		},
	}.Do()
}

// DebugDrawSphere
//
//	@brief Draws a debug sphere.
//
//	@param center: Center of the sphere.
//	@param color: RGB color vector.
//	@param alpha: Alpha transparency.
//	@param radius: Radius of the sphere.
//	@param zTest: Whether to perform depth testing.
//	@param duration: Duration (in seconds) to display the sphere.
func DebugDrawSphere(center plugify.Vector3, color plugify.Vector3, alpha float32, radius float32, zTest bool, duration float32) {
	__center := *(*C.Vector3)(unsafe.Pointer(&center))
	__color := *(*C.Vector3)(unsafe.Pointer(&color))
	__alpha := C.float(alpha)
	__radius := C.float(radius)
	__zTest := C.bool(zTest)
	__duration := C.float(duration)
	C.DebugDrawSphere(&__center, &__color, __alpha, __radius, __zTest, __duration)
}

// DebugDrawText
//
//	@brief Draws text in 3D space.
//
//	@param origin: World-space position to draw the text at.
//	@param text: The text string to display.
//	@param viewCheck: If true, only draws when visible to camera.
//	@param duration: Duration (in seconds) to display the text.
func DebugDrawText(origin plugify.Vector3, text string, viewCheck bool, duration float32) {
	__origin := *(*C.Vector3)(unsafe.Pointer(&origin))
	__text := plugify.ConstructString(text)
	__viewCheck := C.bool(viewCheck)
	__duration := C.float(duration)
	plugify.Block{
		Try: func() {
			C.DebugDrawText(&__origin, (*C.String)(unsafe.Pointer(&__text)), __viewCheck, __duration)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__text)
		},
	}.Do()
}

// DebugScreenTextPretty
//
//	@brief Draws styled debug text on screen.
//
//	@param x: X coordinate.
//	@param y: Y coordinate.
//	@param lineOffset: Line offset value.
//	@param text: Text string.
//	@param r: Red color value.
//	@param g: Green color value.
//	@param b: Blue color value.
//	@param a: Alpha transparency.
//	@param duration: Duration (in seconds) to display the text.
//	@param font: Font name.
//	@param size: Font size.
//	@param bold: Whether text should be bold.
func DebugScreenTextPretty(x float32, y float32, lineOffset int32, text string, r int32, g int32, b int32, a int32, duration float32, font string, size int32, bold bool) {
	__x := C.float(x)
	__y := C.float(y)
	__lineOffset := C.int32_t(lineOffset)
	__text := plugify.ConstructString(text)
	__r := C.int32_t(r)
	__g := C.int32_t(g)
	__b := C.int32_t(b)
	__a := C.int32_t(a)
	__duration := C.float(duration)
	__font := plugify.ConstructString(font)
	__size := C.int32_t(size)
	__bold := C.bool(bold)
	plugify.Block{
		Try: func() {
			C.DebugScreenTextPretty(__x, __y, __lineOffset, (*C.String)(unsafe.Pointer(&__text)), __r, __g, __b, __a, __duration, (*C.String)(unsafe.Pointer(&__font)), __size, __bold)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__text)
			plugify.DestroyString(&__font)
		},
	}.Do()
}

// DebugScriptAssert
//
//	@brief Performs an assertion and logs a message if the assertion fails.
//
//	@param assertion: Boolean value to test.
//	@param message: Message to display if the assertion fails.
func DebugScriptAssert(assertion bool, message string) {
	__assertion := C.bool(assertion)
	__message := plugify.ConstructString(message)
	plugify.Block{
		Try: func() {
			C.DebugScriptAssert(__assertion, (*C.String)(unsafe.Pointer(&__message)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__message)
		},
	}.Do()
}
