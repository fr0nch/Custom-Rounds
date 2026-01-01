#pragma once

#include "shared.h"

extern Vector3 (*__s2sdk_GetEntityAttachmentAngles)(int32_t, int32_t);

static Vector3 GetEntityAttachmentAngles(int32_t entityHandle, int32_t attachmentIndex) {
	return __s2sdk_GetEntityAttachmentAngles(entityHandle, attachmentIndex);
}

extern Vector3 (*__s2sdk_GetEntityAttachmentForward)(int32_t, int32_t);

static Vector3 GetEntityAttachmentForward(int32_t entityHandle, int32_t attachmentIndex) {
	return __s2sdk_GetEntityAttachmentForward(entityHandle, attachmentIndex);
}

extern Vector3 (*__s2sdk_GetEntityAttachmentOrigin)(int32_t, int32_t);

static Vector3 GetEntityAttachmentOrigin(int32_t entityHandle, int32_t attachmentIndex) {
	return __s2sdk_GetEntityAttachmentOrigin(entityHandle, attachmentIndex);
}

extern uint32_t (*__s2sdk_GetEntityMaterialGroupHash)(int32_t);

static uint32_t GetEntityMaterialGroupHash(int32_t entityHandle) {
	return __s2sdk_GetEntityMaterialGroupHash(entityHandle);
}

extern uint64_t (*__s2sdk_GetEntityMaterialGroupMask)(int32_t);

static uint64_t GetEntityMaterialGroupMask(int32_t entityHandle) {
	return __s2sdk_GetEntityMaterialGroupMask(entityHandle);
}

extern float (*__s2sdk_GetEntityModelScale)(int32_t);

static float GetEntityModelScale(int32_t entityHandle) {
	return __s2sdk_GetEntityModelScale(entityHandle);
}

extern int32_t (*__s2sdk_GetEntityRenderAlpha)(int32_t);

static int32_t GetEntityRenderAlpha(int32_t entityHandle) {
	return __s2sdk_GetEntityRenderAlpha(entityHandle);
}

extern Vector3 (*__s2sdk_GetEntityRenderColor2)(int32_t);

static Vector3 GetEntityRenderColor2(int32_t entityHandle) {
	return __s2sdk_GetEntityRenderColor2(entityHandle);
}

extern int32_t (*__s2sdk_ScriptLookupAttachment)(int32_t, String*);

static int32_t ScriptLookupAttachment(int32_t entityHandle, String* attachmentName) {
	return __s2sdk_ScriptLookupAttachment(entityHandle, attachmentName);
}

extern void (*__s2sdk_SetEntityBodygroup)(int32_t, int32_t, int32_t);

static void SetEntityBodygroup(int32_t entityHandle, int32_t group, int32_t value) {
	__s2sdk_SetEntityBodygroup(entityHandle, group, value);
}

extern void (*__s2sdk_SetEntityBodygroupByName)(int32_t, String*, int32_t);

static void SetEntityBodygroupByName(int32_t entityHandle, String* name, int32_t value) {
	__s2sdk_SetEntityBodygroupByName(entityHandle, name, value);
}

extern void (*__s2sdk_SetEntityLightGroup)(int32_t, String*);

static void SetEntityLightGroup(int32_t entityHandle, String* lightGroup) {
	__s2sdk_SetEntityLightGroup(entityHandle, lightGroup);
}

extern void (*__s2sdk_SetEntityMaterialGroup)(int32_t, String*);

static void SetEntityMaterialGroup(int32_t entityHandle, String* materialGroup) {
	__s2sdk_SetEntityMaterialGroup(entityHandle, materialGroup);
}

extern void (*__s2sdk_SetEntityMaterialGroupHash)(int32_t, uint32_t);

static void SetEntityMaterialGroupHash(int32_t entityHandle, uint32_t hash) {
	__s2sdk_SetEntityMaterialGroupHash(entityHandle, hash);
}

extern void (*__s2sdk_SetEntityMaterialGroupMask)(int32_t, uint64_t);

static void SetEntityMaterialGroupMask(int32_t entityHandle, uint64_t mask) {
	__s2sdk_SetEntityMaterialGroupMask(entityHandle, mask);
}

extern void (*__s2sdk_SetEntityModelScale)(int32_t, float);

static void SetEntityModelScale(int32_t entityHandle, float scale) {
	__s2sdk_SetEntityModelScale(entityHandle, scale);
}

extern void (*__s2sdk_SetEntityRenderAlpha)(int32_t, int32_t);

static void SetEntityRenderAlpha(int32_t entityHandle, int32_t alpha) {
	__s2sdk_SetEntityRenderAlpha(entityHandle, alpha);
}

extern void (*__s2sdk_SetEntityRenderColor2)(int32_t, int32_t, int32_t, int32_t);

static void SetEntityRenderColor2(int32_t entityHandle, int32_t r, int32_t g, int32_t b) {
	__s2sdk_SetEntityRenderColor2(entityHandle, r, g, b);
}

extern void (*__s2sdk_SetEntityRenderMode2)(int32_t, int32_t);

static void SetEntityRenderMode2(int32_t entityHandle, int32_t mode) {
	__s2sdk_SetEntityRenderMode2(entityHandle, mode);
}

extern void (*__s2sdk_SetEntitySingleMeshGroup)(int32_t, String*);

static void SetEntitySingleMeshGroup(int32_t entityHandle, String* meshGroupName) {
	__s2sdk_SetEntitySingleMeshGroup(entityHandle, meshGroupName);
}

extern void (*__s2sdk_SetEntitySize)(int32_t, Vector3*, Vector3*);

static void SetEntitySize(int32_t entityHandle, Vector3* mins, Vector3* maxs) {
	__s2sdk_SetEntitySize(entityHandle, mins, maxs);
}

extern void (*__s2sdk_SetEntitySkin)(int32_t, int32_t);

static void SetEntitySkin(int32_t entityHandle, int32_t skin) {
	__s2sdk_SetEntitySkin(entityHandle, skin);
}

