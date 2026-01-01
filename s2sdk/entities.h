#pragma once

#include "shared.h"

extern uintptr_t (*__s2sdk_EntIndexToEntPointer)(int32_t);

static uintptr_t EntIndexToEntPointer(int32_t entityIndex) {
	return __s2sdk_EntIndexToEntPointer(entityIndex);
}

extern int32_t (*__s2sdk_EntPointerToEntIndex)(uintptr_t);

static int32_t EntPointerToEntIndex(uintptr_t entity) {
	return __s2sdk_EntPointerToEntIndex(entity);
}

extern int32_t (*__s2sdk_EntPointerToEntHandle)(uintptr_t);

static int32_t EntPointerToEntHandle(uintptr_t entity) {
	return __s2sdk_EntPointerToEntHandle(entity);
}

extern uintptr_t (*__s2sdk_EntHandleToEntPointer)(int32_t);

static uintptr_t EntHandleToEntPointer(int32_t entityHandle) {
	return __s2sdk_EntHandleToEntPointer(entityHandle);
}

extern int32_t (*__s2sdk_EntIndexToEntHandle)(int32_t);

static int32_t EntIndexToEntHandle(int32_t entityIndex) {
	return __s2sdk_EntIndexToEntHandle(entityIndex);
}

extern int32_t (*__s2sdk_EntHandleToEntIndex)(int32_t);

static int32_t EntHandleToEntIndex(int32_t entityHandle) {
	return __s2sdk_EntHandleToEntIndex(entityHandle);
}

extern bool (*__s2sdk_IsValidEntHandle)(int32_t);

static bool IsValidEntHandle(int32_t entityHandle) {
	return __s2sdk_IsValidEntHandle(entityHandle);
}

extern bool (*__s2sdk_IsValidEntPointer)(uintptr_t);

static bool IsValidEntPointer(uintptr_t entity) {
	return __s2sdk_IsValidEntPointer(entity);
}

extern int32_t (*__s2sdk_GetFirstActiveEntity)();

static int32_t GetFirstActiveEntity() {
	return __s2sdk_GetFirstActiveEntity();
}

extern int32_t (*__s2sdk_GetPrevActiveEntity)(int32_t);

static int32_t GetPrevActiveEntity(int32_t entityHandle) {
	return __s2sdk_GetPrevActiveEntity(entityHandle);
}

extern int32_t (*__s2sdk_GetNextActiveEntity)(int32_t);

static int32_t GetNextActiveEntity(int32_t entityHandle) {
	return __s2sdk_GetNextActiveEntity(entityHandle);
}

extern bool (*__s2sdk_HookEntityOutput)(String*, String*, void*, uint8_t);

static bool HookEntityOutput(String* classname, String* output, void* callback, uint8_t type_) {
	return __s2sdk_HookEntityOutput(classname, output, callback, type_);
}

extern bool (*__s2sdk_UnhookEntityOutput)(String*, String*, void*, uint8_t);

static bool UnhookEntityOutput(String* classname, String* output, void* callback, uint8_t type_) {
	return __s2sdk_UnhookEntityOutput(classname, output, callback, type_);
}

extern int32_t (*__s2sdk_FindEntityByClassname)(int32_t, String*);

static int32_t FindEntityByClassname(int32_t startFrom, String* classname) {
	return __s2sdk_FindEntityByClassname(startFrom, classname);
}

extern int32_t (*__s2sdk_FindEntityByClassnameNearest)(int32_t, String*, Vector3*, float);

static int32_t FindEntityByClassnameNearest(int32_t startFrom, String* classname, Vector3* origin, float maxRadius) {
	return __s2sdk_FindEntityByClassnameNearest(startFrom, classname, origin, maxRadius);
}

extern int32_t (*__s2sdk_FindEntityByClassnameWithin)(int32_t, String*, Vector3*, float);

static int32_t FindEntityByClassnameWithin(int32_t startFrom, String* classname, Vector3* origin, float radius) {
	return __s2sdk_FindEntityByClassnameWithin(startFrom, classname, origin, radius);
}

extern int32_t (*__s2sdk_FindEntityByName)(int32_t, String*);

