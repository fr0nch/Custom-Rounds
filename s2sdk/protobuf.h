#pragma once

#include "s2sdk.h"

static bool HookUserMessage(int16_t messageId, void* callback, uint8_t mode) {
	typedef bool (*HookUserMessageFn)(int16_t, void*, uint8_t);
	static HookUserMessageFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.HookUserMessage", (void**)&__func);
	return __func(messageId, callback, mode);
}

static bool UnhookUserMessage(int16_t messageId, void* callback, uint8_t mode) {
	typedef bool (*UnhookUserMessageFn)(int16_t, void*, uint8_t);
	static UnhookUserMessageFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.UnhookUserMessage", (void**)&__func);
	return __func(messageId, callback, mode);
}

static uintptr_t UserMessageCreateFromSerializable(uintptr_t msgSerializable, uintptr_t message, uint64_t recipientMask) {
	typedef uintptr_t (*UserMessageCreateFromSerializableFn)(uintptr_t, uintptr_t, uint64_t);
	static UserMessageCreateFromSerializableFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.UserMessageCreateFromSerializable", (void**)&__func);
	return __func(msgSerializable, message, recipientMask);
}

static uintptr_t UserMessageCreateFromName(String* messageName) {
	typedef uintptr_t (*UserMessageCreateFromNameFn)(String*);
	static UserMessageCreateFromNameFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.UserMessageCreateFromName", (void**)&__func);
	return __func(messageName);
}

static uintptr_t UserMessageCreateFromId(int16_t messageId) {
	typedef uintptr_t (*UserMessageCreateFromIdFn)(int16_t);
	static UserMessageCreateFromIdFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.UserMessageCreateFromId", (void**)&__func);
	return __func(messageId);
}

static void UserMessageDestroy(uintptr_t userMessage) {
	typedef void (*UserMessageDestroyFn)(uintptr_t);
	static UserMessageDestroyFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.UserMessageDestroy", (void**)&__func);
	__func(userMessage);
}

static void UserMessageSend(uintptr_t userMessage) {
	typedef void (*UserMessageSendFn)(uintptr_t);
	static UserMessageSendFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.UserMessageSend", (void**)&__func);
	__func(userMessage);
}

static String UserMessageGetMessageName(uintptr_t userMessage) {
	typedef String (*UserMessageGetMessageNameFn)(uintptr_t);
	static UserMessageGetMessageNameFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.UserMessageGetMessageName", (void**)&__func);
	return __func(userMessage);
}

static int16_t UserMessageGetMessageID(uintptr_t userMessage) {
	typedef int16_t (*UserMessageGetMessageIDFn)(uintptr_t);
	static UserMessageGetMessageIDFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.UserMessageGetMessageID", (void**)&__func);
	return __func(userMessage);
}

static bool UserMessageHasField(uintptr_t userMessage, String* fieldName) {
	typedef bool (*UserMessageHasFieldFn)(uintptr_t, String*);
	static UserMessageHasFieldFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.UserMessageHasField", (void**)&__func);
	return __func(userMessage, fieldName);
}

static uintptr_t UserMessageGetProtobufMessage(uintptr_t userMessage) {
	typedef uintptr_t (*UserMessageGetProtobufMessageFn)(uintptr_t);
	static UserMessageGetProtobufMessageFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.UserMessageGetProtobufMessage", (void**)&__func);
	return __func(userMessage);
}

static uintptr_t UserMessageGetSerializableMessage(uintptr_t userMessage) {
	typedef uintptr_t (*UserMessageGetSerializableMessageFn)(uintptr_t);
	static UserMessageGetSerializableMessageFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.UserMessageGetSerializableMessage", (void**)&__func);
	return __func(userMessage);
}

static int16_t UserMessageFindMessageIdByName(String* messageName) {
	typedef int16_t (*UserMessageFindMessageIdByNameFn)(String*);
	static UserMessageFindMessageIdByNameFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.UserMessageFindMessageIdByName", (void**)&__func);
	return __func(messageName);
}

