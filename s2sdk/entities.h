#pragma once

#include "s2sdk.h"

static uintptr_t EntIndexToEntPointer(int32_t entityIndex) {
	typedef uintptr_t (*EntIndexToEntPointerFn)(int32_t);
	static EntIndexToEntPointerFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.EntIndexToEntPointer", (void**)&__func);
	return __func(entityIndex);
}

static int32_t EntPointerToEntIndex(uintptr_t entity) {
	typedef int32_t (*EntPointerToEntIndexFn)(uintptr_t);
	static EntPointerToEntIndexFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.EntPointerToEntIndex", (void**)&__func);
	return __func(entity);
}

static int32_t EntPointerToEntHandle(uintptr_t entity) {
	typedef int32_t (*EntPointerToEntHandleFn)(uintptr_t);
	static EntPointerToEntHandleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.EntPointerToEntHandle", (void**)&__func);
	return __func(entity);
}

static uintptr_t EntHandleToEntPointer(int32_t entityHandle) {
	typedef uintptr_t (*EntHandleToEntPointerFn)(int32_t);
	static EntHandleToEntPointerFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.EntHandleToEntPointer", (void**)&__func);
	return __func(entityHandle);
}

static int32_t EntIndexToEntHandle(int32_t entityIndex) {
	typedef int32_t (*EntIndexToEntHandleFn)(int32_t);
	static EntIndexToEntHandleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.EntIndexToEntHandle", (void**)&__func);
	return __func(entityIndex);
}

static int32_t EntHandleToEntIndex(int32_t entityHandle) {
	typedef int32_t (*EntHandleToEntIndexFn)(int32_t);
	static EntHandleToEntIndexFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.EntHandleToEntIndex", (void**)&__func);
	return __func(entityHandle);
}

static bool IsValidEntHandle(int32_t entityHandle) {
	typedef bool (*IsValidEntHandleFn)(int32_t);
	static IsValidEntHandleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.IsValidEntHandle", (void**)&__func);
	return __func(entityHandle);
}

static bool IsValidEntPointer(uintptr_t entity) {
	typedef bool (*IsValidEntPointerFn)(uintptr_t);
	static IsValidEntPointerFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.IsValidEntPointer", (void**)&__func);
	return __func(entity);
}

static uintptr_t GetFirstActiveEntity() {
	typedef uintptr_t (*GetFirstActiveEntityFn)();
	static GetFirstActiveEntityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetFirstActiveEntity", (void**)&__func);
	return __func();
}

static uintptr_t GetConcreteEntityListPointer() {
	typedef uintptr_t (*GetConcreteEntityListPointerFn)();
	static GetConcreteEntityListPointerFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetConcreteEntityListPointer", (void**)&__func);
	return __func();
}

static bool HookEntityOutput(String* classname, String* output, void* callback, uint8_t type) {
	typedef bool (*HookEntityOutputFn)(String*, String*, void*, uint8_t);
	static HookEntityOutputFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.HookEntityOutput", (void**)&__func);
	return __func(classname, output, callback, type);
}

static bool UnhookEntityOutput(String* classname, String* output, void* callback, uint8_t type) {
	typedef bool (*UnhookEntityOutputFn)(String*, String*, void*, uint8_t);
	static UnhookEntityOutputFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.UnhookEntityOutput", (void**)&__func);
	return __func(classname, output, callback, type);
}

static int32_t FindEntityByClassnameWithin(int32_t startFrom, String* classname, Vector3* origin, float radius) {
	typedef int32_t (*FindEntityByClassnameWithinFn)(int32_t, String*, Vector3*, float);
	static FindEntityByClassnameWithinFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.FindEntityByClassnameWithin", (void**)&__func);
	return __func(startFrom, classname, origin, radius);
}

static int32_t FindEntityByName(int32_t startFrom, String* name) {
	typedef int32_t (*FindEntityByNameFn)(int32_t, String*);
	static FindEntityByNameFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.FindEntityByName", (void**)&__func);
	return __func(startFrom, name);
}

