#pragma once

#include "s2sdk.h"

static int32_t EntPointerToPlayerSlot(uintptr_t entity) {
	typedef int32_t (*EntPointerToPlayerSlotFn)(uintptr_t);
	static EntPointerToPlayerSlotFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.EntPointerToPlayerSlot", (void**)&__func);
	return __func(entity);
}

static uintptr_t PlayerSlotToEntPointer(int32_t playerSlot) {
	typedef uintptr_t (*PlayerSlotToEntPointerFn)(int32_t);
	static PlayerSlotToEntPointerFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PlayerSlotToEntPointer", (void**)&__func);
	return __func(playerSlot);
}

static int32_t PlayerSlotToEntHandle(int32_t playerSlot) {
	typedef int32_t (*PlayerSlotToEntHandleFn)(int32_t);
	static PlayerSlotToEntHandleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PlayerSlotToEntHandle", (void**)&__func);
	return __func(playerSlot);
}

static uintptr_t PlayerSlotToClientPtr(int32_t playerSlot) {
	typedef uintptr_t (*PlayerSlotToClientPtrFn)(int32_t);
	static PlayerSlotToClientPtrFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PlayerSlotToClientPtr", (void**)&__func);
	return __func(playerSlot);
}

static int32_t ClientPtrToPlayerSlot(uintptr_t client) {
	typedef int32_t (*ClientPtrToPlayerSlotFn)(uintptr_t);
	static ClientPtrToPlayerSlotFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.ClientPtrToPlayerSlot", (void**)&__func);
	return __func(client);
}

static int32_t PlayerSlotToClientIndex(int32_t playerSlot) {
	typedef int32_t (*PlayerSlotToClientIndexFn)(int32_t);
	static PlayerSlotToClientIndexFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PlayerSlotToClientIndex", (void**)&__func);
	return __func(playerSlot);
}

static int32_t ClientIndexToPlayerSlot(int32_t clientIndex) {
	typedef int32_t (*ClientIndexToPlayerSlotFn)(int32_t);
	static ClientIndexToPlayerSlotFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.ClientIndexToPlayerSlot", (void**)&__func);
	return __func(clientIndex);
}

static int32_t PlayerServicesToPlayerSlot(uintptr_t service) {
	typedef int32_t (*PlayerServicesToPlayerSlotFn)(uintptr_t);
	static PlayerServicesToPlayerSlotFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PlayerServicesToPlayerSlot", (void**)&__func);
	return __func(service);
}

static String GetClientAuthId(int32_t playerSlot) {
	typedef String (*GetClientAuthIdFn)(int32_t);
	static GetClientAuthIdFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientAuthId", (void**)&__func);
	return __func(playerSlot);
}

static uint32_t GetClientAccountId(int32_t playerSlot) {
	typedef uint32_t (*GetClientAccountIdFn)(int32_t);
	static GetClientAccountIdFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientAccountId", (void**)&__func);
	return __func(playerSlot);
}

static uint64_t GetClientSteamID64(int32_t playerSlot) {
	typedef uint64_t (*GetClientSteamID64Fn)(int32_t);
	static GetClientSteamID64Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientSteamID64", (void**)&__func);
	return __func(playerSlot);
}

static String GetClientIp(int32_t playerSlot) {
	typedef String (*GetClientIpFn)(int32_t);
	static GetClientIpFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientIp", (void**)&__func);
	return __func(playerSlot);
}

static String GetClientLanguage(int32_t playerSlot) {
	typedef String (*GetClientLanguageFn)(int32_t);
	static GetClientLanguageFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientLanguage", (void**)&__func);
	return __func(playerSlot);
}

static String GetClientOS(int32_t playerSlot) {
	typedef String (*GetClientOSFn)(int32_t);
	static GetClientOSFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientOS", (void**)&__func);
	return __func(playerSlot);
}

static String GetClientName(int32_t playerSlot) {
	typedef String (*GetClientNameFn)(int32_t);
	static GetClientNameFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientName", (void**)&__func);
	return __func(playerSlot);
}

static float GetClientTime(int32_t playerSlot) {
	typedef float (*GetClientTimeFn)(int32_t);
	static GetClientTimeFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientTime", (void**)&__func);
	return __func(playerSlot);
}

static float GetClientLatency(int32_t playerSlot) {
	typedef float (*GetClientLatencyFn)(int32_t);
	static GetClientLatencyFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientLatency", (void**)&__func);
	return __func(playerSlot);
}