static uint64_t UserMessageGetRecipientMask(uintptr_t userMessage) {
	typedef uint64_t (*UserMessageGetRecipientMaskFn)(uintptr_t);
	static UserMessageGetRecipientMaskFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.UserMessageGetRecipientMask", (void**)&__func);
	return __func(userMessage);
}

static void UserMessageAddRecipient(uintptr_t userMessage, int32_t playerSlot) {
	typedef void (*UserMessageAddRecipientFn)(uintptr_t, int32_t);
	static UserMessageAddRecipientFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.UserMessageAddRecipient", (void**)&__func);
	__func(userMessage, playerSlot);
}

static void UserMessageAddAllPlayers(uintptr_t userMessage) {
	typedef void (*UserMessageAddAllPlayersFn)(uintptr_t);
	static UserMessageAddAllPlayersFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.UserMessageAddAllPlayers", (void**)&__func);
	__func(userMessage);
}

static void UserMessageSetRecipientMask(uintptr_t userMessage, uint64_t mask) {
	typedef void (*UserMessageSetRecipientMaskFn)(uintptr_t, uint64_t);
	static UserMessageSetRecipientMaskFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.UserMessageSetRecipientMask", (void**)&__func);
	__func(userMessage, mask);
}

static bool UserMessageGetMessage(uintptr_t userMessage, String* fieldName, uintptr_t message) {
	typedef bool (*UserMessageGetMessageFn)(uintptr_t, String*, uintptr_t);
	static UserMessageGetMessageFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.UserMessageGetMessage", (void**)&__func);
	return __func(userMessage, fieldName, message);
}

static bool UserMessageGetRepeatedMessage(uintptr_t userMessage, String* fieldName, int32_t index, uintptr_t message) {
	typedef bool (*UserMessageGetRepeatedMessageFn)(uintptr_t, String*, int32_t, uintptr_t);
	static UserMessageGetRepeatedMessageFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.UserMessageGetRepeatedMessage", (void**)&__func);
	return __func(userMessage, fieldName, index, message);
}

static bool UserMessageAddMessage(uintptr_t userMessage, String* fieldName, uintptr_t message) {
	typedef bool (*UserMessageAddMessageFn)(uintptr_t, String*, uintptr_t);
	static UserMessageAddMessageFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.UserMessageAddMessage", (void**)&__func);
	return __func(userMessage, fieldName, message);
}

static int32_t UserMessageGetRepeatedFieldCount(uintptr_t userMessage, String* fieldName) {
	typedef int32_t (*UserMessageGetRepeatedFieldCountFn)(uintptr_t, String*);
	static UserMessageGetRepeatedFieldCountFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.UserMessageGetRepeatedFieldCount", (void**)&__func);
	return __func(userMessage, fieldName);
}

static bool UserMessageRemoveRepeatedFieldValue(uintptr_t userMessage, String* fieldName, int32_t index) {
	typedef bool (*UserMessageRemoveRepeatedFieldValueFn)(uintptr_t, String*, int32_t);
	static UserMessageRemoveRepeatedFieldValueFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.UserMessageRemoveRepeatedFieldValue", (void**)&__func);
	return __func(userMessage, fieldName, index);
}

static String UserMessageGetDebugString(uintptr_t userMessage) {
	typedef String (*UserMessageGetDebugStringFn)(uintptr_t);
	static UserMessageGetDebugStringFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.UserMessageGetDebugString", (void**)&__func);
	return __func(userMessage);
}

static int32_t PbReadEnum(uintptr_t userMessage, String* fieldName, int32_t index) {
	typedef int32_t (*PbReadEnumFn)(uintptr_t, String*, int32_t);
	static PbReadEnumFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbReadEnum", (void**)&__func);
	return __func(userMessage, fieldName, index);
}

static int32_t PbReadInt32(uintptr_t userMessage, String* fieldName, int32_t index) {
	typedef int32_t (*PbReadInt32Fn)(uintptr_t, String*, int32_t);
	static PbReadInt32Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbReadInt32", (void**)&__func);
	return __func(userMessage, fieldName, index);
}

static int64_t PbReadInt64(uintptr_t userMessage, String* fieldName, int32_t index) {
	typedef int64_t (*PbReadInt64Fn)(uintptr_t, String*, int32_t);
	static PbReadInt64Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbReadInt64", (void**)&__func);
	return __func(userMessage, fieldName, index);
}

