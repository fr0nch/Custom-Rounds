#pragma once

#include "shared.h"

extern int32_t (*__s2sdk_EntPointerToPlayerSlot)(uintptr_t);

static int32_t EntPointerToPlayerSlot(uintptr_t entity) {
	return __s2sdk_EntPointerToPlayerSlot(entity);
}

extern uintptr_t (*__s2sdk_PlayerSlotToEntPointer)(int32_t);

static uintptr_t PlayerSlotToEntPointer(int32_t playerSlot) {
	return __s2sdk_PlayerSlotToEntPointer(playerSlot);
}

extern int32_t (*__s2sdk_PlayerSlotToEntHandle)(int32_t);

static int32_t PlayerSlotToEntHandle(int32_t playerSlot) {
	return __s2sdk_PlayerSlotToEntHandle(playerSlot);
}

extern uintptr_t (*__s2sdk_PlayerSlotToClientPtr)(int32_t);

static uintptr_t PlayerSlotToClientPtr(int32_t playerSlot) {
	return __s2sdk_PlayerSlotToClientPtr(playerSlot);
}

extern int32_t (*__s2sdk_ClientPtrToPlayerSlot)(uintptr_t);

static int32_t ClientPtrToPlayerSlot(uintptr_t client) {
	return __s2sdk_ClientPtrToPlayerSlot(client);
}

extern int32_t (*__s2sdk_PlayerSlotToClientIndex)(int32_t);

static int32_t PlayerSlotToClientIndex(int32_t playerSlot) {
	return __s2sdk_PlayerSlotToClientIndex(playerSlot);
}

extern int32_t (*__s2sdk_ClientIndexToPlayerSlot)(int32_t);

static int32_t ClientIndexToPlayerSlot(int32_t clientIndex) {
	return __s2sdk_ClientIndexToPlayerSlot(clientIndex);
}

extern int32_t (*__s2sdk_PlayerServicesToPlayerSlot)(uintptr_t);

static int32_t PlayerServicesToPlayerSlot(uintptr_t service) {
	return __s2sdk_PlayerServicesToPlayerSlot(service);
}

extern String (*__s2sdk_GetClientAuthId)(int32_t);

static String GetClientAuthId(int32_t playerSlot) {
	return __s2sdk_GetClientAuthId(playerSlot);
}

extern uint32_t (*__s2sdk_GetClientAccountId)(int32_t);

static uint32_t GetClientAccountId(int32_t playerSlot) {
	return __s2sdk_GetClientAccountId(playerSlot);
}

extern uint64_t (*__s2sdk_GetClientSteamID64)(int32_t);

static uint64_t GetClientSteamID64(int32_t playerSlot) {
	return __s2sdk_GetClientSteamID64(playerSlot);
}

extern String (*__s2sdk_GetClientIp)(int32_t);

static String GetClientIp(int32_t playerSlot) {
	return __s2sdk_GetClientIp(playerSlot);
}

extern String (*__s2sdk_GetClientLanguage)(int32_t);

static String GetClientLanguage(int32_t playerSlot) {
	return __s2sdk_GetClientLanguage(playerSlot);
}

extern String (*__s2sdk_GetClientOS)(int32_t);

static String GetClientOS(int32_t playerSlot) {
	return __s2sdk_GetClientOS(playerSlot);
}

extern String (*__s2sdk_GetClientName)(int32_t);

static String GetClientName(int32_t playerSlot) {
	return __s2sdk_GetClientName(playerSlot);
}

extern float (*__s2sdk_GetClientTime)(int32_t);

static float GetClientTime(int32_t playerSlot) {
	return __s2sdk_GetClientTime(playerSlot);
}

extern float (*__s2sdk_GetClientLatency)(int32_t);

static float GetClientLatency(int32_t playerSlot) {
	return __s2sdk_GetClientLatency(playerSlot);
}

