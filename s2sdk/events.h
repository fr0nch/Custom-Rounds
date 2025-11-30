#pragma once

#include "s2sdk.h"

static int32_t HookEvent(String* name, void* callback, uint8_t type) {
	typedef int32_t (*HookEventFn)(String*, void*, uint8_t);
	static HookEventFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.HookEvent", (void**)&__func);
	return __func(name, callback, type);
}

static int32_t UnhookEvent(String* name, void* callback, uint8_t type) {
	typedef int32_t (*UnhookEventFn)(String*, void*, uint8_t);
	static UnhookEventFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.UnhookEvent", (void**)&__func);
	return __func(name, callback, type);
}

static uintptr_t CreateEvent(String* name, bool force) {
	typedef uintptr_t (*CreateEventFn)(String*, bool);
	static CreateEventFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.CreateEvent", (void**)&__func);
	return __func(name, force);
}

static void FireEvent(uintptr_t info, bool dontBroadcast) {
	typedef void (*FireEventFn)(uintptr_t, bool);
	static FireEventFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.FireEvent", (void**)&__func);
	__func(info, dontBroadcast);
}

static void FireEventToClient(uintptr_t info, int32_t playerSlot) {
	typedef void (*FireEventToClientFn)(uintptr_t, int32_t);
	static FireEventToClientFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.FireEventToClient", (void**)&__func);
	__func(info, playerSlot);
}

static void CancelCreatedEvent(uintptr_t info) {
	typedef void (*CancelCreatedEventFn)(uintptr_t);
	static CancelCreatedEventFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.CancelCreatedEvent", (void**)&__func);
	__func(info);
}

static bool GetEventBool(uintptr_t info, String* key) {
	typedef bool (*GetEventBoolFn)(uintptr_t, String*);
	static GetEventBoolFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEventBool", (void**)&__func);
	return __func(info, key);
}

static float GetEventFloat(uintptr_t info, String* key) {
	typedef float (*GetEventFloatFn)(uintptr_t, String*);
	static GetEventFloatFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEventFloat", (void**)&__func);
	return __func(info, key);
}

static int32_t GetEventInt(uintptr_t info, String* key) {
	typedef int32_t (*GetEventIntFn)(uintptr_t, String*);
	static GetEventIntFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEventInt", (void**)&__func);
	return __func(info, key);
}

static uint64_t GetEventUInt64(uintptr_t info, String* key) {
	typedef uint64_t (*GetEventUInt64Fn)(uintptr_t, String*);
	static GetEventUInt64Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEventUInt64", (void**)&__func);
	return __func(info, key);
}

static String GetEventString(uintptr_t info, String* key) {
	typedef String (*GetEventStringFn)(uintptr_t, String*);
	static GetEventStringFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEventString", (void**)&__func);
	return __func(info, key);
}

static uintptr_t GetEventPtr(uintptr_t info, String* key) {
	typedef uintptr_t (*GetEventPtrFn)(uintptr_t, String*);
	static GetEventPtrFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEventPtr", (void**)&__func);
	return __func(info, key);
}

static uintptr_t GetEventPlayerController(uintptr_t info, String* key) {
	typedef uintptr_t (*GetEventPlayerControllerFn)(uintptr_t, String*);
	static GetEventPlayerControllerFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEventPlayerController", (void**)&__func);
	return __func(info, key);
}

static int32_t GetEventPlayerIndex(uintptr_t info, String* key) {
	typedef int32_t (*GetEventPlayerIndexFn)(uintptr_t, String*);
	static GetEventPlayerIndexFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEventPlayerIndex", (void**)&__func);
	return __func(info, key);
}

static uintptr_t GetEventPlayerPawn(uintptr_t info, String* key) {
	typedef uintptr_t (*GetEventPlayerPawnFn)(uintptr_t, String*);
	static GetEventPlayerPawnFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEventPlayerPawn", (void**)&__func);
	return __func(info, key);
}

static uintptr_t GetEventEntity(uintptr_t info, String* key) {
	typedef uintptr_t (*GetEventEntityFn)(uintptr_t, String*);
	static GetEventEntityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEventEntity", (void**)&__func);
	return __func(info, key);
}