static uint32_t PbReadUInt32(uintptr_t userMessage, String* fieldName, int32_t index) {
	typedef uint32_t (*PbReadUInt32Fn)(uintptr_t, String*, int32_t);
	static PbReadUInt32Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbReadUInt32", (void**)&__func);
	return __func(userMessage, fieldName, index);
}

static uint64_t PbReadUInt64(uintptr_t userMessage, String* fieldName, int32_t index) {
	typedef uint64_t (*PbReadUInt64Fn)(uintptr_t, String*, int32_t);
	static PbReadUInt64Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbReadUInt64", (void**)&__func);
	return __func(userMessage, fieldName, index);
}

static float PbReadFloat(uintptr_t userMessage, String* fieldName, int32_t index) {
	typedef float (*PbReadFloatFn)(uintptr_t, String*, int32_t);
	static PbReadFloatFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbReadFloat", (void**)&__func);
	return __func(userMessage, fieldName, index);
}

static double PbReadDouble(uintptr_t userMessage, String* fieldName, int32_t index) {
	typedef double (*PbReadDoubleFn)(uintptr_t, String*, int32_t);
	static PbReadDoubleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbReadDouble", (void**)&__func);
	return __func(userMessage, fieldName, index);
}

static bool PbReadBool(uintptr_t userMessage, String* fieldName, int32_t index) {
	typedef bool (*PbReadBoolFn)(uintptr_t, String*, int32_t);
	static PbReadBoolFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbReadBool", (void**)&__func);
	return __func(userMessage, fieldName, index);
}

static String PbReadString(uintptr_t userMessage, String* fieldName, int32_t index) {
	typedef String (*PbReadStringFn)(uintptr_t, String*, int32_t);
	static PbReadStringFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbReadString", (void**)&__func);
	return __func(userMessage, fieldName, index);
}

static int32_t PbReadColor(uintptr_t userMessage, String* fieldName, int32_t index) {
	typedef int32_t (*PbReadColorFn)(uintptr_t, String*, int32_t);
	static PbReadColorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbReadColor", (void**)&__func);
	return __func(userMessage, fieldName, index);
}

static Vector2 PbReadVector2(uintptr_t userMessage, String* fieldName, int32_t index) {
	typedef Vector2 (*PbReadVector2Fn)(uintptr_t, String*, int32_t);
	static PbReadVector2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbReadVector2", (void**)&__func);
	return __func(userMessage, fieldName, index);
}

static Vector3 PbReadVector3(uintptr_t userMessage, String* fieldName, int32_t index) {
	typedef Vector3 (*PbReadVector3Fn)(uintptr_t, String*, int32_t);
	static PbReadVector3Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbReadVector3", (void**)&__func);
	return __func(userMessage, fieldName, index);
}

static Vector3 PbReadQAngle(uintptr_t userMessage, String* fieldName, int32_t index) {
	typedef Vector3 (*PbReadQAngleFn)(uintptr_t, String*, int32_t);
	static PbReadQAngleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbReadQAngle", (void**)&__func);
	return __func(userMessage, fieldName, index);
}

static bool PbGetEnum(uintptr_t userMessage, String* fieldName, uintptr_t out) {
	typedef bool (*PbGetEnumFn)(uintptr_t, String*, uintptr_t);
	static PbGetEnumFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbGetEnum", (void**)&__func);
	return __func(userMessage, fieldName, out);
}

static bool PbSetEnum(uintptr_t userMessage, String* fieldName, int32_t value) {
	typedef bool (*PbSetEnumFn)(uintptr_t, String*, int32_t);
	static PbSetEnumFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbSetEnum", (void**)&__func);
	return __func(userMessage, fieldName, value);
}

static bool PbGetInt32(uintptr_t userMessage, String* fieldName, uintptr_t out) {
	typedef bool (*PbGetInt32Fn)(uintptr_t, String*, uintptr_t);
	static PbGetInt32Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbGetInt32", (void**)&__func);
	return __func(userMessage, fieldName, out);
}

