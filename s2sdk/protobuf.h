#pragma once

#include "shared.h"

extern bool (*__s2sdk_HookUserMessage)(int16_t, void*, uint8_t);

static bool HookUserMessage(int16_t messageId, void* callback, uint8_t mode) {
	return __s2sdk_HookUserMessage(messageId, callback, mode);
}

extern bool (*__s2sdk_UnhookUserMessage)(int16_t, void*, uint8_t);

static bool UnhookUserMessage(int16_t messageId, void* callback, uint8_t mode) {
	return __s2sdk_UnhookUserMessage(messageId, callback, mode);
}

extern uintptr_t (*__s2sdk_UserMessageCreateFromSerializable)(uintptr_t, uintptr_t, uint64_t);

static uintptr_t UserMessageCreateFromSerializable(uintptr_t msgSerializable, uintptr_t message, uint64_t recipientMask) {
	return __s2sdk_UserMessageCreateFromSerializable(msgSerializable, message, recipientMask);
}

extern uintptr_t (*__s2sdk_UserMessageCreateFromName)(String*);

static uintptr_t UserMessageCreateFromName(String* messageName) {
	return __s2sdk_UserMessageCreateFromName(messageName);
}

extern uintptr_t (*__s2sdk_UserMessageCreateFromId)(int16_t);

static uintptr_t UserMessageCreateFromId(int16_t messageId) {
	return __s2sdk_UserMessageCreateFromId(messageId);
}

extern void (*__s2sdk_UserMessageDestroy)(uintptr_t);

static void UserMessageDestroy(uintptr_t userMessage) {
	__s2sdk_UserMessageDestroy(userMessage);
}

extern void (*__s2sdk_UserMessageSend)(uintptr_t);

static void UserMessageSend(uintptr_t userMessage) {
	__s2sdk_UserMessageSend(userMessage);
}

extern String (*__s2sdk_UserMessageGetMessageName)(uintptr_t);

static String UserMessageGetMessageName(uintptr_t userMessage) {
	return __s2sdk_UserMessageGetMessageName(userMessage);
}

extern int16_t (*__s2sdk_UserMessageGetMessageID)(uintptr_t);

static int16_t UserMessageGetMessageID(uintptr_t userMessage) {
	return __s2sdk_UserMessageGetMessageID(userMessage);
}

extern bool (*__s2sdk_UserMessageHasField)(uintptr_t, String*);

static bool UserMessageHasField(uintptr_t userMessage, String* fieldName) {
	return __s2sdk_UserMessageHasField(userMessage, fieldName);
}

extern uintptr_t (*__s2sdk_UserMessageGetProtobufMessage)(uintptr_t);

static uintptr_t UserMessageGetProtobufMessage(uintptr_t userMessage) {
	return __s2sdk_UserMessageGetProtobufMessage(userMessage);
}

extern uintptr_t (*__s2sdk_UserMessageGetSerializableMessage)(uintptr_t);

static uintptr_t UserMessageGetSerializableMessage(uintptr_t userMessage) {
	return __s2sdk_UserMessageGetSerializableMessage(userMessage);
}

extern int16_t (*__s2sdk_UserMessageFindMessageIdByName)(String*);

static int16_t UserMessageFindMessageIdByName(String* messageName) {
	return __s2sdk_UserMessageFindMessageIdByName(messageName);
}

extern uint64_t (*__s2sdk_UserMessageGetRecipientMask)(uintptr_t);

static uint64_t UserMessageGetRecipientMask(uintptr_t userMessage) {
	return __s2sdk_UserMessageGetRecipientMask(userMessage);
}

extern void (*__s2sdk_UserMessageAddRecipient)(uintptr_t, int32_t);

static void UserMessageAddRecipient(uintptr_t userMessage, int32_t playerSlot) {
	__s2sdk_UserMessageAddRecipient(userMessage, playerSlot);
}

