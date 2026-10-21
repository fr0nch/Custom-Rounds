package internal

import (
	"customrounds/internal/pkg/config"
	"customrounds/internal/rounds"
)

func (cr *CustomRoundsPlugin) LoadConfig() {
	ForwardOnConfigLoad()

	settings, err := config.LoadConfig(cr.Plugin.Name(), "config.json", config.DefaultSettings())
	if err != nil {
		cr.log.Errorf("Failed to load config: %v", err)
		return
	}

	settings.NameUnnamedRounds()
	cr.config.Settings = settings

	cr.rounds.Clear()
	for i := range settings.Rounds {
		round, err := rounds.FromSettings(settings.Rounds[i])
		if err != nil {
			cr.log.Errorf("Failed to load round '%v': %v", settings.Rounds[i]["name"], err)
			continue
		}

		if !ForwardOnConfigSectionLoad(round) {
			round.Close()
			continue
		}

		cr.rounds.Add(round)
		ForwardOnConfigSectionLoadPost(round)
	}

	cr.log.Debugf("Loaded rounds: %v", cr.rounds.Names())

	ForwardOnConfigLoaded()
}

func (cr *CustomRoundsPlugin) CheckConfig() bool {
	if cr.config.Settings.Rounds == nil {
		cr.LoadConfig()
	}

	return cr.config.Settings.Rounds != nil
}