static bool PbSetInt32(uintptr_t userMessage, String* fieldName, int32_t value) {
	typedef bool (*PbSetInt32Fn)(uintptr_t, String*, int32_t);
	static PbSetInt32Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbSetInt32", (void**)&__func);
	return __func(userMessage, fieldName, value);
}

static bool PbGetInt64(uintptr_t userMessage, String* fieldName, uintptr_t out) {
	typedef bool (*PbGetInt64Fn)(uintptr_t, String*, uintptr_t);
	static PbGetInt64Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbGetInt64", (void**)&__func);
	return __func(userMessage, fieldName, out);
}

static bool PbSetInt64(uintptr_t userMessage, String* fieldName, int64_t value) {
	typedef bool (*PbSetInt64Fn)(uintptr_t, String*, int64_t);
	static PbSetInt64Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbSetInt64", (void**)&__func);
	return __func(userMessage, fieldName, value);
}

static bool PbGetUInt32(uintptr_t userMessage, String* fieldName, uintptr_t out) {
	typedef bool (*PbGetUInt32Fn)(uintptr_t, String*, uintptr_t);
	static PbGetUInt32Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbGetUInt32", (void**)&__func);
	return __func(userMessage, fieldName, out);
}

static bool PbSetUInt32(uintptr_t userMessage, String* fieldName, uint32_t value) {
	typedef bool (*PbSetUInt32Fn)(uintptr_t, String*, uint32_t);
	static PbSetUInt32Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbSetUInt32", (void**)&__func);
	return __func(userMessage, fieldName, value);
}

static bool PbGetUInt64(uintptr_t userMessage, String* fieldName, uintptr_t out) {
	typedef bool (*PbGetUInt64Fn)(uintptr_t, String*, uintptr_t);
	static PbGetUInt64Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbGetUInt64", (void**)&__func);
	return __func(userMessage, fieldName, out);
}

static bool PbSetUInt64(uintptr_t userMessage, String* fieldName, uint64_t value) {
	typedef bool (*PbSetUInt64Fn)(uintptr_t, String*, uint64_t);
	static PbSetUInt64Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbSetUInt64", (void**)&__func);
	return __func(userMessage, fieldName, value);
}

static bool PbGetBool(uintptr_t userMessage, String* fieldName, uintptr_t out) {
	typedef bool (*PbGetBoolFn)(uintptr_t, String*, uintptr_t);
	static PbGetBoolFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbGetBool", (void**)&__func);
	return __func(userMessage, fieldName, out);
}

static bool PbSetBool(uintptr_t userMessage, String* fieldName, bool value) {
	typedef bool (*PbSetBoolFn)(uintptr_t, String*, bool);
	static PbSetBoolFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbSetBool", (void**)&__func);
	return __func(userMessage, fieldName, value);
}

static bool PbGetFloat(uintptr_t userMessage, String* fieldName, uintptr_t out) {
	typedef bool (*PbGetFloatFn)(uintptr_t, String*, uintptr_t);
	static PbGetFloatFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbGetFloat", (void**)&__func);
	return __func(userMessage, fieldName, out);
}

static bool PbSetFloat(uintptr_t userMessage, String* fieldName, float value) {
	typedef bool (*PbSetFloatFn)(uintptr_t, String*, float);
	static PbSetFloatFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbSetFloat", (void**)&__func);
	return __func(userMessage, fieldName, value);
}

static bool PbGetDouble(uintptr_t userMessage, String* fieldName, uintptr_t out) {
	typedef bool (*PbGetDoubleFn)(uintptr_t, String*, uintptr_t);
	static PbGetDoubleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbGetDouble", (void**)&__func);
	return __func(userMessage, fieldName, out);
}

static bool PbSetDouble(uintptr_t userMessage, String* fieldName, double value) {
	typedef bool (*PbSetDoubleFn)(uintptr_t, String*, double);
	static PbSetDoubleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbSetDouble", (void**)&__func);
	return __func(userMessage, fieldName, value);
}

static bool PbGetString(uintptr_t userMessage, String* fieldName, String* out) {
	typedef bool (*PbGetStringFn)(uintptr_t, String*, String*);
	static PbGetStringFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbGetString", (void**)&__func);
	return __func(userMessage, fieldName, out);
}

