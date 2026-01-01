#include "shared.h"

PLUGIFY_EXPORT uintptr_t (*__s2sdk_Kv3Create)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_Kv3CreateWithCluster)(int32_t, int32_t, int32_t) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_Kv3CreateCopy)(uintptr_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3Destroy)(uintptr_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3CopyFrom)(uintptr_t, uintptr_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3OverlayKeysFrom)(uintptr_t, uintptr_t, bool) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_Kv3GetContext)(uintptr_t) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_Kv3GetMetaData)(uintptr_t, uintptr_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3HasFlag)(uintptr_t, uint8_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3HasAnyFlags)(uintptr_t) = NULL;


PLUGIFY_EXPORT uint8_t (*__s2sdk_Kv3GetAllFlags)(uintptr_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetAllFlags)(uintptr_t, uint8_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetFlag)(uintptr_t, uint8_t, bool) = NULL;


PLUGIFY_EXPORT uint8_t (*__s2sdk_Kv3GetType)(uintptr_t) = NULL;


PLUGIFY_EXPORT uint8_t (*__s2sdk_Kv3GetTypeEx)(uintptr_t) = NULL;


PLUGIFY_EXPORT uint8_t (*__s2sdk_Kv3GetSubType)(uintptr_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3HasInvalidMemberNames)(uintptr_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetHasInvalidMemberNames)(uintptr_t, bool) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_Kv3GetTypeAsString)(uintptr_t) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_Kv3GetSubTypeAsString)(uintptr_t) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_Kv3ToString)(uintptr_t, uint32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3IsNull)(uintptr_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetToNull)(uintptr_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3IsArray)(uintptr_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3IsKV3Array)(uintptr_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3IsTable)(uintptr_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3IsString)(uintptr_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3GetBool)(uintptr_t, bool) = NULL;


PLUGIFY_EXPORT int8_t (*__s2sdk_Kv3GetChar)(uintptr_t, int8_t) = NULL;


PLUGIFY_EXPORT uint32_t (*__s2sdk_Kv3GetUChar32)(uintptr_t, uint32_t) = NULL;


PLUGIFY_EXPORT int8_t (*__s2sdk_Kv3GetInt8)(uintptr_t, int8_t) = NULL;


PLUGIFY_EXPORT uint8_t (*__s2sdk_Kv3GetUInt8)(uintptr_t, uint8_t) = NULL;


PLUGIFY_EXPORT int16_t (*__s2sdk_Kv3GetShort)(uintptr_t, int16_t) = NULL;


PLUGIFY_EXPORT uint16_t (*__s2sdk_Kv3GetUShort)(uintptr_t, uint16_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_Kv3GetInt)(uintptr_t, int32_t) = NULL;


PLUGIFY_EXPORT uint32_t (*__s2sdk_Kv3GetUInt)(uintptr_t, uint32_t) = NULL;


PLUGIFY_EXPORT int64_t (*__s2sdk_Kv3GetInt64)(uintptr_t, int64_t) = NULL;


PLUGIFY_EXPORT uint64_t (*__s2sdk_Kv3GetUInt64)(uintptr_t, uint64_t) = NULL;


PLUGIFY_EXPORT float (*__s2sdk_Kv3GetFloat)(uintptr_t, float) = NULL;


PLUGIFY_EXPORT double (*__s2sdk_Kv3GetDouble)(uintptr_t, double) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetBool)(uintptr_t, bool) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetChar)(uintptr_t, int8_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetUChar32)(uintptr_t, uint32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetInt8)(uintptr_t, int8_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetUInt8)(uintptr_t, uint8_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetShort)(uintptr_t, int16_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetUShort)(uintptr_t, uint16_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetInt)(uintptr_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetUInt)(uintptr_t, uint32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetInt64)(uintptr_t, int64_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetUInt64)(uintptr_t, uint64_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetFloat)(uintptr_t, float) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetDouble)(uintptr_t, double) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_Kv3GetPointer)(uintptr_t, uintptr_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetPointer)(uintptr_t, uintptr_t) = NULL;


PLUGIFY_EXPORT uint32_t (*__s2sdk_Kv3GetStringToken)(uintptr_t, uint32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetStringToken)(uintptr_t, uint32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_Kv3GetEHandle)(uintptr_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetEHandle)(uintptr_t, int32_t) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_Kv3GetString)(uintptr_t, String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetString)(uintptr_t, String*, uint8_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetStringExternal)(uintptr_t, String*, uint8_t) = NULL;


