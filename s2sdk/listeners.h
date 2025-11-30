#pragma once

#include "s2sdk.h"

static void OnClientConnect_Register(void* callback) {
	typedef void (*OnClientConnect_RegisterFn)(void*);
	static OnClientConnect_RegisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnClientConnect_Register", (void**)&__func);
	__func(callback);
}

static void OnClientConnect_Unregister(void* callback) {
	typedef void (*OnClientConnect_UnregisterFn)(void*);
	static OnClientConnect_UnregisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnClientConnect_Unregister", (void**)&__func);
	__func(callback);
}

static void OnClientConnect_Post_Register(void* callback) {
	typedef void (*OnClientConnect_Post_RegisterFn)(void*);
	static OnClientConnect_Post_RegisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnClientConnect_Post_Register", (void**)&__func);
	__func(callback);
}

static void OnClientConnect_Post_Unregister(void* callback) {
	typedef void (*OnClientConnect_Post_UnregisterFn)(void*);
	static OnClientConnect_Post_UnregisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnClientConnect_Post_Unregister", (void**)&__func);
	__func(callback);
}

static void OnClientConnected_Register(void* callback) {
	typedef void (*OnClientConnected_RegisterFn)(void*);
	static OnClientConnected_RegisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnClientConnected_Register", (void**)&__func);
	__func(callback);
}

static void OnClientConnected_Unregister(void* callback) {
	typedef void (*OnClientConnected_UnregisterFn)(void*);
	static OnClientConnected_UnregisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnClientConnected_Unregister", (void**)&__func);
	__func(callback);
}

static void OnClientPutInServer_Register(void* callback) {
	typedef void (*OnClientPutInServer_RegisterFn)(void*);
	static OnClientPutInServer_RegisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnClientPutInServer_Register", (void**)&__func);
	__func(callback);
}

static void OnClientPutInServer_Unregister(void* callback) {
	typedef void (*OnClientPutInServer_UnregisterFn)(void*);
	static OnClientPutInServer_UnregisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnClientPutInServer_Unregister", (void**)&__func);
	__func(callback);
}

static void OnClientDisconnect_Register(void* callback) {
	typedef void (*OnClientDisconnect_RegisterFn)(void*);
	static OnClientDisconnect_RegisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnClientDisconnect_Register", (void**)&__func);
	__func(callback);
}

static void OnClientDisconnect_Unregister(void* callback) {
	typedef void (*OnClientDisconnect_UnregisterFn)(void*);
	static OnClientDisconnect_UnregisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnClientDisconnect_Unregister", (void**)&__func);
	__func(callback);
}

static void OnClientDisconnect_Post_Register(void* callback) {
	typedef void (*OnClientDisconnect_Post_RegisterFn)(void*);
	static OnClientDisconnect_Post_RegisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnClientDisconnect_Post_Register", (void**)&__func);
	__func(callback);
}

static void OnClientDisconnect_Post_Unregister(void* callback) {
	typedef void (*OnClientDisconnect_Post_UnregisterFn)(void*);
	static OnClientDisconnect_Post_UnregisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnClientDisconnect_Post_Unregister", (void**)&__func);
	__func(callback);
}

static void OnClientActive_Register(void* callback) {
	typedef void (*OnClientActive_RegisterFn)(void*);
	static OnClientActive_RegisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnClientActive_Register", (void**)&__func);
	__func(callback);
}

static void OnClientActive_Unregister(void* callback) {
	typedef void (*OnClientActive_UnregisterFn)(void*);
	static OnClientActive_UnregisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnClientActive_Unregister", (void**)&__func);
	__func(callback);
}

static void OnClientFullyConnect_Register(void* callback) {
	typedef void (*OnClientFullyConnect_RegisterFn)(void*);
	static OnClientFullyConnect_RegisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnClientFullyConnect_Register", (void**)&__func);
	__func(callback);
}