extern void (*__s2sdk_UserMessageAddAllPlayers)(uintptr_t);

static void UserMessageAddAllPlayers(uintptr_t userMessage) {
	__s2sdk_UserMessageAddAllPlayers(userMessage);
}

extern void (*__s2sdk_UserMessageSetRecipientMask)(uintptr_t, uint64_t);

static void UserMessageSetRecipientMask(uintptr_t userMessage, uint64_t mask) {
	__s2sdk_UserMessageSetRecipientMask(userMessage, mask);
}

extern bool (*__s2sdk_UserMessageGetMessage)(uintptr_t, String*, uintptr_t*);

static bool UserMessageGetMessage(uintptr_t userMessage, String* fieldName, uintptr_t* message) {
	return __s2sdk_UserMessageGetMessage(userMessage, fieldName, message);
}

extern bool (*__s2sdk_UserMessageGetRepeatedMessage)(uintptr_t, String*, int32_t, uintptr_t*);

static bool UserMessageGetRepeatedMessage(uintptr_t userMessage, String* fieldName, int32_t index, uintptr_t* message) {
	return __s2sdk_UserMessageGetRepeatedMessage(userMessage, fieldName, index, message);
}

extern bool (*__s2sdk_UserMessageAddMessage)(uintptr_t, String*, uintptr_t);

static bool UserMessageAddMessage(uintptr_t userMessage, String* fieldName, uintptr_t message) {
	return __s2sdk_UserMessageAddMessage(userMessage, fieldName, message);
}

extern int32_t (*__s2sdk_UserMessageGetRepeatedFieldCount)(uintptr_t, String*);

static int32_t UserMessageGetRepeatedFieldCount(uintptr_t userMessage, String* fieldName) {
	return __s2sdk_UserMessageGetRepeatedFieldCount(userMessage, fieldName);
}

extern bool (*__s2sdk_UserMessageRemoveRepeatedFieldValue)(uintptr_t, String*, int32_t);

static bool UserMessageRemoveRepeatedFieldValue(uintptr_t userMessage, String* fieldName, int32_t index) {
	return __s2sdk_UserMessageRemoveRepeatedFieldValue(userMessage, fieldName, index);
}

extern String (*__s2sdk_UserMessageGetDebugString)(uintptr_t);

static String UserMessageGetDebugString(uintptr_t userMessage) {
	return __s2sdk_UserMessageGetDebugString(userMessage);
}

extern int32_t (*__s2sdk_PbReadEnum)(uintptr_t, String*, int32_t);

static int32_t PbReadEnum(uintptr_t userMessage, String* fieldName, int32_t index) {
	return __s2sdk_PbReadEnum(userMessage, fieldName, index);
}

extern int32_t (*__s2sdk_PbReadInt32)(uintptr_t, String*, int32_t);

static int32_t PbReadInt32(uintptr_t userMessage, String* fieldName, int32_t index) {
	return __s2sdk_PbReadInt32(userMessage, fieldName, index);
}

extern int64_t (*__s2sdk_PbReadInt64)(uintptr_t, String*, int32_t);

static int64_t PbReadInt64(uintptr_t userMessage, String* fieldName, int32_t index) {
	return __s2sdk_PbReadInt64(userMessage, fieldName, index);
}

extern uint32_t (*__s2sdk_PbReadUInt32)(uintptr_t, String*, int32_t);

static uint32_t PbReadUInt32(uintptr_t userMessage, String* fieldName, int32_t index) {
	return __s2sdk_PbReadUInt32(userMessage, fieldName, index);
}

extern uint64_t (*__s2sdk_PbReadUInt64)(uintptr_t, String*, int32_t);

static uint64_t PbReadUInt64(uintptr_t userMessage, String* fieldName, int32_t index) {
	return __s2sdk_PbReadUInt64(userMessage, fieldName, index);
}