static uint64_t GetUserFlagBits(int32_t playerSlot) {
	typedef uint64_t (*GetUserFlagBitsFn)(int32_t);
	static GetUserFlagBitsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetUserFlagBits", (void**)&__func);
	return __func(playerSlot);
}

static void SetUserFlagBits(int32_t playerSlot, uint64_t flags) {
	typedef void (*SetUserFlagBitsFn)(int32_t, uint64_t);
	static SetUserFlagBitsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetUserFlagBits", (void**)&__func);
	__func(playerSlot, flags);
}

static void AddUserFlags(int32_t playerSlot, uint64_t flags) {
	typedef void (*AddUserFlagsFn)(int32_t, uint64_t);
	static AddUserFlagsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.AddUserFlags", (void**)&__func);
	__func(playerSlot, flags);
}

static void RemoveUserFlags(int32_t playerSlot, uint64_t flags) {
	typedef void (*RemoveUserFlagsFn)(int32_t, uint64_t);
	static RemoveUserFlagsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.RemoveUserFlags", (void**)&__func);
	__func(playerSlot, flags);
}

static bool IsClientAuthorized(int32_t playerSlot) {
	typedef bool (*IsClientAuthorizedFn)(int32_t);
	static IsClientAuthorizedFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.IsClientAuthorized", (void**)&__func);
	return __func(playerSlot);
}

static bool IsClientConnected(int32_t playerSlot) {
	typedef bool (*IsClientConnectedFn)(int32_t);
	static IsClientConnectedFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.IsClientConnected", (void**)&__func);
	return __func(playerSlot);
}

static bool IsClientInGame(int32_t playerSlot) {
	typedef bool (*IsClientInGameFn)(int32_t);
	static IsClientInGameFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.IsClientInGame", (void**)&__func);
	return __func(playerSlot);
}

static bool IsClientSourceTV(int32_t playerSlot) {
	typedef bool (*IsClientSourceTVFn)(int32_t);
	static IsClientSourceTVFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.IsClientSourceTV", (void**)&__func);
	return __func(playerSlot);
}

static bool IsClientAlive(int32_t playerSlot) {
	typedef bool (*IsClientAliveFn)(int32_t);
	static IsClientAliveFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.IsClientAlive", (void**)&__func);
	return __func(playerSlot);
}

static bool IsFakeClient(int32_t playerSlot) {
	typedef bool (*IsFakeClientFn)(int32_t);
	static IsFakeClientFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.IsFakeClient", (void**)&__func);
	return __func(playerSlot);
}

static int32_t GetClientMoveType(int32_t playerSlot) {
	typedef int32_t (*GetClientMoveTypeFn)(int32_t);
	static GetClientMoveTypeFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientMoveType", (void**)&__func);
	return __func(playerSlot);
}

static void SetClientMoveType(int32_t playerSlot, int32_t moveType) {
	typedef void (*SetClientMoveTypeFn)(int32_t, int32_t);
	static SetClientMoveTypeFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetClientMoveType", (void**)&__func);
	__func(playerSlot, moveType);
}

static float GetClientGravity(int32_t playerSlot) {
	typedef float (*GetClientGravityFn)(int32_t);
	static GetClientGravityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientGravity", (void**)&__func);
	return __func(playerSlot);
}

static void SetClientGravity(int32_t playerSlot, float gravity) {
	typedef void (*SetClientGravityFn)(int32_t, float);
	static SetClientGravityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetClientGravity", (void**)&__func);
	__func(playerSlot, gravity);
}

static int32_t GetClientFlags(int32_t playerSlot) {
	typedef int32_t (*GetClientFlagsFn)(int32_t);
	static GetClientFlagsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientFlags", (void**)&__func);
	return __func(playerSlot);
}

static void SetClientFlags(int32_t playerSlot, int32_t flags) {
	typedef void (*SetClientFlagsFn)(int32_t, int32_t);
	static SetClientFlagsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetClientFlags", (void**)&__func);
	__func(playerSlot, flags);
}

static int32_t GetClientRenderColor(int32_t playerSlot) {
	typedef int32_t (*GetClientRenderColorFn)(int32_t);
	static GetClientRenderColorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientRenderColor", (void**)&__func);
	return __func(playerSlot);
}

static void SetClientRenderColor(int32_t playerSlot, int32_t color) {
	typedef void (*SetClientRenderColorFn)(int32_t, int32_t);
	static SetClientRenderColorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetClientRenderColor", (void**)&__func);
	__func(playerSlot, color);
}