PLUGIFY_EXPORT Vector (*__s2sdk_Kv3GetBinaryBlob)(uintptr_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_Kv3GetBinaryBlobSize)(uintptr_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetToBinaryBlob)(uintptr_t, Vector*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetToBinaryBlobExternal)(uintptr_t, Vector*, bool) = NULL;


PLUGIFY_EXPORT Vector4 (*__s2sdk_Kv3GetColor)(uintptr_t, Vector4*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetColor)(uintptr_t, Vector4*) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_Kv3GetVector)(uintptr_t, Vector3*) = NULL;


PLUGIFY_EXPORT Vector2 (*__s2sdk_Kv3GetVector2D)(uintptr_t, Vector2*) = NULL;


PLUGIFY_EXPORT Vector4 (*__s2sdk_Kv3GetVector4D)(uintptr_t, Vector4*) = NULL;


PLUGIFY_EXPORT Vector4 (*__s2sdk_Kv3GetQuaternion)(uintptr_t, Vector4*) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_Kv3GetQAngle)(uintptr_t, Vector3*) = NULL;


PLUGIFY_EXPORT Matrix4x4 (*__s2sdk_Kv3GetMatrix3x4)(uintptr_t, Matrix4x4*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetVector)(uintptr_t, Vector3*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetVector2D)(uintptr_t, Vector2*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetVector4D)(uintptr_t, Vector4*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetQuaternion)(uintptr_t, Vector4*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetQAngle)(uintptr_t, Vector3*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMatrix3x4)(uintptr_t, Matrix4x4*) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_Kv3GetArrayElementCount)(uintptr_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetArrayElementCount)(uintptr_t, int32_t, uint8_t, uint8_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetToEmptyKV3Array)(uintptr_t) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_Kv3GetArrayElement)(uintptr_t, int32_t) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_Kv3ArrayInsertElementBefore)(uintptr_t, int32_t) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_Kv3ArrayInsertElementAfter)(uintptr_t, int32_t) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_Kv3ArrayAddElementToTail)(uintptr_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3ArraySwapItems)(uintptr_t, int32_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3ArrayRemoveElement)(uintptr_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetToEmptyTable)(uintptr_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_Kv3GetMemberCount)(uintptr_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3HasMember)(uintptr_t, String*) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_Kv3FindMember)(uintptr_t, String*) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_Kv3FindOrCreateMember)(uintptr_t, String*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3RemoveMember)(uintptr_t, String*) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_Kv3GetMemberName)(uintptr_t, int32_t) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_Kv3GetMemberByIndex)(uintptr_t, int32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3GetMemberBool)(uintptr_t, String*, bool) = NULL;


PLUGIFY_EXPORT int8_t (*__s2sdk_Kv3GetMemberChar)(uintptr_t, String*, int8_t) = NULL;


PLUGIFY_EXPORT uint32_t (*__s2sdk_Kv3GetMemberUChar32)(uintptr_t, String*, uint32_t) = NULL;


PLUGIFY_EXPORT int8_t (*__s2sdk_Kv3GetMemberInt8)(uintptr_t, String*, int8_t) = NULL;


PLUGIFY_EXPORT uint8_t (*__s2sdk_Kv3GetMemberUInt8)(uintptr_t, String*, uint8_t) = NULL;


PLUGIFY_EXPORT int16_t (*__s2sdk_Kv3GetMemberShort)(uintptr_t, String*, int16_t) = NULL;


PLUGIFY_EXPORT uint16_t (*__s2sdk_Kv3GetMemberUShort)(uintptr_t, String*, uint16_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_Kv3GetMemberInt)(uintptr_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT uint32_t (*__s2sdk_Kv3GetMemberUInt)(uintptr_t, String*, uint32_t) = NULL;


PLUGIFY_EXPORT int64_t (*__s2sdk_Kv3GetMemberInt64)(uintptr_t, String*, int64_t) = NULL;


PLUGIFY_EXPORT uint64_t (*__s2sdk_Kv3GetMemberUInt64)(uintptr_t, String*, uint64_t) = NULL;


PLUGIFY_EXPORT float (*__s2sdk_Kv3GetMemberFloat)(uintptr_t, String*, float) = NULL;


PLUGIFY_EXPORT double (*__s2sdk_Kv3GetMemberDouble)(uintptr_t, String*, double) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_Kv3GetMemberPointer)(uintptr_t, String*, uintptr_t) = NULL;


PLUGIFY_EXPORT uint32_t (*__s2sdk_Kv3GetMemberStringToken)(uintptr_t, String*, uint32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_Kv3GetMemberEHandle)(uintptr_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_Kv3GetMemberString)(uintptr_t, String*, String*) = NULL;