extern float (*__s2sdk_PbReadFloat)(uintptr_t, String*, int32_t);

static float PbReadFloat(uintptr_t userMessage, String* fieldName, int32_t index) {
	return __s2sdk_PbReadFloat(userMessage, fieldName, index);
}

extern double (*__s2sdk_PbReadDouble)(uintptr_t, String*, int32_t);

static double PbReadDouble(uintptr_t userMessage, String* fieldName, int32_t index) {
	return __s2sdk_PbReadDouble(userMessage, fieldName, index);
}

extern bool (*__s2sdk_PbReadBool)(uintptr_t, String*, int32_t);

static bool PbReadBool(uintptr_t userMessage, String* fieldName, int32_t index) {
	return __s2sdk_PbReadBool(userMessage, fieldName, index);
}

extern String (*__s2sdk_PbReadString)(uintptr_t, String*, int32_t);

static String PbReadString(uintptr_t userMessage, String* fieldName, int32_t index) {
	return __s2sdk_PbReadString(userMessage, fieldName, index);
}

extern Vector4 (*__s2sdk_PbReadColor)(uintptr_t, String*, int32_t);

static Vector4 PbReadColor(uintptr_t userMessage, String* fieldName, int32_t index) {
	return __s2sdk_PbReadColor(userMessage, fieldName, index);
}

extern Vector2 (*__s2sdk_PbReadVector2)(uintptr_t, String*, int32_t);

static Vector2 PbReadVector2(uintptr_t userMessage, String* fieldName, int32_t index) {
	return __s2sdk_PbReadVector2(userMessage, fieldName, index);
}

extern Vector3 (*__s2sdk_PbReadVector3)(uintptr_t, String*, int32_t);

static Vector3 PbReadVector3(uintptr_t userMessage, String* fieldName, int32_t index) {
	return __s2sdk_PbReadVector3(userMessage, fieldName, index);
}

extern Vector4 (*__s2sdk_PbReadVector4)(uintptr_t, String*, int32_t);

static Vector4 PbReadVector4(uintptr_t userMessage, String* fieldName, int32_t index) {
	return __s2sdk_PbReadVector4(userMessage, fieldName, index);
}

extern Vector3 (*__s2sdk_PbReadQAngle)(uintptr_t, String*, int32_t);

static Vector3 PbReadQAngle(uintptr_t userMessage, String* fieldName, int32_t index) {
	return __s2sdk_PbReadQAngle(userMessage, fieldName, index);
}

extern bool (*__s2sdk_PbGetEnum)(uintptr_t, String*, int32_t*);

static bool PbGetEnum(uintptr_t userMessage, String* fieldName, int32_t* out) {
	return __s2sdk_PbGetEnum(userMessage, fieldName, out);
}

extern bool (*__s2sdk_PbSetEnum)(uintptr_t, String*, int32_t);

static bool PbSetEnum(uintptr_t userMessage, String* fieldName, int32_t value) {
	return __s2sdk_PbSetEnum(userMessage, fieldName, value);
}

extern bool (*__s2sdk_PbGetInt32)(uintptr_t, String*, int32_t*);

static bool PbGetInt32(uintptr_t userMessage, String* fieldName, int32_t* out) {
	return __s2sdk_PbGetInt32(userMessage, fieldName, out);
}

extern bool (*__s2sdk_PbSetInt32)(uintptr_t, String*, int32_t);

static bool PbSetInt32(uintptr_t userMessage, String* fieldName, int32_t value) {
	return __s2sdk_PbSetInt32(userMessage, fieldName, value);
}

extern bool (*__s2sdk_PbGetInt64)(uintptr_t, String*, int64_t*);

static bool PbGetInt64(uintptr_t userMessage, String* fieldName, int64_t* out) {
	return __s2sdk_PbGetInt64(userMessage, fieldName, out);
}

extern bool (*__s2sdk_PbSetInt64)(uintptr_t, String*, int64_t);