static uint8_t GetClientRenderMode(int32_t playerSlot) {
	typedef uint8_t (*GetClientRenderModeFn)(int32_t);
	static GetClientRenderModeFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientRenderMode", (void**)&__func);
	return __func(playerSlot);
}

static void SetClientRenderMode(int32_t playerSlot, uint8_t renderMode) {
	typedef void (*SetClientRenderModeFn)(int32_t, uint8_t);
	static SetClientRenderModeFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetClientRenderMode", (void**)&__func);
	__func(playerSlot, renderMode);
}

static int32_t GetClientMass(int32_t playerSlot) {
	typedef int32_t (*GetClientMassFn)(int32_t);
	static GetClientMassFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientMass", (void**)&__func);
	return __func(playerSlot);
}

static void SetClientMass(int32_t playerSlot, int32_t mass) {
	typedef void (*SetClientMassFn)(int32_t, int32_t);
	static SetClientMassFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetClientMass", (void**)&__func);
	__func(playerSlot, mass);
}

static float GetClientFriction(int32_t playerSlot) {
	typedef float (*GetClientFrictionFn)(int32_t);
	static GetClientFrictionFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientFriction", (void**)&__func);
	return __func(playerSlot);
}

static void SetClientFriction(int32_t playerSlot, float friction) {
	typedef void (*SetClientFrictionFn)(int32_t, float);
	static SetClientFrictionFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetClientFriction", (void**)&__func);
	__func(playerSlot, friction);
}

static int32_t GetClientHealth(int32_t playerSlot) {
	typedef int32_t (*GetClientHealthFn)(int32_t);
	static GetClientHealthFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientHealth", (void**)&__func);
	return __func(playerSlot);
}

static void SetClientHealth(int32_t playerSlot, int32_t health) {
	typedef void (*SetClientHealthFn)(int32_t, int32_t);
	static SetClientHealthFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetClientHealth", (void**)&__func);
	__func(playerSlot, health);
}

static int32_t GetClientMaxHealth(int32_t playerSlot) {
	typedef int32_t (*GetClientMaxHealthFn)(int32_t);
	static GetClientMaxHealthFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientMaxHealth", (void**)&__func);
	return __func(playerSlot);
}

static void SetClientMaxHealth(int32_t playerSlot, int32_t maxHealth) {
	typedef void (*SetClientMaxHealthFn)(int32_t, int32_t);
	static SetClientMaxHealthFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetClientMaxHealth", (void**)&__func);
	__func(playerSlot, maxHealth);
}

static int32_t GetClientTeam(int32_t playerSlot) {
	typedef int32_t (*GetClientTeamFn)(int32_t);
	static GetClientTeamFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientTeam", (void**)&__func);
	return __func(playerSlot);
}

static void SetClientTeam(int32_t playerSlot, int32_t team) {
	typedef void (*SetClientTeamFn)(int32_t, int32_t);
	static SetClientTeamFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetClientTeam", (void**)&__func);
	__func(playerSlot, team);
}

static Vector3 GetClientAbsOrigin(int32_t playerSlot) {
	typedef Vector3 (*GetClientAbsOriginFn)(int32_t);
	static GetClientAbsOriginFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientAbsOrigin", (void**)&__func);
	return __func(playerSlot);
}

static void SetClientAbsOrigin(int32_t playerSlot, Vector3* origin) {
	typedef void (*SetClientAbsOriginFn)(int32_t, Vector3*);
	static SetClientAbsOriginFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetClientAbsOrigin", (void**)&__func);
	__func(playerSlot, origin);
}

static float GetClientAbsScale(int32_t playerSlot) {
	typedef float (*GetClientAbsScaleFn)(int32_t);
	static GetClientAbsScaleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientAbsScale", (void**)&__func);
	return __func(playerSlot);
}

static void SetClientAbsScale(int32_t playerSlot, float scale) {
	typedef void (*SetClientAbsScaleFn)(int32_t, float);
	static SetClientAbsScaleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetClientAbsScale", (void**)&__func);
	__func(playerSlot, scale);
}

static Vector3 GetClientAbsAngles(int32_t playerSlot) {
	typedef Vector3 (*GetClientAbsAnglesFn)(int32_t);
	static GetClientAbsAnglesFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientAbsAngles", (void**)&__func);
	return __func(playerSlot);
}