extern uint64_t (*__s2sdk_GetUserFlagBits)(int32_t);

static uint64_t GetUserFlagBits(int32_t playerSlot) {
	return __s2sdk_GetUserFlagBits(playerSlot);
}

extern void (*__s2sdk_SetUserFlagBits)(int32_t, uint64_t);

static void SetUserFlagBits(int32_t playerSlot, uint64_t flags) {
	__s2sdk_SetUserFlagBits(playerSlot, flags);
}

extern void (*__s2sdk_AddUserFlags)(int32_t, uint64_t);

static void AddUserFlags(int32_t playerSlot, uint64_t flags) {
	__s2sdk_AddUserFlags(playerSlot, flags);
}

extern void (*__s2sdk_RemoveUserFlags)(int32_t, uint64_t);

static void RemoveUserFlags(int32_t playerSlot, uint64_t flags) {
	__s2sdk_RemoveUserFlags(playerSlot, flags);
}

extern bool (*__s2sdk_IsClientAuthorized)(int32_t);

static bool IsClientAuthorized(int32_t playerSlot) {
	return __s2sdk_IsClientAuthorized(playerSlot);
}

extern bool (*__s2sdk_IsClientConnected)(int32_t);

static bool IsClientConnected(int32_t playerSlot) {
	return __s2sdk_IsClientConnected(playerSlot);
}

extern bool (*__s2sdk_IsClientInGame)(int32_t);

static bool IsClientInGame(int32_t playerSlot) {
	return __s2sdk_IsClientInGame(playerSlot);
}

extern bool (*__s2sdk_IsClientSourceTV)(int32_t);

static bool IsClientSourceTV(int32_t playerSlot) {
	return __s2sdk_IsClientSourceTV(playerSlot);
}

extern bool (*__s2sdk_IsClientAlive)(int32_t);

static bool IsClientAlive(int32_t playerSlot) {
	return __s2sdk_IsClientAlive(playerSlot);
}

extern bool (*__s2sdk_IsFakeClient)(int32_t);

static bool IsFakeClient(int32_t playerSlot) {
	return __s2sdk_IsFakeClient(playerSlot);
}

extern int32_t (*__s2sdk_GetClientMoveType)(int32_t);

static int32_t GetClientMoveType(int32_t playerSlot) {
	return __s2sdk_GetClientMoveType(playerSlot);
}

extern void (*__s2sdk_SetClientMoveType)(int32_t, int32_t);

static void SetClientMoveType(int32_t playerSlot, int32_t moveType) {
	__s2sdk_SetClientMoveType(playerSlot, moveType);
}

extern float (*__s2sdk_GetClientGravity)(int32_t);

static float GetClientGravity(int32_t playerSlot) {
	return __s2sdk_GetClientGravity(playerSlot);
}

extern void (*__s2sdk_SetClientGravity)(int32_t, float);

static void SetClientGravity(int32_t playerSlot, float gravity) {
	__s2sdk_SetClientGravity(playerSlot, gravity);
}

extern int32_t (*__s2sdk_GetClientFlags)(int32_t);

static int32_t GetClientFlags(int32_t playerSlot) {
	return __s2sdk_GetClientFlags(playerSlot);
}

extern void (*__s2sdk_SetClientFlags)(int32_t, int32_t);

static void SetClientFlags(int32_t playerSlot, int32_t flags) {
	__s2sdk_SetClientFlags(playerSlot, flags);
}

extern Vector4 (*__s2sdk_GetClientRenderColor)(int32_t);

static Vector4 GetClientRenderColor(int32_t playerSlot) {
	return __s2sdk_GetClientRenderColor(playerSlot);
}

extern void (*__s2sdk_SetClientRenderColor)(int32_t, Vector4*);

static void SetClientRenderColor(int32_t playerSlot, Vector4* color) {
	__s2sdk_SetClientRenderColor(playerSlot, color);
}