static int32_t FindEntityByName(int32_t startFrom, String* name) {
	return __s2sdk_FindEntityByName(startFrom, name);
}

extern int32_t (*__s2sdk_FindEntityByNameNearest)(String*, Vector3*, float);

static int32_t FindEntityByNameNearest(String* name, Vector3* origin, float maxRadius) {
	return __s2sdk_FindEntityByNameNearest(name, origin, maxRadius);
}

extern int32_t (*__s2sdk_FindEntityByNameWithin)(int32_t, String*, Vector3*, float);

static int32_t FindEntityByNameWithin(int32_t startFrom, String* name, Vector3* origin, float radius) {
	return __s2sdk_FindEntityByNameWithin(startFrom, name, origin, radius);
}

extern int32_t (*__s2sdk_FindEntityByTarget)(int32_t, String*);

static int32_t FindEntityByTarget(int32_t startFrom, String* name) {
	return __s2sdk_FindEntityByTarget(startFrom, name);
}

extern int32_t (*__s2sdk_FindEntityInSphere)(int32_t, Vector3*, float);

static int32_t FindEntityInSphere(int32_t startFrom, Vector3* origin, float radius) {
	return __s2sdk_FindEntityInSphere(startFrom, origin, radius);
}

extern int32_t (*__s2sdk_SpawnEntityByName)(String*);

static int32_t SpawnEntityByName(String* className) {
	return __s2sdk_SpawnEntityByName(className);
}

extern int32_t (*__s2sdk_CreateEntityByName)(String*);

static int32_t CreateEntityByName(String* className) {
	return __s2sdk_CreateEntityByName(className);
}

extern void (*__s2sdk_DispatchSpawn)(int32_t);

static void DispatchSpawn(int32_t entityHandle) {
	__s2sdk_DispatchSpawn(entityHandle);
}

extern void (*__s2sdk_DispatchSpawn2)(int32_t, Vector*, Vector*);

static void DispatchSpawn2(int32_t entityHandle, Vector* keys, Vector* values) {
	__s2sdk_DispatchSpawn2(entityHandle, keys, values);
}

extern void (*__s2sdk_RemoveEntity)(int32_t);

static void RemoveEntity(int32_t entityHandle) {
	__s2sdk_RemoveEntity(entityHandle);
}

extern bool (*__s2sdk_IsEntityPlayerController)(int32_t);

static bool IsEntityPlayerController(int32_t entityHandle) {
	return __s2sdk_IsEntityPlayerController(entityHandle);
}

extern bool (*__s2sdk_IsEntityPlayerPawn)(int32_t);

static bool IsEntityPlayerPawn(int32_t entityHandle) {
	return __s2sdk_IsEntityPlayerPawn(entityHandle);
}

extern String (*__s2sdk_GetEntityClassname)(int32_t);

static String GetEntityClassname(int32_t entityHandle) {
	return __s2sdk_GetEntityClassname(entityHandle);
}

extern String (*__s2sdk_GetEntityName)(int32_t);

static String GetEntityName(int32_t entityHandle) {
	return __s2sdk_GetEntityName(entityHandle);
}

extern void (*__s2sdk_SetEntityName)(int32_t, String*);

static void SetEntityName(int32_t entityHandle, String* name) {
	__s2sdk_SetEntityName(entityHandle, name);
}

extern int32_t (*__s2sdk_GetEntityMoveType)(int32_t);

static int32_t GetEntityMoveType(int32_t entityHandle) {
	return __s2sdk_GetEntityMoveType(entityHandle);
}

extern void (*__s2sdk_SetEntityMoveType)(int32_t, int32_t);

static void SetEntityMoveType(int32_t entityHandle, int32_t moveType) {
	__s2sdk_SetEntityMoveType(entityHandle, moveType);
}

extern float (*__s2sdk_GetEntityGravity)(int32_t);

static float GetEntityGravity(int32_t entityHandle) {
	return __s2sdk_GetEntityGravity(entityHandle);
}

extern void (*__s2sdk_SetEntityGravity)(int32_t, float);

static void SetEntityGravity(int32_t entityHandle, float gravity) {
	__s2sdk_SetEntityGravity(entityHandle, gravity);
}

