package main

import (
	"encoding/json"
	"fmt"
	"os"
	"path/filepath"

	"github.com/untrustedmodders/go-plugify"
)

func (cr *CustomRoundsPlugin) LoadConfig() {
	cr.log.Debug("[Config] Function 'LoadConfig' start call.")

	configDir := filepath.Join(plugify.ConfigsDir(), cr.Plugin.Name())
	cr.log.Debugf("[Config] Path: '%s'", configDir)

	ForwardOnConfigLoad()

	if err := os.MkdirAll(configDir, 0755); err != nil {
		cr.log.Debugf("[ERROR] Failed to create configs directory (%s)", err)
		return
	}

	configPath := filepath.Join(configDir, "config.json")

	file, err := os.Open(configPath)
	if err != nil {
		cr.log.Debug("[WARNING] Missing rounds config file. Creating default config...")
		if err := cr.CreateDefaultConfig(configPath); err != nil {
			cr.log.Debugf("[ERROR] Failed to create default config file (%s)", err)
			return
		}

		file, err = os.Open(configPath)
		if err != nil {
			cr.log.Debugf("[ERROR] Failed to open newly created config file (%s)", err)
			return
		}
	}
	defer file.Close()

	err = json.NewDecoder(file).Decode(&cr.Config)
	if err != nil {
		cr.log.Debugf("[ERROR] Failed to parse JSON config file (%s)", err)
		return
	}

	cr.RestartDelay = cr.Config.Settings.RestartDelay
	cr.RespawnType = cr.Config.Settings.RespawnType

	if cr.Config.Rounds == nil {
		cr.log.Debug("[Config] Rounds list is nil. Check config file.")
		return
	}

	for i, round := range cr.Config.Rounds {
		if round["name"] == nil {
			round["name"] = fmt.Sprintf("CRound_%d", i+1)
			cr.log.Debugf("[Config] The round at index %d does not have a name set in the settings. It will be assigned the name '%s'", i, round["name"])
		}
	}

	cr.log.Debugf("[Config] RestartDelay: %f | RespawnType: %f", cr.RestartDelay, cr.RespawnType)
	cr.log.Debugf("[Config]\n\t%+v", cr.Config.Rounds)

	ForwardOnConfigLoaded()
}

func (cr *CustomRoundsPlugin) CreateDefaultConfig(configPath string) error {
	defaultConfig := ConfigData{
		Settings: struct {
			RestartDelay float32 `json:"restart_delay"`
			RespawnType  float32 `json:"respawn_type"`
		}{
			RestartDelay: 5.0,
			RespawnType:  0,
		},
		Rounds: []map[string]any{},
	}

	data, err := json.MarshalIndent(defaultConfig, "", "\t")
	if err != nil {
		return err
	}

	return os.WriteFile(configPath, data, 0644)
}

func (cr *CustomRoundsPlugin) CheckConfig() bool {
	if cr.Config.Rounds == nil {
		cr.LoadConfig()

		cr.log.Debug("[Config] Function 'CheckConfig' called. Attempt to load config.")
		cr.log.Debug("[WARNING] Main config not loaded. Attempting to load main config file...")

		if cr.Config.Rounds == nil {
			cr.log.Debug("[ERROR] Main config not loaded!")
			cr.log.Debug("[Config] Function 'CheckConfig' called. Attempt to load config failed.")

			return false
		}
	}

	cr.log.Debug("[Config] Function 'CheckConfig' called.")

	return true
}

func (cr *CustomRoundsPlugin) GetRoundSettingsByName(name string) map[string]any {
	for _, round := range cr.Config.Rounds {
		if round["name"] == name {
			cr.log.Debugf("Round settings found for '%s': %+v", name, round)
			return round
		}
	}

	return nil
}

func (cr *CustomRoundsPlugin) CreateRound(name string, current bool, round map[string]any) {
	if round == nil {
		round = cr.GetRoundSettingsByName(name)
	}
	if current {
		cr.CurrentRound = round
	} else {
		cr.NextRound = round
	}
}