extern uint8_t (*__s2sdk_GetClientRenderMode)(int32_t);

static uint8_t GetClientRenderMode(int32_t playerSlot) {
	return __s2sdk_GetClientRenderMode(playerSlot);
}

extern void (*__s2sdk_SetClientRenderMode)(int32_t, uint8_t);

static void SetClientRenderMode(int32_t playerSlot, uint8_t renderMode) {
	__s2sdk_SetClientRenderMode(playerSlot, renderMode);
}

extern int32_t (*__s2sdk_GetClientMass)(int32_t);

static int32_t GetClientMass(int32_t playerSlot) {
	return __s2sdk_GetClientMass(playerSlot);
}

extern void (*__s2sdk_SetClientMass)(int32_t, int32_t);

static void SetClientMass(int32_t playerSlot, int32_t mass) {
	__s2sdk_SetClientMass(playerSlot, mass);
}

extern float (*__s2sdk_GetClientFriction)(int32_t);

static float GetClientFriction(int32_t playerSlot) {
	return __s2sdk_GetClientFriction(playerSlot);
}

extern void (*__s2sdk_SetClientFriction)(int32_t, float);

static void SetClientFriction(int32_t playerSlot, float friction) {
	__s2sdk_SetClientFriction(playerSlot, friction);
}

extern int32_t (*__s2sdk_GetClientHealth)(int32_t);

static int32_t GetClientHealth(int32_t playerSlot) {
	return __s2sdk_GetClientHealth(playerSlot);
}

extern void (*__s2sdk_SetClientHealth)(int32_t, int32_t);

static void SetClientHealth(int32_t playerSlot, int32_t health) {
	__s2sdk_SetClientHealth(playerSlot, health);
}

extern int32_t (*__s2sdk_GetClientMaxHealth)(int32_t);

static int32_t GetClientMaxHealth(int32_t playerSlot) {
	return __s2sdk_GetClientMaxHealth(playerSlot);
}

extern void (*__s2sdk_SetClientMaxHealth)(int32_t, int32_t);

static void SetClientMaxHealth(int32_t playerSlot, int32_t maxHealth) {
	__s2sdk_SetClientMaxHealth(playerSlot, maxHealth);
}

extern int32_t (*__s2sdk_GetClientTeam)(int32_t);

static int32_t GetClientTeam(int32_t playerSlot) {
	return __s2sdk_GetClientTeam(playerSlot);
}

extern void (*__s2sdk_SetClientTeam)(int32_t, int32_t);

static void SetClientTeam(int32_t playerSlot, int32_t team) {
	__s2sdk_SetClientTeam(playerSlot, team);
}

extern Vector3 (*__s2sdk_GetClientAbsOrigin)(int32_t);

static Vector3 GetClientAbsOrigin(int32_t playerSlot) {
	return __s2sdk_GetClientAbsOrigin(playerSlot);
}

extern void (*__s2sdk_SetClientAbsOrigin)(int32_t, Vector3*);

static void SetClientAbsOrigin(int32_t playerSlot, Vector3* origin) {
	__s2sdk_SetClientAbsOrigin(playerSlot, origin);
}

extern float (*__s2sdk_GetClientAbsScale)(int32_t);

static float GetClientAbsScale(int32_t playerSlot) {
	return __s2sdk_GetClientAbsScale(playerSlot);
}

extern void (*__s2sdk_SetClientAbsScale)(int32_t, float);

static void SetClientAbsScale(int32_t playerSlot, float scale) {
	__s2sdk_SetClientAbsScale(playerSlot, scale);
}

extern Vector3 (*__s2sdk_GetClientAbsAngles)(int32_t);

static Vector3 GetClientAbsAngles(int32_t playerSlot) {
	return __s2sdk_GetClientAbsAngles(playerSlot);
}

extern void (*__s2sdk_SetClientAbsAngles)(int32_t, Vector3*);

