package s2sdk

/*
#include "models.h"
#cgo noescape GetEntityAttachmentAngles
#cgo noescape GetEntityAttachmentForward
#cgo noescape GetEntityAttachmentOrigin
#cgo noescape GetEntityMaterialGroupHash
#cgo noescape GetEntityMaterialGroupMask
#cgo noescape GetEntityModelScale
#cgo noescape GetEntityRenderAlpha
#cgo noescape GetEntityRenderColor2
#cgo noescape ScriptLookupAttachment
#cgo noescape SetEntityBodygroup
#cgo noescape SetEntityBodygroupByName
#cgo noescape SetEntityLightGroup
#cgo noescape SetEntityMaterialGroup
#cgo noescape SetEntityMaterialGroupHash
#cgo noescape SetEntityMaterialGroupMask
#cgo noescape SetEntityModelScale
#cgo noescape SetEntityRenderAlpha
#cgo noescape SetEntityRenderColor2
#cgo noescape SetEntityRenderMode2
#cgo noescape SetEntitySingleMeshGroup
#cgo noescape SetEntitySize
#cgo noescape SetEntitySkin
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

// Generated from s2sdk (group: models)

// GetEntityAttachmentAngles
//
//	@brief Retrieves the attachment angles of an entity.
//
//	@param entityHandle: The handle of the entity whose attachment angles are to be retrieved.
//	@param attachmentIndex: The attachment index.
//
//	@return A vector representing the attachment angles (pitch, yaw, roll).
func GetEntityAttachmentAngles(entityHandle int32, attachmentIndex int32) plugify.Vector3 {
	var __retVal plugify.Vector3
	__entityHandle := C.int32_t(entityHandle)
	__attachmentIndex := C.int32_t(attachmentIndex)
	__native := C.GetEntityAttachmentAngles(__entityHandle, __attachmentIndex)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// GetEntityAttachmentForward
//
//	@brief Retrieves the forward vector of an entity's attachment.
//
//	@param entityHandle: The handle of the entity whose attachment forward vector is to be retrieved.
//	@param attachmentIndex: The attachment index.
//
//	@return A vector representing the forward direction of the attachment.
func GetEntityAttachmentForward(entityHandle int32, attachmentIndex int32) plugify.Vector3 {
	var __retVal plugify.Vector3
	__entityHandle := C.int32_t(entityHandle)
	__attachmentIndex := C.int32_t(attachmentIndex)
	__native := C.GetEntityAttachmentForward(__entityHandle, __attachmentIndex)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// GetEntityAttachmentOrigin
//
//	@brief Retrieves the origin vector of an entity's attachment.
//
//	@param entityHandle: The handle of the entity whose attachment origin is to be retrieved.
//	@param attachmentIndex: The attachment index.
//
//	@return A vector representing the origin of the attachment.
func GetEntityAttachmentOrigin(entityHandle int32, attachmentIndex int32) plugify.Vector3 {
	var __retVal plugify.Vector3
	__entityHandle := C.int32_t(entityHandle)
	__attachmentIndex := C.int32_t(attachmentIndex)
	__native := C.GetEntityAttachmentOrigin(__entityHandle, __attachmentIndex)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// GetEntityMaterialGroupHash
//
//	@brief Retrieves the material group hash of an entity.
//
//	@param entityHandle: The handle of the entity.
//
//	@return The material group hash.
func GetEntityMaterialGroupHash(entityHandle int32) uint32 {
	var __retVal uint32
	__entityHandle := C.int32_t(entityHandle)
	__retVal = uint32(C.GetEntityMaterialGroupHash(__entityHandle))
	return __retVal
}

// GetEntityMaterialGroupMask
//
//	@brief Retrieves the material group mask of an entity.
//
//	@param entityHandle: The handle of the entity.
//
//	@return The mesh group mask.
func GetEntityMaterialGroupMask(entityHandle int32) uint64 {
	var __retVal uint64
	__entityHandle := C.int32_t(entityHandle)
	__retVal = uint64(C.GetEntityMaterialGroupMask(__entityHandle))
	return __retVal
}

// GetEntityModelScale
//
//	@brief Retrieves the model scale of an entity.
//
//	@param entityHandle: The handle of the entity.
//
//	@return The model scale factor.
func GetEntityModelScale(entityHandle int32) float32 {
	var __retVal float32
	__entityHandle := C.int32_t(entityHandle)
	__retVal = float32(C.GetEntityModelScale(__entityHandle))
	return __retVal
}

// GetEntityRenderAlpha
//
//	@brief Retrieves the render alpha of an entity.
//
//	@param entityHandle: The handle of the entity.
//
//	@return The alpha modulation value.
func GetEntityRenderAlpha(entityHandle int32) int32 {
	var __retVal int32
	__entityHandle := C.int32_t(entityHandle)
	__retVal = int32(C.GetEntityRenderAlpha(__entityHandle))
	return __retVal
}

// GetEntityRenderColor2
//
//	@brief Retrieves the render color of an entity.
//
//	@param entityHandle: The handle of the entity.
//
//	@return A vector representing the render color (R, G, B).
func GetEntityRenderColor2(entityHandle int32) plugify.Vector3 {
	var __retVal plugify.Vector3
	__entityHandle := C.int32_t(entityHandle)
	__native := C.GetEntityRenderColor2(__entityHandle)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// ScriptLookupAttachment
//
//	@brief Retrieves an attachment index by name.
//
//	@param entityHandle: The handle of the entity.
//	@param attachmentName: The name of the attachment.
//
//	@return The attachment index, or -1 if not found.
func ScriptLookupAttachment(entityHandle int32, attachmentName string) int32 {
	var __retVal int32
	__entityHandle := C.int32_t(entityHandle)
	__attachmentName := plugify.ConstructString(attachmentName)
	plugify.Block{
		Try: func() {
			__retVal = int32(C.ScriptLookupAttachment(__entityHandle, (*C.String)(unsafe.Pointer(&__attachmentName))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__attachmentName)
		},
	}.Do()
	return __retVal
}

// SetEntityBodygroup
//
//	@brief Sets a bodygroup value by index.
//
//	@param entityHandle: The handle of the entity.
//	@param group: The bodygroup index.
//	@param value: The new value to set for the bodygroup.
func SetEntityBodygroup(entityHandle int32, group int32, value int32) {
	__entityHandle := C.int32_t(entityHandle)
	__group := C.int32_t(group)
	__value := C.int32_t(value)
	C.SetEntityBodygroup(__entityHandle, __group, __value)
}

// SetEntityBodygroupByName
//
//	@brief Sets a bodygroup value by name.
//
//	@param entityHandle: The handle of the entity.
//	@param name: The bodygroup name.
//	@param value: The new value to set for the bodygroup.
func SetEntityBodygroupByName(entityHandle int32, name string, value int32) {
	__entityHandle := C.int32_t(entityHandle)
	__name := plugify.ConstructString(name)
	__value := C.int32_t(value)
	plugify.Block{
		Try: func() {
			C.SetEntityBodygroupByName(__entityHandle, (*C.String)(unsafe.Pointer(&__name)), __value)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
}

// SetEntityLightGroup
//
//	@brief Sets the light group of an entity.
//
//	@param entityHandle: The handle of the entity.
//	@param lightGroup: The light group name.
func SetEntityLightGroup(entityHandle int32, lightGroup string) {
	__entityHandle := C.int32_t(entityHandle)
	__lightGroup := plugify.ConstructString(lightGroup)
	plugify.Block{
		Try: func() {
			C.SetEntityLightGroup(__entityHandle, (*C.String)(unsafe.Pointer(&__lightGroup)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__lightGroup)
		},
	}.Do()
}

// SetEntityMaterialGroup
//
//	@brief Sets the material group of an entity.
//
//	@param entityHandle: The handle of the entity.
//	@param materialGroup: The material group name.
func SetEntityMaterialGroup(entityHandle int32, materialGroup string) {
	__entityHandle := C.int32_t(entityHandle)
	__materialGroup := plugify.ConstructString(materialGroup)
	plugify.Block{
		Try: func() {
			C.SetEntityMaterialGroup(__entityHandle, (*C.String)(unsafe.Pointer(&__materialGroup)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__materialGroup)
		},
	}.Do()
}

// SetEntityMaterialGroupHash
//
//	@brief Sets the material group hash of an entity.
//
//	@param entityHandle: The handle of the entity.
//	@param hash: The new material group hash to set.
func SetEntityMaterialGroupHash(entityHandle int32, hash uint32) {
	__entityHandle := C.int32_t(entityHandle)
	__hash := C.uint32_t(hash)
	C.SetEntityMaterialGroupHash(__entityHandle, __hash)
}

// SetEntityMaterialGroupMask
//
//	@brief Sets the material group mask of an entity.
//
//	@param entityHandle: The handle of the entity.
//	@param mask: The new mesh group mask to set.
func SetEntityMaterialGroupMask(entityHandle int32, mask uint64) {
	__entityHandle := C.int32_t(entityHandle)
	__mask := C.uint64_t(mask)
	C.SetEntityMaterialGroupMask(__entityHandle, __mask)
}

// SetEntityModelScale
//
//	@brief Sets the model scale of an entity.
//
//	@param entityHandle: The handle of the entity.
//	@param scale: The new scale factor.
func SetEntityModelScale(entityHandle int32, scale float32) {
	__entityHandle := C.int32_t(entityHandle)
	__scale := C.float(scale)
	C.SetEntityModelScale(__entityHandle, __scale)
}

// SetEntityRenderAlpha
//
//	@brief Sets the render alpha of an entity.
//
//	@param entityHandle: The handle of the entity.
//	@param alpha: The new alpha value (0â€“255).
func SetEntityRenderAlpha(entityHandle int32, alpha int32) {
	__entityHandle := C.int32_t(entityHandle)
	__alpha := C.int32_t(alpha)
	C.SetEntityRenderAlpha(__entityHandle, __alpha)
}

// SetEntityRenderColor2
//
//	@brief Sets the render color of an entity.
//
//	@param entityHandle: The handle of the entity.
//	@param r: The red component (0â€“255).
//	@param g: The green component (0â€“255).
//	@param b: The blue component (0â€“255).
func SetEntityRenderColor2(entityHandle int32, r int32, g int32, b int32) {
	__entityHandle := C.int32_t(entityHandle)
	__r := C.int32_t(r)
	__g := C.int32_t(g)
	__b := C.int32_t(b)
	C.SetEntityRenderColor2(__entityHandle, __r, __g, __b)
}

// SetEntityRenderMode2
//
//	@brief Sets the render mode of an entity.
//
//	@param entityHandle: The handle of the entity.
//	@param mode: The new render mode value.
func SetEntityRenderMode2(entityHandle int32, mode int32) {
	__entityHandle := C.int32_t(entityHandle)
	__mode := C.int32_t(mode)
	C.SetEntityRenderMode2(__entityHandle, __mode)
}

// SetEntitySingleMeshGroup
//
//	@brief Sets a single mesh group for an entity.
//
//	@param entityHandle: The handle of the entity.
//	@param meshGroupName: The name of the mesh group.
func SetEntitySingleMeshGroup(entityHandle int32, meshGroupName string) {
	__entityHandle := C.int32_t(entityHandle)
	__meshGroupName := plugify.ConstructString(meshGroupName)
	plugify.Block{
		Try: func() {
			C.SetEntitySingleMeshGroup(__entityHandle, (*C.String)(unsafe.Pointer(&__meshGroupName)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__meshGroupName)
		},
	}.Do()
}

// SetEntitySize
//
//	@brief Sets the size (bounding box) of an entity.
//
//	@param entityHandle: The handle of the entity.
//	@param mins: The minimum bounding box vector.
//	@param maxs: The maximum bounding box vector.
func SetEntitySize(entityHandle int32, mins plugify.Vector3, maxs plugify.Vector3) {
	__entityHandle := C.int32_t(entityHandle)
	__mins := *(*C.Vector3)(unsafe.Pointer(&mins))
	__maxs := *(*C.Vector3)(unsafe.Pointer(&maxs))
	C.SetEntitySize(__entityHandle, &__mins, &__maxs)
}

// SetEntitySkin
//
//	@brief Sets the skin of an entity.
//
//	@param entityHandle: The handle of the entity.
//	@param skin: The new skin index.
func SetEntitySkin(entityHandle int32, skin int32) {
	__entityHandle := C.int32_t(entityHandle)
	__skin := C.int32_t(skin)
	C.SetEntitySkin(__entityHandle, __skin)
}