static void SetClientAbsAngles(int32_t playerSlot, Vector3* angle) {
	typedef void (*SetClientAbsAnglesFn)(int32_t, Vector3*);
	static SetClientAbsAnglesFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetClientAbsAngles", (void**)&__func);
	__func(playerSlot, angle);
}

static Vector3 GetClientLocalOrigin(int32_t playerSlot) {
	typedef Vector3 (*GetClientLocalOriginFn)(int32_t);
	static GetClientLocalOriginFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientLocalOrigin", (void**)&__func);
	return __func(playerSlot);
}

static void SetClientLocalOrigin(int32_t playerSlot, Vector3* origin) {
	typedef void (*SetClientLocalOriginFn)(int32_t, Vector3*);
	static SetClientLocalOriginFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetClientLocalOrigin", (void**)&__func);
	__func(playerSlot, origin);
}

static float GetClientLocalScale(int32_t playerSlot) {
	typedef float (*GetClientLocalScaleFn)(int32_t);
	static GetClientLocalScaleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientLocalScale", (void**)&__func);
	return __func(playerSlot);
}

static void SetClientLocalScale(int32_t playerSlot, float scale) {
	typedef void (*SetClientLocalScaleFn)(int32_t, float);
	static SetClientLocalScaleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetClientLocalScale", (void**)&__func);
	__func(playerSlot, scale);
}

static Vector3 GetClientLocalAngles(int32_t playerSlot) {
	typedef Vector3 (*GetClientLocalAnglesFn)(int32_t);
	static GetClientLocalAnglesFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientLocalAngles", (void**)&__func);
	return __func(playerSlot);
}

static void SetClientLocalAngles(int32_t playerSlot, Vector3* angle) {
	typedef void (*SetClientLocalAnglesFn)(int32_t, Vector3*);
	static SetClientLocalAnglesFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetClientLocalAngles", (void**)&__func);
	__func(playerSlot, angle);
}

static Vector3 GetClientAbsVelocity(int32_t playerSlot) {
	typedef Vector3 (*GetClientAbsVelocityFn)(int32_t);
	static GetClientAbsVelocityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientAbsVelocity", (void**)&__func);
	return __func(playerSlot);
}

static void SetClientAbsVelocity(int32_t playerSlot, Vector3* velocity) {
	typedef void (*SetClientAbsVelocityFn)(int32_t, Vector3*);
	static SetClientAbsVelocityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetClientAbsVelocity", (void**)&__func);
	__func(playerSlot, velocity);
}

static Vector3 GetClientBaseVelocity(int32_t playerSlot) {
	typedef Vector3 (*GetClientBaseVelocityFn)(int32_t);
	static GetClientBaseVelocityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientBaseVelocity", (void**)&__func);
	return __func(playerSlot);
}

static Vector3 GetClientLocalAngVelocity(int32_t playerSlot) {
	typedef Vector3 (*GetClientLocalAngVelocityFn)(int32_t);
	static GetClientLocalAngVelocityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientLocalAngVelocity", (void**)&__func);
	return __func(playerSlot);
}

static Vector3 GetClientAngVelocity(int32_t playerSlot) {
	typedef Vector3 (*GetClientAngVelocityFn)(int32_t);
	static GetClientAngVelocityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientAngVelocity", (void**)&__func);
	return __func(playerSlot);
}

static void SetClientAngVelocity(int32_t playerSlot, Vector3* velocity) {
	typedef void (*SetClientAngVelocityFn)(int32_t, Vector3*);
	static SetClientAngVelocityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetClientAngVelocity", (void**)&__func);
	__func(playerSlot, velocity);
}

static Vector3 GetClientLocalVelocity(int32_t playerSlot) {
	typedef Vector3 (*GetClientLocalVelocityFn)(int32_t);
	static GetClientLocalVelocityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientLocalVelocity", (void**)&__func);
	return __func(playerSlot);
}

static Vector3 GetClientAngRotation(int32_t playerSlot) {
	typedef Vector3 (*GetClientAngRotationFn)(int32_t);
	static GetClientAngRotationFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientAngRotation", (void**)&__func);
	return __func(playerSlot);
}

static void SetClientAngRotation(int32_t playerSlot, Vector3* rotation) {
	typedef void (*SetClientAngRotationFn)(int32_t, Vector3*);
	static SetClientAngRotationFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetClientAngRotation", (void**)&__func);
	__func(playerSlot, rotation);
}

