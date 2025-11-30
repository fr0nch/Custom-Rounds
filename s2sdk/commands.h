#pragma once

#include "s2sdk.h"

static bool AddAdminCommand(String* name, int64_t adminFlags, String* description, int64_t flags, void* callback, uint8_t type) {
	typedef bool (*AddAdminCommandFn)(String*, int64_t, String*, int64_t, void*, uint8_t);
	static AddAdminCommandFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.AddAdminCommand", (void**)&__func);
	return __func(name, adminFlags, description, flags, callback, type);
}

static bool AddConsoleCommand(String* name, String* description, int64_t flags, void* callback, uint8_t type) {
	typedef bool (*AddConsoleCommandFn)(String*, String*, int64_t, void*, uint8_t);
	static AddConsoleCommandFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.AddConsoleCommand", (void**)&__func);
	return __func(name, description, flags, callback, type);
}

static bool RemoveCommand(String* name, void* callback) {
	typedef bool (*RemoveCommandFn)(String*, void*);
	static RemoveCommandFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.RemoveCommand", (void**)&__func);
	return __func(name, callback);
}

static bool AddCommandListener(String* name, void* callback, uint8_t type) {
	typedef bool (*AddCommandListenerFn)(String*, void*, uint8_t);
	static AddCommandListenerFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.AddCommandListener", (void**)&__func);
	return __func(name, callback, type);
}

static bool RemoveCommandListener(String* name, void* callback, uint8_t type) {
	typedef bool (*RemoveCommandListenerFn)(String*, void*, uint8_t);
	static RemoveCommandListenerFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.RemoveCommandListener", (void**)&__func);
	return __func(name, callback, type);
}

static void ServerCommand(String* command) {
	typedef void (*ServerCommandFn)(String*);
	static ServerCommandFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.ServerCommand", (void**)&__func);
	__func(command);
}

static String ServerCommandEx(String* command) {
	typedef String (*ServerCommandExFn)(String*);
	static ServerCommandExFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.ServerCommandEx", (void**)&__func);
	return __func(command);
}

static void ClientCommand(int32_t playerSlot, String* command) {
	typedef void (*ClientCommandFn)(int32_t, String*);
	static ClientCommandFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.ClientCommand", (void**)&__func);
	__func(playerSlot, command);
}

static void FakeClientCommand(int32_t playerSlot, String* command) {
	typedef void (*FakeClientCommandFn)(int32_t, String*);
	static FakeClientCommandFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.FakeClientCommand", (void**)&__func);
	__func(playerSlot, command);
}

