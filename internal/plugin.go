package internal

import (
	"customrounds/internal/pkg/config"
	"customrounds/internal/rounds"

	s2sdk "github.com/fr0nch/go-plugify-s2sdk/v2"
	"github.com/fr0nch/logger"
	"github.com/untrustedmodders/go-plugify"
)

type CustomRoundsPlugin struct {
	Plugin plugify.Plugin

	config *config.Config
	rounds *rounds.Manager

	roundEnded bool

	log *logger.Logger
}

var plugin *CustomRoundsPlugin

func NewCustomRoundsPlugin() *CustomRoundsPlugin {
	plugin = &CustomRoundsPlugin{}
	return plugin
}

func (cr *CustomRoundsPlugin) OnPluginStart() error {
	var err error

	cr.log, err = logger.NewWithOptions(logger.Options{PluginName: cr.Plugin.Name(), Folder: cr.Plugin.Name()})
	if err != nil {
		return err
	}

	cr.config = config.NewConfig()
	cr.rounds = rounds.NewManager()

	flags := s2sdk.ConVarFlag_LinkedConcommand | s2sdk.ConVarFlag_Release | s2sdk.ConVarFlag_ClientCanExecute
	s2sdk.AddAdminCommand("cr_reload", "customrounds.reload_config", "Reloads Custom Rounds config", flags, cr.CommandReloadConfig, s2sdk.HookMode_Post)

	cr.RegisterEvents()

	cr.LoadConfig()

	return nil
}

func (cr *CustomRoundsPlugin) OnPluginUpdate(dt float32) error {
	return nil
}

func (cr *CustomRoundsPlugin) OnPluginEnd() error {
	cr.UnregisterEvents()
	cr.rounds.Close()

	return nil
}

func (cr *CustomRoundsPlugin) CommandReloadConfig(caller int32, context s2sdk.ConCommandContext, arguments []string) s2sdk.ResultType {
	cr.LoadConfig()
	s2sdk.ReplyToCommand(context, caller, "[CustomRounds] Config successfully reloaded")

	return s2sdk.ResultType_Continue
}