static void SetClientAbsAngles(int32_t playerSlot, Vector3* angle) {
	__s2sdk_SetClientAbsAngles(playerSlot, angle);
}

extern Vector3 (*__s2sdk_GetClientLocalOrigin)(int32_t);

static Vector3 GetClientLocalOrigin(int32_t playerSlot) {
	return __s2sdk_GetClientLocalOrigin(playerSlot);
}

extern void (*__s2sdk_SetClientLocalOrigin)(int32_t, Vector3*);

static void SetClientLocalOrigin(int32_t playerSlot, Vector3* origin) {
	__s2sdk_SetClientLocalOrigin(playerSlot, origin);
}

extern float (*__s2sdk_GetClientLocalScale)(int32_t);

static float GetClientLocalScale(int32_t playerSlot) {
	return __s2sdk_GetClientLocalScale(playerSlot);
}

extern void (*__s2sdk_SetClientLocalScale)(int32_t, float);

static void SetClientLocalScale(int32_t playerSlot, float scale) {
	__s2sdk_SetClientLocalScale(playerSlot, scale);
}

extern Vector3 (*__s2sdk_GetClientLocalAngles)(int32_t);

static Vector3 GetClientLocalAngles(int32_t playerSlot) {
	return __s2sdk_GetClientLocalAngles(playerSlot);
}

extern void (*__s2sdk_SetClientLocalAngles)(int32_t, Vector3*);

static void SetClientLocalAngles(int32_t playerSlot, Vector3* angle) {
	__s2sdk_SetClientLocalAngles(playerSlot, angle);
}

extern Vector3 (*__s2sdk_GetClientAbsVelocity)(int32_t);

static Vector3 GetClientAbsVelocity(int32_t playerSlot) {
	return __s2sdk_GetClientAbsVelocity(playerSlot);
}

extern void (*__s2sdk_SetClientAbsVelocity)(int32_t, Vector3*);

static void SetClientAbsVelocity(int32_t playerSlot, Vector3* velocity) {
	__s2sdk_SetClientAbsVelocity(playerSlot, velocity);
}

extern Vector3 (*__s2sdk_GetClientBaseVelocity)(int32_t);

static Vector3 GetClientBaseVelocity(int32_t playerSlot) {
	return __s2sdk_GetClientBaseVelocity(playerSlot);
}

extern Vector3 (*__s2sdk_GetClientLocalAngVelocity)(int32_t);

static Vector3 GetClientLocalAngVelocity(int32_t playerSlot) {
	return __s2sdk_GetClientLocalAngVelocity(playerSlot);
}

extern Vector3 (*__s2sdk_GetClientAngVelocity)(int32_t);

static Vector3 GetClientAngVelocity(int32_t playerSlot) {
	return __s2sdk_GetClientAngVelocity(playerSlot);
}

extern void (*__s2sdk_SetClientAngVelocity)(int32_t, Vector3*);

static void SetClientAngVelocity(int32_t playerSlot, Vector3* velocity) {
	__s2sdk_SetClientAngVelocity(playerSlot, velocity);
}

extern Vector3 (*__s2sdk_GetClientLocalVelocity)(int32_t);

static Vector3 GetClientLocalVelocity(int32_t playerSlot) {
	return __s2sdk_GetClientLocalVelocity(playerSlot);
}

extern Vector3 (*__s2sdk_GetClientAngRotation)(int32_t);

static Vector3 GetClientAngRotation(int32_t playerSlot) {
	return __s2sdk_GetClientAngRotation(playerSlot);
}

extern void (*__s2sdk_SetClientAngRotation)(int32_t, Vector3*);

static void SetClientAngRotation(int32_t playerSlot, Vector3* rotation) {
	__s2sdk_SetClientAngRotation(playerSlot, rotation);
}

extern Vector3 (*__s2sdk_TransformPointClientToWorld)(int32_t, Vector3*);

