package main

import (
	. "customrounds/s2sdk"
	"runtime/debug"

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
	var flags = ConVarFlag_LinkedConcommand | ConVarFlag_Release | ConVarFlag_ClientCanExecute
	AddConsoleCommand("cr_reload", "", flags, CommandReloadConfig, HookMode_Post)

	//cr.LoadConfig()
	cr.HookEvents()

	OnServerActivate_Register(cr.OnServerActivate)

	CRDebug("Plugin successfully loaded.")
}

func (cr *CustomRoundsPlugin) OnPluginEnd() {
	CRDebug("Plugin stopped")
	OnServerActivate_Unregister(cr.OnServerActivate)
}

func (cr *CustomRoundsPlugin) OnPluginPanic() []byte {
	return debug.Stack() // workaround for could not import runtime/debug inside plugify package
}

func (cr *CustomRoundsPlugin) OnServerActivate() {
	cr.GameRules = GetGameRules()
}

func CommandReloadConfig(caller int32, context int32, arguments []string) ResultType {
	ReloadConfig()
	ReplyToCommand(context, caller, "[CustomRounds] Config successfully reloaded")

	return ResultType_Continue
}

func main() {}