static int32_t FindEntityByNameNearest(String* name, Vector3* origin, float maxRadius) {
	typedef int32_t (*FindEntityByNameNearestFn)(String*, Vector3*, float);
	static FindEntityByNameNearestFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.FindEntityByNameNearest", (void**)&__func);
	return __func(name, origin, maxRadius);
}

static int32_t FindEntityByNameWithin(int32_t startFrom, String* name, Vector3* origin, float radius) {
	typedef int32_t (*FindEntityByNameWithinFn)(int32_t, String*, Vector3*, float);
	static FindEntityByNameWithinFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.FindEntityByNameWithin", (void**)&__func);
	return __func(startFrom, name, origin, radius);
}

static int32_t FindEntityByTarget(int32_t startFrom, String* name) {
	typedef int32_t (*FindEntityByTargetFn)(int32_t, String*);
	static FindEntityByTargetFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.FindEntityByTarget", (void**)&__func);
	return __func(startFrom, name);
}

static int32_t FindEntityInSphere(int32_t startFrom, Vector3* origin, float radius) {
	typedef int32_t (*FindEntityInSphereFn)(int32_t, Vector3*, float);
	static FindEntityInSphereFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.FindEntityInSphere", (void**)&__func);
	return __func(startFrom, origin, radius);
}

static int32_t SpawnEntityByName(String* className) {
	typedef int32_t (*SpawnEntityByNameFn)(String*);
	static SpawnEntityByNameFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SpawnEntityByName", (void**)&__func);
	return __func(className);
}

static int32_t CreateEntityByName(String* className) {
	typedef int32_t (*CreateEntityByNameFn)(String*);
	static CreateEntityByNameFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.CreateEntityByName", (void**)&__func);
	return __func(className);
}

static void DispatchSpawn(int32_t entityHandle) {
	typedef void (*DispatchSpawnFn)(int32_t);
	static DispatchSpawnFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.DispatchSpawn", (void**)&__func);
	__func(entityHandle);
}

static void DispatchSpawn2(int32_t entityHandle, Vector* keys, Vector* values) {
	typedef void (*DispatchSpawn2Fn)(int32_t, Vector*, Vector*);
	static DispatchSpawn2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.DispatchSpawn2", (void**)&__func);
	__func(entityHandle, keys, values);
}

static void RemoveEntity(int32_t entityHandle) {
	typedef void (*RemoveEntityFn)(int32_t);
	static RemoveEntityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.RemoveEntity", (void**)&__func);
	__func(entityHandle);
}

static bool IsEntityPlayerController(int32_t entityHandle) {
	typedef bool (*IsEntityPlayerControllerFn)(int32_t);
	static IsEntityPlayerControllerFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.IsEntityPlayerController", (void**)&__func);
	return __func(entityHandle);
}

static bool IsEntityPlayerPawn(int32_t entityHandle) {
	typedef bool (*IsEntityPlayerPawnFn)(int32_t);
	static IsEntityPlayerPawnFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.IsEntityPlayerPawn", (void**)&__func);
	return __func(entityHandle);
}

static String GetEntityClassname(int32_t entityHandle) {
	typedef String (*GetEntityClassnameFn)(int32_t);
	static GetEntityClassnameFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityClassname", (void**)&__func);
	return __func(entityHandle);
}

static String GetEntityName(int32_t entityHandle) {
	typedef String (*GetEntityNameFn)(int32_t);
	static GetEntityNameFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityName", (void**)&__func);
	return __func(entityHandle);
}

static void SetEntityName(int32_t entityHandle, String* name) {
	typedef void (*SetEntityNameFn)(int32_t, String*);
	static SetEntityNameFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityName", (void**)&__func);
	__func(entityHandle, name);
}

static int32_t GetEntityMoveType(int32_t entityHandle) {
	typedef int32_t (*GetEntityMoveTypeFn)(int32_t);
	static GetEntityMoveTypeFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityMoveType", (void**)&__func);
	return __func(entityHandle);
}