static Vector3 TransformPointClientToWorld(int32_t playerSlot, Vector3* point) {
	typedef Vector3 (*TransformPointClientToWorldFn)(int32_t, Vector3*);
	static TransformPointClientToWorldFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.TransformPointClientToWorld", (void**)&__func);
	return __func(playerSlot, point);
}

static Vector3 TransformPointWorldToClient(int32_t playerSlot, Vector3* point) {
	typedef Vector3 (*TransformPointWorldToClientFn)(int32_t, Vector3*);
	static TransformPointWorldToClientFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.TransformPointWorldToClient", (void**)&__func);
	return __func(playerSlot, point);
}

static Vector3 GetClientEyePosition(int32_t playerSlot) {
	typedef Vector3 (*GetClientEyePositionFn)(int32_t);
	static GetClientEyePositionFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientEyePosition", (void**)&__func);
	return __func(playerSlot);
}

static Vector3 GetClientEyeAngles(int32_t playerSlot) {
	typedef Vector3 (*GetClientEyeAnglesFn)(int32_t);
	static GetClientEyeAnglesFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientEyeAngles", (void**)&__func);
	return __func(playerSlot);
}

static void SetClientForwardVector(int32_t playerSlot, Vector3* forward) {
	typedef void (*SetClientForwardVectorFn)(int32_t, Vector3*);
	static SetClientForwardVectorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetClientForwardVector", (void**)&__func);
	__func(playerSlot, forward);
}

static Vector3 GetClientForwardVector(int32_t playerSlot) {
	typedef Vector3 (*GetClientForwardVectorFn)(int32_t);
	static GetClientForwardVectorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientForwardVector", (void**)&__func);
	return __func(playerSlot);
}

static Vector3 GetClientLeftVector(int32_t playerSlot) {
	typedef Vector3 (*GetClientLeftVectorFn)(int32_t);
	static GetClientLeftVectorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientLeftVector", (void**)&__func);
	return __func(playerSlot);
}

static Vector3 GetClientRightVector(int32_t playerSlot) {
	typedef Vector3 (*GetClientRightVectorFn)(int32_t);
	static GetClientRightVectorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientRightVector", (void**)&__func);
	return __func(playerSlot);
}

static Vector3 GetClientUpVector(int32_t playerSlot) {
	typedef Vector3 (*GetClientUpVectorFn)(int32_t);
	static GetClientUpVectorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientUpVector", (void**)&__func);
	return __func(playerSlot);
}

static Matrix4x4 GetClientTransform(int32_t playerSlot) {
	typedef Matrix4x4 (*GetClientTransformFn)(int32_t);
	static GetClientTransformFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientTransform", (void**)&__func);
	return __func(playerSlot);
}

static String GetClientModel(int32_t playerSlot) {
	typedef String (*GetClientModelFn)(int32_t);
	static GetClientModelFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientModel", (void**)&__func);
	return __func(playerSlot);
}

static void SetClientModel(int32_t playerSlot, String* model) {
	typedef void (*SetClientModelFn)(int32_t, String*);
	static SetClientModelFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetClientModel", (void**)&__func);
	__func(playerSlot, model);
}

static float GetClientWaterLevel(int32_t playerSlot) {
	typedef float (*GetClientWaterLevelFn)(int32_t);
	static GetClientWaterLevelFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientWaterLevel", (void**)&__func);
	return __func(playerSlot);
}

static int32_t GetClientGroundEntity(int32_t playerSlot) {
	typedef int32_t (*GetClientGroundEntityFn)(int32_t);
	static GetClientGroundEntityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientGroundEntity", (void**)&__func);
	return __func(playerSlot);
}

static int32_t GetClientEffects(int32_t playerSlot) {
	typedef int32_t (*GetClientEffectsFn)(int32_t);
	static GetClientEffectsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientEffects", (void**)&__func);
	return __func(playerSlot);
}

static void AddClientEffects(int32_t playerSlot, int32_t effects) {
	typedef void (*AddClientEffectsFn)(int32_t, int32_t);
	static AddClientEffectsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.AddClientEffects", (void**)&__func);
	__func(playerSlot, effects);
}

static void RemoveClientEffects(int32_t playerSlot, int32_t effects) {
	typedef void (*RemoveClientEffectsFn)(int32_t, int32_t);
	static RemoveClientEffectsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.RemoveClientEffects", (void**)&__func);
	__func(playerSlot, effects);
}

