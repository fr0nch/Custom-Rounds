#pragma once

#include "shared.h"

extern void (*__s2sdk_OnClientConnect_Register)(void*);

static void OnClientConnect_Register(void* callback) {
	__s2sdk_OnClientConnect_Register(callback);
}

extern void (*__s2sdk_OnClientConnect_Unregister)(void*);

static void OnClientConnect_Unregister(void* callback) {
	__s2sdk_OnClientConnect_Unregister(callback);
}

extern void (*__s2sdk_OnClientConnect_Post_Register)(void*);

static void OnClientConnect_Post_Register(void* callback) {
	__s2sdk_OnClientConnect_Post_Register(callback);
}

extern void (*__s2sdk_OnClientConnect_Post_Unregister)(void*);

static void OnClientConnect_Post_Unregister(void* callback) {
	__s2sdk_OnClientConnect_Post_Unregister(callback);
}

extern void (*__s2sdk_OnClientConnected_Register)(void*);

static void OnClientConnected_Register(void* callback) {
	__s2sdk_OnClientConnected_Register(callback);
}

extern void (*__s2sdk_OnClientConnected_Unregister)(void*);

static void OnClientConnected_Unregister(void* callback) {
	__s2sdk_OnClientConnected_Unregister(callback);
}

extern void (*__s2sdk_OnClientPutInServer_Register)(void*);

static void OnClientPutInServer_Register(void* callback) {
	__s2sdk_OnClientPutInServer_Register(callback);
}

extern void (*__s2sdk_OnClientPutInServer_Unregister)(void*);

static void OnClientPutInServer_Unregister(void* callback) {
	__s2sdk_OnClientPutInServer_Unregister(callback);
}

extern void (*__s2sdk_OnClientDisconnect_Register)(void*);

static void OnClientDisconnect_Register(void* callback) {
	__s2sdk_OnClientDisconnect_Register(callback);
}

extern void (*__s2sdk_OnClientDisconnect_Unregister)(void*);

static void OnClientDisconnect_Unregister(void* callback) {
	__s2sdk_OnClientDisconnect_Unregister(callback);
}

extern void (*__s2sdk_OnClientDisconnect_Post_Register)(void*);

static void OnClientDisconnect_Post_Register(void* callback) {
	__s2sdk_OnClientDisconnect_Post_Register(callback);
}

extern void (*__s2sdk_OnClientDisconnect_Post_Unregister)(void*);

static void OnClientDisconnect_Post_Unregister(void* callback) {
	__s2sdk_OnClientDisconnect_Post_Unregister(callback);
}

extern void (*__s2sdk_OnClientActive_Register)(void*);

static void OnClientActive_Register(void* callback) {
	__s2sdk_OnClientActive_Register(callback);
}

extern void (*__s2sdk_OnClientActive_Unregister)(void*);

static void OnClientActive_Unregister(void* callback) {
	__s2sdk_OnClientActive_Unregister(callback);
}

extern void (*__s2sdk_OnClientFullyConnect_Register)(void*);

static void OnClientFullyConnect_Register(void* callback) {
	__s2sdk_OnClientFullyConnect_Register(callback);
}

extern void (*__s2sdk_OnClientFullyConnect_Unregister)(void*);

static void OnClientFullyConnect_Unregister(void* callback) {
	__s2sdk_OnClientFullyConnect_Unregister(callback);
}

extern void (*__s2sdk_OnClientSettingsChanged_Register)(void*);

static void OnClientSettingsChanged_Register(void* callback) {
	__s2sdk_OnClientSettingsChanged_Register(callback);
}

extern void (*__s2sdk_OnClientSettingsChanged_Unregister)(void*);

static void OnClientSettingsChanged_Unregister(void* callback) {
	__s2sdk_OnClientSettingsChanged_Unregister(callback);
}

extern void (*__s2sdk_OnClientAuthenticated_Register)(void*);

static void OnClientAuthenticated_Register(void* callback) {
	__s2sdk_OnClientAuthenticated_Register(callback);
}

extern void (*__s2sdk_OnClientAuthenticated_Unregister)(void*);

static void OnClientAuthenticated_Unregister(void* callback) {
	__s2sdk_OnClientAuthenticated_Unregister(callback);
}

extern void (*__s2sdk_OnRoundTerminated_Register)(void*);

static void OnRoundTerminated_Register(void* callback) {
	__s2sdk_OnRoundTerminated_Register(callback);
}

extern void (*__s2sdk_OnRoundTerminated_Unregister)(void*);

static void OnRoundTerminated_Unregister(void* callback) {
	__s2sdk_OnRoundTerminated_Unregister(callback);
}

extern void (*__s2sdk_OnEntityCreated_Register)(void*);

static void OnEntityCreated_Register(void* callback) {
	__s2sdk_OnEntityCreated_Register(callback);
}

extern void (*__s2sdk_OnEntityCreated_Unregister)(void*);

