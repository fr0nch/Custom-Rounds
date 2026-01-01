#pragma once

#include "shared.h"

extern bool (*__s2sdk_AddAdminCommand)(String*, int64_t, String*, int64_t, void*, uint8_t);

static bool AddAdminCommand(String* name, int64_t adminFlags, String* description, int64_t flags, void* callback, uint8_t type_) {
	return __s2sdk_AddAdminCommand(name, adminFlags, description, flags, callback, type_);
}

extern bool (*__s2sdk_AddConsoleCommand)(String*, String*, int64_t, void*, uint8_t);

static bool AddConsoleCommand(String* name, String* description, int64_t flags, void* callback, uint8_t type_) {
	return __s2sdk_AddConsoleCommand(name, description, flags, callback, type_);
}

extern bool (*__s2sdk_RemoveCommand)(String*, void*);

static bool RemoveCommand(String* name, void* callback) {
	return __s2sdk_RemoveCommand(name, callback);
}

extern bool (*__s2sdk_AddCommandListener)(String*, void*, uint8_t);

static bool AddCommandListener(String* name, void* callback, uint8_t type_) {
	return __s2sdk_AddCommandListener(name, callback, type_);
}

extern bool (*__s2sdk_RemoveCommandListener)(String*, void*, uint8_t);

static bool RemoveCommandListener(String* name, void* callback, uint8_t type_) {
	return __s2sdk_RemoveCommandListener(name, callback, type_);
}

extern void (*__s2sdk_ServerCommand)(String*);

static void ServerCommand(String* command) {
	__s2sdk_ServerCommand(command);
}

extern String (*__s2sdk_ServerCommandEx)(String*);

static String ServerCommandEx(String* command) {
	return __s2sdk_ServerCommandEx(command);
}

extern void (*__s2sdk_ClientCommand)(int32_t, String*);

static void ClientCommand(int32_t playerSlot, String* command) {
	__s2sdk_ClientCommand(playerSlot, command);
}

extern void (*__s2sdk_FakeClientCommand)(int32_t, String*);

static void FakeClientCommand(int32_t playerSlot, String* command) {
	__s2sdk_FakeClientCommand(playerSlot, command);
}

extern Vector (*__s2sdk_GetAllConCommands)(int64_t);

static Vector GetAllConCommands(int64_t flags) {
	return __s2sdk_GetAllConCommands(flags);
}

extern Vector (*__s2sdk_GetAllCommands)();

static Vector GetAllCommands() {
	return __s2sdk_GetAllCommands();
}

