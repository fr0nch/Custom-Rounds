#include "shared.h"

PLUGIFY_EXPORT uint64_t (*__s2sdk_CreateConVar)(String*, Variant*, String*, int64_t) = NULL;


PLUGIFY_EXPORT uint64_t (*__s2sdk_CreateConVarBool)(String*, bool, String*, int64_t, bool, bool, bool, bool) = NULL;


PLUGIFY_EXPORT uint64_t (*__s2sdk_CreateConVarInt16)(String*, int16_t, String*, int64_t, bool, int16_t, bool, int16_t) = NULL;


PLUGIFY_EXPORT uint64_t (*__s2sdk_CreateConVarUInt16)(String*, uint16_t, String*, int64_t, bool, uint16_t, bool, uint16_t) = NULL;


PLUGIFY_EXPORT uint64_t (*__s2sdk_CreateConVarInt32)(String*, int32_t, String*, int64_t, bool, int32_t, bool, int32_t) = NULL;


PLUGIFY_EXPORT uint64_t (*__s2sdk_CreateConVarUInt32)(String*, uint32_t, String*, int64_t, bool, uint32_t, bool, uint32_t) = NULL;


PLUGIFY_EXPORT uint64_t (*__s2sdk_CreateConVarInt64)(String*, int64_t, String*, int64_t, bool, int64_t, bool, int64_t) = NULL;


PLUGIFY_EXPORT uint64_t (*__s2sdk_CreateConVarUInt64)(String*, uint64_t, String*, int64_t, bool, uint64_t, bool, uint64_t) = NULL;


PLUGIFY_EXPORT uint64_t (*__s2sdk_CreateConVarFloat)(String*, float, String*, int64_t, bool, float, bool, float) = NULL;


PLUGIFY_EXPORT uint64_t (*__s2sdk_CreateConVarDouble)(String*, double, String*, int64_t, bool, double, bool, double) = NULL;


PLUGIFY_EXPORT uint64_t (*__s2sdk_CreateConVarColor)(String*, Vector4*, String*, int64_t, bool, Vector4*, bool, Vector4*) = NULL;


PLUGIFY_EXPORT uint64_t (*__s2sdk_CreateConVarVector2)(String*, Vector2*, String*, int64_t, bool, Vector2*, bool, Vector2*) = NULL;


PLUGIFY_EXPORT uint64_t (*__s2sdk_CreateConVarVector3)(String*, Vector3*, String*, int64_t, bool, Vector3*, bool, Vector3*) = NULL;


PLUGIFY_EXPORT uint64_t (*__s2sdk_CreateConVarVector4)(String*, Vector4*, String*, int64_t, bool, Vector4*, bool, Vector4*) = NULL;


PLUGIFY_EXPORT uint64_t (*__s2sdk_CreateConVarQAngle)(String*, Vector3*, String*, int64_t, bool, Vector3*, bool, Vector3*) = NULL;


PLUGIFY_EXPORT uint64_t (*__s2sdk_CreateConVarString)(String*, String*, String*, int64_t) = NULL;


PLUGIFY_EXPORT uint64_t (*__s2sdk_FindConVar)(String*) = NULL;


PLUGIFY_EXPORT uint64_t (*__s2sdk_FindConVar2)(String*, int16_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_HookConVarChange)(uint64_t, void*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_UnhookConVarChange)(uint64_t, void*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_IsConVarFlagSet)(uint64_t, int64_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_AddConVarFlags)(uint64_t, int64_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_RemoveConVarFlags)(uint64_t, int64_t) = NULL;


PLUGIFY_EXPORT int64_t (*__s2sdk_GetConVarFlags)(uint64_t) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_GetConVarBounds)(uint64_t, bool) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetConVarBounds)(uint64_t, bool, String*) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_GetConVarDefault)(uint64_t) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_GetConVarValue)(uint64_t) = NULL;


PLUGIFY_EXPORT Variant (*__s2sdk_GetConVar)(uint64_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_GetConVarBool)(uint64_t) = NULL;


PLUGIFY_EXPORT int16_t (*__s2sdk_GetConVarInt16)(uint64_t) = NULL;


PLUGIFY_EXPORT uint16_t (*__s2sdk_GetConVarUInt16)(uint64_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetConVarInt32)(uint64_t) = NULL;


PLUGIFY_EXPORT uint32_t (*__s2sdk_GetConVarUInt32)(uint64_t) = NULL;


PLUGIFY_EXPORT int64_t (*__s2sdk_GetConVarInt64)(uint64_t) = NULL;


PLUGIFY_EXPORT uint64_t (*__s2sdk_GetConVarUInt64)(uint64_t) = NULL;


PLUGIFY_EXPORT float (*__s2sdk_GetConVarFloat)(uint64_t) = NULL;


PLUGIFY_EXPORT double (*__s2sdk_GetConVarDouble)(uint64_t) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_GetConVarString)(uint64_t) = NULL;


PLUGIFY_EXPORT Vector4 (*__s2sdk_GetConVarColor)(uint64_t) = NULL;


PLUGIFY_EXPORT Vector2 (*__s2sdk_GetConVarVector2)(uint64_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetConVarVector)(uint64_t) = NULL;


PLUGIFY_EXPORT Vector4 (*__s2sdk_GetConVarVector4)(uint64_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetConVarQAngle)(uint64_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetConVarValue)(uint64_t, String*, bool, bool) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetConVar)(uint64_t, Variant*, bool, bool) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetConVarBool)(uint64_t, bool, bool, bool) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetConVarInt16)(uint64_t, int16_t, bool, bool) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetConVarUInt16)(uint64_t, uint16_t, bool, bool) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetConVarInt32)(uint64_t, int32_t, bool, bool) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetConVarUInt32)(uint64_t, uint32_t, bool, bool) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetConVarInt64)(uint64_t, int64_t, bool, bool) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetConVarUInt64)(uint64_t, uint64_t, bool, bool) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetConVarFloat)(uint64_t, float, bool, bool) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetConVarDouble)(uint64_t, double, bool, bool) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetConVarString)(uint64_t, String*, bool, bool) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetConVarColor)(uint64_t, Vector4*, bool, bool) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetConVarVector2)(uint64_t, Vector2*, bool, bool) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetConVarVector3)(uint64_t, Vector3*, bool, bool) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetConVarVector4)(uint64_t, Vector4*, bool, bool) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetConVarQAngle)(uint64_t, Vector3*, bool, bool) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SendConVarValue)(int32_t, uint64_t, String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SendConVarValue2)(uint64_t, int32_t, String*) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_GetClientConVarValue)(int32_t, String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetFakeClientConVarValue)(int32_t, String*, String*) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_QueryClientConVar)(int32_t, String*, void*, Vector*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_AutoExecConfig)(Vector*, bool, String*, String*) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_GetServerLanguage)() = NULL;


PLUGIFY_EXPORT Vector (*__s2sdk_GetAllConVars)() = NULL;