static void SetEntityMoveType(int32_t entityHandle, int32_t moveType) {
	typedef void (*SetEntityMoveTypeFn)(int32_t, int32_t);
	static SetEntityMoveTypeFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityMoveType", (void**)&__func);
	__func(entityHandle, moveType);
}

static float GetEntityGravity(int32_t entityHandle) {
	typedef float (*GetEntityGravityFn)(int32_t);
	static GetEntityGravityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityGravity", (void**)&__func);
	return __func(entityHandle);
}

static void SetEntityGravity(int32_t entityHandle, float gravity) {
	typedef void (*SetEntityGravityFn)(int32_t, float);
	static SetEntityGravityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityGravity", (void**)&__func);
	__func(entityHandle, gravity);
}

static int32_t GetEntityFlags(int32_t entityHandle) {
	typedef int32_t (*GetEntityFlagsFn)(int32_t);
	static GetEntityFlagsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityFlags", (void**)&__func);
	return __func(entityHandle);
}

static void SetEntityFlags(int32_t entityHandle, int32_t flags) {
	typedef void (*SetEntityFlagsFn)(int32_t, int32_t);
	static SetEntityFlagsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityFlags", (void**)&__func);
	__func(entityHandle, flags);
}

static int32_t GetEntityRenderColor(int32_t entityHandle) {
	typedef int32_t (*GetEntityRenderColorFn)(int32_t);
	static GetEntityRenderColorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityRenderColor", (void**)&__func);
	return __func(entityHandle);
}

static void SetEntityRenderColor(int32_t entityHandle, int32_t color) {
	typedef void (*SetEntityRenderColorFn)(int32_t, int32_t);
	static SetEntityRenderColorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityRenderColor", (void**)&__func);
	__func(entityHandle, color);
}

static uint8_t GetEntityRenderMode(int32_t entityHandle) {
	typedef uint8_t (*GetEntityRenderModeFn)(int32_t);
	static GetEntityRenderModeFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityRenderMode", (void**)&__func);
	return __func(entityHandle);
}

static void SetEntityRenderMode(int32_t entityHandle, uint8_t renderMode) {
	typedef void (*SetEntityRenderModeFn)(int32_t, uint8_t);
	static SetEntityRenderModeFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityRenderMode", (void**)&__func);
	__func(entityHandle, renderMode);
}

static int32_t GetEntityMass(int32_t entityHandle) {
	typedef int32_t (*GetEntityMassFn)(int32_t);
	static GetEntityMassFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityMass", (void**)&__func);
	return __func(entityHandle);
}

static void SetEntityMass(int32_t entityHandle, int32_t mass) {
	typedef void (*SetEntityMassFn)(int32_t, int32_t);
	static SetEntityMassFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityMass", (void**)&__func);
	__func(entityHandle, mass);
}

static float GetEntityFriction(int32_t entityHandle) {
	typedef float (*GetEntityFrictionFn)(int32_t);
	static GetEntityFrictionFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityFriction", (void**)&__func);
	return __func(entityHandle);
}

static void SetEntityFriction(int32_t entityHandle, float friction) {
	typedef void (*SetEntityFrictionFn)(int32_t, float);
	static SetEntityFrictionFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityFriction", (void**)&__func);
	__func(entityHandle, friction);
}

static int32_t GetEntityHealth(int32_t entityHandle) {
	typedef int32_t (*GetEntityHealthFn)(int32_t);
	static GetEntityHealthFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityHealth", (void**)&__func);
	return __func(entityHandle);
}

static void SetEntityHealth(int32_t entityHandle, int32_t health) {
	typedef void (*SetEntityHealthFn)(int32_t, int32_t);
	static SetEntityHealthFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityHealth", (void**)&__func);
	__func(entityHandle, health);
}

static int32_t GetEntityMaxHealth(int32_t entityHandle) {
	typedef int32_t (*GetEntityMaxHealthFn)(int32_t);
	static GetEntityMaxHealthFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityMaxHealth", (void**)&__func);
	return __func(entityHandle);
}