static Vector3 GetClientBoundingMaxs(int32_t playerSlot) {
	typedef Vector3 (*GetClientBoundingMaxsFn)(int32_t);
	static GetClientBoundingMaxsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientBoundingMaxs", (void**)&__func);
	return __func(playerSlot);
}

static Vector3 GetClientBoundingMins(int32_t playerSlot) {
	typedef Vector3 (*GetClientBoundingMinsFn)(int32_t);
	static GetClientBoundingMinsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientBoundingMins", (void**)&__func);
	return __func(playerSlot);
}

static Vector3 GetClientCenter(int32_t playerSlot) {
	typedef Vector3 (*GetClientCenterFn)(int32_t);
	static GetClientCenterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientCenter", (void**)&__func);
	return __func(playerSlot);
}

static void TeleportClient(int32_t playerSlot, uintptr_t origin, uintptr_t angles, uintptr_t velocity) {
	typedef void (*TeleportClientFn)(int32_t, uintptr_t, uintptr_t, uintptr_t);
	static TeleportClientFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.TeleportClient", (void**)&__func);
	__func(playerSlot, origin, angles, velocity);
}

static void ApplyAbsVelocityImpulseToClient(int32_t playerSlot, Vector3* vecImpulse) {
	typedef void (*ApplyAbsVelocityImpulseToClientFn)(int32_t, Vector3*);
	static ApplyAbsVelocityImpulseToClientFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.ApplyAbsVelocityImpulseToClient", (void**)&__func);
	__func(playerSlot, vecImpulse);
}

static void ApplyLocalAngularVelocityImpulseToClient(int32_t playerSlot, Vector3* angImpulse) {
	typedef void (*ApplyLocalAngularVelocityImpulseToClientFn)(int32_t, Vector3*);
	static ApplyLocalAngularVelocityImpulseToClientFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.ApplyLocalAngularVelocityImpulseToClient", (void**)&__func);
	__func(playerSlot, angImpulse);
}

static void AcceptClientInput(int32_t playerSlot, String* inputName, int32_t activatorHandle, int32_t callerHandle, Variant* value, int32_t type, int32_t outputId) {
	typedef void (*AcceptClientInputFn)(int32_t, String*, int32_t, int32_t, Variant*, int32_t, int32_t);
	static AcceptClientInputFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.AcceptClientInput", (void**)&__func);
	__func(playerSlot, inputName, activatorHandle, callerHandle, value, type, outputId);
}

static void ConnectClientOutput(int32_t playerSlot, String* output, String* functionName) {
	typedef void (*ConnectClientOutputFn)(int32_t, String*, String*);
	static ConnectClientOutputFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.ConnectClientOutput", (void**)&__func);
	__func(playerSlot, output, functionName);
}

static void DisconnectClientOutput(int32_t playerSlot, String* output, String* functionName) {
	typedef void (*DisconnectClientOutputFn)(int32_t, String*, String*);
	static DisconnectClientOutputFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.DisconnectClientOutput", (void**)&__func);
	__func(playerSlot, output, functionName);
}

static void DisconnectClientRedirectedOutput(int32_t playerSlot, String* output, String* functionName, int32_t targetHandle) {
	typedef void (*DisconnectClientRedirectedOutputFn)(int32_t, String*, String*, int32_t);
	static DisconnectClientRedirectedOutputFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.DisconnectClientRedirectedOutput", (void**)&__func);
	__func(playerSlot, output, functionName, targetHandle);
}

static void FireClientOutput(int32_t playerSlot, String* outputName, int32_t activatorHandle, int32_t callerHandle, Variant* value, int32_t type, float delay) {
	typedef void (*FireClientOutputFn)(int32_t, String*, int32_t, int32_t, Variant*, int32_t, float);
	static FireClientOutputFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.FireClientOutput", (void**)&__func);
	__func(playerSlot, outputName, activatorHandle, callerHandle, value, type, delay);
}

static void RedirectClientOutput(int32_t playerSlot, String* output, String* functionName, int32_t targetHandle) {
	typedef void (*RedirectClientOutputFn)(int32_t, String*, String*, int32_t);
	static RedirectClientOutputFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.RedirectClientOutput", (void**)&__func);
	__func(playerSlot, output, functionName, targetHandle);
}

static void FollowClient(int32_t playerSlot, int32_t attachmentHandle, bool boneMerge) {
	typedef void (*FollowClientFn)(int32_t, int32_t, bool);
	static FollowClientFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.FollowClient", (void**)&__func);
	__func(playerSlot, attachmentHandle, boneMerge);
}