static void OnClientFullyConnect_Unregister(void* callback) {
	typedef void (*OnClientFullyConnect_UnregisterFn)(void*);
	static OnClientFullyConnect_UnregisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnClientFullyConnect_Unregister", (void**)&__func);
	__func(callback);
}

static void OnClientSettingsChanged_Register(void* callback) {
	typedef void (*OnClientSettingsChanged_RegisterFn)(void*);
	static OnClientSettingsChanged_RegisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnClientSettingsChanged_Register", (void**)&__func);
	__func(callback);
}

static void OnClientSettingsChanged_Unregister(void* callback) {
	typedef void (*OnClientSettingsChanged_UnregisterFn)(void*);
	static OnClientSettingsChanged_UnregisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnClientSettingsChanged_Unregister", (void**)&__func);
	__func(callback);
}

static void OnClientAuthenticated_Register(void* callback) {
	typedef void (*OnClientAuthenticated_RegisterFn)(void*);
	static OnClientAuthenticated_RegisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnClientAuthenticated_Register", (void**)&__func);
	__func(callback);
}

static void OnClientAuthenticated_Unregister(void* callback) {
	typedef void (*OnClientAuthenticated_UnregisterFn)(void*);
	static OnClientAuthenticated_UnregisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnClientAuthenticated_Unregister", (void**)&__func);
	__func(callback);
}

static void OnRoundTerminated_Register(void* callback) {
	typedef void (*OnRoundTerminated_RegisterFn)(void*);
	static OnRoundTerminated_RegisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnRoundTerminated_Register", (void**)&__func);
	__func(callback);
}

static void OnRoundTerminated_Unregister(void* callback) {
	typedef void (*OnRoundTerminated_UnregisterFn)(void*);
	static OnRoundTerminated_UnregisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnRoundTerminated_Unregister", (void**)&__func);
	__func(callback);
}

static void OnEntityCreated_Register(void* callback) {
	typedef void (*OnEntityCreated_RegisterFn)(void*);
	static OnEntityCreated_RegisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnEntityCreated_Register", (void**)&__func);
	__func(callback);
}

static void OnEntityCreated_Unregister(void* callback) {
	typedef void (*OnEntityCreated_UnregisterFn)(void*);
	static OnEntityCreated_UnregisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnEntityCreated_Unregister", (void**)&__func);
	__func(callback);
}

static void OnEntityDeleted_Register(void* callback) {
	typedef void (*OnEntityDeleted_RegisterFn)(void*);
	static OnEntityDeleted_RegisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnEntityDeleted_Register", (void**)&__func);
	__func(callback);
}

static void OnEntityDeleted_Unregister(void* callback) {
	typedef void (*OnEntityDeleted_UnregisterFn)(void*);
	static OnEntityDeleted_UnregisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnEntityDeleted_Unregister", (void**)&__func);
	__func(callback);
}

static void OnEntityParentChanged_Register(void* callback) {
	typedef void (*OnEntityParentChanged_RegisterFn)(void*);
	static OnEntityParentChanged_RegisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnEntityParentChanged_Register", (void**)&__func);
	__func(callback);
}

static void OnEntityParentChanged_Unregister(void* callback) {
	typedef void (*OnEntityParentChanged_UnregisterFn)(void*);
	static OnEntityParentChanged_UnregisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnEntityParentChanged_Unregister", (void**)&__func);
	__func(callback);
}

static void OnServerStartup_Register(void* callback) {
	typedef void (*OnServerStartup_RegisterFn)(void*);
	static OnServerStartup_RegisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnServerStartup_Register", (void**)&__func);
	__func(callback);
}

static void OnServerStartup_Unregister(void* callback) {
	typedef void (*OnServerStartup_UnregisterFn)(void*);
	static OnServerStartup_UnregisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnServerStartup_Unregister", (void**)&__func);
	__func(callback);
}