static void SetEntityMaxHealth(int32_t entityHandle, int32_t maxHealth) {
	typedef void (*SetEntityMaxHealthFn)(int32_t, int32_t);
	static SetEntityMaxHealthFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityMaxHealth", (void**)&__func);
	__func(entityHandle, maxHealth);
}

static int32_t GetEntityTeam(int32_t entityHandle) {
	typedef int32_t (*GetEntityTeamFn)(int32_t);
	static GetEntityTeamFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityTeam", (void**)&__func);
	return __func(entityHandle);
}

static void SetEntityTeam(int32_t entityHandle, int32_t team) {
	typedef void (*SetEntityTeamFn)(int32_t, int32_t);
	static SetEntityTeamFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityTeam", (void**)&__func);
	__func(entityHandle, team);
}

static int32_t GetEntityOwner(int32_t entityHandle) {
	typedef int32_t (*GetEntityOwnerFn)(int32_t);
	static GetEntityOwnerFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityOwner", (void**)&__func);
	return __func(entityHandle);
}

static void SetEntityOwner(int32_t entityHandle, int32_t ownerHandle) {
	typedef void (*SetEntityOwnerFn)(int32_t, int32_t);
	static SetEntityOwnerFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityOwner", (void**)&__func);
	__func(entityHandle, ownerHandle);
}

static int32_t GetEntityParent(int32_t entityHandle) {
	typedef int32_t (*GetEntityParentFn)(int32_t);
	static GetEntityParentFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityParent", (void**)&__func);
	return __func(entityHandle);
}

static void SetEntityParent(int32_t entityHandle, int32_t parentHandle, String* attachmentName) {
	typedef void (*SetEntityParentFn)(int32_t, int32_t, String*);
	static SetEntityParentFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityParent", (void**)&__func);
	__func(entityHandle, parentHandle, attachmentName);
}

static Vector3 GetEntityAbsOrigin(int32_t entityHandle) {
	typedef Vector3 (*GetEntityAbsOriginFn)(int32_t);
	static GetEntityAbsOriginFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityAbsOrigin", (void**)&__func);
	return __func(entityHandle);
}

static void SetEntityAbsOrigin(int32_t entityHandle, Vector3* origin) {
	typedef void (*SetEntityAbsOriginFn)(int32_t, Vector3*);
	static SetEntityAbsOriginFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityAbsOrigin", (void**)&__func);
	__func(entityHandle, origin);
}

static float GetEntityAbsScale(int32_t entityHandle) {
	typedef float (*GetEntityAbsScaleFn)(int32_t);
	static GetEntityAbsScaleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityAbsScale", (void**)&__func);
	return __func(entityHandle);
}

static void SetEntityAbsScale(int32_t entityHandle, float scale) {
	typedef void (*SetEntityAbsScaleFn)(int32_t, float);
	static SetEntityAbsScaleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityAbsScale", (void**)&__func);
	__func(entityHandle, scale);
}

static Vector3 GetEntityAbsAngles(int32_t entityHandle) {
	typedef Vector3 (*GetEntityAbsAnglesFn)(int32_t);
	static GetEntityAbsAnglesFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityAbsAngles", (void**)&__func);
	return __func(entityHandle);
}

static void SetEntityAbsAngles(int32_t entityHandle, Vector3* angle) {
	typedef void (*SetEntityAbsAnglesFn)(int32_t, Vector3*);
	static SetEntityAbsAnglesFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityAbsAngles", (void**)&__func);
	__func(entityHandle, angle);
}

static Vector3 GetEntityLocalOrigin(int32_t entityHandle) {
	typedef Vector3 (*GetEntityLocalOriginFn)(int32_t);
	static GetEntityLocalOriginFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityLocalOrigin", (void**)&__func);
	return __func(entityHandle);
}

