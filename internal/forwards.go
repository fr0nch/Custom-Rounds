package internal

import (
	"customrounds/internal/rounds"

	s2sdk "github.com/fr0nch/go-plugify-s2sdk/v2"
	"github.com/fr0nch/listener-manager"
)

// OnConfigLoadCallback
//
//	@brief Called before the config is loaded.
type OnConfigLoadCallback func()

var OnConfigLoad = listeners.NewListener[OnConfigLoadCallback]()

// OnConfigLoad_Register
//
//	@brief Registers a OnConfigLoad callback.
//	@param callback Callback function.
//
//	@return Listener ID.
//
//plugify:export OnConfigLoad_Register
func OnConfigLoad_Register(callback OnConfigLoadCallback) listeners.ListenerID {
	return OnConfigLoad.Add(callback, listeners.Post)
}

// OnConfigLoad_Unregister
//
//	@brief Unregisters a OnConfigLoad callback.
//	@param index Listener ID.
//
//plugify:export OnConfigLoad_Unregister
func OnConfigLoad_Unregister(index listeners.ListenerID) {
	OnConfigLoad.Remove(index)
}

func ForwardOnConfigLoad() {
	OnConfigLoad.InvokePost(func(callback OnConfigLoadCallback) {
		callback()
	})
}

// OnConfigSectionLoadCallback
//
//	@brief Called for each round while the config is loading.
//	@param round Round settings (KeyValues3). Can be modified.
//
//	@return Handled or Stop to skip the round, Continue or Changed to load it.
type OnConfigSectionLoadCallback func(round uintptr) listeners.PluginResult

var OnConfigSectionLoad = listeners.NewListener[OnConfigSectionLoadCallback]()

// OnConfigSectionLoad_Register
//
//	@brief Registers a OnConfigSectionLoad callback.
//	@param callback Callback function.
//
//	@return Listener ID.
//
//plugify:export OnConfigSectionLoad_Register
func OnConfigSectionLoad_Register(callback OnConfigSectionLoadCallback) listeners.ListenerID {
	return OnConfigSectionLoad.Add(callback, listeners.Pre)
}

// OnConfigSectionLoad_Unregister
//
//	@brief Unregisters a OnConfigSectionLoad callback.
//	@param index Listener ID.
//
//plugify:export OnConfigSectionLoad_Unregister
func OnConfigSectionLoad_Unregister(index listeners.ListenerID) {
	OnConfigSectionLoad.Remove(index)
}

// OnConfigSectionLoadPostCallback
//
//	@brief Called after a round is loaded from the config.
//	@param round Round settings (KeyValues3). Valid until the config is reloaded.
type OnConfigSectionLoadPostCallback func(round uintptr)

var OnConfigSectionLoadPost = listeners.NewListener[OnConfigSectionLoadPostCallback]()

// OnConfigSectionLoadPost_Register
//
//	@brief Registers a OnConfigSectionLoadPost callback.
//	@param callback Callback function.
//
//	@return Listener ID.
//
//plugify:export OnConfigSectionLoadPost_Register
func OnConfigSectionLoadPost_Register(callback OnConfigSectionLoadPostCallback) listeners.ListenerID {
	return OnConfigSectionLoadPost.Add(callback, listeners.Post)
}

// OnConfigSectionLoadPost_Unregister
//
//	@brief Unregisters a OnConfigSectionLoadPost callback.
//	@param index Listener ID.
//
//plugify:export OnConfigSectionLoadPost_Unregister
func OnConfigSectionLoadPost_Unregister(index listeners.ListenerID) {
	OnConfigSectionLoadPost.Remove(index)
}

func ForwardOnConfigSectionLoad(round *s2sdk.KeyValues3) bool {
	result := OnConfigSectionLoad.InvokePre(func(callback OnConfigSectionLoadCallback) listeners.PluginResult {
		return callback(round.Get())
	})

	return result < listeners.Handled
}

func ForwardOnConfigSectionLoadPost(round *s2sdk.KeyValues3) {
	OnConfigSectionLoadPost.InvokePost(func(callback OnConfigSectionLoadPostCallback) {
		callback(round.Get())
	})
}

// OnConfigLoadedCallback
//
//	@brief Called after the config is loaded.
//	@param rounds Loaded rounds (KeyValues3). Valid until the config is reloaded.
type OnConfigLoadedCallback func(rounds []uintptr)