static bool PbSetString(uintptr_t userMessage, String* fieldName, String* value) {
	typedef bool (*PbSetStringFn)(uintptr_t, String*, String*);
	static PbSetStringFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbSetString", (void**)&__func);
	return __func(userMessage, fieldName, value);
}

static bool PbGetColor(uintptr_t userMessage, String* fieldName, uintptr_t out) {
	typedef bool (*PbGetColorFn)(uintptr_t, String*, uintptr_t);
	static PbGetColorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbGetColor", (void**)&__func);
	return __func(userMessage, fieldName, out);
}

static bool PbSetColor(uintptr_t userMessage, String* fieldName, int32_t value) {
	typedef bool (*PbSetColorFn)(uintptr_t, String*, int32_t);
	static PbSetColorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbSetColor", (void**)&__func);
	return __func(userMessage, fieldName, value);
}

static bool PbGetVector2(uintptr_t userMessage, String* fieldName, uintptr_t out) {
	typedef bool (*PbGetVector2Fn)(uintptr_t, String*, uintptr_t);
	static PbGetVector2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbGetVector2", (void**)&__func);
	return __func(userMessage, fieldName, out);
}

static bool PbSetVector2(uintptr_t userMessage, String* fieldName, Vector2* value) {
	typedef bool (*PbSetVector2Fn)(uintptr_t, String*, Vector2*);
	static PbSetVector2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbSetVector2", (void**)&__func);
	return __func(userMessage, fieldName, value);
}

static bool PbGetVector3(uintptr_t userMessage, String* fieldName, uintptr_t out) {
	typedef bool (*PbGetVector3Fn)(uintptr_t, String*, uintptr_t);
	static PbGetVector3Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbGetVector3", (void**)&__func);
	return __func(userMessage, fieldName, out);
}

static bool PbSetVector3(uintptr_t userMessage, String* fieldName, Vector3* value) {
	typedef bool (*PbSetVector3Fn)(uintptr_t, String*, Vector3*);
	static PbSetVector3Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbSetVector3", (void**)&__func);
	return __func(userMessage, fieldName, value);
}

static bool PbGetQAngle(uintptr_t userMessage, String* fieldName, uintptr_t out) {
	typedef bool (*PbGetQAngleFn)(uintptr_t, String*, uintptr_t);
	static PbGetQAngleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbGetQAngle", (void**)&__func);
	return __func(userMessage, fieldName, out);
}

static bool PbSetQAngle(uintptr_t userMessage, String* fieldName, Vector3* value) {
	typedef bool (*PbSetQAngleFn)(uintptr_t, String*, Vector3*);
	static PbSetQAngleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbSetQAngle", (void**)&__func);
	return __func(userMessage, fieldName, value);
}

static bool PbGetRepeatedEnum(uintptr_t userMessage, String* fieldName, int32_t index, uintptr_t out) {
	typedef bool (*PbGetRepeatedEnumFn)(uintptr_t, String*, int32_t, uintptr_t);
	static PbGetRepeatedEnumFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbGetRepeatedEnum", (void**)&__func);
	return __func(userMessage, fieldName, index, out);
}

static bool PbSetRepeatedEnum(uintptr_t userMessage, String* fieldName, int32_t index, int32_t value) {
	typedef bool (*PbSetRepeatedEnumFn)(uintptr_t, String*, int32_t, int32_t);
	static PbSetRepeatedEnumFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbSetRepeatedEnum", (void**)&__func);
	return __func(userMessage, fieldName, index, value);
}

static bool PbAddEnum(uintptr_t userMessage, String* fieldName, int32_t value) {
	typedef bool (*PbAddEnumFn)(uintptr_t, String*, int32_t);
	static PbAddEnumFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbAddEnum", (void**)&__func);
	return __func(userMessage, fieldName, value);
}

static bool PbGetRepeatedInt32(uintptr_t userMessage, String* fieldName, int32_t index, uintptr_t out) {
	typedef bool (*PbGetRepeatedInt32Fn)(uintptr_t, String*, int32_t, uintptr_t);
	static PbGetRepeatedInt32Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbGetRepeatedInt32", (void**)&__func);
	return __func(userMessage, fieldName, index, out);
}