static void SetEntityLocalOrigin(int32_t entityHandle, Vector3* origin) {
	typedef void (*SetEntityLocalOriginFn)(int32_t, Vector3*);
	static SetEntityLocalOriginFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityLocalOrigin", (void**)&__func);
	__func(entityHandle, origin);
}

static float GetEntityLocalScale(int32_t entityHandle) {
	typedef float (*GetEntityLocalScaleFn)(int32_t);
	static GetEntityLocalScaleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityLocalScale", (void**)&__func);
	return __func(entityHandle);
}

static void SetEntityLocalScale(int32_t entityHandle, float scale) {
	typedef void (*SetEntityLocalScaleFn)(int32_t, float);
	static SetEntityLocalScaleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityLocalScale", (void**)&__func);
	__func(entityHandle, scale);
}

static Vector3 GetEntityLocalAngles(int32_t entityHandle) {
	typedef Vector3 (*GetEntityLocalAnglesFn)(int32_t);
	static GetEntityLocalAnglesFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityLocalAngles", (void**)&__func);
	return __func(entityHandle);
}

static void SetEntityLocalAngles(int32_t entityHandle, Vector3* angle) {
	typedef void (*SetEntityLocalAnglesFn)(int32_t, Vector3*);
	static SetEntityLocalAnglesFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityLocalAngles", (void**)&__func);
	__func(entityHandle, angle);
}

static Vector3 GetEntityAbsVelocity(int32_t entityHandle) {
	typedef Vector3 (*GetEntityAbsVelocityFn)(int32_t);
	static GetEntityAbsVelocityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityAbsVelocity", (void**)&__func);
	return __func(entityHandle);
}

static void SetEntityAbsVelocity(int32_t entityHandle, Vector3* velocity) {
	typedef void (*SetEntityAbsVelocityFn)(int32_t, Vector3*);
	static SetEntityAbsVelocityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityAbsVelocity", (void**)&__func);
	__func(entityHandle, velocity);
}

static Vector3 GetEntityBaseVelocity(int32_t entityHandle) {
	typedef Vector3 (*GetEntityBaseVelocityFn)(int32_t);
	static GetEntityBaseVelocityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityBaseVelocity", (void**)&__func);
	return __func(entityHandle);
}

static Vector3 GetEntityLocalAngVelocity(int32_t entityHandle) {
	typedef Vector3 (*GetEntityLocalAngVelocityFn)(int32_t);
	static GetEntityLocalAngVelocityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityLocalAngVelocity", (void**)&__func);
	return __func(entityHandle);
}

static Vector3 GetEntityAngVelocity(int32_t entityHandle) {
	typedef Vector3 (*GetEntityAngVelocityFn)(int32_t);
	static GetEntityAngVelocityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityAngVelocity", (void**)&__func);
	return __func(entityHandle);
}

static void SetEntityAngVelocity(int32_t entityHandle, Vector3* velocity) {
	typedef void (*SetEntityAngVelocityFn)(int32_t, Vector3*);
	static SetEntityAngVelocityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityAngVelocity", (void**)&__func);
	__func(entityHandle, velocity);
}

static Vector3 GetEntityLocalVelocity(int32_t entityHandle) {
	typedef Vector3 (*GetEntityLocalVelocityFn)(int32_t);
	static GetEntityLocalVelocityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityLocalVelocity", (void**)&__func);
	return __func(entityHandle);
}

static Vector3 GetEntityAngRotation(int32_t entityHandle) {
	typedef Vector3 (*GetEntityAngRotationFn)(int32_t);
	static GetEntityAngRotationFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityAngRotation", (void**)&__func);
	return __func(entityHandle);
}

static void SetEntityAngRotation(int32_t entityHandle, Vector3* rotation) {
	typedef void (*SetEntityAngRotationFn)(int32_t, Vector3*);
	static SetEntityAngRotationFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityAngRotation", (void**)&__func);
	__func(entityHandle, rotation);
}