static void FollowClientMerge(int32_t playerSlot, int32_t attachmentHandle, String* boneOrAttachName) {
	typedef void (*FollowClientMergeFn)(int32_t, int32_t, String*);
	static FollowClientMergeFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.FollowClientMerge", (void**)&__func);
	__func(playerSlot, attachmentHandle, boneOrAttachName);
}

static int32_t TakeClientDamage(int32_t playerSlot, int32_t inflictorSlot, int32_t attackerSlot, Vector3* force, Vector3* hitPos, float damage, int32_t damageTypes) {
	typedef int32_t (*TakeClientDamageFn)(int32_t, int32_t, int32_t, Vector3*, Vector3*, float, int32_t);
	static TakeClientDamageFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.TakeClientDamage", (void**)&__func);
	return __func(playerSlot, inflictorSlot, attackerSlot, force, hitPos, damage, damageTypes);
}

static uintptr_t GetClientPawn(int32_t playerSlot) {
	typedef uintptr_t (*GetClientPawnFn)(int32_t);
	static GetClientPawnFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientPawn", (void**)&__func);
	return __func(playerSlot);
}

static Vector ProcessTargetString(int32_t caller, String* target) {
	typedef Vector (*ProcessTargetStringFn)(int32_t, String*);
	static ProcessTargetStringFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.ProcessTargetString", (void**)&__func);
	return __func(caller, target);
}

static void SwitchClientTeam(int32_t playerSlot, int32_t team) {
	typedef void (*SwitchClientTeamFn)(int32_t, int32_t);
	static SwitchClientTeamFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SwitchClientTeam", (void**)&__func);
	__func(playerSlot, team);
}

static void RespawnClient(int32_t playerSlot) {
	typedef void (*RespawnClientFn)(int32_t);
	static RespawnClientFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.RespawnClient", (void**)&__func);
	__func(playerSlot);
}

static void ForcePlayerSuicide(int32_t playerSlot, bool explode, bool force) {
	typedef void (*ForcePlayerSuicideFn)(int32_t, bool, bool);
	static ForcePlayerSuicideFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.ForcePlayerSuicide", (void**)&__func);
	__func(playerSlot, explode, force);
}

static void KickClient(int32_t playerSlot) {
	typedef void (*KickClientFn)(int32_t);
	static KickClientFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.KickClient", (void**)&__func);
	__func(playerSlot);
}

static void BanClient(int32_t playerSlot, float duration, bool kick) {
	typedef void (*BanClientFn)(int32_t, float, bool);
	static BanClientFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.BanClient", (void**)&__func);
	__func(playerSlot, duration, kick);
}

static void BanIdentity(uint64_t steamId, float duration, bool kick) {
	typedef void (*BanIdentityFn)(uint64_t, float, bool);
	static BanIdentityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.BanIdentity", (void**)&__func);
	__func(steamId, duration, kick);
}

static int32_t GetClientActiveWeapon(int32_t playerSlot) {
	typedef int32_t (*GetClientActiveWeaponFn)(int32_t);
	static GetClientActiveWeaponFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientActiveWeapon", (void**)&__func);
	return __func(playerSlot);
}

static Vector GetClientWeapons(int32_t playerSlot) {
	typedef Vector (*GetClientWeaponsFn)(int32_t);
	static GetClientWeaponsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientWeapons", (void**)&__func);
	return __func(playerSlot);
}

static void RemoveWeapons(int32_t playerSlot, bool removeSuit) {
	typedef void (*RemoveWeaponsFn)(int32_t, bool);
	static RemoveWeaponsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.RemoveWeapons", (void**)&__func);
	__func(playerSlot, removeSuit);
}

static void DropWeapon(int32_t playerSlot, int32_t weaponHandle, Vector3* target, Vector3* velocity) {
	typedef void (*DropWeaponFn)(int32_t, int32_t, Vector3*, Vector3*);
	static DropWeaponFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.DropWeapon", (void**)&__func);
	__func(playerSlot, weaponHandle, target, velocity);
}

static void SelectWeapon(int32_t playerSlot, int32_t weaponHandle) {
	typedef void (*SelectWeaponFn)(int32_t, int32_t);
	static SelectWeaponFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SelectWeapon", (void**)&__func);
	__func(playerSlot, weaponHandle);
}