extern int32_t (*__s2sdk_GetEntityFlags)(int32_t);

static int32_t GetEntityFlags(int32_t entityHandle) {
	return __s2sdk_GetEntityFlags(entityHandle);
}

extern void (*__s2sdk_SetEntityFlags)(int32_t, int32_t);

static void SetEntityFlags(int32_t entityHandle, int32_t flags) {
	__s2sdk_SetEntityFlags(entityHandle, flags);
}

extern Vector4 (*__s2sdk_GetEntityRenderColor)(int32_t);

static Vector4 GetEntityRenderColor(int32_t entityHandle) {
	return __s2sdk_GetEntityRenderColor(entityHandle);
}

extern void (*__s2sdk_SetEntityRenderColor)(int32_t, Vector4*);

static void SetEntityRenderColor(int32_t entityHandle, Vector4* color) {
	__s2sdk_SetEntityRenderColor(entityHandle, color);
}

extern uint8_t (*__s2sdk_GetEntityRenderMode)(int32_t);

static uint8_t GetEntityRenderMode(int32_t entityHandle) {
	return __s2sdk_GetEntityRenderMode(entityHandle);
}

extern void (*__s2sdk_SetEntityRenderMode)(int32_t, uint8_t);

static void SetEntityRenderMode(int32_t entityHandle, uint8_t renderMode) {
	__s2sdk_SetEntityRenderMode(entityHandle, renderMode);
}

extern int32_t (*__s2sdk_GetEntityMass)(int32_t);

static int32_t GetEntityMass(int32_t entityHandle) {
	return __s2sdk_GetEntityMass(entityHandle);
}

extern void (*__s2sdk_SetEntityMass)(int32_t, int32_t);

static void SetEntityMass(int32_t entityHandle, int32_t mass) {
	__s2sdk_SetEntityMass(entityHandle, mass);
}

extern float (*__s2sdk_GetEntityFriction)(int32_t);

static float GetEntityFriction(int32_t entityHandle) {
	return __s2sdk_GetEntityFriction(entityHandle);
}

extern void (*__s2sdk_SetEntityFriction)(int32_t, float);

static void SetEntityFriction(int32_t entityHandle, float friction) {
	__s2sdk_SetEntityFriction(entityHandle, friction);
}

extern int32_t (*__s2sdk_GetEntityHealth)(int32_t);

static int32_t GetEntityHealth(int32_t entityHandle) {
	return __s2sdk_GetEntityHealth(entityHandle);
}

extern void (*__s2sdk_SetEntityHealth)(int32_t, int32_t);

static void SetEntityHealth(int32_t entityHandle, int32_t health) {
	__s2sdk_SetEntityHealth(entityHandle, health);
}

extern int32_t (*__s2sdk_GetEntityMaxHealth)(int32_t);

static int32_t GetEntityMaxHealth(int32_t entityHandle) {
	return __s2sdk_GetEntityMaxHealth(entityHandle);
}

extern void (*__s2sdk_SetEntityMaxHealth)(int32_t, int32_t);

static void SetEntityMaxHealth(int32_t entityHandle, int32_t maxHealth) {
	__s2sdk_SetEntityMaxHealth(entityHandle, maxHealth);
}

extern int32_t (*__s2sdk_GetEntityTeam)(int32_t);

static int32_t GetEntityTeam(int32_t entityHandle) {
	return __s2sdk_GetEntityTeam(entityHandle);
}

extern void (*__s2sdk_SetEntityTeam)(int32_t, int32_t);

static void SetEntityTeam(int32_t entityHandle, int32_t team) {
	__s2sdk_SetEntityTeam(entityHandle, team);
}

extern int32_t (*__s2sdk_GetEntityOwner)(int32_t);

static int32_t GetEntityOwner(int32_t entityHandle) {
	return __s2sdk_GetEntityOwner(entityHandle);
}

extern void (*__s2sdk_SetEntityOwner)(int32_t, int32_t);

static void SetEntityOwner(int32_t entityHandle, int32_t ownerHandle) {
	__s2sdk_SetEntityOwner(entityHandle, ownerHandle);
}