static Vector3 TransformPointEntityToWorld(int32_t entityHandle, Vector3* point) {
	typedef Vector3 (*TransformPointEntityToWorldFn)(int32_t, Vector3*);
	static TransformPointEntityToWorldFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.TransformPointEntityToWorld", (void**)&__func);
	return __func(entityHandle, point);
}

static Vector3 TransformPointWorldToEntity(int32_t entityHandle, Vector3* point) {
	typedef Vector3 (*TransformPointWorldToEntityFn)(int32_t, Vector3*);
	static TransformPointWorldToEntityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.TransformPointWorldToEntity", (void**)&__func);
	return __func(entityHandle, point);
}

static Vector3 GetEntityEyePosition(int32_t entityHandle) {
	typedef Vector3 (*GetEntityEyePositionFn)(int32_t);
	static GetEntityEyePositionFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityEyePosition", (void**)&__func);
	return __func(entityHandle);
}

static Vector3 GetEntityEyeAngles(int32_t entityHandle) {
	typedef Vector3 (*GetEntityEyeAnglesFn)(int32_t);
	static GetEntityEyeAnglesFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityEyeAngles", (void**)&__func);
	return __func(entityHandle);
}

static void SetEntityForwardVector(int32_t entityHandle, Vector3* forward) {
	typedef void (*SetEntityForwardVectorFn)(int32_t, Vector3*);
	static SetEntityForwardVectorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityForwardVector", (void**)&__func);
	__func(entityHandle, forward);
}

static Vector3 GetEntityForwardVector(int32_t entityHandle) {
	typedef Vector3 (*GetEntityForwardVectorFn)(int32_t);
	static GetEntityForwardVectorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityForwardVector", (void**)&__func);
	return __func(entityHandle);
}

static Vector3 GetEntityLeftVector(int32_t entityHandle) {
	typedef Vector3 (*GetEntityLeftVectorFn)(int32_t);
	static GetEntityLeftVectorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityLeftVector", (void**)&__func);
	return __func(entityHandle);
}

static Vector3 GetEntityRightVector(int32_t entityHandle) {
	typedef Vector3 (*GetEntityRightVectorFn)(int32_t);
	static GetEntityRightVectorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityRightVector", (void**)&__func);
	return __func(entityHandle);
}

static Vector3 GetEntityUpVector(int32_t entityHandle) {
	typedef Vector3 (*GetEntityUpVectorFn)(int32_t);
	static GetEntityUpVectorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityUpVector", (void**)&__func);
	return __func(entityHandle);
}

static Matrix4x4 GetEntityTransform(int32_t entityHandle) {
	typedef Matrix4x4 (*GetEntityTransformFn)(int32_t);
	static GetEntityTransformFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityTransform", (void**)&__func);
	return __func(entityHandle);
}

static String GetEntityModel(int32_t entityHandle) {
	typedef String (*GetEntityModelFn)(int32_t);
	static GetEntityModelFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityModel", (void**)&__func);
	return __func(entityHandle);
}

static void SetEntityModel(int32_t entityHandle, String* model) {
	typedef void (*SetEntityModelFn)(int32_t, String*);
	static SetEntityModelFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityModel", (void**)&__func);
	__func(entityHandle, model);
}

static float GetEntityWaterLevel(int32_t entityHandle) {
	typedef float (*GetEntityWaterLevelFn)(int32_t);
	static GetEntityWaterLevelFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityWaterLevel", (void**)&__func);
	return __func(entityHandle);
}

static int32_t GetEntityGroundEntity(int32_t entityHandle) {
	typedef int32_t (*GetEntityGroundEntityFn)(int32_t);
	static GetEntityGroundEntityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityGroundEntity", (void**)&__func);
	return __func(entityHandle);
}

static int32_t GetEntityEffects(int32_t entityHandle) {
	typedef int32_t (*GetEntityEffectsFn)(int32_t);
	static GetEntityEffectsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityEffects", (void**)&__func);
	return __func(entityHandle);
}