static bool PbSetInt64(uintptr_t userMessage, String* fieldName, int64_t value) {
	return __s2sdk_PbSetInt64(userMessage, fieldName, value);
}

extern bool (*__s2sdk_PbGetUInt32)(uintptr_t, String*, uint32_t*);

static bool PbGetUInt32(uintptr_t userMessage, String* fieldName, uint32_t* out) {
	return __s2sdk_PbGetUInt32(userMessage, fieldName, out);
}

extern bool (*__s2sdk_PbSetUInt32)(uintptr_t, String*, uint32_t);

static bool PbSetUInt32(uintptr_t userMessage, String* fieldName, uint32_t value) {
	return __s2sdk_PbSetUInt32(userMessage, fieldName, value);
}

extern bool (*__s2sdk_PbGetUInt64)(uintptr_t, String*, uint64_t*);

static bool PbGetUInt64(uintptr_t userMessage, String* fieldName, uint64_t* out) {
	return __s2sdk_PbGetUInt64(userMessage, fieldName, out);
}

extern bool (*__s2sdk_PbSetUInt64)(uintptr_t, String*, uint64_t);

static bool PbSetUInt64(uintptr_t userMessage, String* fieldName, uint64_t value) {
	return __s2sdk_PbSetUInt64(userMessage, fieldName, value);
}

extern bool (*__s2sdk_PbGetBool)(uintptr_t, String*, bool*);

static bool PbGetBool(uintptr_t userMessage, String* fieldName, bool* out) {
	return __s2sdk_PbGetBool(userMessage, fieldName, out);
}

extern bool (*__s2sdk_PbSetBool)(uintptr_t, String*, bool);

static bool PbSetBool(uintptr_t userMessage, String* fieldName, bool value) {
	return __s2sdk_PbSetBool(userMessage, fieldName, value);
}

extern bool (*__s2sdk_PbGetFloat)(uintptr_t, String*, float*);

static bool PbGetFloat(uintptr_t userMessage, String* fieldName, float* out) {
	return __s2sdk_PbGetFloat(userMessage, fieldName, out);
}

extern bool (*__s2sdk_PbSetFloat)(uintptr_t, String*, float);

static bool PbSetFloat(uintptr_t userMessage, String* fieldName, float value) {
	return __s2sdk_PbSetFloat(userMessage, fieldName, value);
}

extern bool (*__s2sdk_PbGetDouble)(uintptr_t, String*, double*);

static bool PbGetDouble(uintptr_t userMessage, String* fieldName, double* out) {
	return __s2sdk_PbGetDouble(userMessage, fieldName, out);
}

extern bool (*__s2sdk_PbSetDouble)(uintptr_t, String*, double);

static bool PbSetDouble(uintptr_t userMessage, String* fieldName, double value) {
	return __s2sdk_PbSetDouble(userMessage, fieldName, value);
}

extern bool (*__s2sdk_PbGetString)(uintptr_t, String*, String*);

static bool PbGetString(uintptr_t userMessage, String* fieldName, String* out) {
	return __s2sdk_PbGetString(userMessage, fieldName, out);
}

extern bool (*__s2sdk_PbSetString)(uintptr_t, String*, String*);

static bool PbSetString(uintptr_t userMessage, String* fieldName, String* value) {
	return __s2sdk_PbSetString(userMessage, fieldName, value);
}

extern bool (*__s2sdk_PbGetColor)(uintptr_t, String*, Vector4*);

static bool PbGetColor(uintptr_t userMessage, String* fieldName, Vector4* out) {
	return __s2sdk_PbGetColor(userMessage, fieldName, out);
}

extern bool (*__s2sdk_PbSetColor)(uintptr_t, String*, Vector4*);

static bool PbSetColor(uintptr_t userMessage, String* fieldName, Vector4* value) {
	return __s2sdk_PbSetColor(userMessage, fieldName, value);
}