static bool PbSetRepeatedInt32(uintptr_t userMessage, String* fieldName, int32_t index, int32_t value) {
	typedef bool (*PbSetRepeatedInt32Fn)(uintptr_t, String*, int32_t, int32_t);
	static PbSetRepeatedInt32Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbSetRepeatedInt32", (void**)&__func);
	return __func(userMessage, fieldName, index, value);
}

static bool PbAddInt32(uintptr_t userMessage, String* fieldName, int32_t value) {
	typedef bool (*PbAddInt32Fn)(uintptr_t, String*, int32_t);
	static PbAddInt32Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbAddInt32", (void**)&__func);
	return __func(userMessage, fieldName, value);
}

static bool PbGetRepeatedInt64(uintptr_t userMessage, String* fieldName, int32_t index, uintptr_t out) {
	typedef bool (*PbGetRepeatedInt64Fn)(uintptr_t, String*, int32_t, uintptr_t);
	static PbGetRepeatedInt64Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbGetRepeatedInt64", (void**)&__func);
	return __func(userMessage, fieldName, index, out);
}

static bool PbSetRepeatedInt64(uintptr_t userMessage, String* fieldName, int32_t index, int64_t value) {
	typedef bool (*PbSetRepeatedInt64Fn)(uintptr_t, String*, int32_t, int64_t);
	static PbSetRepeatedInt64Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbSetRepeatedInt64", (void**)&__func);
	return __func(userMessage, fieldName, index, value);
}

static bool PbAddInt64(uintptr_t userMessage, String* fieldName, int64_t value) {
	typedef bool (*PbAddInt64Fn)(uintptr_t, String*, int64_t);
	static PbAddInt64Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbAddInt64", (void**)&__func);
	return __func(userMessage, fieldName, value);
}

static bool PbGetRepeatedUInt32(uintptr_t userMessage, String* fieldName, int32_t index, uintptr_t out) {
	typedef bool (*PbGetRepeatedUInt32Fn)(uintptr_t, String*, int32_t, uintptr_t);
	static PbGetRepeatedUInt32Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbGetRepeatedUInt32", (void**)&__func);
	return __func(userMessage, fieldName, index, out);
}

static bool PbSetRepeatedUInt32(uintptr_t userMessage, String* fieldName, int32_t index, uint32_t value) {
	typedef bool (*PbSetRepeatedUInt32Fn)(uintptr_t, String*, int32_t, uint32_t);
	static PbSetRepeatedUInt32Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbSetRepeatedUInt32", (void**)&__func);
	return __func(userMessage, fieldName, index, value);
}

static bool PbAddUInt32(uintptr_t userMessage, String* fieldName, uint32_t value) {
	typedef bool (*PbAddUInt32Fn)(uintptr_t, String*, uint32_t);
	static PbAddUInt32Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbAddUInt32", (void**)&__func);
	return __func(userMessage, fieldName, value);
}

static bool PbGetRepeatedUInt64(uintptr_t userMessage, String* fieldName, int32_t index, uintptr_t out) {
	typedef bool (*PbGetRepeatedUInt64Fn)(uintptr_t, String*, int32_t, uintptr_t);
	static PbGetRepeatedUInt64Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbGetRepeatedUInt64", (void**)&__func);
	return __func(userMessage, fieldName, index, out);
}

static bool PbSetRepeatedUInt64(uintptr_t userMessage, String* fieldName, int32_t index, uint64_t value) {
	typedef bool (*PbSetRepeatedUInt64Fn)(uintptr_t, String*, int32_t, uint64_t);
	static PbSetRepeatedUInt64Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbSetRepeatedUInt64", (void**)&__func);
	return __func(userMessage, fieldName, index, value);
}

static bool PbAddUInt64(uintptr_t userMessage, String* fieldName, uint64_t value) {
	typedef bool (*PbAddUInt64Fn)(uintptr_t, String*, uint64_t);
	static PbAddUInt64Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbAddUInt64", (void**)&__func);
	return __func(userMessage, fieldName, value);
}