static void AddEntityEffects(int32_t entityHandle, int32_t effects) {
	typedef void (*AddEntityEffectsFn)(int32_t, int32_t);
	static AddEntityEffectsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.AddEntityEffects", (void**)&__func);
	__func(entityHandle, effects);
}

static void RemoveEntityEffects(int32_t entityHandle, int32_t effects) {
	typedef void (*RemoveEntityEffectsFn)(int32_t, int32_t);
	static RemoveEntityEffectsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.RemoveEntityEffects", (void**)&__func);
	__func(entityHandle, effects);
}

static Vector3 GetEntityBoundingMaxs(int32_t entityHandle) {
	typedef Vector3 (*GetEntityBoundingMaxsFn)(int32_t);
	static GetEntityBoundingMaxsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityBoundingMaxs", (void**)&__func);
	return __func(entityHandle);
}

static Vector3 GetEntityBoundingMins(int32_t entityHandle) {
	typedef Vector3 (*GetEntityBoundingMinsFn)(int32_t);
	static GetEntityBoundingMinsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityBoundingMins", (void**)&__func);
	return __func(entityHandle);
}

static Vector3 GetEntityCenter(int32_t entityHandle) {
	typedef Vector3 (*GetEntityCenterFn)(int32_t);
	static GetEntityCenterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityCenter", (void**)&__func);
	return __func(entityHandle);
}

static void TeleportEntity(int32_t entityHandle, uintptr_t origin, uintptr_t angles, uintptr_t velocity) {
	typedef void (*TeleportEntityFn)(int32_t, uintptr_t, uintptr_t, uintptr_t);
	static TeleportEntityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.TeleportEntity", (void**)&__func);
	__func(entityHandle, origin, angles, velocity);
}

static void ApplyAbsVelocityImpulseToEntity(int32_t entityHandle, Vector3* vecImpulse) {
	typedef void (*ApplyAbsVelocityImpulseToEntityFn)(int32_t, Vector3*);
	static ApplyAbsVelocityImpulseToEntityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.ApplyAbsVelocityImpulseToEntity", (void**)&__func);
	__func(entityHandle, vecImpulse);
}

static void ApplyLocalAngularVelocityImpulseToEntity(int32_t entityHandle, Vector3* angImpulse) {
	typedef void (*ApplyLocalAngularVelocityImpulseToEntityFn)(int32_t, Vector3*);
	static ApplyLocalAngularVelocityImpulseToEntityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.ApplyLocalAngularVelocityImpulseToEntity", (void**)&__func);
	__func(entityHandle, angImpulse);
}

static void AcceptEntityInput(int32_t entityHandle, String* inputName, int32_t activatorHandle, int32_t callerHandle, Variant* value, int32_t type, int32_t outputId) {
	typedef void (*AcceptEntityInputFn)(int32_t, String*, int32_t, int32_t, Variant*, int32_t, int32_t);
	static AcceptEntityInputFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.AcceptEntityInput", (void**)&__func);
	__func(entityHandle, inputName, activatorHandle, callerHandle, value, type, outputId);
}

static void ConnectEntityOutput(int32_t entityHandle, String* output, String* functionName) {
	typedef void (*ConnectEntityOutputFn)(int32_t, String*, String*);
	static ConnectEntityOutputFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.ConnectEntityOutput", (void**)&__func);
	__func(entityHandle, output, functionName);
}

static void DisconnectEntityOutput(int32_t entityHandle, String* output, String* functionName) {
	typedef void (*DisconnectEntityOutputFn)(int32_t, String*, String*);
	static DisconnectEntityOutputFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.DisconnectEntityOutput", (void**)&__func);
	__func(entityHandle, output, functionName);
}

static void DisconnectEntityRedirectedOutput(int32_t entityHandle, String* output, String* functionName, int32_t targetHandle) {
	typedef void (*DisconnectEntityRedirectedOutputFn)(int32_t, String*, String*, int32_t);
	static DisconnectEntityRedirectedOutputFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.DisconnectEntityRedirectedOutput", (void**)&__func);
	__func(entityHandle, output, functionName, targetHandle);
}