extern int32_t (*__s2sdk_GetEntityParent)(int32_t);

static int32_t GetEntityParent(int32_t entityHandle) {
	return __s2sdk_GetEntityParent(entityHandle);
}

extern void (*__s2sdk_SetEntityParent)(int32_t, int32_t);

static void SetEntityParent(int32_t entityHandle, int32_t parentHandle) {
	__s2sdk_SetEntityParent(entityHandle, parentHandle);
}

extern void (*__s2sdk_SetEntityParentAttachment)(int32_t, int32_t, String*);

static void SetEntityParentAttachment(int32_t entityHandle, int32_t parentHandle, String* attachmentName) {
	__s2sdk_SetEntityParentAttachment(entityHandle, parentHandle, attachmentName);
}

extern Vector3 (*__s2sdk_GetEntityAbsOrigin)(int32_t);

static Vector3 GetEntityAbsOrigin(int32_t entityHandle) {
	return __s2sdk_GetEntityAbsOrigin(entityHandle);
}

extern void (*__s2sdk_SetEntityAbsOrigin)(int32_t, Vector3*);

static void SetEntityAbsOrigin(int32_t entityHandle, Vector3* origin) {
	__s2sdk_SetEntityAbsOrigin(entityHandle, origin);
}

extern float (*__s2sdk_GetEntityAbsScale)(int32_t);

static float GetEntityAbsScale(int32_t entityHandle) {
	return __s2sdk_GetEntityAbsScale(entityHandle);
}

extern void (*__s2sdk_SetEntityAbsScale)(int32_t, float);

static void SetEntityAbsScale(int32_t entityHandle, float scale) {
	__s2sdk_SetEntityAbsScale(entityHandle, scale);
}

extern Vector3 (*__s2sdk_GetEntityAbsAngles)(int32_t);

static Vector3 GetEntityAbsAngles(int32_t entityHandle) {
	return __s2sdk_GetEntityAbsAngles(entityHandle);
}

extern void (*__s2sdk_SetEntityAbsAngles)(int32_t, Vector3*);

static void SetEntityAbsAngles(int32_t entityHandle, Vector3* angle) {
	__s2sdk_SetEntityAbsAngles(entityHandle, angle);
}

extern Vector3 (*__s2sdk_GetEntityLocalOrigin)(int32_t);

static Vector3 GetEntityLocalOrigin(int32_t entityHandle) {
	return __s2sdk_GetEntityLocalOrigin(entityHandle);
}

extern void (*__s2sdk_SetEntityLocalOrigin)(int32_t, Vector3*);

static void SetEntityLocalOrigin(int32_t entityHandle, Vector3* origin) {
	__s2sdk_SetEntityLocalOrigin(entityHandle, origin);
}

extern float (*__s2sdk_GetEntityLocalScale)(int32_t);

static float GetEntityLocalScale(int32_t entityHandle) {
	return __s2sdk_GetEntityLocalScale(entityHandle);
}

extern void (*__s2sdk_SetEntityLocalScale)(int32_t, float);

static void SetEntityLocalScale(int32_t entityHandle, float scale) {
	__s2sdk_SetEntityLocalScale(entityHandle, scale);
}

extern Vector3 (*__s2sdk_GetEntityLocalAngles)(int32_t);

static Vector3 GetEntityLocalAngles(int32_t entityHandle) {
	return __s2sdk_GetEntityLocalAngles(entityHandle);
}

extern void (*__s2sdk_SetEntityLocalAngles)(int32_t, Vector3*);

static void SetEntityLocalAngles(int32_t entityHandle, Vector3* angle) {
	__s2sdk_SetEntityLocalAngles(entityHandle, angle);
}

extern Vector3 (*__s2sdk_GetEntityAbsVelocity)(int32_t);

static Vector3 GetEntityAbsVelocity(int32_t entityHandle) {
	return __s2sdk_GetEntityAbsVelocity(entityHandle);
}

extern void (*__s2sdk_SetEntityAbsVelocity)(int32_t, Vector3*);

static void SetEntityAbsVelocity(int32_t entityHandle, Vector3* velocity) {
	__s2sdk_SetEntityAbsVelocity(entityHandle, velocity);
}

