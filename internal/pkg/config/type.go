package config

import "fmt"

type ConfigsType interface {
	Settings
}

type Config struct {
	Settings *Settings `json:"settings"`
}

type General struct {
	RestartDelay float32 `json:"restart_delay"`
	RespawnType  float32 `json:"respawn_type"`
}

type Settings struct {
	General General          `json:"settings"`
	Rounds  []map[string]any `json:"rounds"`
}

func DefaultSettings() Settings {
	return Settings{
		General: General{
			RestartDelay: 5.0,
			RespawnType:  0,
		},
		Rounds: []map[string]any{},
	}
}

func (s *Settings) NameUnnamedRounds() {
	for i, round := range s.Rounds {
		if round["name"] == nil {
			round["name"] = fmt.Sprintf("CRound_%d", i+1)
		}
	}
}