static Vector3 TransformPointClientToWorld(int32_t playerSlot, Vector3* point) {
	return __s2sdk_TransformPointClientToWorld(playerSlot, point);
}

extern Vector3 (*__s2sdk_TransformPointWorldToClient)(int32_t, Vector3*);

static Vector3 TransformPointWorldToClient(int32_t playerSlot, Vector3* point) {
	return __s2sdk_TransformPointWorldToClient(playerSlot, point);
}

extern Vector3 (*__s2sdk_GetClientEyePosition)(int32_t);

static Vector3 GetClientEyePosition(int32_t playerSlot) {
	return __s2sdk_GetClientEyePosition(playerSlot);
}

extern Vector3 (*__s2sdk_GetClientEyeAngles)(int32_t);

static Vector3 GetClientEyeAngles(int32_t playerSlot) {
	return __s2sdk_GetClientEyeAngles(playerSlot);
}

extern void (*__s2sdk_SetClientForwardVector)(int32_t, Vector3*);

static void SetClientForwardVector(int32_t playerSlot, Vector3* forward) {
	__s2sdk_SetClientForwardVector(playerSlot, forward);
}

extern Vector3 (*__s2sdk_GetClientForwardVector)(int32_t);

static Vector3 GetClientForwardVector(int32_t playerSlot) {
	return __s2sdk_GetClientForwardVector(playerSlot);
}

extern Vector3 (*__s2sdk_GetClientLeftVector)(int32_t);

static Vector3 GetClientLeftVector(int32_t playerSlot) {
	return __s2sdk_GetClientLeftVector(playerSlot);
}

extern Vector3 (*__s2sdk_GetClientRightVector)(int32_t);

static Vector3 GetClientRightVector(int32_t playerSlot) {
	return __s2sdk_GetClientRightVector(playerSlot);
}

extern Vector3 (*__s2sdk_GetClientUpVector)(int32_t);

static Vector3 GetClientUpVector(int32_t playerSlot) {
	return __s2sdk_GetClientUpVector(playerSlot);
}

extern Matrix4x4 (*__s2sdk_GetClientTransform)(int32_t);

static Matrix4x4 GetClientTransform(int32_t playerSlot) {
	return __s2sdk_GetClientTransform(playerSlot);
}

extern String (*__s2sdk_GetClientModel)(int32_t);

static String GetClientModel(int32_t playerSlot) {
	return __s2sdk_GetClientModel(playerSlot);
}

extern void (*__s2sdk_SetClientModel)(int32_t, String*);

static void SetClientModel(int32_t playerSlot, String* model) {
	__s2sdk_SetClientModel(playerSlot, model);
}

extern float (*__s2sdk_GetClientWaterLevel)(int32_t);

static float GetClientWaterLevel(int32_t playerSlot) {
	return __s2sdk_GetClientWaterLevel(playerSlot);
}

extern int32_t (*__s2sdk_GetClientGroundEntity)(int32_t);

static int32_t GetClientGroundEntity(int32_t playerSlot) {
	return __s2sdk_GetClientGroundEntity(playerSlot);
}

extern int32_t (*__s2sdk_GetClientEffects)(int32_t);

static int32_t GetClientEffects(int32_t playerSlot) {
	return __s2sdk_GetClientEffects(playerSlot);
}

extern void (*__s2sdk_AddClientEffects)(int32_t, int32_t);

static void AddClientEffects(int32_t playerSlot, int32_t effects) {
	__s2sdk_AddClientEffects(playerSlot, effects);
}

extern void (*__s2sdk_RemoveClientEffects)(int32_t, int32_t);

static void RemoveClientEffects(int32_t playerSlot, int32_t effects) {
	__s2sdk_RemoveClientEffects(playerSlot, effects);
}

extern Vector3 (*__s2sdk_GetClientBoundingMaxs)(int32_t);