extern Vector3 (*__s2sdk_GetEntityBaseVelocity)(int32_t);

static Vector3 GetEntityBaseVelocity(int32_t entityHandle) {
	return __s2sdk_GetEntityBaseVelocity(entityHandle);
}

extern Vector3 (*__s2sdk_GetEntityLocalAngVelocity)(int32_t);

static Vector3 GetEntityLocalAngVelocity(int32_t entityHandle) {
	return __s2sdk_GetEntityLocalAngVelocity(entityHandle);
}

extern Vector3 (*__s2sdk_GetEntityAngVelocity)(int32_t);

static Vector3 GetEntityAngVelocity(int32_t entityHandle) {
	return __s2sdk_GetEntityAngVelocity(entityHandle);
}

extern void (*__s2sdk_SetEntityAngVelocity)(int32_t, Vector3*);

static void SetEntityAngVelocity(int32_t entityHandle, Vector3* velocity) {
	__s2sdk_SetEntityAngVelocity(entityHandle, velocity);
}

extern Vector3 (*__s2sdk_GetEntityLocalVelocity)(int32_t);

static Vector3 GetEntityLocalVelocity(int32_t entityHandle) {
	return __s2sdk_GetEntityLocalVelocity(entityHandle);
}

extern Vector3 (*__s2sdk_GetEntityAngRotation)(int32_t);

static Vector3 GetEntityAngRotation(int32_t entityHandle) {
	return __s2sdk_GetEntityAngRotation(entityHandle);
}

extern void (*__s2sdk_SetEntityAngRotation)(int32_t, Vector3*);

static void SetEntityAngRotation(int32_t entityHandle, Vector3* rotation) {
	__s2sdk_SetEntityAngRotation(entityHandle, rotation);
}

extern Vector3 (*__s2sdk_TransformPointEntityToWorld)(int32_t, Vector3*);

static Vector3 TransformPointEntityToWorld(int32_t entityHandle, Vector3* point) {
	return __s2sdk_TransformPointEntityToWorld(entityHandle, point);
}

extern Vector3 (*__s2sdk_TransformPointWorldToEntity)(int32_t, Vector3*);

static Vector3 TransformPointWorldToEntity(int32_t entityHandle, Vector3* point) {
	return __s2sdk_TransformPointWorldToEntity(entityHandle, point);
}

extern Vector3 (*__s2sdk_GetEntityEyePosition)(int32_t);

static Vector3 GetEntityEyePosition(int32_t entityHandle) {
	return __s2sdk_GetEntityEyePosition(entityHandle);
}

extern Vector3 (*__s2sdk_GetEntityEyeAngles)(int32_t);

static Vector3 GetEntityEyeAngles(int32_t entityHandle) {
	return __s2sdk_GetEntityEyeAngles(entityHandle);
}

extern void (*__s2sdk_SetEntityForwardVector)(int32_t, Vector3*);

static void SetEntityForwardVector(int32_t entityHandle, Vector3* forward) {
	__s2sdk_SetEntityForwardVector(entityHandle, forward);
}

extern Vector3 (*__s2sdk_GetEntityForwardVector)(int32_t);

static Vector3 GetEntityForwardVector(int32_t entityHandle) {
	return __s2sdk_GetEntityForwardVector(entityHandle);
}

extern Vector3 (*__s2sdk_GetEntityLeftVector)(int32_t);

static Vector3 GetEntityLeftVector(int32_t entityHandle) {
	return __s2sdk_GetEntityLeftVector(entityHandle);
}

extern Vector3 (*__s2sdk_GetEntityRightVector)(int32_t);

static Vector3 GetEntityRightVector(int32_t entityHandle) {
	return __s2sdk_GetEntityRightVector(entityHandle);
}

extern Vector3 (*__s2sdk_GetEntityUpVector)(int32_t);

static Vector3 GetEntityUpVector(int32_t entityHandle) {
	return __s2sdk_GetEntityUpVector(entityHandle);
}

extern Matrix4x4 (*__s2sdk_GetEntityTransform)(int32_t);