static bool PbGetRepeatedBool(uintptr_t userMessage, String* fieldName, int32_t index, uintptr_t out) {
	typedef bool (*PbGetRepeatedBoolFn)(uintptr_t, String*, int32_t, uintptr_t);
	static PbGetRepeatedBoolFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbGetRepeatedBool", (void**)&__func);
	return __func(userMessage, fieldName, index, out);
}

static bool PbSetRepeatedBool(uintptr_t userMessage, String* fieldName, int32_t index, bool value) {
	typedef bool (*PbSetRepeatedBoolFn)(uintptr_t, String*, int32_t, bool);
	static PbSetRepeatedBoolFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbSetRepeatedBool", (void**)&__func);
	return __func(userMessage, fieldName, index, value);
}

static bool PbAddBool(uintptr_t userMessage, String* fieldName, bool value) {
	typedef bool (*PbAddBoolFn)(uintptr_t, String*, bool);
	static PbAddBoolFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbAddBool", (void**)&__func);
	return __func(userMessage, fieldName, value);
}

static bool PbGetRepeatedFloat(uintptr_t userMessage, String* fieldName, int32_t index, uintptr_t out) {
	typedef bool (*PbGetRepeatedFloatFn)(uintptr_t, String*, int32_t, uintptr_t);
	static PbGetRepeatedFloatFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbGetRepeatedFloat", (void**)&__func);
	return __func(userMessage, fieldName, index, out);
}

static bool PbSetRepeatedFloat(uintptr_t userMessage, String* fieldName, int32_t index, float value) {
	typedef bool (*PbSetRepeatedFloatFn)(uintptr_t, String*, int32_t, float);
	static PbSetRepeatedFloatFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbSetRepeatedFloat", (void**)&__func);
	return __func(userMessage, fieldName, index, value);
}

static bool PbAddFloat(uintptr_t userMessage, String* fieldName, float value) {
	typedef bool (*PbAddFloatFn)(uintptr_t, String*, float);
	static PbAddFloatFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbAddFloat", (void**)&__func);
	return __func(userMessage, fieldName, value);
}

static bool PbGetRepeatedDouble(uintptr_t userMessage, String* fieldName, int32_t index, uintptr_t out) {
	typedef bool (*PbGetRepeatedDoubleFn)(uintptr_t, String*, int32_t, uintptr_t);
	static PbGetRepeatedDoubleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbGetRepeatedDouble", (void**)&__func);
	return __func(userMessage, fieldName, index, out);
}

static bool PbSetRepeatedDouble(uintptr_t userMessage, String* fieldName, int32_t index, double value) {
	typedef bool (*PbSetRepeatedDoubleFn)(uintptr_t, String*, int32_t, double);
	static PbSetRepeatedDoubleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbSetRepeatedDouble", (void**)&__func);
	return __func(userMessage, fieldName, index, value);
}

static bool PbAddDouble(uintptr_t userMessage, String* fieldName, double value) {
	typedef bool (*PbAddDoubleFn)(uintptr_t, String*, double);
	static PbAddDoubleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbAddDouble", (void**)&__func);
	return __func(userMessage, fieldName, value);
}

static bool PbGetRepeatedString(uintptr_t userMessage, String* fieldName, int32_t index, String* out) {
	typedef bool (*PbGetRepeatedStringFn)(uintptr_t, String*, int32_t, String*);
	static PbGetRepeatedStringFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbGetRepeatedString", (void**)&__func);
	return __func(userMessage, fieldName, index, out);
}

static bool PbSetRepeatedString(uintptr_t userMessage, String* fieldName, int32_t index, String* value) {
	typedef bool (*PbSetRepeatedStringFn)(uintptr_t, String*, int32_t, String*);
	static PbSetRepeatedStringFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbSetRepeatedString", (void**)&__func);
	return __func(userMessage, fieldName, index, value);
}

static bool PbAddString(uintptr_t userMessage, String* fieldName, String* value) {
	typedef bool (*PbAddStringFn)(uintptr_t, String*, String*);
	static PbAddStringFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbAddString", (void**)&__func);
	return __func(userMessage, fieldName, value);
}

