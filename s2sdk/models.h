#pragma once

#include "s2sdk.h"

static Vector3 GetEntityAttachmentAngles(int32_t entityHandle, int32_t attachmentIndex) {
	typedef Vector3 (*GetEntityAttachmentAnglesFn)(int32_t, int32_t);
	static GetEntityAttachmentAnglesFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityAttachmentAngles", (void**)&__func);
	return __func(entityHandle, attachmentIndex);
}

static Vector3 GetEntityAttachmentForward(int32_t entityHandle, int32_t attachmentIndex) {
	typedef Vector3 (*GetEntityAttachmentForwardFn)(int32_t, int32_t);
	static GetEntityAttachmentForwardFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityAttachmentForward", (void**)&__func);
	return __func(entityHandle, attachmentIndex);
}

static Vector3 GetEntityAttachmentOrigin(int32_t entityHandle, int32_t attachmentIndex) {
	typedef Vector3 (*GetEntityAttachmentOriginFn)(int32_t, int32_t);
	static GetEntityAttachmentOriginFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityAttachmentOrigin", (void**)&__func);
	return __func(entityHandle, attachmentIndex);
}

static uint32_t GetEntityMaterialGroupHash(int32_t entityHandle) {
	typedef uint32_t (*GetEntityMaterialGroupHashFn)(int32_t);
	static GetEntityMaterialGroupHashFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityMaterialGroupHash", (void**)&__func);
	return __func(entityHandle);
}

static uint64_t GetEntityMaterialGroupMask(int32_t entityHandle) {
	typedef uint64_t (*GetEntityMaterialGroupMaskFn)(int32_t);
	static GetEntityMaterialGroupMaskFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityMaterialGroupMask", (void**)&__func);
	return __func(entityHandle);
}

static float GetEntityModelScale(int32_t entityHandle) {
	typedef float (*GetEntityModelScaleFn)(int32_t);
	static GetEntityModelScaleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityModelScale", (void**)&__func);
	return __func(entityHandle);
}

static int32_t GetEntityRenderAlpha(int32_t entityHandle) {
	typedef int32_t (*GetEntityRenderAlphaFn)(int32_t);
	static GetEntityRenderAlphaFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityRenderAlpha", (void**)&__func);
	return __func(entityHandle);
}

static Vector3 GetEntityRenderColor2(int32_t entityHandle) {
	typedef Vector3 (*GetEntityRenderColor2Fn)(int32_t);
	static GetEntityRenderColor2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityRenderColor2", (void**)&__func);
	return __func(entityHandle);
}

static int32_t ScriptLookupAttachment(int32_t entityHandle, String* attachmentName) {
	typedef int32_t (*ScriptLookupAttachmentFn)(int32_t, String*);
	static ScriptLookupAttachmentFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.ScriptLookupAttachment", (void**)&__func);
	return __func(entityHandle, attachmentName);
}

static void SetEntityBodygroup(int32_t entityHandle, int32_t group, int32_t value) {
	typedef void (*SetEntityBodygroupFn)(int32_t, int32_t, int32_t);
	static SetEntityBodygroupFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityBodygroup", (void**)&__func);
	__func(entityHandle, group, value);
}

static void SetEntityBodygroupByName(int32_t entityHandle, String* name, int32_t value) {
	typedef void (*SetEntityBodygroupByNameFn)(int32_t, String*, int32_t);
	static SetEntityBodygroupByNameFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityBodygroupByName", (void**)&__func);
	__func(entityHandle, name, value);
}

static void SetEntityLightGroup(int32_t entityHandle, String* lightGroup) {
	typedef void (*SetEntityLightGroupFn)(int32_t, String*);
	static SetEntityLightGroupFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityLightGroup", (void**)&__func);
	__func(entityHandle, lightGroup);
}

static void SetEntityMaterialGroup(int32_t entityHandle, String* materialGroup) {
	typedef void (*SetEntityMaterialGroupFn)(int32_t, String*);
	static SetEntityMaterialGroupFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityMaterialGroup", (void**)&__func);
	__func(entityHandle, materialGroup);
}

static void SetEntityMaterialGroupHash(int32_t entityHandle, uint32_t hash) {
	typedef void (*SetEntityMaterialGroupHashFn)(int32_t, uint32_t);
	static SetEntityMaterialGroupHashFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityMaterialGroupHash", (void**)&__func);
	__func(entityHandle, hash);
}

static void SetEntityMaterialGroupMask(int32_t entityHandle, uint64_t mask) {
	typedef void (*SetEntityMaterialGroupMaskFn)(int32_t, uint64_t);
	static SetEntityMaterialGroupMaskFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityMaterialGroupMask", (void**)&__func);
	__func(entityHandle, mask);
}

static void SetEntityModelScale(int32_t entityHandle, float scale) {
	typedef void (*SetEntityModelScaleFn)(int32_t, float);
	static SetEntityModelScaleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityModelScale", (void**)&__func);
	__func(entityHandle, scale);
}

static void SetEntityRenderAlpha(int32_t entityHandle, int32_t alpha) {
	typedef void (*SetEntityRenderAlphaFn)(int32_t, int32_t);
	static SetEntityRenderAlphaFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityRenderAlpha", (void**)&__func);
	__func(entityHandle, alpha);
}

static void SetEntityRenderColor2(int32_t entityHandle, int32_t r, int32_t g, int32_t b) {
	typedef void (*SetEntityRenderColor2Fn)(int32_t, int32_t, int32_t, int32_t);
	static SetEntityRenderColor2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityRenderColor2", (void**)&__func);
	__func(entityHandle, r, g, b);
}

static void SetEntityRenderMode2(int32_t entityHandle, int32_t mode) {
	typedef void (*SetEntityRenderMode2Fn)(int32_t, int32_t);
	static SetEntityRenderMode2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityRenderMode2", (void**)&__func);
	__func(entityHandle, mode);
}

static void SetEntitySingleMeshGroup(int32_t entityHandle, String* meshGroupName) {
	typedef void (*SetEntitySingleMeshGroupFn)(int32_t, String*);
	static SetEntitySingleMeshGroupFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntitySingleMeshGroup", (void**)&__func);
	__func(entityHandle, meshGroupName);
}

static void SetEntitySize(int32_t entityHandle, Vector3* mins, Vector3* maxs) {
	typedef void (*SetEntitySizeFn)(int32_t, Vector3*, Vector3*);
	static SetEntitySizeFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntitySize", (void**)&__func);
	__func(entityHandle, mins, maxs);
}

static void SetEntitySkin(int32_t entityHandle, int32_t skin) {
	typedef void (*SetEntitySkinFn)(int32_t, int32_t);
	static SetEntitySkinFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntitySkin", (void**)&__func);
	__func(entityHandle, skin);
}