extern bool (*__s2sdk_PbGetVector2)(uintptr_t, String*, Vector2*);

static bool PbGetVector2(uintptr_t userMessage, String* fieldName, Vector2* out) {
	return __s2sdk_PbGetVector2(userMessage, fieldName, out);
}

extern bool (*__s2sdk_PbSetVector2)(uintptr_t, String*, Vector2*);

static bool PbSetVector2(uintptr_t userMessage, String* fieldName, Vector2* value) {
	return __s2sdk_PbSetVector2(userMessage, fieldName, value);
}

extern bool (*__s2sdk_PbGetVector3)(uintptr_t, String*, Vector3*);

static bool PbGetVector3(uintptr_t userMessage, String* fieldName, Vector3* out) {
	return __s2sdk_PbGetVector3(userMessage, fieldName, out);
}

extern bool (*__s2sdk_PbSetVector3)(uintptr_t, String*, Vector3*);

static bool PbSetVector3(uintptr_t userMessage, String* fieldName, Vector3* value) {
	return __s2sdk_PbSetVector3(userMessage, fieldName, value);
}

extern bool (*__s2sdk_PbGetVector4)(uintptr_t, String*, Vector4*);

static bool PbGetVector4(uintptr_t userMessage, String* fieldName, Vector4* out) {
	return __s2sdk_PbGetVector4(userMessage, fieldName, out);
}

extern bool (*__s2sdk_PbSetVector4)(uintptr_t, String*, Vector4*);

static bool PbSetVector4(uintptr_t userMessage, String* fieldName, Vector4* value) {
	return __s2sdk_PbSetVector4(userMessage, fieldName, value);
}

extern bool (*__s2sdk_PbGetQAngle)(uintptr_t, String*, Vector3*);

static bool PbGetQAngle(uintptr_t userMessage, String* fieldName, Vector3* out) {
	return __s2sdk_PbGetQAngle(userMessage, fieldName, out);
}

extern bool (*__s2sdk_PbSetQAngle)(uintptr_t, String*, Vector3*);

static bool PbSetQAngle(uintptr_t userMessage, String* fieldName, Vector3* value) {
	return __s2sdk_PbSetQAngle(userMessage, fieldName, value);
}

extern bool (*__s2sdk_PbGetRepeatedEnum)(uintptr_t, String*, int32_t, int32_t*);

static bool PbGetRepeatedEnum(uintptr_t userMessage, String* fieldName, int32_t index, int32_t* out) {
	return __s2sdk_PbGetRepeatedEnum(userMessage, fieldName, index, out);
}

extern bool (*__s2sdk_PbSetRepeatedEnum)(uintptr_t, String*, int32_t, int32_t);

static bool PbSetRepeatedEnum(uintptr_t userMessage, String* fieldName, int32_t index, int32_t value) {
	return __s2sdk_PbSetRepeatedEnum(userMessage, fieldName, index, value);
}

extern bool (*__s2sdk_PbAddEnum)(uintptr_t, String*, int32_t);

static bool PbAddEnum(uintptr_t userMessage, String* fieldName, int32_t value) {
	return __s2sdk_PbAddEnum(userMessage, fieldName, value);
}

extern bool (*__s2sdk_PbGetRepeatedInt32)(uintptr_t, String*, int32_t, int32_t*);

static bool PbGetRepeatedInt32(uintptr_t userMessage, String* fieldName, int32_t index, int32_t* out) {
	return __s2sdk_PbGetRepeatedInt32(userMessage, fieldName, index, out);
}

extern bool (*__s2sdk_PbSetRepeatedInt32)(uintptr_t, String*, int32_t, int32_t);

static bool PbSetRepeatedInt32(uintptr_t userMessage, String* fieldName, int32_t index, int32_t value) {
	return __s2sdk_PbSetRepeatedInt32(userMessage, fieldName, index, value);
}