static void SwitchWeapon(int32_t playerSlot, int32_t weaponHandle) {
	typedef void (*SwitchWeaponFn)(int32_t, int32_t);
	static SwitchWeaponFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SwitchWeapon", (void**)&__func);
	__func(playerSlot, weaponHandle);
}

static void RemoveWeapon(int32_t playerSlot, int32_t weaponHandle) {
	typedef void (*RemoveWeaponFn)(int32_t, int32_t);
	static RemoveWeaponFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.RemoveWeapon", (void**)&__func);
	__func(playerSlot, weaponHandle);
}

static int32_t GiveNamedItem(int32_t playerSlot, String* itemName) {
	typedef int32_t (*GiveNamedItemFn)(int32_t, String*);
	static GiveNamedItemFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GiveNamedItem", (void**)&__func);
	return __func(playerSlot, itemName);
}

static uint64_t GetClientButtons(int32_t playerSlot, int32_t buttonIndex) {
	typedef uint64_t (*GetClientButtonsFn)(int32_t, int32_t);
	static GetClientButtonsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientButtons", (void**)&__func);
	return __func(playerSlot, buttonIndex);
}

static int32_t GetClientArmor(int32_t playerSlot) {
	typedef int32_t (*GetClientArmorFn)(int32_t);
	static GetClientArmorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientArmor", (void**)&__func);
	return __func(playerSlot);
}

static void SetClientArmor(int32_t playerSlot, int32_t armor) {
	typedef void (*SetClientArmorFn)(int32_t, int32_t);
	static SetClientArmorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetClientArmor", (void**)&__func);
	__func(playerSlot, armor);
}

static float GetClientSpeed(int32_t playerSlot) {
	typedef float (*GetClientSpeedFn)(int32_t);
	static GetClientSpeedFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientSpeed", (void**)&__func);
	return __func(playerSlot);
}

static void SetClientSpeed(int32_t playerSlot, float speed) {
	typedef void (*SetClientSpeedFn)(int32_t, float);
	static SetClientSpeedFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetClientSpeed", (void**)&__func);
	__func(playerSlot, speed);
}

static int32_t GetClientMoney(int32_t playerSlot) {
	typedef int32_t (*GetClientMoneyFn)(int32_t);
	static GetClientMoneyFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientMoney", (void**)&__func);
	return __func(playerSlot);
}

static void SetClientMoney(int32_t playerSlot, int32_t money) {
	typedef void (*SetClientMoneyFn)(int32_t, int32_t);
	static SetClientMoneyFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetClientMoney", (void**)&__func);
	__func(playerSlot, money);
}

static int32_t GetClientKills(int32_t playerSlot) {
	typedef int32_t (*GetClientKillsFn)(int32_t);
	static GetClientKillsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientKills", (void**)&__func);
	return __func(playerSlot);
}

static void SetClientKills(int32_t playerSlot, int32_t kills) {
	typedef void (*SetClientKillsFn)(int32_t, int32_t);
	static SetClientKillsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetClientKills", (void**)&__func);
	__func(playerSlot, kills);
}

static int32_t GetClientDeaths(int32_t playerSlot) {
	typedef int32_t (*GetClientDeathsFn)(int32_t);
	static GetClientDeathsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientDeaths", (void**)&__func);
	return __func(playerSlot);
}

static void SetClientDeaths(int32_t playerSlot, int32_t deaths) {
	typedef void (*SetClientDeathsFn)(int32_t, int32_t);
	static SetClientDeathsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetClientDeaths", (void**)&__func);
	__func(playerSlot, deaths);
}

static int32_t GetClientAssists(int32_t playerSlot) {
	typedef int32_t (*GetClientAssistsFn)(int32_t);
	static GetClientAssistsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientAssists", (void**)&__func);
	return __func(playerSlot);
}

static void SetClientAssists(int32_t playerSlot, int32_t assists) {
	typedef void (*SetClientAssistsFn)(int32_t, int32_t);
	static SetClientAssistsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetClientAssists", (void**)&__func);
	__func(playerSlot, assists);
}

static int32_t GetClientDamage(int32_t playerSlot) {
	typedef int32_t (*GetClientDamageFn)(int32_t);
	static GetClientDamageFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientDamage", (void**)&__func);
	return __func(playerSlot);
}

static void SetClientDamage(int32_t playerSlot, int32_t damage) {
	typedef void (*SetClientDamageFn)(int32_t, int32_t);
	static SetClientDamageFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetClientDamage", (void**)&__func);
	__func(playerSlot, damage);
}

