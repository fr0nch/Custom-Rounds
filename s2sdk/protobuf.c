#include "shared.h"

PLUGIFY_EXPORT bool (*__s2sdk_HookUserMessage)(int16_t, void*, uint8_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_UnhookUserMessage)(int16_t, void*, uint8_t) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_UserMessageCreateFromSerializable)(uintptr_t, uintptr_t, uint64_t) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_UserMessageCreateFromName)(String*) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_UserMessageCreateFromId)(int16_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_UserMessageDestroy)(uintptr_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_UserMessageSend)(uintptr_t) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_UserMessageGetMessageName)(uintptr_t) = NULL;


PLUGIFY_EXPORT int16_t (*__s2sdk_UserMessageGetMessageID)(uintptr_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_UserMessageHasField)(uintptr_t, String*) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_UserMessageGetProtobufMessage)(uintptr_t) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_UserMessageGetSerializableMessage)(uintptr_t) = NULL;


PLUGIFY_EXPORT int16_t (*__s2sdk_UserMessageFindMessageIdByName)(String*) = NULL;


PLUGIFY_EXPORT uint64_t (*__s2sdk_UserMessageGetRecipientMask)(uintptr_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_UserMessageAddRecipient)(uintptr_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_UserMessageAddAllPlayers)(uintptr_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_UserMessageSetRecipientMask)(uintptr_t, uint64_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_UserMessageGetMessage)(uintptr_t, String*, uintptr_t*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_UserMessageGetRepeatedMessage)(uintptr_t, String*, int32_t, uintptr_t*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_UserMessageAddMessage)(uintptr_t, String*, uintptr_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_UserMessageGetRepeatedFieldCount)(uintptr_t, String*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_UserMessageRemoveRepeatedFieldValue)(uintptr_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_UserMessageGetDebugString)(uintptr_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_PbReadEnum)(uintptr_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_PbReadInt32)(uintptr_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT int64_t (*__s2sdk_PbReadInt64)(uintptr_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT uint32_t (*__s2sdk_PbReadUInt32)(uintptr_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT uint64_t (*__s2sdk_PbReadUInt64)(uintptr_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT float (*__s2sdk_PbReadFloat)(uintptr_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT double (*__s2sdk_PbReadDouble)(uintptr_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbReadBool)(uintptr_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_PbReadString)(uintptr_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT Vector4 (*__s2sdk_PbReadColor)(uintptr_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT Vector2 (*__s2sdk_PbReadVector2)(uintptr_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_PbReadVector3)(uintptr_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT Vector4 (*__s2sdk_PbReadVector4)(uintptr_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_PbReadQAngle)(uintptr_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbGetEnum)(uintptr_t, String*, int32_t*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbSetEnum)(uintptr_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbGetInt32)(uintptr_t, String*, int32_t*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbSetInt32)(uintptr_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbGetInt64)(uintptr_t, String*, int64_t*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbSetInt64)(uintptr_t, String*, int64_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbGetUInt32)(uintptr_t, String*, uint32_t*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbSetUInt32)(uintptr_t, String*, uint32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbGetUInt64)(uintptr_t, String*, uint64_t*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbSetUInt64)(uintptr_t, String*, uint64_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbGetBool)(uintptr_t, String*, bool*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbSetBool)(uintptr_t, String*, bool) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbGetFloat)(uintptr_t, String*, float*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbSetFloat)(uintptr_t, String*, float) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbGetDouble)(uintptr_t, String*, double*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbSetDouble)(uintptr_t, String*, double) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbGetString)(uintptr_t, String*, String*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbSetString)(uintptr_t, String*, String*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbGetColor)(uintptr_t, String*, Vector4*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbSetColor)(uintptr_t, String*, Vector4*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbGetVector2)(uintptr_t, String*, Vector2*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbSetVector2)(uintptr_t, String*, Vector2*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbGetVector3)(uintptr_t, String*, Vector3*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbSetVector3)(uintptr_t, String*, Vector3*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbGetVector4)(uintptr_t, String*, Vector4*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbSetVector4)(uintptr_t, String*, Vector4*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbGetQAngle)(uintptr_t, String*, Vector3*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbSetQAngle)(uintptr_t, String*, Vector3*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbGetRepeatedEnum)(uintptr_t, String*, int32_t, int32_t*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbSetRepeatedEnum)(uintptr_t, String*, int32_t, int32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbAddEnum)(uintptr_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbGetRepeatedInt32)(uintptr_t, String*, int32_t, int32_t*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbSetRepeatedInt32)(uintptr_t, String*, int32_t, int32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbAddInt32)(uintptr_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbGetRepeatedInt64)(uintptr_t, String*, int32_t, int64_t*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbSetRepeatedInt64)(uintptr_t, String*, int32_t, int64_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbAddInt64)(uintptr_t, String*, int64_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbGetRepeatedUInt32)(uintptr_t, String*, int32_t, uint32_t*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbSetRepeatedUInt32)(uintptr_t, String*, int32_t, uint32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbAddUInt32)(uintptr_t, String*, uint32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbGetRepeatedUInt64)(uintptr_t, String*, int32_t, uint64_t*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbSetRepeatedUInt64)(uintptr_t, String*, int32_t, uint64_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbAddUInt64)(uintptr_t, String*, uint64_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbGetRepeatedBool)(uintptr_t, String*, int32_t, bool*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbSetRepeatedBool)(uintptr_t, String*, int32_t, bool) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbAddBool)(uintptr_t, String*, bool) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbGetRepeatedFloat)(uintptr_t, String*, int32_t, float*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbSetRepeatedFloat)(uintptr_t, String*, int32_t, float) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbAddFloat)(uintptr_t, String*, float) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbGetRepeatedDouble)(uintptr_t, String*, int32_t, double*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbSetRepeatedDouble)(uintptr_t, String*, int32_t, double) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbAddDouble)(uintptr_t, String*, double) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbGetRepeatedString)(uintptr_t, String*, int32_t, String*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbSetRepeatedString)(uintptr_t, String*, int32_t, String*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbAddString)(uintptr_t, String*, String*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbGetRepeatedColor)(uintptr_t, String*, int32_t, Vector4*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbSetRepeatedColor)(uintptr_t, String*, int32_t, Vector4*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbAddColor)(uintptr_t, String*, Vector4*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbGetRepeatedVector2)(uintptr_t, String*, int32_t, Vector2*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbSetRepeatedVector2)(uintptr_t, String*, int32_t, Vector2*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbAddVector2)(uintptr_t, String*, Vector2*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbGetRepeatedVector3)(uintptr_t, String*, int32_t, Vector3*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbSetRepeatedVector3)(uintptr_t, String*, int32_t, Vector3*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbAddVector3)(uintptr_t, String*, Vector3*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbGetRepeatedVector4)(uintptr_t, String*, int32_t, Vector4*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbSetRepeatedVector4)(uintptr_t, String*, int32_t, Vector4*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbAddVector4)(uintptr_t, String*, Vector4*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbGetRepeatedQAngle)(uintptr_t, String*, int32_t, Vector3*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbSetRepeatedQAngle)(uintptr_t, String*, int32_t, Vector3*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PbAddQAngle)(uintptr_t, String*, Vector3*) = NULL;