extern bool (*__s2sdk_PbAddInt32)(uintptr_t, String*, int32_t);

static bool PbAddInt32(uintptr_t userMessage, String* fieldName, int32_t value) {
	return __s2sdk_PbAddInt32(userMessage, fieldName, value);
}

extern bool (*__s2sdk_PbGetRepeatedInt64)(uintptr_t, String*, int32_t, int64_t*);

static bool PbGetRepeatedInt64(uintptr_t userMessage, String* fieldName, int32_t index, int64_t* out) {
	return __s2sdk_PbGetRepeatedInt64(userMessage, fieldName, index, out);
}

extern bool (*__s2sdk_PbSetRepeatedInt64)(uintptr_t, String*, int32_t, int64_t);

static bool PbSetRepeatedInt64(uintptr_t userMessage, String* fieldName, int32_t index, int64_t value) {
	return __s2sdk_PbSetRepeatedInt64(userMessage, fieldName, index, value);
}

extern bool (*__s2sdk_PbAddInt64)(uintptr_t, String*, int64_t);

static bool PbAddInt64(uintptr_t userMessage, String* fieldName, int64_t value) {
	return __s2sdk_PbAddInt64(userMessage, fieldName, value);
}

extern bool (*__s2sdk_PbGetRepeatedUInt32)(uintptr_t, String*, int32_t, uint32_t*);

static bool PbGetRepeatedUInt32(uintptr_t userMessage, String* fieldName, int32_t index, uint32_t* out) {
	return __s2sdk_PbGetRepeatedUInt32(userMessage, fieldName, index, out);
}

extern bool (*__s2sdk_PbSetRepeatedUInt32)(uintptr_t, String*, int32_t, uint32_t);

static bool PbSetRepeatedUInt32(uintptr_t userMessage, String* fieldName, int32_t index, uint32_t value) {
	return __s2sdk_PbSetRepeatedUInt32(userMessage, fieldName, index, value);
}

extern bool (*__s2sdk_PbAddUInt32)(uintptr_t, String*, uint32_t);

static bool PbAddUInt32(uintptr_t userMessage, String* fieldName, uint32_t value) {
	return __s2sdk_PbAddUInt32(userMessage, fieldName, value);
}

extern bool (*__s2sdk_PbGetRepeatedUInt64)(uintptr_t, String*, int32_t, uint64_t*);

static bool PbGetRepeatedUInt64(uintptr_t userMessage, String* fieldName, int32_t index, uint64_t* out) {
	return __s2sdk_PbGetRepeatedUInt64(userMessage, fieldName, index, out);
}

extern bool (*__s2sdk_PbSetRepeatedUInt64)(uintptr_t, String*, int32_t, uint64_t);

static bool PbSetRepeatedUInt64(uintptr_t userMessage, String* fieldName, int32_t index, uint64_t value) {
	return __s2sdk_PbSetRepeatedUInt64(userMessage, fieldName, index, value);
}

extern bool (*__s2sdk_PbAddUInt64)(uintptr_t, String*, uint64_t);

static bool PbAddUInt64(uintptr_t userMessage, String* fieldName, uint64_t value) {
	return __s2sdk_PbAddUInt64(userMessage, fieldName, value);
}

extern bool (*__s2sdk_PbGetRepeatedBool)(uintptr_t, String*, int32_t, bool*);

static bool PbGetRepeatedBool(uintptr_t userMessage, String* fieldName, int32_t index, bool* out) {
	return __s2sdk_PbGetRepeatedBool(userMessage, fieldName, index, out);
}

extern bool (*__s2sdk_PbSetRepeatedBool)(uintptr_t, String*, int32_t, bool);

static bool PbSetRepeatedBool(uintptr_t userMessage, String* fieldName, int32_t index, bool value) {
	return __s2sdk_PbSetRepeatedBool(userMessage, fieldName, index, value);
}

