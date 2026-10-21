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

// OnConfigLoadRegister
//
//	@brief Registers a OnConfigLoad callback.
//	@param callback Callback function.
//
//	@return Listener ID.
//
//plugify:export OnConfigLoadRegister
func OnConfigLoadRegister(callback OnConfigLoadCallback) listeners.ListenerID {
	return OnConfigLoad.Add(callback, listeners.Post)
}

// OnConfigLoadUnregister
//
//	@brief Unregisters a OnConfigLoad callback.
//	@param index Listener ID.
//
//plugify:export OnConfigLoadUnregister
func OnConfigLoadUnregister(index listeners.ListenerID) {
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

// OnConfigSectionLoadRegister
//
//	@brief Registers a OnConfigSectionLoad callback.
//	@param callback Callback function.
//
//	@return Listener ID.
//
//plugify:export OnConfigSectionLoadRegister
func OnConfigSectionLoadRegister(callback OnConfigSectionLoadCallback) listeners.ListenerID {
	return OnConfigSectionLoad.Add(callback, listeners.Pre)
}

// OnConfigSectionLoadUnregister
//
//	@brief Unregisters a OnConfigSectionLoad callback.
//	@param index Listener ID.
//
//plugify:export OnConfigSectionLoadUnregister
func OnConfigSectionLoadUnregister(index listeners.ListenerID) {
	OnConfigSectionLoad.Remove(index)
}

// OnConfigSectionLoadPostCallback
//
//	@brief Called after a round is loaded from the config.
//	@param round Round settings (KeyValues3). Valid until the config is reloaded.
type OnConfigSectionLoadPostCallback func(round uintptr)

var OnConfigSectionLoadPost = listeners.NewListener[OnConfigSectionLoadPostCallback]()

// OnConfigSectionLoadPostRegister
//
//	@brief Registers a OnConfigSectionLoadPost callback.
//	@param callback Callback function.
//
//	@return Listener ID.
//
//plugify:export OnConfigSectionLoadPostRegister
func OnConfigSectionLoadPostRegister(callback OnConfigSectionLoadPostCallback) listeners.ListenerID {
	return OnConfigSectionLoadPost.Add(callback, listeners.Post)
}

// OnConfigSectionLoadPostUnregister
//
//	@brief Unregisters a OnConfigSectionLoadPost callback.
//	@param index Listener ID.
//
//plugify:export OnConfigSectionLoadPostUnregister
func OnConfigSectionLoadPostUnregister(index listeners.ListenerID) {
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

// OnConfigLoadedRegister
//
//	@brief Registers a OnConfigLoaded callback.
//	@param callback Callback function.
//
//	@return Listener ID.
//
//plugify:export OnConfigLoadedRegister
func OnConfigLoadedRegister(callback OnConfigLoadedCallback) listeners.ListenerID {
	return OnConfigLoaded.Add(callback, listeners.Post)
}

// OnConfigLoadedUnregister
//
//	@brief Unregisters a OnConfigLoaded callback.
//	@param index Listener ID.
//
//plugify:export OnConfigLoadedUnregister
func OnConfigLoadedUnregister(index listeners.ListenerID) {
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

// OnForceRoundStartPreRegister
//
//	@brief Registers a OnForceRoundStartPre callback.
//	@param callback Callback function.
//
//	@return Listener ID.
//
//plugify:export OnForceRoundStartPreRegister
func OnForceRoundStartPreRegister(callback OnForceRoundStartPreCallback) listeners.ListenerID {
	return OnForceRoundStartPre.Add(callback, listeners.Pre)
}

// OnForceRoundStartPreUnregister
//
//	@brief Unregisters a OnForceRoundStartPre callback.
//	@param index Listener ID.
//
//plugify:export OnForceRoundStartPreUnregister
func OnForceRoundStartPreUnregister(index listeners.ListenerID) {
	OnForceRoundStartPre.Remove(index)
}

// OnForceRoundStartPostCallback
//
//	@brief Called after a round is force started.
//	@param round Round settings (KeyValues3). Valid only during the call.
//	@param client Player slot of the initiator.
type OnForceRoundStartPostCallback func(round uintptr, client int32)

var OnForceRoundStartPost = listeners.NewListener[OnForceRoundStartPostCallback]()

// OnForceRoundStartPostRegister
//
//	@brief Registers a OnForceRoundStartPost callback.
//	@param callback Callback function.
//
//	@return Listener ID.
//
//plugify:export OnForceRoundStartPostRegister
func OnForceRoundStartPostRegister(callback OnForceRoundStartPostCallback) listeners.ListenerID {
	return OnForceRoundStartPost.Add(callback, listeners.Post)
}

// OnForceRoundStartPostUnregister
//
//	@brief Unregisters a OnForceRoundStartPost callback.
//	@param index Listener ID.
//
//plugify:export OnForceRoundStartPostUnregister
func OnForceRoundStartPostUnregister(index listeners.ListenerID) {
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

// OnSetNextRoundPreRegister
//
//	@brief Registers a OnSetNextRoundPre callback.
//	@param callback Callback function.
//
//	@return Listener ID.
//
//plugify:export OnSetNextRoundPreRegister
func OnSetNextRoundPreRegister(callback OnSetNextRoundPreCallback) listeners.ListenerID {
	return OnSetNextRoundPre.Add(callback, listeners.Pre)
}

// OnSetNextRoundPreUnregister
//
//	@brief Unregisters a OnSetNextRoundPre callback.
//	@param index Listener ID.
//
//plugify:export OnSetNextRoundPreUnregister
func OnSetNextRoundPreUnregister(index listeners.ListenerID) {
	OnSetNextRoundPre.Remove(index)
}

// OnSetNextRoundPostCallback
//
//	@brief Called after the next round is set.
//	@param round Round settings (KeyValues3). Valid only during the call.
//	@param client Player slot of the initiator.
type OnSetNextRoundPostCallback func(round uintptr, client int32)

var OnSetNextRoundPost = listeners.NewListener[OnSetNextRoundPostCallback]()

// OnSetNextRoundPostRegister
//
//	@brief Registers a OnSetNextRoundPost callback.
//	@param callback Callback function.
//
//	@return Listener ID.
//
//plugify:export OnSetNextRoundPostRegister
func OnSetNextRoundPostRegister(callback OnSetNextRoundPostCallback) listeners.ListenerID {
	return OnSetNextRoundPost.Add(callback, listeners.Post)
}

// OnSetNextRoundPostUnregister
//
//	@brief Unregisters a OnSetNextRoundPost callback.
//	@param index Listener ID.
//
//plugify:export OnSetNextRoundPostUnregister
func OnSetNextRoundPostUnregister(index listeners.ListenerID) {
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

// OnCancelCurrentRoundPreRegister
//
//	@brief Registers a OnCancelCurrentRoundPre callback.
//	@param callback Callback function.
//
//	@return Listener ID.
//
//plugify:export OnCancelCurrentRoundPreRegister
func OnCancelCurrentRoundPreRegister(callback OnCancelCurrentRoundPreCallback) listeners.ListenerID {
	return OnCancelCurrentRoundPre.Add(callback, listeners.Pre)
}

// OnCancelCurrentRoundPreUnregister
//
//	@brief Unregisters a OnCancelCurrentRoundPre callback.
//	@param index Listener ID.
//
//plugify:export OnCancelCurrentRoundPreUnregister
func OnCancelCurrentRoundPreUnregister(index listeners.ListenerID) {
	OnCancelCurrentRoundPre.Remove(index)
}

// OnCancelCurrentRoundPostCallback
//
//	@brief Called after the current round is cancelled.
//	@param round Round settings (KeyValues3). Valid only during the call.
//	@param client Player slot of the initiator.
type OnCancelCurrentRoundPostCallback func(round uintptr, client int32)

var OnCancelCurrentRoundPost = listeners.NewListener[OnCancelCurrentRoundPostCallback]()

// OnCancelCurrentRoundPostRegister
//
//	@brief Registers a OnCancelCurrentRoundPost callback.
//	@param callback Callback function.
//
//	@return Listener ID.
//
//plugify:export OnCancelCurrentRoundPostRegister
func OnCancelCurrentRoundPostRegister(callback OnCancelCurrentRoundPostCallback) listeners.ListenerID {
	return OnCancelCurrentRoundPost.Add(callback, listeners.Post)
}

// OnCancelCurrentRoundPostUnregister
//
//	@brief Unregisters a OnCancelCurrentRoundPost callback.
//	@param index Listener ID.
//
//plugify:export OnCancelCurrentRoundPostUnregister
func OnCancelCurrentRoundPostUnregister(index listeners.ListenerID) {
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

// OnCancelNextRoundPreRegister
//
//	@brief Registers a OnCancelNextRoundPre callback.
//	@param callback Callback function.
//
//	@return Listener ID.
//
//plugify:export OnCancelNextRoundPreRegister
func OnCancelNextRoundPreRegister(callback OnCancelNextRoundPreCallback) listeners.ListenerID {
	return OnCancelNextRoundPre.Add(callback, listeners.Pre)
}

// OnCancelNextRoundPreUnregister
//
//	@brief Unregisters a OnCancelNextRoundPre callback.
//	@param index Listener ID.
//
//plugify:export OnCancelNextRoundPreUnregister
func OnCancelNextRoundPreUnregister(index listeners.ListenerID) {
	OnCancelNextRoundPre.Remove(index)
}

// OnCancelNextRoundPostCallback
//
//	@brief Called after the next round is cancelled.
//	@param round Round settings (KeyValues3). Valid only during the call.
//	@param client Player slot of the initiator.
type OnCancelNextRoundPostCallback func(round uintptr, client int32)

var OnCancelNextRoundPost = listeners.NewListener[OnCancelNextRoundPostCallback]()

// OnCancelNextRoundPostRegister
//
//	@brief Registers a OnCancelNextRoundPost callback.
//	@param callback Callback function.
//
//	@return Listener ID.
//
//plugify:export OnCancelNextRoundPostRegister
func OnCancelNextRoundPostRegister(callback OnCancelNextRoundPostCallback) listeners.ListenerID {
	return OnCancelNextRoundPost.Add(callback, listeners.Post)
}

// OnCancelNextRoundPostUnregister
//
//	@brief Unregisters a OnCancelNextRoundPost callback.
//	@param index Listener ID.
//
//plugify:export OnCancelNextRoundPostUnregister
func OnCancelNextRoundPostUnregister(index listeners.ListenerID) {
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

// OnPlayerSpawnRegister
//
//	@brief Registers a OnPlayerSpawn callback.
//	@param callback Callback function.
//
//	@return Listener ID.
//
//plugify:export OnPlayerSpawnRegister
func OnPlayerSpawnRegister(callback OnPlayerSpawnCallback) listeners.ListenerID {
	return OnPlayerSpawn.Add(callback, listeners.Post)
}

// OnPlayerSpawnUnregister
//
//	@brief Unregisters a OnPlayerSpawn callback.
//	@param index Listener ID.
//
//plugify:export OnPlayerSpawnUnregister
func OnPlayerSpawnUnregister(index listeners.ListenerID) {
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

// OnRoundStartRegister
//
//	@brief Registers a OnRoundStart callback.
//	@param callback Callback function.
//
//	@return Listener ID.
//
//plugify:export OnRoundStartRegister
func OnRoundStartRegister(callback OnRoundStartCallback) listeners.ListenerID {
	return OnRoundStart.Add(callback, listeners.Post)
}

// OnRoundStartUnregister
//
//	@brief Unregisters a OnRoundStart callback.
//	@param index Listener ID.
//
//plugify:export OnRoundStartUnregister
func OnRoundStartUnregister(index listeners.ListenerID) {
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

// OnRoundEndRegister
//
//	@brief Registers a OnRoundEnd callback.
//	@param callback Callback function.
//
//	@return Listener ID.
//
//plugify:export OnRoundEndRegister
func OnRoundEndRegister(callback OnRoundEndCallback) listeners.ListenerID {
	return OnRoundEnd.Add(callback, listeners.Post)
}

// OnRoundEndUnregister
//
//	@brief Unregisters a OnRoundEnd callback.
//	@param index Listener ID.
//
//plugify:export OnRoundEndUnregister
func OnRoundEndUnregister(index listeners.ListenerID) {
	OnRoundEnd.Remove(index)
}

func ForwardOnRoundEnd() {
	round := rounds.Handle(plugin.rounds.Current())

	OnRoundEnd.InvokePost(func(callback OnRoundEndCallback) {
		callback(round)
	})

	plugin.log.Debugf("OnRoundEnd: round '%s'", rounds.Name(plugin.rounds.Current()))
}