var OnConfigLoaded = listeners.NewListener[OnConfigLoadedCallback]()

// OnConfigLoaded_Register
//
//	@brief Registers a OnConfigLoaded callback.
//	@param callback Callback function.
//
//	@return Listener ID.
//
//plugify:export OnConfigLoaded_Register
func OnConfigLoaded_Register(callback OnConfigLoadedCallback) listeners.ListenerID {
	return OnConfigLoaded.Add(callback, listeners.Post)
}

// OnConfigLoaded_Unregister
//
//	@brief Unregisters a OnConfigLoaded callback.
//	@param index Listener ID.
//
//plugify:export OnConfigLoaded_Unregister
func OnConfigLoaded_Unregister(index listeners.ListenerID) {
	OnConfigLoaded.Remove(index)
}

func ForwardOnConfigLoaded() {
	handles := plugin.rounds.Handles()

	OnConfigLoaded.InvokePost(func(callback OnConfigLoadedCallback) {
		callback(handles)
	})
}

// OnForceRoundStartPreCallback
//
//	@brief Called before a round is force started.
//	@param round Round settings (KeyValues3). Can be modified. Valid only during the call.
//	@param client Player slot of the initiator.
//
//	@return Handled or Stop to block, Continue or Changed to allow.
type OnForceRoundStartPreCallback func(round uintptr, client int32) listeners.PluginResult

var OnForceRoundStartPre = listeners.NewListener[OnForceRoundStartPreCallback]()

// OnForceRoundStartPre_Register
//
//	@brief Registers a OnForceRoundStartPre callback.
//	@param callback Callback function.
//
//	@return Listener ID.
//
//plugify:export OnForceRoundStartPre_Register
func OnForceRoundStartPre_Register(callback OnForceRoundStartPreCallback) listeners.ListenerID {
	return OnForceRoundStartPre.Add(callback, listeners.Pre)
}

// OnForceRoundStartPre_Unregister
//
//	@brief Unregisters a OnForceRoundStartPre callback.
//	@param index Listener ID.
//
//plugify:export OnForceRoundStartPre_Unregister
func OnForceRoundStartPre_Unregister(index listeners.ListenerID) {
	OnForceRoundStartPre.Remove(index)
}

// OnForceRoundStartPostCallback
//
//	@brief Called after a round is force started.
//	@param round Round settings (KeyValues3). Valid only during the call.
//	@param client Player slot of the initiator.
type OnForceRoundStartPostCallback func(round uintptr, client int32)

var OnForceRoundStartPost = listeners.NewListener[OnForceRoundStartPostCallback]()

// OnForceRoundStartPost_Register
//
//	@brief Registers a OnForceRoundStartPost callback.
//	@param callback Callback function.
//
//	@return Listener ID.
//
//plugify:export OnForceRoundStartPost_Register
func OnForceRoundStartPost_Register(callback OnForceRoundStartPostCallback) listeners.ListenerID {
	return OnForceRoundStartPost.Add(callback, listeners.Post)
}

// OnForceRoundStartPost_Unregister
//
//	@brief Unregisters a OnForceRoundStartPost callback.
//	@param index Listener ID.
//
//plugify:export OnForceRoundStartPost_Unregister
func OnForceRoundStartPost_Unregister(index listeners.ListenerID) {
	OnForceRoundStartPost.Remove(index)
}

func ForwardOnForceRoundStart(round *s2sdk.KeyValues3, client int32) bool {
	result := OnForceRoundStartPre.InvokePre(func(callback OnForceRoundStartPreCallback) listeners.PluginResult {
		return callback(round.Get(), client)
	})

	plugin.log.Debugf("OnForceRoundStart: round '%s', client %d, result %d", rounds.Name(round), client, result)

	if result >= listeners.Handled {
		return false
	}

	OnForceRoundStartPost.InvokePost(func(callback OnForceRoundStartPostCallback) {
		callback(round.Get(), client)
	})

	return true
}

// OnSetNextRoundPreCallback
//
//	@brief Called before the next round is set.
//	@param round Round settings (KeyValues3). Can be modified. Valid only during the call.
//	@param client Player slot of the initiator.
//
//	@return Handled or Stop to block, Continue or Changed to allow.
type OnSetNextRoundPreCallback func(round uintptr, client int32) listeners.PluginResult

