package main

import (
	"runtime/debug"

	"github.com/fr0nch/go-plugify-s2sdk/v2"

	"github.com/untrustedmodders/go-plugify"
)

type ConfigData struct {
	Settings struct {
		RestartDelay float32 `json:"restart_delay"`
		RespawnType  float32 `json:"respawn_type"`
	} `json:"settings"`
	Rounds []map[string]any `json:"rounds"`
}

type RoundSettings map[string]any

type CustomRoundsPlugin struct {
	GameRules uintptr // Pointer on CCSGameRules schema

	Config       ConfigData
	CurrentRound RoundSettings // Map with current round settings
	NextRound    RoundSettings // Map with next round settings

	RestartDelay float32 // Delay before round restart. 0 - instantly.
	RespawnType  float32 // Time before spawn hook calls after player respawn. Any values set timer after respawn. 0 - instantly.
	RoundEnded   bool
}

func NewCustomRoundsPlugin() *CustomRoundsPlugin {
	return &CustomRoundsPlugin{
		RestartDelay: 0.0,
		RespawnType:  1.0,
		RoundEnded:   false,
	}
}

var Plugin *CustomRoundsPlugin

func init() {
	Plugin = NewCustomRoundsPlugin()
	plugify.OnPluginStart(Plugin.OnPluginStart)
	plugify.OnPluginEnd(Plugin.OnPluginEnd)
	plugify.OnPluginPanic(Plugin.OnPluginPanic)
}

func (cr *CustomRoundsPlugin) OnPluginStart() {
	// FCVAR_SERVER_CAN_EXECUTE - the server is allowed to execute this command on clients via ClientCommand/NET_StringCmd/CBaseClientState::ProcessStringCmd.
	// ConVarFlag_Release - Cvars tagged with this are the only cvars avaliable to customers
	var flags = s2sdk.ConVarFlag_LinkedConcommand | s2sdk.ConVarFlag_Release | s2sdk.ConVarFlag_ClientCanExecute
	s2sdk.AddConsoleCommand("cr_reload", "", flags, CommandReloadConfig, s2sdk.HookMode_Post)

	cr.HookEvents()

	CRDebug("Plugin successfully loaded.")
}

func (cr *CustomRoundsPlugin) OnPluginEnd() {
	CRDebug("Plugin stopped")
	cr.UnhookEvents()
}

func (cr *CustomRoundsPlugin) OnPluginPanic() []byte {
	return debug.Stack() // workaround for could not import runtime/debug inside plugify package
}

func CommandReloadConfig(caller int32, context int32, arguments []string) s2sdk.ResultType {
	ReloadConfig()
	s2sdk.ReplyToCommand(context, caller, "[CustomRounds] Config successfully reloaded")

	return s2sdk.ResultType_Continue
}

func main() {}