PLUGIFY_EXPORT Vector4 (*__s2sdk_Kv3GetMemberColor)(uintptr_t, String*, Vector4*) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_Kv3GetMemberVector)(uintptr_t, String*, Vector3*) = NULL;


PLUGIFY_EXPORT Vector2 (*__s2sdk_Kv3GetMemberVector2D)(uintptr_t, String*, Vector2*) = NULL;


PLUGIFY_EXPORT Vector4 (*__s2sdk_Kv3GetMemberVector4D)(uintptr_t, String*, Vector4*) = NULL;


PLUGIFY_EXPORT Vector4 (*__s2sdk_Kv3GetMemberQuaternion)(uintptr_t, String*, Vector4*) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_Kv3GetMemberQAngle)(uintptr_t, String*, Vector3*) = NULL;


PLUGIFY_EXPORT Matrix4x4 (*__s2sdk_Kv3GetMemberMatrix3x4)(uintptr_t, String*, Matrix4x4*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMemberToNull)(uintptr_t, String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMemberToEmptyArray)(uintptr_t, String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMemberToEmptyTable)(uintptr_t, String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMemberToBinaryBlob)(uintptr_t, String*, Vector*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMemberToBinaryBlobExternal)(uintptr_t, String*, Vector*, bool) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMemberToCopyOfValue)(uintptr_t, String*, uintptr_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMemberBool)(uintptr_t, String*, bool) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMemberChar)(uintptr_t, String*, int8_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMemberUChar32)(uintptr_t, String*, uint32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMemberInt8)(uintptr_t, String*, int8_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMemberUInt8)(uintptr_t, String*, uint8_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMemberShort)(uintptr_t, String*, int16_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMemberUShort)(uintptr_t, String*, uint16_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMemberInt)(uintptr_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMemberUInt)(uintptr_t, String*, uint32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMemberInt64)(uintptr_t, String*, int64_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMemberUInt64)(uintptr_t, String*, uint64_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMemberFloat)(uintptr_t, String*, float) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMemberDouble)(uintptr_t, String*, double) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMemberPointer)(uintptr_t, String*, uintptr_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMemberStringToken)(uintptr_t, String*, uint32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMemberEHandle)(uintptr_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMemberString)(uintptr_t, String*, String*, uint8_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMemberStringExternal)(uintptr_t, String*, String*, uint8_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMemberColor)(uintptr_t, String*, Vector4*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMemberVector)(uintptr_t, String*, Vector3*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMemberVector2D)(uintptr_t, String*, Vector2*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMemberVector4D)(uintptr_t, String*, Vector4*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMemberQuaternion)(uintptr_t, String*, Vector4*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMemberQAngle)(uintptr_t, String*, Vector3*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3SetMemberMatrix3x4)(uintptr_t, String*, Matrix4x4*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Kv3DebugPrint)(uintptr_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3LoadFromBuffer)(uintptr_t, String*, Vector*, String*, uint32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3Load)(uintptr_t, String*, Vector*, String*, uint32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3LoadFromText)(uintptr_t, String*, String*, String*, uint32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3LoadFromFileToContext)(uintptr_t, String*, String*, String*, uint32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3LoadFromFile)(uintptr_t, String*, String*, String*, uint32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3LoadFromJSON)(uintptr_t, String*, String*, String*, uint32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3LoadFromJSONFile)(uintptr_t, String*, String*, String*, uint32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3LoadFromKV1File)(uintptr_t, String*, String*, String*, uint8_t, uint32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3LoadFromKV1Text)(uintptr_t, String*, String*, uint8_t, String*, bool, uint32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3LoadFromKV1TextTranslated)(uintptr_t, String*, String*, uint8_t, uintptr_t, int32_t, String*, bool, uint32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3LoadFromKV3OrKV1)(uintptr_t, String*, Vector*, String*, uint32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3LoadFromOldSchemaText)(uintptr_t, String*, Vector*, String*, uint32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3LoadTextNoHeader)(uintptr_t, String*, String*, String*, uint32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3Save)(uintptr_t, String*, Vector*, uint32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3SaveAsJSON)(uintptr_t, String*, Vector*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3SaveAsJSONString)(uintptr_t, String*, String*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3SaveAsKV1Text)(uintptr_t, String*, Vector*, uint8_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3SaveAsKV1TextTranslated)(uintptr_t, String*, Vector*, uint8_t, uintptr_t, int32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3SaveTextNoHeaderToBuffer)(uintptr_t, String*, Vector*, uint32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3SaveTextNoHeader)(uintptr_t, String*, String*, uint32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3SaveTextToString)(uintptr_t, String*, String*, uint32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_Kv3SaveToFile)(uintptr_t, String*, String*, String*, uint32_t) = NULL;