var OnSetNextRoundPre = listeners.NewListener[OnSetNextRoundPreCallback]()

// OnSetNextRoundPre_Register
//
//	@brief Registers a OnSetNextRoundPre callback.
//	@param callback Callback function.
//
//	@return Listener ID.
//
//plugify:export OnSetNextRoundPre_Register
func OnSetNextRoundPre_Register(callback OnSetNextRoundPreCallback) listeners.ListenerID {
	return OnSetNextRoundPre.Add(callback, listeners.Pre)
}

// OnSetNextRoundPre_Unregister
//
//	@brief Unregisters a OnSetNextRoundPre callback.
//	@param index Listener ID.
//
//plugify:export OnSetNextRoundPre_Unregister
func OnSetNextRoundPre_Unregister(index listeners.ListenerID) {
	OnSetNextRoundPre.Remove(index)
}

// OnSetNextRoundPostCallback
//
//	@brief Called after the next round is set.
//	@param round Round settings (KeyValues3). Valid only during the call.
//	@param client Player slot of the initiator.
type OnSetNextRoundPostCallback func(round uintptr, client int32)

var OnSetNextRoundPost = listeners.NewListener[OnSetNextRoundPostCallback]()

// OnSetNextRoundPost_Register
//
//	@brief Registers a OnSetNextRoundPost callback.
//	@param callback Callback function.
//
//	@return Listener ID.
//
//plugify:export OnSetNextRoundPost_Register
func OnSetNextRoundPost_Register(callback OnSetNextRoundPostCallback) listeners.ListenerID {
	return OnSetNextRoundPost.Add(callback, listeners.Post)
}

// OnSetNextRoundPost_Unregister
//
//	@brief Unregisters a OnSetNextRoundPost callback.
//	@param index Listener ID.
//
//plugify:export OnSetNextRoundPost_Unregister
func OnSetNextRoundPost_Unregister(index listeners.ListenerID) {
	OnSetNextRoundPost.Remove(index)
}

func ForwardOnSetNextRound(round *s2sdk.KeyValues3, client int32) bool {
	result := OnSetNextRoundPre.InvokePre(func(callback OnSetNextRoundPreCallback) listeners.PluginResult {
		return callback(round.Get(), client)
	})

	plugin.log.Debugf("OnSetNextRound: round '%s', client %d, result %d", rounds.Name(round), client, result)

	if result >= listeners.Handled {
		return false
	}

	OnSetNextRoundPost.InvokePost(func(callback OnSetNextRoundPostCallback) {
		callback(round.Get(), client)
	})

	return true
}

// OnCancelCurrentRoundPreCallback
//
//	@brief Called before the current round is cancelled.
//	@param round Round settings (KeyValues3). Valid only during the call.
//	@param client Player slot of the initiator.
//
//	@return Handled or Stop to block, Continue or Changed to allow.
type OnCancelCurrentRoundPreCallback func(round uintptr, client int32) listeners.PluginResult

var OnCancelCurrentRoundPre = listeners.NewListener[OnCancelCurrentRoundPreCallback]()

// OnCancelCurrentRoundPre_Register
//
//	@brief Registers a OnCancelCurrentRoundPre callback.
//	@param callback Callback function.
//
//	@return Listener ID.
//
//plugify:export OnCancelCurrentRoundPre_Register
func OnCancelCurrentRoundPre_Register(callback OnCancelCurrentRoundPreCallback) listeners.ListenerID {
	return OnCancelCurrentRoundPre.Add(callback, listeners.Pre)
}

// OnCancelCurrentRoundPre_Unregister
//
//	@brief Unregisters a OnCancelCurrentRoundPre callback.
//	@param index Listener ID.
//
//plugify:export OnCancelCurrentRoundPre_Unregister
func OnCancelCurrentRoundPre_Unregister(index listeners.ListenerID) {
	OnCancelCurrentRoundPre.Remove(index)
}

// OnCancelCurrentRoundPostCallback
//
//	@brief Called after the current round is cancelled.
//	@param round Round settings (KeyValues3). Valid only during the call.
//	@param client Player slot of the initiator.
type OnCancelCurrentRoundPostCallback func(round uintptr, client int32)

