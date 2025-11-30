package main

import (
	"encoding/json"
	"fmt"
	"os"
	"path/filepath"

	. "customrounds/s2sdk"

	"github.com/untrustedmodders/go-plugify"
)

func (cr *CustomRoundsPlugin) LoadConfig() {
	CRDebug("[Config] Function 'LoadConfig' start call.")

	configDir := filepath.Join(plugify.ConfigsDir, "customrounds")
	CRDebug("[Config] Path: '%s'", configDir)

	ForwardOnConfigLoad()

	if err := os.MkdirAll(configDir, 0755); err != nil {
		CRDebug("[ERROR] Failed to create configs directory (%s)", err)
		return
	}

	configPath := filepath.Join(configDir, "config.json")

	file, err := os.Open(configPath)
	if err != nil {
		CRDebug("[WARNING] Missing rounds config file. Creating default config...")
		if err := cr.CreateDefaultConfig(configPath); err != nil {
			CRDebug("[ERROR] Failed to create default config file (%s)", err)
			return
		}
		// После создания дефолтного конфига, открываем его заново
		file, err = os.Open(configPath)
		if err != nil {
			CRDebug("[ERROR] Failed to open newly created config file (%s)", err)
			return
		}
	}
	defer file.Close()

	err = json.NewDecoder(file).Decode(&cr.Config)
	if err != nil {
		CRDebug("[ERROR] Failed to parse JSON config file (%s)", err)
		return
	}

	cr.RestartDelay = cr.Config.Settings.RestartDelay
	cr.RespawnType = cr.Config.Settings.RespawnType

	if cr.Config.Rounds == nil {
		CRDebug("[Config] Rounds list is nil. Check config file.")
		return
	}

	for i, round := range cr.Config.Rounds {
		if round["name"] == nil {
			round["name"] = fmt.Sprintf("CRound_%d", i+1)
			CRDebug("[Config] The round at index %d does not have a name set in the settings. It will be assigned the name '%s'", i, round["name"])
		}
	}

	CRDebug("[Config] RestartDelay: %f | RespawnType: %f", cr.RestartDelay, cr.RespawnType)
	CRDebug("[Config]\n\t%+v", cr.Config.Rounds)

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

		CRDebug("[Config] Function 'CheckConfig' called. Attempt to load config.")
		CRDebug("[WARNING] Main config not loaded. Attempting to load main config file...")

		if cr.Config.Rounds == nil {
			CRDebug("[ERROR] Main config not loaded!")
			CRDebug("[Config] Function 'CheckConfig' called. Attempt to load config failed.")

			return false
		}
	}

	CRDebug("[Config] Function 'CheckConfig' called.")

	return true
}

func (cr *CustomRoundsPlugin) GetRoundSettingsByName(name string) map[string]any {
	for _, round := range cr.Config.Rounds {
		if round["name"] == name {
			CRDebug("Round settings found for '%s': %+v", name, round)
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

func TimerSpawn(timer uint32, userData []any) {
	client := userData[0].(int32)
	if IsClientInGame(client) && IsClientAlive(client) /*&& !IsFakeClient(client)*/ {
		CRDebug("[Hooks] Function 'TimerSpawn' called. Client: %s[%d].", GetClientName(client), client)
		ForwardOnPlayerSpawn(client)
	}
}

func NextFrameSpawn(userData []any) {
	client := userData[0].(int32)

	if IsClientInGame(client) && IsClientAlive(client) /*&& !IsFakeClient(client)*/ {
		CRDebug("[Hooks] Function 'frame_spawn' called. Client: %s[%d].", GetClientName(client), client)
		ForwardOnPlayerSpawn(client)
	}
}