static Matrix4x4 GetEntityTransform(int32_t entityHandle) {
	return __s2sdk_GetEntityTransform(entityHandle);
}

extern String (*__s2sdk_GetEntityModel)(int32_t);

static String GetEntityModel(int32_t entityHandle) {
	return __s2sdk_GetEntityModel(entityHandle);
}

extern void (*__s2sdk_SetEntityModel)(int32_t, String*);

static void SetEntityModel(int32_t entityHandle, String* model) {
	__s2sdk_SetEntityModel(entityHandle, model);
}

extern float (*__s2sdk_GetEntityWaterLevel)(int32_t);

static float GetEntityWaterLevel(int32_t entityHandle) {
	return __s2sdk_GetEntityWaterLevel(entityHandle);
}

extern int32_t (*__s2sdk_GetEntityGroundEntity)(int32_t);

static int32_t GetEntityGroundEntity(int32_t entityHandle) {
	return __s2sdk_GetEntityGroundEntity(entityHandle);
}

extern int32_t (*__s2sdk_GetEntityEffects)(int32_t);

static int32_t GetEntityEffects(int32_t entityHandle) {
	return __s2sdk_GetEntityEffects(entityHandle);
}

extern void (*__s2sdk_AddEntityEffects)(int32_t, int32_t);

static void AddEntityEffects(int32_t entityHandle, int32_t effects) {
	__s2sdk_AddEntityEffects(entityHandle, effects);
}

extern void (*__s2sdk_RemoveEntityEffects)(int32_t, int32_t);

static void RemoveEntityEffects(int32_t entityHandle, int32_t effects) {
	__s2sdk_RemoveEntityEffects(entityHandle, effects);
}

extern Vector3 (*__s2sdk_GetEntityBoundingMaxs)(int32_t);

static Vector3 GetEntityBoundingMaxs(int32_t entityHandle) {
	return __s2sdk_GetEntityBoundingMaxs(entityHandle);
}

extern Vector3 (*__s2sdk_GetEntityBoundingMins)(int32_t);

static Vector3 GetEntityBoundingMins(int32_t entityHandle) {
	return __s2sdk_GetEntityBoundingMins(entityHandle);
}

extern Vector3 (*__s2sdk_GetEntityCenter)(int32_t);

static Vector3 GetEntityCenter(int32_t entityHandle) {
	return __s2sdk_GetEntityCenter(entityHandle);
}

extern void (*__s2sdk_TeleportEntity)(int32_t, Vector3*, Vector3*, Vector3*);

static void TeleportEntity(int32_t entityHandle, Vector3* origin, Vector3* angles, Vector3* velocity) {
	__s2sdk_TeleportEntity(entityHandle, origin, angles, velocity);
}

extern void (*__s2sdk_ApplyAbsVelocityImpulseToEntity)(int32_t, Vector3*);

static void ApplyAbsVelocityImpulseToEntity(int32_t entityHandle, Vector3* vecImpulse) {
	__s2sdk_ApplyAbsVelocityImpulseToEntity(entityHandle, vecImpulse);
}

extern void (*__s2sdk_ApplyLocalAngularVelocityImpulseToEntity)(int32_t, Vector3*);

static void ApplyLocalAngularVelocityImpulseToEntity(int32_t entityHandle, Vector3* angImpulse) {
	__s2sdk_ApplyLocalAngularVelocityImpulseToEntity(entityHandle, angImpulse);
}

extern void (*__s2sdk_AcceptEntityInput)(int32_t, String*, int32_t, int32_t, Variant*, int32_t, int32_t);

static void AcceptEntityInput(int32_t entityHandle, String* inputName, int32_t activatorHandle, int32_t callerHandle, Variant* value, int32_t type_, int32_t outputId) {
	__s2sdk_AcceptEntityInput(entityHandle, inputName, activatorHandle, callerHandle, value, type_, outputId);
}

extern void (*__s2sdk_ConnectEntityOutput)(int32_t, String*, String*);

static void ConnectEntityOutput(int32_t entityHandle, String* output, String* functionName) {
	__s2sdk_ConnectEntityOutput(entityHandle, output, functionName);
}