extern bool (*__s2sdk_PbAddBool)(uintptr_t, String*, bool);

static bool PbAddBool(uintptr_t userMessage, String* fieldName, bool value) {
	return __s2sdk_PbAddBool(userMessage, fieldName, value);
}

extern bool (*__s2sdk_PbGetRepeatedFloat)(uintptr_t, String*, int32_t, float*);

static bool PbGetRepeatedFloat(uintptr_t userMessage, String* fieldName, int32_t index, float* out) {
	return __s2sdk_PbGetRepeatedFloat(userMessage, fieldName, index, out);
}

extern bool (*__s2sdk_PbSetRepeatedFloat)(uintptr_t, String*, int32_t, float);

static bool PbSetRepeatedFloat(uintptr_t userMessage, String* fieldName, int32_t index, float value) {
	return __s2sdk_PbSetRepeatedFloat(userMessage, fieldName, index, value);
}

extern bool (*__s2sdk_PbAddFloat)(uintptr_t, String*, float);

static bool PbAddFloat(uintptr_t userMessage, String* fieldName, float value) {
	return __s2sdk_PbAddFloat(userMessage, fieldName, value);
}

extern bool (*__s2sdk_PbGetRepeatedDouble)(uintptr_t, String*, int32_t, double*);

static bool PbGetRepeatedDouble(uintptr_t userMessage, String* fieldName, int32_t index, double* out) {
	return __s2sdk_PbGetRepeatedDouble(userMessage, fieldName, index, out);
}

extern bool (*__s2sdk_PbSetRepeatedDouble)(uintptr_t, String*, int32_t, double);

static bool PbSetRepeatedDouble(uintptr_t userMessage, String* fieldName, int32_t index, double value) {
	return __s2sdk_PbSetRepeatedDouble(userMessage, fieldName, index, value);
}

extern bool (*__s2sdk_PbAddDouble)(uintptr_t, String*, double);

static bool PbAddDouble(uintptr_t userMessage, String* fieldName, double value) {
	return __s2sdk_PbAddDouble(userMessage, fieldName, value);
}

extern bool (*__s2sdk_PbGetRepeatedString)(uintptr_t, String*, int32_t, String*);

static bool PbGetRepeatedString(uintptr_t userMessage, String* fieldName, int32_t index, String* out) {
	return __s2sdk_PbGetRepeatedString(userMessage, fieldName, index, out);
}

extern bool (*__s2sdk_PbSetRepeatedString)(uintptr_t, String*, int32_t, String*);

static bool PbSetRepeatedString(uintptr_t userMessage, String* fieldName, int32_t index, String* value) {
	return __s2sdk_PbSetRepeatedString(userMessage, fieldName, index, value);
}

extern bool (*__s2sdk_PbAddString)(uintptr_t, String*, String*);

static bool PbAddString(uintptr_t userMessage, String* fieldName, String* value) {
	return __s2sdk_PbAddString(userMessage, fieldName, value);
}

extern bool (*__s2sdk_PbGetRepeatedColor)(uintptr_t, String*, int32_t, Vector4*);

static bool PbGetRepeatedColor(uintptr_t userMessage, String* fieldName, int32_t index, Vector4* out) {
	return __s2sdk_PbGetRepeatedColor(userMessage, fieldName, index, out);
}

extern bool (*__s2sdk_PbSetRepeatedColor)(uintptr_t, String*, int32_t, Vector4*);

static bool PbSetRepeatedColor(uintptr_t userMessage, String* fieldName, int32_t index, Vector4* value) {
	return __s2sdk_PbSetRepeatedColor(userMessage, fieldName, index, value);
}

extern bool (*__s2sdk_PbAddColor)(uintptr_t, String*, Vector4*);

static bool PbAddColor(uintptr_t userMessage, String* fieldName, Vector4* value) {
	return __s2sdk_PbAddColor(userMessage, fieldName, value);
}