static int32_t GetEventEntityIndex(uintptr_t info, String* key) {
	typedef int32_t (*GetEventEntityIndexFn)(uintptr_t, String*);
	static GetEventEntityIndexFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEventEntityIndex", (void**)&__func);
	return __func(info, key);
}

static int32_t GetEventEntityHandle(uintptr_t info, String* key) {
	typedef int32_t (*GetEventEntityHandleFn)(uintptr_t, String*);
	static GetEventEntityHandleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEventEntityHandle", (void**)&__func);
	return __func(info, key);
}

static String GetEventName(uintptr_t info) {
	typedef String (*GetEventNameFn)(uintptr_t);
	static GetEventNameFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEventName", (void**)&__func);
	return __func(info);
}

static void SetEventBool(uintptr_t info, String* key, bool value) {
	typedef void (*SetEventBoolFn)(uintptr_t, String*, bool);
	static SetEventBoolFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEventBool", (void**)&__func);
	__func(info, key, value);
}

static void SetEventFloat(uintptr_t info, String* key, float value) {
	typedef void (*SetEventFloatFn)(uintptr_t, String*, float);
	static SetEventFloatFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEventFloat", (void**)&__func);
	__func(info, key, value);
}

static void SetEventInt(uintptr_t info, String* key, int32_t value) {
	typedef void (*SetEventIntFn)(uintptr_t, String*, int32_t);
	static SetEventIntFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEventInt", (void**)&__func);
	__func(info, key, value);
}

static void SetEventUInt64(uintptr_t info, String* key, uint64_t value) {
	typedef void (*SetEventUInt64Fn)(uintptr_t, String*, uint64_t);
	static SetEventUInt64Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEventUInt64", (void**)&__func);
	__func(info, key, value);
}

static void SetEventString(uintptr_t info, String* key, String* value) {
	typedef void (*SetEventStringFn)(uintptr_t, String*, String*);
	static SetEventStringFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEventString", (void**)&__func);
	__func(info, key, value);
}

static void SetEventPtr(uintptr_t info, String* key, uintptr_t value) {
	typedef void (*SetEventPtrFn)(uintptr_t, String*, uintptr_t);
	static SetEventPtrFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEventPtr", (void**)&__func);
	__func(info, key, value);
}

static void SetEventPlayerController(uintptr_t info, String* key, uintptr_t value) {
	typedef void (*SetEventPlayerControllerFn)(uintptr_t, String*, uintptr_t);
	static SetEventPlayerControllerFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEventPlayerController", (void**)&__func);
	__func(info, key, value);
}

static void SetEventPlayerIndex(uintptr_t info, String* key, int32_t value) {
	typedef void (*SetEventPlayerIndexFn)(uintptr_t, String*, int32_t);
	static SetEventPlayerIndexFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEventPlayerIndex", (void**)&__func);
	__func(info, key, value);
}

static void SetEventEntity(uintptr_t info, String* key, uintptr_t value) {
	typedef void (*SetEventEntityFn)(uintptr_t, String*, uintptr_t);
	static SetEventEntityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEventEntity", (void**)&__func);
	__func(info, key, value);
}

static void SetEventEntityIndex(uintptr_t info, String* key, int32_t value) {
	typedef void (*SetEventEntityIndexFn)(uintptr_t, String*, int32_t);
	static SetEventEntityIndexFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEventEntityIndex", (void**)&__func);
	__func(info, key, value);
}

static void SetEventEntityHandle(uintptr_t info, String* key, int32_t value) {
	typedef void (*SetEventEntityHandleFn)(uintptr_t, String*, int32_t);
	static SetEventEntityHandleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEventEntityHandle", (void**)&__func);
	__func(info, key, value);
}

static void SetEventBroadcast(uintptr_t info, bool dontBroadcast) {
	typedef void (*SetEventBroadcastFn)(uintptr_t, bool);
	static SetEventBroadcastFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEventBroadcast", (void**)&__func);
	__func(info, dontBroadcast);
}

static int32_t LoadEventsFromFile(String* path, bool searchAll) {
	typedef int32_t (*LoadEventsFromFileFn)(String*, bool);
	static LoadEventsFromFileFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.LoadEventsFromFile", (void**)&__func);
	return __func(path, searchAll);
}

