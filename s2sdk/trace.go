package s2sdk

/*
#include "trace.h"
#cgo noescape TraceCollideable
#cgo noescape TraceCollideable2
#cgo noescape TraceHull
#cgo noescape TraceLine
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

// Generated from s2sdk (group: trace)

// TraceCollideable
//
//	@brief Performs a collideable trace using the VScript-compatible table call, exposing it through C++ exports.
//
//	@param start: Trace start position (world space)
//	@param end: Trace end position (world space)
//	@param entityHandle: Entity handle of the collideable
//	@param outPos: Output: position of impact
//	@param outFraction: Output: fraction of trace completed
//	@param outHit: Output: whether a hit occurred
//	@param outStartSolid: Output: whether trace started inside solid
//	@param outNormal: Output: surface normal at impact
//
//	@return True if trace hit something, false otherwise
func TraceCollideable(start plugify.Vector3, end plugify.Vector3, entityHandle int32, outPos *plugify.Vector3, outFraction *float64, outHit *bool, outStartSolid *bool, outNormal *plugify.Vector3) bool {
	var __retVal bool
	__start := *(*C.Vector3)(unsafe.Pointer(&start))
	__end := *(*C.Vector3)(unsafe.Pointer(&end))
	__entityHandle := C.int32_t(entityHandle)
	__outPos := *(*C.Vector3)(unsafe.Pointer(outPos))
	__outFraction := C.double(*outFraction)
	__outHit := C.bool(*outHit)
	__outStartSolid := C.bool(*outStartSolid)
	__outNormal := *(*C.Vector3)(unsafe.Pointer(outNormal))
	__retVal = bool(C.TraceCollideable(&__start, &__end, __entityHandle, &__outPos, &__outFraction, &__outHit, &__outStartSolid, &__outNormal))
	// Unmarshal - Convert native data to managed data.
	*outPos = *(*plugify.Vector3)(unsafe.Pointer(&__outPos))
	*outFraction = float64(__outFraction)
	*outHit = bool(__outHit)
	*outStartSolid = bool(__outStartSolid)
	*outNormal = *(*plugify.Vector3)(unsafe.Pointer(&__outNormal))
	return __retVal
}

// TraceCollideable2
//
//	@brief Performs a collideable trace using the VScript-compatible table call, exposing it through C++ exports.
//
//	@param start: Trace start position (world space)
//	@param end: Trace end position (world space)
//	@param entityHandle: Entity handle of the collideable
//	@param mins: Bounding box minimums
//	@param maxs: Bounding box maximums
//	@param outPos: Output: position of impact
//	@param outFraction: Output: fraction of trace completed
//	@param outHit: Output: whether a hit occurred
//	@param outStartSolid: Output: whether trace started inside solid
//	@param outNormal: Output: surface normal at impact
//
//	@return True if trace hit something, false otherwise
func TraceCollideable2(start plugify.Vector3, end plugify.Vector3, entityHandle int32, mins uintptr, maxs uintptr, outPos *plugify.Vector3, outFraction *float64, outHit *bool, outStartSolid *bool, outNormal *plugify.Vector3) bool {
	var __retVal bool
	__start := *(*C.Vector3)(unsafe.Pointer(&start))
	__end := *(*C.Vector3)(unsafe.Pointer(&end))
	__entityHandle := C.int32_t(entityHandle)
	__mins := C.uintptr_t(mins)
	__maxs := C.uintptr_t(maxs)
	__outPos := *(*C.Vector3)(unsafe.Pointer(outPos))
	__outFraction := C.double(*outFraction)
	__outHit := C.bool(*outHit)
	__outStartSolid := C.bool(*outStartSolid)
	__outNormal := *(*C.Vector3)(unsafe.Pointer(outNormal))
	__retVal = bool(C.TraceCollideable2(&__start, &__end, __entityHandle, __mins, __maxs, &__outPos, &__outFraction, &__outHit, &__outStartSolid, &__outNormal))
	// Unmarshal - Convert native data to managed data.
	*outPos = *(*plugify.Vector3)(unsafe.Pointer(&__outPos))
	*outFraction = float64(__outFraction)
	*outHit = bool(__outHit)
	*outStartSolid = bool(__outStartSolid)
	*outNormal = *(*plugify.Vector3)(unsafe.Pointer(&__outNormal))
	return __retVal
}

// TraceHull
//
//	@brief Performs a hull trace with specified dimensions and mask.
//
//	@param start: Trace start position
//	@param end: Trace end position
//	@param min: Local bounding box minimums
//	@param max: Local bounding box maximums
//	@param mask: Trace mask
//	@param ignoreHandle: Entity handle to ignore during trace
//	@param outPos: Output: position of impact
//	@param outFraction: Output: fraction of trace completed
//	@param outHit: Output: whether a hit occurred
//	@param outEntHit: Output: handle of entity hit
//	@param outStartSolid: Output: whether trace started inside solid
//
//	@return True if trace hit something, false otherwise
func TraceHull(start plugify.Vector3, end plugify.Vector3, min plugify.Vector3, max plugify.Vector3, mask int32, ignoreHandle int32, outPos *plugify.Vector3, outFraction *float64, outHit *bool, outEntHit *int32, outStartSolid *bool) bool {
	var __retVal bool
	__start := *(*C.Vector3)(unsafe.Pointer(&start))
	__end := *(*C.Vector3)(unsafe.Pointer(&end))
	__min := *(*C.Vector3)(unsafe.Pointer(&min))
	__max := *(*C.Vector3)(unsafe.Pointer(&max))
	__mask := C.int32_t(mask)
	__ignoreHandle := C.int32_t(ignoreHandle)
	__outPos := *(*C.Vector3)(unsafe.Pointer(outPos))
	__outFraction := C.double(*outFraction)
	__outHit := C.bool(*outHit)
	__outEntHit := C.int32_t(*outEntHit)
	__outStartSolid := C.bool(*outStartSolid)
	__retVal = bool(C.TraceHull(&__start, &__end, &__min, &__max, __mask, __ignoreHandle, &__outPos, &__outFraction, &__outHit, &__outEntHit, &__outStartSolid))
	// Unmarshal - Convert native data to managed data.
	*outPos = *(*plugify.Vector3)(unsafe.Pointer(&__outPos))
	*outFraction = float64(__outFraction)
	*outHit = bool(__outHit)
	*outEntHit = int32(__outEntHit)
	*outStartSolid = bool(__outStartSolid)
	return __retVal
}

// TraceLine
//
//	@brief Performs a line trace between two points.
//
//	@param startPos: Trace start position
//	@param endPos: Trace end position
//	@param mask: Trace mask
//	@param ignoreHandle: Entity handle to ignore during trace
//	@param outPos: Output: position of impact
//	@param outFraction: Output: fraction of trace completed
//	@param outHit: Output: whether a hit occurred
//	@param outEntHit: Output: handle of entity hit
//	@param outStartSolid: Output: whether trace started inside solid
//
//	@return True if trace hit something, false otherwise
func TraceLine(startPos plugify.Vector3, endPos plugify.Vector3, mask int32, ignoreHandle int32, outPos *plugify.Vector3, outFraction *float64, outHit *bool, outEntHit *int32, outStartSolid *bool) bool {
	var __retVal bool
	__startPos := *(*C.Vector3)(unsafe.Pointer(&startPos))
	__endPos := *(*C.Vector3)(unsafe.Pointer(&endPos))
	__mask := C.int32_t(mask)
	__ignoreHandle := C.int32_t(ignoreHandle)
	__outPos := *(*C.Vector3)(unsafe.Pointer(outPos))
	__outFraction := C.double(*outFraction)
	__outHit := C.bool(*outHit)
	__outEntHit := C.int32_t(*outEntHit)
	__outStartSolid := C.bool(*outStartSolid)
	__retVal = bool(C.TraceLine(&__startPos, &__endPos, __mask, __ignoreHandle, &__outPos, &__outFraction, &__outHit, &__outEntHit, &__outStartSolid))
	// Unmarshal - Convert native data to managed data.
	*outPos = *(*plugify.Vector3)(unsafe.Pointer(&__outPos))
	*outFraction = float64(__outFraction)
	*outHit = bool(__outHit)
	*outEntHit = int32(__outEntHit)
	*outStartSolid = bool(__outStartSolid)
	return __retVal
}