static bool PbGetRepeatedColor(uintptr_t userMessage, String* fieldName, int32_t index, uintptr_t out) {
	typedef bool (*PbGetRepeatedColorFn)(uintptr_t, String*, int32_t, uintptr_t);
	static PbGetRepeatedColorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbGetRepeatedColor", (void**)&__func);
	return __func(userMessage, fieldName, index, out);
}

static bool PbSetRepeatedColor(uintptr_t userMessage, String* fieldName, int32_t index, int32_t value) {
	typedef bool (*PbSetRepeatedColorFn)(uintptr_t, String*, int32_t, int32_t);
	static PbSetRepeatedColorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbSetRepeatedColor", (void**)&__func);
	return __func(userMessage, fieldName, index, value);
}

static bool PbAddColor(uintptr_t userMessage, String* fieldName, int32_t value) {
	typedef bool (*PbAddColorFn)(uintptr_t, String*, int32_t);
	static PbAddColorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbAddColor", (void**)&__func);
	return __func(userMessage, fieldName, value);
}

static bool PbGetRepeatedVector2(uintptr_t userMessage, String* fieldName, int32_t index, uintptr_t out) {
	typedef bool (*PbGetRepeatedVector2Fn)(uintptr_t, String*, int32_t, uintptr_t);
	static PbGetRepeatedVector2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbGetRepeatedVector2", (void**)&__func);
	return __func(userMessage, fieldName, index, out);
}

static bool PbSetRepeatedVector2(uintptr_t userMessage, String* fieldName, int32_t index, Vector2* value) {
	typedef bool (*PbSetRepeatedVector2Fn)(uintptr_t, String*, int32_t, Vector2*);
	static PbSetRepeatedVector2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbSetRepeatedVector2", (void**)&__func);
	return __func(userMessage, fieldName, index, value);
}

static bool PbAddVector2(uintptr_t userMessage, String* fieldName, Vector2* value) {
	typedef bool (*PbAddVector2Fn)(uintptr_t, String*, Vector2*);
	static PbAddVector2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbAddVector2", (void**)&__func);
	return __func(userMessage, fieldName, value);
}

static bool PbGetRepeatedVector3(uintptr_t userMessage, String* fieldName, int32_t index, uintptr_t out) {
	typedef bool (*PbGetRepeatedVector3Fn)(uintptr_t, String*, int32_t, uintptr_t);
	static PbGetRepeatedVector3Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbGetRepeatedVector3", (void**)&__func);
	return __func(userMessage, fieldName, index, out);
}

static bool PbSetRepeatedVector3(uintptr_t userMessage, String* fieldName, int32_t index, Vector3* value) {
	typedef bool (*PbSetRepeatedVector3Fn)(uintptr_t, String*, int32_t, Vector3*);
	static PbSetRepeatedVector3Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbSetRepeatedVector3", (void**)&__func);
	return __func(userMessage, fieldName, index, value);
}

static bool PbAddVector3(uintptr_t userMessage, String* fieldName, Vector3* value) {
	typedef bool (*PbAddVector3Fn)(uintptr_t, String*, Vector3*);
	static PbAddVector3Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbAddVector3", (void**)&__func);
	return __func(userMessage, fieldName, value);
}

static bool PbGetRepeatedQAngle(uintptr_t userMessage, String* fieldName, int32_t index, uintptr_t out) {
	typedef bool (*PbGetRepeatedQAngleFn)(uintptr_t, String*, int32_t, uintptr_t);
	static PbGetRepeatedQAngleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbGetRepeatedQAngle", (void**)&__func);
	return __func(userMessage, fieldName, index, out);
}

static bool PbSetRepeatedQAngle(uintptr_t userMessage, String* fieldName, int32_t index, Vector3* value) {
	typedef bool (*PbSetRepeatedQAngleFn)(uintptr_t, String*, int32_t, Vector3*);
	static PbSetRepeatedQAngleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbSetRepeatedQAngle", (void**)&__func);
	return __func(userMessage, fieldName, index, value);
}

static bool PbAddQAngle(uintptr_t userMessage, String* fieldName, Vector3* value) {
	typedef bool (*PbAddQAngleFn)(uintptr_t, String*, Vector3*);
	static PbAddQAngleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PbAddQAngle", (void**)&__func);
	return __func(userMessage, fieldName, value);
}