extern void (*__s2sdk_DisconnectEntityOutput)(int32_t, String*, String*);

static void DisconnectEntityOutput(int32_t entityHandle, String* output, String* functionName) {
	__s2sdk_DisconnectEntityOutput(entityHandle, output, functionName);
}

extern void (*__s2sdk_DisconnectEntityRedirectedOutput)(int32_t, String*, String*, int32_t);

static void DisconnectEntityRedirectedOutput(int32_t entityHandle, String* output, String* functionName, int32_t targetHandle) {
	__s2sdk_DisconnectEntityRedirectedOutput(entityHandle, output, functionName, targetHandle);
}

extern void (*__s2sdk_FireEntityOutput)(int32_t, String*, int32_t, int32_t, Variant*, int32_t, float);

static void FireEntityOutput(int32_t entityHandle, String* outputName, int32_t activatorHandle, int32_t callerHandle, Variant* value, int32_t type_, float delay) {
	__s2sdk_FireEntityOutput(entityHandle, outputName, activatorHandle, callerHandle, value, type_, delay);
}

extern void (*__s2sdk_RedirectEntityOutput)(int32_t, String*, String*, int32_t);

static void RedirectEntityOutput(int32_t entityHandle, String* output, String* functionName, int32_t targetHandle) {
	__s2sdk_RedirectEntityOutput(entityHandle, output, functionName, targetHandle);
}

extern void (*__s2sdk_FollowEntity)(int32_t, int32_t, bool);

static void FollowEntity(int32_t entityHandle, int32_t attachmentHandle, bool boneMerge) {
	__s2sdk_FollowEntity(entityHandle, attachmentHandle, boneMerge);
}

extern void (*__s2sdk_FollowEntityMerge)(int32_t, int32_t, String*);

static void FollowEntityMerge(int32_t entityHandle, int32_t attachmentHandle, String* boneOrAttachName) {
	__s2sdk_FollowEntityMerge(entityHandle, attachmentHandle, boneOrAttachName);
}

extern int32_t (*__s2sdk_TakeEntityDamage)(int32_t, int32_t, int32_t, Vector3*, Vector3*, float, int32_t);

static int32_t TakeEntityDamage(int32_t entityHandle, int32_t inflictorHandle, int32_t attackerHandle, Vector3* force, Vector3* hitPos, float damage, int32_t damageTypes) {
	return __s2sdk_TakeEntityDamage(entityHandle, inflictorHandle, attackerHandle, force, hitPos, damage, damageTypes);
}

extern float (*__s2sdk_GetEntityAttributeFloatValue)(int32_t, String*, float);

static float GetEntityAttributeFloatValue(int32_t entityHandle, String* name, float defaultValue) {
	return __s2sdk_GetEntityAttributeFloatValue(entityHandle, name, defaultValue);
}

extern int32_t (*__s2sdk_GetEntityAttributeIntValue)(int32_t, String*, int32_t);

static int32_t GetEntityAttributeIntValue(int32_t entityHandle, String* name, int32_t defaultValue) {
	return __s2sdk_GetEntityAttributeIntValue(entityHandle, name, defaultValue);
}

extern void (*__s2sdk_SetEntityAttributeFloatValue)(int32_t, String*, float);

static void SetEntityAttributeFloatValue(int32_t entityHandle, String* name, float value) {
	__s2sdk_SetEntityAttributeFloatValue(entityHandle, name, value);
}

extern void (*__s2sdk_SetEntityAttributeIntValue)(int32_t, String*, int32_t);

static void SetEntityAttributeIntValue(int32_t entityHandle, String* name, int32_t value) {
	__s2sdk_SetEntityAttributeIntValue(entityHandle, name, value);
}

extern void (*__s2sdk_DeleteEntityAttribute)(int32_t, String*);

static void DeleteEntityAttribute(int32_t entityHandle, String* name) {
	__s2sdk_DeleteEntityAttribute(entityHandle, name);
}

extern bool (*__s2sdk_HasEntityAttribute)(int32_t, String*);

static bool HasEntityAttribute(int32_t entityHandle, String* name) {
	return __s2sdk_HasEntityAttribute(entityHandle, name);
}

