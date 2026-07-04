package main

import (
	s2sdk "github.com/fr0nch/go-plugify-s2sdk/v2"
	"github.com/fr0nch/logger"
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
	Plugin plugify.Plugin

	GameRules uintptr // Pointer on CCSGameRules schema

	Config       ConfigData
	CurrentRound RoundSettings // Map with current round settings
	NextRound    RoundSettings // Map with next round settings

	RestartDelay float32 // Delay before round restart. 0 - instantly.
	RespawnType  float32 // Time before spawn hook calls after player respawn. Any values set timer after respawn. 0 - instantly.
	RoundEnded   bool

	log *logger.Logger
}

func NewCustomRoundsPlugin() *CustomRoundsPlugin {
	return &CustomRoundsPlugin{
		RestartDelay: 0.0,
		RespawnType:  1.0,
		RoundEnded:   false,
	}
}

const pluginName = "customrounds"

var plugin *CustomRoundsPlugin

func init() {
	plugin = NewCustomRoundsPlugin()
	plugin.Plugin = plugify.NewPlugin(pluginName, plugin.OnPluginStart, plugin.OnPluginUpdate, plugin.OnPluginEnd)
}

func (cr *CustomRoundsPlugin) OnPluginStart() error {
	var err error
	cr.log, err = logger.NewWithOptions(logger.Options{PluginName: cr.Plugin.Name(), Folder: pluginName})
	if err != nil {
		return err
	}

	// FCVAR_SERVER_CAN_EXECUTE - the server is allowed to execute this command on clients via ClientCommand/NET_StringCmd/CBaseClientState::ProcessStringCmd.
	// ConVarFlag_Release - Cvars tagged with this are the only cvars avaliable to customers
	var flags = s2sdk.ConVarFlag_LinkedConcommand | s2sdk.ConVarFlag_Release | s2sdk.ConVarFlag_ClientCanExecute
	s2sdk.AddConsoleCommand("cr_reload", "", flags, cr.CommandReloadConfig, s2sdk.HookMode_Post)

	cr.HookEvents()

	cr.log.Debug("Plugin successfully loaded.")
	return nil
}

func (cr *CustomRoundsPlugin) OnPluginUpdate(_ float32) error {
	return nil
}

func (cr *CustomRoundsPlugin) OnPluginEnd() error {
	cr.log.Debug("Plugin stopped")
	cr.UnhookEvents()

	return nil
}

func (cr *CustomRoundsPlugin) CommandReloadConfig(caller int32, context s2sdk.ConCommandContext, arguments []string) s2sdk.ResultType {
	ReloadConfig()
	s2sdk.ReplyToCommand(context, caller, "[CustomRounds] Config successfully reloaded")

	return s2sdk.ResultType_Continue
}

func main() {}
