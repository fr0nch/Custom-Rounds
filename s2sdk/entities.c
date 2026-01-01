#include "shared.h"

PLUGIFY_EXPORT uintptr_t (*__s2sdk_EntIndexToEntPointer)(int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_EntPointerToEntIndex)(uintptr_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_EntPointerToEntHandle)(uintptr_t) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_EntHandleToEntPointer)(int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_EntIndexToEntHandle)(int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_EntHandleToEntIndex)(int32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_IsValidEntHandle)(int32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_IsValidEntPointer)(uintptr_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetFirstActiveEntity)() = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetPrevActiveEntity)(int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetNextActiveEntity)(int32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_HookEntityOutput)(String*, String*, void*, uint8_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_UnhookEntityOutput)(String*, String*, void*, uint8_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_FindEntityByClassname)(int32_t, String*) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_FindEntityByClassnameNearest)(int32_t, String*, Vector3*, float) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_FindEntityByClassnameWithin)(int32_t, String*, Vector3*, float) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_FindEntityByName)(int32_t, String*) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_FindEntityByNameNearest)(String*, Vector3*, float) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_FindEntityByNameWithin)(int32_t, String*, Vector3*, float) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_FindEntityByTarget)(int32_t, String*) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_FindEntityInSphere)(int32_t, Vector3*, float) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_SpawnEntityByName)(String*) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_CreateEntityByName)(String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_DispatchSpawn)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_DispatchSpawn2)(int32_t, Vector*, Vector*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_RemoveEntity)(int32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_IsEntityPlayerController)(int32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_IsEntityPlayerPawn)(int32_t) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_GetEntityClassname)(int32_t) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_GetEntityName)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityName)(int32_t, String*) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetEntityMoveType)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityMoveType)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT float (*__s2sdk_GetEntityGravity)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityGravity)(int32_t, float) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetEntityFlags)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityFlags)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT Vector4 (*__s2sdk_GetEntityRenderColor)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityRenderColor)(int32_t, Vector4*) = NULL;


PLUGIFY_EXPORT uint8_t (*__s2sdk_GetEntityRenderMode)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityRenderMode)(int32_t, uint8_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetEntityMass)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityMass)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT float (*__s2sdk_GetEntityFriction)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityFriction)(int32_t, float) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetEntityHealth)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityHealth)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetEntityMaxHealth)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityMaxHealth)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetEntityTeam)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityTeam)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetEntityOwner)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityOwner)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetEntityParent)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityParent)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityParentAttachment)(int32_t, int32_t, String*) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetEntityAbsOrigin)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityAbsOrigin)(int32_t, Vector3*) = NULL;


PLUGIFY_EXPORT float (*__s2sdk_GetEntityAbsScale)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityAbsScale)(int32_t, float) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetEntityAbsAngles)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityAbsAngles)(int32_t, Vector3*) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetEntityLocalOrigin)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityLocalOrigin)(int32_t, Vector3*) = NULL;


PLUGIFY_EXPORT float (*__s2sdk_GetEntityLocalScale)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityLocalScale)(int32_t, float) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetEntityLocalAngles)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityLocalAngles)(int32_t, Vector3*) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetEntityAbsVelocity)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityAbsVelocity)(int32_t, Vector3*) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetEntityBaseVelocity)(int32_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetEntityLocalAngVelocity)(int32_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetEntityAngVelocity)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityAngVelocity)(int32_t, Vector3*) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetEntityLocalVelocity)(int32_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetEntityAngRotation)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityAngRotation)(int32_t, Vector3*) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_TransformPointEntityToWorld)(int32_t, Vector3*) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_TransformPointWorldToEntity)(int32_t, Vector3*) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetEntityEyePosition)(int32_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetEntityEyeAngles)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityForwardVector)(int32_t, Vector3*) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetEntityForwardVector)(int32_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetEntityLeftVector)(int32_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetEntityRightVector)(int32_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetEntityUpVector)(int32_t) = NULL;


PLUGIFY_EXPORT Matrix4x4 (*__s2sdk_GetEntityTransform)(int32_t) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_GetEntityModel)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityModel)(int32_t, String*) = NULL;


PLUGIFY_EXPORT float (*__s2sdk_GetEntityWaterLevel)(int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetEntityGroundEntity)(int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetEntityEffects)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_AddEntityEffects)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_RemoveEntityEffects)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetEntityBoundingMaxs)(int32_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetEntityBoundingMins)(int32_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetEntityCenter)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_TeleportEntity)(int32_t, Vector3*, Vector3*, Vector3*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_ApplyAbsVelocityImpulseToEntity)(int32_t, Vector3*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_ApplyLocalAngularVelocityImpulseToEntity)(int32_t, Vector3*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_AcceptEntityInput)(int32_t, String*, int32_t, int32_t, Variant*, int32_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_ConnectEntityOutput)(int32_t, String*, String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_DisconnectEntityOutput)(int32_t, String*, String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_DisconnectEntityRedirectedOutput)(int32_t, String*, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_FireEntityOutput)(int32_t, String*, int32_t, int32_t, Variant*, int32_t, float) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_RedirectEntityOutput)(int32_t, String*, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_FollowEntity)(int32_t, int32_t, bool) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_FollowEntityMerge)(int32_t, int32_t, String*) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_TakeEntityDamage)(int32_t, int32_t, int32_t, Vector3*, Vector3*, float, int32_t) = NULL;


PLUGIFY_EXPORT float (*__s2sdk_GetEntityAttributeFloatValue)(int32_t, String*, float) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetEntityAttributeIntValue)(int32_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityAttributeFloatValue)(int32_t, String*, float) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityAttributeIntValue)(int32_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_DeleteEntityAttribute)(int32_t, String*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_HasEntityAttribute)(int32_t, String*) = NULL;