var OnCancelCurrentRoundPost = listeners.NewListener[OnCancelCurrentRoundPostCallback]()

// OnCancelCurrentRoundPost_Register
//
//	@brief Registers a OnCancelCurrentRoundPost callback.
//	@param callback Callback function.
//
//	@return Listener ID.
//
//plugify:export OnCancelCurrentRoundPost_Register
func OnCancelCurrentRoundPost_Register(callback OnCancelCurrentRoundPostCallback) listeners.ListenerID {
	return OnCancelCurrentRoundPost.Add(callback, listeners.Post)
}

// OnCancelCurrentRoundPost_Unregister
//
//	@brief Unregisters a OnCancelCurrentRoundPost callback.
//	@param index Listener ID.
//
//plugify:export OnCancelCurrentRoundPost_Unregister
func OnCancelCurrentRoundPost_Unregister(index listeners.ListenerID) {
	OnCancelCurrentRoundPost.Remove(index)
}

func ForwardOnCancelCurrentRound(client int32) bool {
	round := rounds.Handle(plugin.rounds.Current())

	result := OnCancelCurrentRoundPre.InvokePre(func(callback OnCancelCurrentRoundPreCallback) listeners.PluginResult {
		return callback(round, client)
	})

	plugin.log.Debugf("OnCancelCurrentRound: round '%s', client %d, result %d", rounds.Name(plugin.rounds.Current()), client, result)

	if result >= listeners.Handled {
		return false
	}

	OnCancelCurrentRoundPost.InvokePost(func(callback OnCancelCurrentRoundPostCallback) {
		callback(round, client)
	})

	return true
}

// OnCancelNextRoundPreCallback
//
//	@brief Called before the next round is cancelled.
//	@param round Round settings (KeyValues3). Valid only during the call.
//	@param client Player slot of the initiator.
//
//	@return Handled or Stop to block, Continue or Changed to allow.
type OnCancelNextRoundPreCallback func(round uintptr, client int32) listeners.PluginResult

var OnCancelNextRoundPre = listeners.NewListener[OnCancelNextRoundPreCallback]()

// OnCancelNextRoundPre_Register
//
//	@brief Registers a OnCancelNextRoundPre callback.
//	@param callback Callback function.
//
//	@return Listener ID.
//
//plugify:export OnCancelNextRoundPre_Register
func OnCancelNextRoundPre_Register(callback OnCancelNextRoundPreCallback) listeners.ListenerID {
	return OnCancelNextRoundPre.Add(callback, listeners.Pre)
}

// OnCancelNextRoundPre_Unregister
//
//	@brief Unregisters a OnCancelNextRoundPre callback.
//	@param index Listener ID.
//
//plugify:export OnCancelNextRoundPre_Unregister
func OnCancelNextRoundPre_Unregister(index listeners.ListenerID) {
	OnCancelNextRoundPre.Remove(index)
}

// OnCancelNextRoundPostCallback
//
//	@brief Called after the next round is cancelled.
//	@param round Round settings (KeyValues3). Valid only during the call.
//	@param client Player slot of the initiator.
type OnCancelNextRoundPostCallback func(round uintptr, client int32)

var OnCancelNextRoundPost = listeners.NewListener[OnCancelNextRoundPostCallback]()

// OnCancelNextRoundPost_Register
//
//	@brief Registers a OnCancelNextRoundPost callback.
//	@param callback Callback function.
//
//	@return Listener ID.
//
//plugify:export OnCancelNextRoundPost_Register
func OnCancelNextRoundPost_Register(callback OnCancelNextRoundPostCallback) listeners.ListenerID {
	return OnCancelNextRoundPost.Add(callback, listeners.Post)
}

// OnCancelNextRoundPost_Unregister
//
//	@brief Unregisters a OnCancelNextRoundPost callback.
//	@param index Listener ID.
//
//plugify:export OnCancelNextRoundPost_Unregister
func OnCancelNextRoundPost_Unregister(index listeners.ListenerID) {
	OnCancelNextRoundPost.Remove(index)
}