static void FireEntityOutput(int32_t entityHandle, String* outputName, int32_t activatorHandle, int32_t callerHandle, Variant* value, int32_t type, float delay) {
	typedef void (*FireEntityOutputFn)(int32_t, String*, int32_t, int32_t, Variant*, int32_t, float);
	static FireEntityOutputFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.FireEntityOutput", (void**)&__func);
	__func(entityHandle, outputName, activatorHandle, callerHandle, value, type, delay);
}

static void RedirectEntityOutput(int32_t entityHandle, String* output, String* functionName, int32_t targetHandle) {
	typedef void (*RedirectEntityOutputFn)(int32_t, String*, String*, int32_t);
	static RedirectEntityOutputFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.RedirectEntityOutput", (void**)&__func);
	__func(entityHandle, output, functionName, targetHandle);
}

static void FollowEntity(int32_t entityHandle, int32_t attachmentHandle, bool boneMerge) {
	typedef void (*FollowEntityFn)(int32_t, int32_t, bool);
	static FollowEntityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.FollowEntity", (void**)&__func);
	__func(entityHandle, attachmentHandle, boneMerge);
}

static void FollowEntityMerge(int32_t entityHandle, int32_t attachmentHandle, String* boneOrAttachName) {
	typedef void (*FollowEntityMergeFn)(int32_t, int32_t, String*);
	static FollowEntityMergeFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.FollowEntityMerge", (void**)&__func);
	__func(entityHandle, attachmentHandle, boneOrAttachName);
}

static int32_t TakeEntityDamage(int32_t entityHandle, int32_t inflictorHandle, int32_t attackerHandle, Vector3* force, Vector3* hitPos, float damage, int32_t damageTypes) {
	typedef int32_t (*TakeEntityDamageFn)(int32_t, int32_t, int32_t, Vector3*, Vector3*, float, int32_t);
	static TakeEntityDamageFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.TakeEntityDamage", (void**)&__func);
	return __func(entityHandle, inflictorHandle, attackerHandle, force, hitPos, damage, damageTypes);
}

static float GetEntityAttributeFloatValue(int32_t entityHandle, String* name, float defaultValue) {
	typedef float (*GetEntityAttributeFloatValueFn)(int32_t, String*, float);
	static GetEntityAttributeFloatValueFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityAttributeFloatValue", (void**)&__func);
	return __func(entityHandle, name, defaultValue);
}

static int32_t GetEntityAttributeIntValue(int32_t entityHandle, String* name, int32_t defaultValue) {
	typedef int32_t (*GetEntityAttributeIntValueFn)(int32_t, String*, int32_t);
	static GetEntityAttributeIntValueFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntityAttributeIntValue", (void**)&__func);
	return __func(entityHandle, name, defaultValue);
}

static void SetEntityAttributeFloatValue(int32_t entityHandle, String* name, float value) {
	typedef void (*SetEntityAttributeFloatValueFn)(int32_t, String*, float);
	static SetEntityAttributeFloatValueFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityAttributeFloatValue", (void**)&__func);
	__func(entityHandle, name, value);
}

static void SetEntityAttributeIntValue(int32_t entityHandle, String* name, int32_t value) {
	typedef void (*SetEntityAttributeIntValueFn)(int32_t, String*, int32_t);
	static SetEntityAttributeIntValueFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntityAttributeIntValue", (void**)&__func);
	__func(entityHandle, name, value);
}

static void DeleteEntityAttribute(int32_t entityHandle, String* name) {
	typedef void (*DeleteEntityAttributeFn)(int32_t, String*);
	static DeleteEntityAttributeFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.DeleteEntityAttribute", (void**)&__func);
	__func(entityHandle, name);
}

static bool HasEntityAttribute(int32_t entityHandle, String* name) {
	typedef bool (*HasEntityAttributeFn)(int32_t, String*);
	static HasEntityAttributeFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.HasEntityAttribute", (void**)&__func);
	return __func(entityHandle, name);
}

