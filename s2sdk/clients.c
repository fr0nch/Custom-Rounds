#include "shared.h"

PLUGIFY_EXPORT int32_t (*__s2sdk_EntPointerToPlayerSlot)(uintptr_t) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_PlayerSlotToEntPointer)(int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_PlayerSlotToEntHandle)(int32_t) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_PlayerSlotToClientPtr)(int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_ClientPtrToPlayerSlot)(uintptr_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_PlayerSlotToClientIndex)(int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_ClientIndexToPlayerSlot)(int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_PlayerServicesToPlayerSlot)(uintptr_t) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_GetClientAuthId)(int32_t) = NULL;


PLUGIFY_EXPORT uint32_t (*__s2sdk_GetClientAccountId)(int32_t) = NULL;


PLUGIFY_EXPORT uint64_t (*__s2sdk_GetClientSteamID64)(int32_t) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_GetClientIp)(int32_t) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_GetClientLanguage)(int32_t) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_GetClientOS)(int32_t) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_GetClientName)(int32_t) = NULL;


PLUGIFY_EXPORT float (*__s2sdk_GetClientTime)(int32_t) = NULL;


PLUGIFY_EXPORT float (*__s2sdk_GetClientLatency)(int32_t) = NULL;


PLUGIFY_EXPORT uint64_t (*__s2sdk_GetUserFlagBits)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetUserFlagBits)(int32_t, uint64_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_AddUserFlags)(int32_t, uint64_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_RemoveUserFlags)(int32_t, uint64_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_IsClientAuthorized)(int32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_IsClientConnected)(int32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_IsClientInGame)(int32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_IsClientSourceTV)(int32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_IsClientAlive)(int32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_IsFakeClient)(int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetClientMoveType)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetClientMoveType)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT float (*__s2sdk_GetClientGravity)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetClientGravity)(int32_t, float) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetClientFlags)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetClientFlags)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT Vector4 (*__s2sdk_GetClientRenderColor)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetClientRenderColor)(int32_t, Vector4*) = NULL;


PLUGIFY_EXPORT uint8_t (*__s2sdk_GetClientRenderMode)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetClientRenderMode)(int32_t, uint8_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetClientMass)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetClientMass)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT float (*__s2sdk_GetClientFriction)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetClientFriction)(int32_t, float) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetClientHealth)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetClientHealth)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetClientMaxHealth)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetClientMaxHealth)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetClientTeam)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetClientTeam)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetClientAbsOrigin)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetClientAbsOrigin)(int32_t, Vector3*) = NULL;


PLUGIFY_EXPORT float (*__s2sdk_GetClientAbsScale)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetClientAbsScale)(int32_t, float) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetClientAbsAngles)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetClientAbsAngles)(int32_t, Vector3*) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetClientLocalOrigin)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetClientLocalOrigin)(int32_t, Vector3*) = NULL;


PLUGIFY_EXPORT float (*__s2sdk_GetClientLocalScale)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetClientLocalScale)(int32_t, float) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetClientLocalAngles)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetClientLocalAngles)(int32_t, Vector3*) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetClientAbsVelocity)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetClientAbsVelocity)(int32_t, Vector3*) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetClientBaseVelocity)(int32_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetClientLocalAngVelocity)(int32_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetClientAngVelocity)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetClientAngVelocity)(int32_t, Vector3*) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetClientLocalVelocity)(int32_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetClientAngRotation)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetClientAngRotation)(int32_t, Vector3*) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_TransformPointClientToWorld)(int32_t, Vector3*) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_TransformPointWorldToClient)(int32_t, Vector3*) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetClientEyePosition)(int32_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetClientEyeAngles)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetClientForwardVector)(int32_t, Vector3*) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetClientForwardVector)(int32_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetClientLeftVector)(int32_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetClientRightVector)(int32_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetClientUpVector)(int32_t) = NULL;


PLUGIFY_EXPORT Matrix4x4 (*__s2sdk_GetClientTransform)(int32_t) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_GetClientModel)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetClientModel)(int32_t, String*) = NULL;


PLUGIFY_EXPORT float (*__s2sdk_GetClientWaterLevel)(int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetClientGroundEntity)(int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetClientEffects)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_AddClientEffects)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_RemoveClientEffects)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetClientBoundingMaxs)(int32_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetClientBoundingMins)(int32_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetClientCenter)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_TeleportClient)(int32_t, Vector3*, Vector3*, Vector3*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_ApplyAbsVelocityImpulseToClient)(int32_t, Vector3*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_ApplyLocalAngularVelocityImpulseToClient)(int32_t, Vector3*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_AcceptClientInput)(int32_t, String*, int32_t, int32_t, Variant*, int32_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_ConnectClientOutput)(int32_t, String*, String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_DisconnectClientOutput)(int32_t, String*, String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_DisconnectClientRedirectedOutput)(int32_t, String*, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_FireClientOutput)(int32_t, String*, int32_t, int32_t, Variant*, int32_t, float) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_RedirectClientOutput)(int32_t, String*, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_FollowClient)(int32_t, int32_t, bool) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_FollowClientMerge)(int32_t, int32_t, String*) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_TakeClientDamage)(int32_t, int32_t, int32_t, Vector3*, Vector3*, float, int32_t) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_GetClientPawn)(int32_t) = NULL;


PLUGIFY_EXPORT Vector (*__s2sdk_ProcessTargetString)(int32_t, String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SwitchClientTeam)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_RespawnClient)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_ForcePlayerSuicide)(int32_t, bool, bool) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_KickClient)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_BanClient)(int32_t, float, bool) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_BanIdentity)(uint64_t, float, bool) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetClientActiveWeapon)(int32_t) = NULL;


PLUGIFY_EXPORT Vector (*__s2sdk_GetClientWeapons)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_RemoveWeapons)(int32_t, bool) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_DropWeapon)(int32_t, int32_t, Vector3*, Vector3*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SelectWeapon)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SwitchWeapon)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_RemoveWeapon)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GiveNamedItem)(int32_t, String*) = NULL;


PLUGIFY_EXPORT uint64_t (*__s2sdk_GetClientButtons)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetClientArmor)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetClientArmor)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT float (*__s2sdk_GetClientSpeed)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetClientSpeed)(int32_t, float) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetClientMoney)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetClientMoney)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetClientKills)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetClientKills)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetClientDeaths)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetClientDeaths)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetClientAssists)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetClientAssists)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetClientDamage)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetClientDamage)(int32_t, int32_t) = NULL;