static void OnEntityCreated_Unregister(void* callback) {
	__s2sdk_OnEntityCreated_Unregister(callback);
}

extern void (*__s2sdk_OnEntityDeleted_Register)(void*);

static void OnEntityDeleted_Register(void* callback) {
	__s2sdk_OnEntityDeleted_Register(callback);
}

extern void (*__s2sdk_OnEntityDeleted_Unregister)(void*);

static void OnEntityDeleted_Unregister(void* callback) {
	__s2sdk_OnEntityDeleted_Unregister(callback);
}

extern void (*__s2sdk_OnEntityParentChanged_Register)(void*);

static void OnEntityParentChanged_Register(void* callback) {
	__s2sdk_OnEntityParentChanged_Register(callback);
}

extern void (*__s2sdk_OnEntityParentChanged_Unregister)(void*);

static void OnEntityParentChanged_Unregister(void* callback) {
	__s2sdk_OnEntityParentChanged_Unregister(callback);
}

extern void (*__s2sdk_OnServerCheckTransmit_Register)(void*);

static void OnServerCheckTransmit_Register(void* callback) {
	__s2sdk_OnServerCheckTransmit_Register(callback);
}

extern void (*__s2sdk_OnServerCheckTransmit_Unregister)(void*);

static void OnServerCheckTransmit_Unregister(void* callback) {
	__s2sdk_OnServerCheckTransmit_Unregister(callback);
}

extern void (*__s2sdk_OnServerStartup_Register)(void*);

static void OnServerStartup_Register(void* callback) {
	__s2sdk_OnServerStartup_Register(callback);
}

extern void (*__s2sdk_OnServerStartup_Unregister)(void*);

static void OnServerStartup_Unregister(void* callback) {
	__s2sdk_OnServerStartup_Unregister(callback);
}

extern void (*__s2sdk_OnServerActivate_Register)(void*);

static void OnServerActivate_Register(void* callback) {
	__s2sdk_OnServerActivate_Register(callback);
}

extern void (*__s2sdk_OnServerActivate_Unregister)(void*);

static void OnServerActivate_Unregister(void* callback) {
	__s2sdk_OnServerActivate_Unregister(callback);
}

extern void (*__s2sdk_OnServerSpawn_Register)(void*);

static void OnServerSpawn_Register(void* callback) {
	__s2sdk_OnServerSpawn_Register(callback);
}

extern void (*__s2sdk_OnServerSpawn_Unregister)(void*);

static void OnServerSpawn_Unregister(void* callback) {
	__s2sdk_OnServerSpawn_Unregister(callback);
}

extern void (*__s2sdk_OnServerStarted_Register)(void*);

static void OnServerStarted_Register(void* callback) {
	__s2sdk_OnServerStarted_Register(callback);
}

extern void (*__s2sdk_OnServerStarted_Unregister)(void*);

static void OnServerStarted_Unregister(void* callback) {
	__s2sdk_OnServerStarted_Unregister(callback);
}

extern void (*__s2sdk_OnMapStart_Register)(void*);

static void OnMapStart_Register(void* callback) {
	__s2sdk_OnMapStart_Register(callback);
}

extern void (*__s2sdk_OnMapStart_Unregister)(void*);

static void OnMapStart_Unregister(void* callback) {
	__s2sdk_OnMapStart_Unregister(callback);
}

extern void (*__s2sdk_OnMapEnd_Register)(void*);

static void OnMapEnd_Register(void* callback) {
	__s2sdk_OnMapEnd_Register(callback);
}

extern void (*__s2sdk_OnMapEnd_Unregister)(void*);

static void OnMapEnd_Unregister(void* callback) {
	__s2sdk_OnMapEnd_Unregister(callback);
}

extern void (*__s2sdk_OnGameFrame_Register)(void*);

static void OnGameFrame_Register(void* callback) {
	__s2sdk_OnGameFrame_Register(callback);
}

extern void (*__s2sdk_OnGameFrame_Unregister)(void*);

static void OnGameFrame_Unregister(void* callback) {
	__s2sdk_OnGameFrame_Unregister(callback);
}

extern void (*__s2sdk_OnUpdateWhenNotInGame_Register)(void*);

static void OnUpdateWhenNotInGame_Register(void* callback) {
	__s2sdk_OnUpdateWhenNotInGame_Register(callback);
}

extern void (*__s2sdk_OnUpdateWhenNotInGame_Unregister)(void*);

static void OnUpdateWhenNotInGame_Unregister(void* callback) {
	__s2sdk_OnUpdateWhenNotInGame_Unregister(callback);
}

extern void (*__s2sdk_OnPreWorldUpdate_Register)(void*);

static void OnPreWorldUpdate_Register(void* callback) {
	__s2sdk_OnPreWorldUpdate_Register(callback);
}

extern void (*__s2sdk_OnPreWorldUpdate_Unregister)(void*);

static void OnPreWorldUpdate_Unregister(void* callback) {
	__s2sdk_OnPreWorldUpdate_Unregister(callback);
}