func ForwardOnCancelNextRound(client int32) bool {
	round := rounds.Handle(plugin.rounds.Next())

	result := OnCancelNextRoundPre.InvokePre(func(callback OnCancelNextRoundPreCallback) listeners.PluginResult {
		return callback(round, client)
	})

	plugin.log.Debugf("OnCancelNextRound: round '%s', client %d, result %d", rounds.Name(plugin.rounds.Next()), client, result)

	if result >= listeners.Handled {
		return false
	}

	OnCancelNextRoundPost.InvokePost(func(callback OnCancelNextRoundPostCallback) {
		callback(round, client)
	})

	return true
}

// OnPlayerSpawnCallback
//
//	@brief Called after a player spawns.
//	@param client Player slot.
//	@param round Current round settings (KeyValues3), or 0 if the round is not custom. Valid only during the call.
type OnPlayerSpawnCallback func(client int32, round uintptr)

var OnPlayerSpawn = listeners.NewListener[OnPlayerSpawnCallback]()

// OnPlayerSpawn_Register
//
//	@brief Registers a OnPlayerSpawn callback.
//	@param callback Callback function.
//
//	@return Listener ID.
//
//plugify:export OnPlayerSpawn_Register
func OnPlayerSpawn_Register(callback OnPlayerSpawnCallback) listeners.ListenerID {
	return OnPlayerSpawn.Add(callback, listeners.Post)
}

// OnPlayerSpawn_Unregister
//
//	@brief Unregisters a OnPlayerSpawn callback.
//	@param index Listener ID.
//
//plugify:export OnPlayerSpawn_Unregister
func OnPlayerSpawn_Unregister(index listeners.ListenerID) {
	OnPlayerSpawn.Remove(index)
}

func ForwardOnPlayerSpawn(client int32) {
	round := rounds.Handle(plugin.rounds.Current())

	OnPlayerSpawn.InvokePost(func(callback OnPlayerSpawnCallback) {
		callback(client, round)
	})
}

// OnRoundStartCallback
//
//	@brief Called when a round starts.
//	@param round Current round settings (KeyValues3), or 0 if the round is not custom. Valid only during the call.
type OnRoundStartCallback func(round uintptr)

var OnRoundStart = listeners.NewListener[OnRoundStartCallback]()

// OnRoundStart_Register
//
//	@brief Registers a OnRoundStart callback.
//	@param callback Callback function.
//
//	@return Listener ID.
//
//plugify:export OnRoundStart_Register
func OnRoundStart_Register(callback OnRoundStartCallback) listeners.ListenerID {
	return OnRoundStart.Add(callback, listeners.Post)
}

// OnRoundStart_Unregister
//
//	@brief Unregisters a OnRoundStart callback.
//	@param index Listener ID.
//
//plugify:export OnRoundStart_Unregister
func OnRoundStart_Unregister(index listeners.ListenerID) {
	OnRoundStart.Remove(index)
}

func ForwardOnRoundStart() {
	round := rounds.Handle(plugin.rounds.Current())

	OnRoundStart.InvokePost(func(callback OnRoundStartCallback) {
		callback(round)
	})

	plugin.log.Debugf("OnRoundStart: round '%s'", rounds.Name(plugin.rounds.Current()))
}

// OnRoundEndCallback
//
//	@brief Called when a round ends.
//	@param round Current round settings (KeyValues3), or 0 if the round is not custom. Valid only during the call.
type OnRoundEndCallback func(round uintptr)

var OnRoundEnd = listeners.NewListener[OnRoundEndCallback]()

// OnRoundEnd_Register
//
//	@brief Registers a OnRoundEnd callback.
//	@param callback Callback function.
//
//	@return Listener ID.
//
//plugify:export OnRoundEnd_Register
func OnRoundEnd_Register(callback OnRoundEndCallback) listeners.ListenerID {
	return OnRoundEnd.Add(callback, listeners.Post)
}

// OnRoundEnd_Unregister
//
//	@brief Unregisters a OnRoundEnd callback.
//	@param index Listener ID.
//
//plugify:export OnRoundEnd_Unregister
func OnRoundEnd_Unregister(index listeners.ListenerID) {
	OnRoundEnd.Remove(index)
}

func ForwardOnRoundEnd() {
	round := rounds.Handle(plugin.rounds.Current())

	OnRoundEnd.InvokePost(func(callback OnRoundEndCallback) {
		callback(round)
	})

	plugin.log.Debugf("OnRoundEnd: round '%s'", rounds.Name(plugin.rounds.Current()))
}