static Vector3 GetClientBoundingMaxs(int32_t playerSlot) {
	return __s2sdk_GetClientBoundingMaxs(playerSlot);
}

extern Vector3 (*__s2sdk_GetClientBoundingMins)(int32_t);

static Vector3 GetClientBoundingMins(int32_t playerSlot) {
	return __s2sdk_GetClientBoundingMins(playerSlot);
}

extern Vector3 (*__s2sdk_GetClientCenter)(int32_t);

static Vector3 GetClientCenter(int32_t playerSlot) {
	return __s2sdk_GetClientCenter(playerSlot);
}

extern void (*__s2sdk_TeleportClient)(int32_t, Vector3*, Vector3*, Vector3*);

static void TeleportClient(int32_t playerSlot, Vector3* origin, Vector3* angles, Vector3* velocity) {
	__s2sdk_TeleportClient(playerSlot, origin, angles, velocity);
}

extern void (*__s2sdk_ApplyAbsVelocityImpulseToClient)(int32_t, Vector3*);

static void ApplyAbsVelocityImpulseToClient(int32_t playerSlot, Vector3* vecImpulse) {
	__s2sdk_ApplyAbsVelocityImpulseToClient(playerSlot, vecImpulse);
}

extern void (*__s2sdk_ApplyLocalAngularVelocityImpulseToClient)(int32_t, Vector3*);

static void ApplyLocalAngularVelocityImpulseToClient(int32_t playerSlot, Vector3* angImpulse) {
	__s2sdk_ApplyLocalAngularVelocityImpulseToClient(playerSlot, angImpulse);
}

extern void (*__s2sdk_AcceptClientInput)(int32_t, String*, int32_t, int32_t, Variant*, int32_t, int32_t);

static void AcceptClientInput(int32_t playerSlot, String* inputName, int32_t activatorHandle, int32_t callerHandle, Variant* value, int32_t type_, int32_t outputId) {
	__s2sdk_AcceptClientInput(playerSlot, inputName, activatorHandle, callerHandle, value, type_, outputId);
}

extern void (*__s2sdk_ConnectClientOutput)(int32_t, String*, String*);

static void ConnectClientOutput(int32_t playerSlot, String* output, String* functionName) {
	__s2sdk_ConnectClientOutput(playerSlot, output, functionName);
}

extern void (*__s2sdk_DisconnectClientOutput)(int32_t, String*, String*);

static void DisconnectClientOutput(int32_t playerSlot, String* output, String* functionName) {
	__s2sdk_DisconnectClientOutput(playerSlot, output, functionName);
}

extern void (*__s2sdk_DisconnectClientRedirectedOutput)(int32_t, String*, String*, int32_t);

static void DisconnectClientRedirectedOutput(int32_t playerSlot, String* output, String* functionName, int32_t targetHandle) {
	__s2sdk_DisconnectClientRedirectedOutput(playerSlot, output, functionName, targetHandle);
}

extern void (*__s2sdk_FireClientOutput)(int32_t, String*, int32_t, int32_t, Variant*, int32_t, float);

static void FireClientOutput(int32_t playerSlot, String* outputName, int32_t activatorHandle, int32_t callerHandle, Variant* value, int32_t type_, float delay) {
	__s2sdk_FireClientOutput(playerSlot, outputName, activatorHandle, callerHandle, value, type_, delay);
}

extern void (*__s2sdk_RedirectClientOutput)(int32_t, String*, String*, int32_t);

static void RedirectClientOutput(int32_t playerSlot, String* output, String* functionName, int32_t targetHandle) {
	__s2sdk_RedirectClientOutput(playerSlot, output, functionName, targetHandle);
}

extern void (*__s2sdk_FollowClient)(int32_t, int32_t, bool);

static void FollowClient(int32_t playerSlot, int32_t attachmentHandle, bool boneMerge) {
	__s2sdk_FollowClient(playerSlot, attachmentHandle, boneMerge);
}