static void OnServerActivate_Register(void* callback) {
	typedef void (*OnServerActivate_RegisterFn)(void*);
	static OnServerActivate_RegisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnServerActivate_Register", (void**)&__func);
	__func(callback);
}

static void OnServerActivate_Unregister(void* callback) {
	typedef void (*OnServerActivate_UnregisterFn)(void*);
	static OnServerActivate_UnregisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnServerActivate_Unregister", (void**)&__func);
	__func(callback);
}

static void OnServerSpawn_Register(void* callback) {
	typedef void (*OnServerSpawn_RegisterFn)(void*);
	static OnServerSpawn_RegisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnServerSpawn_Register", (void**)&__func);
	__func(callback);
}

static void OnServerSpawn_Unregister(void* callback) {
	typedef void (*OnServerSpawn_UnregisterFn)(void*);
	static OnServerSpawn_UnregisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnServerSpawn_Unregister", (void**)&__func);
	__func(callback);
}

static void OnServerStarted_Register(void* callback) {
	typedef void (*OnServerStarted_RegisterFn)(void*);
	static OnServerStarted_RegisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnServerStarted_Register", (void**)&__func);
	__func(callback);
}

static void OnServerStarted_Unregister(void* callback) {
	typedef void (*OnServerStarted_UnregisterFn)(void*);
	static OnServerStarted_UnregisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnServerStarted_Unregister", (void**)&__func);
	__func(callback);
}

static void OnMapStart_Register(void* callback) {
	typedef void (*OnMapStart_RegisterFn)(void*);
	static OnMapStart_RegisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnMapStart_Register", (void**)&__func);
	__func(callback);
}

static void OnMapStart_Unregister(void* callback) {
	typedef void (*OnMapStart_UnregisterFn)(void*);
	static OnMapStart_UnregisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnMapStart_Unregister", (void**)&__func);
	__func(callback);
}

static void OnMapEnd_Register(void* callback) {
	typedef void (*OnMapEnd_RegisterFn)(void*);
	static OnMapEnd_RegisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnMapEnd_Register", (void**)&__func);
	__func(callback);
}

static void OnMapEnd_Unregister(void* callback) {
	typedef void (*OnMapEnd_UnregisterFn)(void*);
	static OnMapEnd_UnregisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnMapEnd_Unregister", (void**)&__func);
	__func(callback);
}

static void OnGameFrame_Register(void* callback) {
	typedef void (*OnGameFrame_RegisterFn)(void*);
	static OnGameFrame_RegisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnGameFrame_Register", (void**)&__func);
	__func(callback);
}

static void OnGameFrame_Unregister(void* callback) {
	typedef void (*OnGameFrame_UnregisterFn)(void*);
	static OnGameFrame_UnregisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnGameFrame_Unregister", (void**)&__func);
	__func(callback);
}

static void OnUpdateWhenNotInGame_Register(void* callback) {
	typedef void (*OnUpdateWhenNotInGame_RegisterFn)(void*);
	static OnUpdateWhenNotInGame_RegisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnUpdateWhenNotInGame_Register", (void**)&__func);
	__func(callback);
}

static void OnUpdateWhenNotInGame_Unregister(void* callback) {
	typedef void (*OnUpdateWhenNotInGame_UnregisterFn)(void*);
	static OnUpdateWhenNotInGame_UnregisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnUpdateWhenNotInGame_Unregister", (void**)&__func);
	__func(callback);
}

static void OnPreWorldUpdate_Register(void* callback) {
	typedef void (*OnPreWorldUpdate_RegisterFn)(void*);
	static OnPreWorldUpdate_RegisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnPreWorldUpdate_Register", (void**)&__func);
	__func(callback);
}

static void OnPreWorldUpdate_Unregister(void* callback) {
	typedef void (*OnPreWorldUpdate_UnregisterFn)(void*);
	static OnPreWorldUpdate_UnregisterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.OnPreWorldUpdate_Unregister", (void**)&__func);
	__func(callback);
}