extern bool (*__s2sdk_PbGetRepeatedVector2)(uintptr_t, String*, int32_t, Vector2*);

static bool PbGetRepeatedVector2(uintptr_t userMessage, String* fieldName, int32_t index, Vector2* out) {
	return __s2sdk_PbGetRepeatedVector2(userMessage, fieldName, index, out);
}

extern bool (*__s2sdk_PbSetRepeatedVector2)(uintptr_t, String*, int32_t, Vector2*);

static bool PbSetRepeatedVector2(uintptr_t userMessage, String* fieldName, int32_t index, Vector2* value) {
	return __s2sdk_PbSetRepeatedVector2(userMessage, fieldName, index, value);
}

extern bool (*__s2sdk_PbAddVector2)(uintptr_t, String*, Vector2*);

static bool PbAddVector2(uintptr_t userMessage, String* fieldName, Vector2* value) {
	return __s2sdk_PbAddVector2(userMessage, fieldName, value);
}

extern bool (*__s2sdk_PbGetRepeatedVector3)(uintptr_t, String*, int32_t, Vector3*);

static bool PbGetRepeatedVector3(uintptr_t userMessage, String* fieldName, int32_t index, Vector3* out) {
	return __s2sdk_PbGetRepeatedVector3(userMessage, fieldName, index, out);
}

extern bool (*__s2sdk_PbSetRepeatedVector3)(uintptr_t, String*, int32_t, Vector3*);

static bool PbSetRepeatedVector3(uintptr_t userMessage, String* fieldName, int32_t index, Vector3* value) {
	return __s2sdk_PbSetRepeatedVector3(userMessage, fieldName, index, value);
}

extern bool (*__s2sdk_PbAddVector3)(uintptr_t, String*, Vector3*);

static bool PbAddVector3(uintptr_t userMessage, String* fieldName, Vector3* value) {
	return __s2sdk_PbAddVector3(userMessage, fieldName, value);
}

extern bool (*__s2sdk_PbGetRepeatedVector4)(uintptr_t, String*, int32_t, Vector4*);

static bool PbGetRepeatedVector4(uintptr_t userMessage, String* fieldName, int32_t index, Vector4* out) {
	return __s2sdk_PbGetRepeatedVector4(userMessage, fieldName, index, out);
}

extern bool (*__s2sdk_PbSetRepeatedVector4)(uintptr_t, String*, int32_t, Vector4*);

static bool PbSetRepeatedVector4(uintptr_t userMessage, String* fieldName, int32_t index, Vector4* value) {
	return __s2sdk_PbSetRepeatedVector4(userMessage, fieldName, index, value);
}

extern bool (*__s2sdk_PbAddVector4)(uintptr_t, String*, Vector4*);

static bool PbAddVector4(uintptr_t userMessage, String* fieldName, Vector4* value) {
	return __s2sdk_PbAddVector4(userMessage, fieldName, value);
}

extern bool (*__s2sdk_PbGetRepeatedQAngle)(uintptr_t, String*, int32_t, Vector3*);

static bool PbGetRepeatedQAngle(uintptr_t userMessage, String* fieldName, int32_t index, Vector3* out) {
	return __s2sdk_PbGetRepeatedQAngle(userMessage, fieldName, index, out);
}

extern bool (*__s2sdk_PbSetRepeatedQAngle)(uintptr_t, String*, int32_t, Vector3*);

static bool PbSetRepeatedQAngle(uintptr_t userMessage, String* fieldName, int32_t index, Vector3* value) {
	return __s2sdk_PbSetRepeatedQAngle(userMessage, fieldName, index, value);
}

extern bool (*__s2sdk_PbAddQAngle)(uintptr_t, String*, Vector3*);

static bool PbAddQAngle(uintptr_t userMessage, String* fieldName, Vector3* value) {
	return __s2sdk_PbAddQAngle(userMessage, fieldName, value);
}