extern void (*__s2sdk_FollowClientMerge)(int32_t, int32_t, String*);

static void FollowClientMerge(int32_t playerSlot, int32_t attachmentHandle, String* boneOrAttachName) {
	__s2sdk_FollowClientMerge(playerSlot, attachmentHandle, boneOrAttachName);
}

extern int32_t (*__s2sdk_TakeClientDamage)(int32_t, int32_t, int32_t, Vector3*, Vector3*, float, int32_t);

static int32_t TakeClientDamage(int32_t playerSlot, int32_t inflictorSlot, int32_t attackerSlot, Vector3* force, Vector3* hitPos, float damage, int32_t damageTypes) {
	return __s2sdk_TakeClientDamage(playerSlot, inflictorSlot, attackerSlot, force, hitPos, damage, damageTypes);
}

extern uintptr_t (*__s2sdk_GetClientPawn)(int32_t);

static uintptr_t GetClientPawn(int32_t playerSlot) {
	return __s2sdk_GetClientPawn(playerSlot);
}

extern Vector (*__s2sdk_ProcessTargetString)(int32_t, String*);

static Vector ProcessTargetString(int32_t caller, String* target) {
	return __s2sdk_ProcessTargetString(caller, target);
}

extern void (*__s2sdk_SwitchClientTeam)(int32_t, int32_t);

static void SwitchClientTeam(int32_t playerSlot, int32_t team) {
	__s2sdk_SwitchClientTeam(playerSlot, team);
}

extern void (*__s2sdk_RespawnClient)(int32_t);

static void RespawnClient(int32_t playerSlot) {
	__s2sdk_RespawnClient(playerSlot);
}

extern void (*__s2sdk_ForcePlayerSuicide)(int32_t, bool, bool);

static void ForcePlayerSuicide(int32_t playerSlot, bool explode, bool force) {
	__s2sdk_ForcePlayerSuicide(playerSlot, explode, force);
}

extern void (*__s2sdk_KickClient)(int32_t);

static void KickClient(int32_t playerSlot) {
	__s2sdk_KickClient(playerSlot);
}

extern void (*__s2sdk_BanClient)(int32_t, float, bool);

static void BanClient(int32_t playerSlot, float duration, bool kick) {
	__s2sdk_BanClient(playerSlot, duration, kick);
}

extern void (*__s2sdk_BanIdentity)(uint64_t, float, bool);

static void BanIdentity(uint64_t steamId, float duration, bool kick) {
	__s2sdk_BanIdentity(steamId, duration, kick);
}

extern int32_t (*__s2sdk_GetClientActiveWeapon)(int32_t);

static int32_t GetClientActiveWeapon(int32_t playerSlot) {
	return __s2sdk_GetClientActiveWeapon(playerSlot);
}

extern Vector (*__s2sdk_GetClientWeapons)(int32_t);

static Vector GetClientWeapons(int32_t playerSlot) {
	return __s2sdk_GetClientWeapons(playerSlot);
}

extern void (*__s2sdk_RemoveWeapons)(int32_t, bool);

static void RemoveWeapons(int32_t playerSlot, bool removeSuit) {
	__s2sdk_RemoveWeapons(playerSlot, removeSuit);
}

extern void (*__s2sdk_DropWeapon)(int32_t, int32_t, Vector3*, Vector3*);

static void DropWeapon(int32_t playerSlot, int32_t weaponHandle, Vector3* target, Vector3* velocity) {
	__s2sdk_DropWeapon(playerSlot, weaponHandle, target, velocity);
}

extern void (*__s2sdk_SelectWeapon)(int32_t, int32_t);

static void SelectWeapon(int32_t playerSlot, int32_t weaponHandle) {
	__s2sdk_SelectWeapon(playerSlot, weaponHandle);
}

extern void (*__s2sdk_SwitchWeapon)(int32_t, int32_t);

static void SwitchWeapon(int32_t playerSlot, int32_t weaponHandle) {
	__s2sdk_SwitchWeapon(playerSlot, weaponHandle);
}

extern void (*__s2sdk_RemoveWeapon)(int32_t, int32_t);

static void RemoveWeapon(int32_t playerSlot, int32_t weaponHandle) {
	__s2sdk_RemoveWeapon(playerSlot, weaponHandle);
}

extern int32_t (*__s2sdk_GiveNamedItem)(int32_t, String*);

static int32_t GiveNamedItem(int32_t playerSlot, String* itemName) {
	return __s2sdk_GiveNamedItem(playerSlot, itemName);
}

extern uint64_t (*__s2sdk_GetClientButtons)(int32_t, int32_t);

static uint64_t GetClientButtons(int32_t playerSlot, int32_t buttonIndex) {
	return __s2sdk_GetClientButtons(playerSlot, buttonIndex);
}

extern int32_t (*__s2sdk_GetClientArmor)(int32_t);

static int32_t GetClientArmor(int32_t playerSlot) {
	return __s2sdk_GetClientArmor(playerSlot);
}

extern void (*__s2sdk_SetClientArmor)(int32_t, int32_t);

static void SetClientArmor(int32_t playerSlot, int32_t armor) {
	__s2sdk_SetClientArmor(playerSlot, armor);
}

extern float (*__s2sdk_GetClientSpeed)(int32_t);

static float GetClientSpeed(int32_t playerSlot) {
	return __s2sdk_GetClientSpeed(playerSlot);
}

extern void (*__s2sdk_SetClientSpeed)(int32_t, float);

static void SetClientSpeed(int32_t playerSlot, float speed) {
	__s2sdk_SetClientSpeed(playerSlot, speed);
}

extern int32_t (*__s2sdk_GetClientMoney)(int32_t);

static int32_t GetClientMoney(int32_t playerSlot) {
	return __s2sdk_GetClientMoney(playerSlot);
}

extern void (*__s2sdk_SetClientMoney)(int32_t, int32_t);

static void SetClientMoney(int32_t playerSlot, int32_t money) {
	__s2sdk_SetClientMoney(playerSlot, money);
}

extern int32_t (*__s2sdk_GetClientKills)(int32_t);

static int32_t GetClientKills(int32_t playerSlot) {
	return __s2sdk_GetClientKills(playerSlot);
}

extern void (*__s2sdk_SetClientKills)(int32_t, int32_t);

static void SetClientKills(int32_t playerSlot, int32_t kills) {
	__s2sdk_SetClientKills(playerSlot, kills);
}

extern int32_t (*__s2sdk_GetClientDeaths)(int32_t);

static int32_t GetClientDeaths(int32_t playerSlot) {
	return __s2sdk_GetClientDeaths(playerSlot);
}

extern void (*__s2sdk_SetClientDeaths)(int32_t, int32_t);

static void SetClientDeaths(int32_t playerSlot, int32_t deaths) {
	__s2sdk_SetClientDeaths(playerSlot, deaths);
}

extern int32_t (*__s2sdk_GetClientAssists)(int32_t);

static int32_t GetClientAssists(int32_t playerSlot) {
	return __s2sdk_GetClientAssists(playerSlot);
}

extern void (*__s2sdk_SetClientAssists)(int32_t, int32_t);

static void SetClientAssists(int32_t playerSlot, int32_t assists) {
	__s2sdk_SetClientAssists(playerSlot, assists);
}

extern int32_t (*__s2sdk_GetClientDamage)(int32_t);

static int32_t GetClientDamage(int32_t playerSlot) {
	return __s2sdk_GetClientDamage(playerSlot);
}

extern void (*__s2sdk_SetClientDamage)(int32_t, int32_t);

static void SetClientDamage(int32_t playerSlot, int32_t damage) {
	__s2sdk_SetClientDamage(playerSlot, damage);
}

