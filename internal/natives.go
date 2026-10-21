package internal

import (
	"customrounds/internal/rounds"
	"encoding/json"
	"fmt"
	"math/rand"

	s2sdk "github.com/fr0nch/go-plugify-s2sdk/v2"
)

// SetNextRound
//
//	@brief Sets the next round by name.
//	@param name Round name.
//	@param client Player slot of the initiator.
//
//	@return True if the round was set.
//
//plugify:export SetNextRound
func SetNextRound(name string, client int32) bool {
	if !plugin.CheckConfig() {
		return false
	}

	round := plugin.rounds.Find(name)
	if round == nil {
		plugin.log.Warnf("SetNextRound: round '%s' not found", name)
		return false
	}

	return setNextRound(s2sdk.NewKeyValues3Kv3CreateCopy(round.Get()), client)
}

// SetNextRoundFromJson
//
//	@brief Sets the next round from JSON settings.
//	@param presetRound Round settings in JSON.
//	@param client Player slot of the initiator.
//
//	@return True if the round was set.
//
//plugify:export SetNextRoundFromJson
func SetNextRoundFromJson(presetRound string, client int32) bool {
	var settings map[string]any
	if err := json.Unmarshal([]byte(presetRound), &settings); err != nil || settings == nil {
		plugin.log.Warnf("SetNextRoundFromJson: invalid JSON: %v", err)
		return false
	}

	if settings["name"] == nil {
		settings["name"] = fmt.Sprintf("CRound_FromJson_%d", rand.Intn(100))
	}

	round, err := rounds.FromSettings(settings)
	if err != nil {
		plugin.log.Errorf("SetNextRoundFromJson: failed to create round: %v", err)
		return false
	}

	return setNextRound(round, client)
}

// SetNextRoundFromKeyValue
//
//	@brief Sets the next round from KeyValues3 settings. The settings are copied.
//	@param round Round settings (KeyValues3).
//	@param client Player slot of the initiator.
//
//	@return True if the round was set.
//
//plugify:export SetNextRoundFromKeyValue
func SetNextRoundFromKeyValue(round uintptr, client int32) bool {
	if round == 0 {
		return false
	}

	return setNextRound(s2sdk.NewKeyValues3Kv3CreateCopy(round), client)
}

func setNextRound(round *s2sdk.KeyValues3, client int32) bool {
	if !ForwardOnSetNextRound(round, client) {
		round.Close()
		return false
	}

	plugin.rounds.SetNext(round)

	return true
}

// CancelNextRound
//
//	@brief Cancels the next round.
//	@param client Player slot of the initiator.
//
//	@return True if the round was canceled.
//
//plugify:export CancelNextRound
func CancelNextRound(client int32) bool {
	if plugin.rounds.Next() == nil || !ForwardOnCancelNextRound(client) {
		return false
	}

	plugin.rounds.SetNext(nil)

	return true
}

// StartRound
//
//	@brief Ends the current round and starts a round by name. The next round is kept.
//	@param name Round name.
//	@param client Player slot of the initiator.
//
//	@return True if the round was started.
//
//plugify:export StartRound
func StartRound(name string, client int32) bool {
	if !plugin.CheckConfig() {
		return false
	}

	round := plugin.rounds.Find(name)
	if round == nil {
		plugin.log.Warnf("StartRound: round '%s' not found", name)
		return false
	}

	return startRound(s2sdk.NewKeyValues3Kv3CreateCopy(round.Get()), client)
}

// StartRoundFromKeyValue
//
//	@brief Ends the current round and starts a round from KeyValues3 settings. The settings are copied.
//	@param round Round settings (KeyValues3).
//	@param client Player slot of the initiator.
//
//	@return True if the round was started.
//
//plugify:export StartRoundFromKeyValue
func StartRoundFromKeyValue(round uintptr, client int32) bool {
	if round == 0 {
		return false
	}

	return startRound(s2sdk.NewKeyValues3Kv3CreateCopy(round), client)
}

func startRound(round *s2sdk.KeyValues3, client int32) bool {
	if isWarmupPeriod() || !ForwardOnForceRoundStart(round, client) {
		round.Close()
		return false
	}

	plugin.rounds.SetForced(round)
	s2sdk.TerminateRound(0, s2sdk.CSRoundEndReason_Draw)

	return true
}

func isWarmupPeriod() bool {
	gameRules := s2sdk.GetGameRules()
	return gameRules != 0 && s2sdk.GetEntSchema2(gameRules, "CCSGameRules", "m_bWarmupPeriod", 0) > 0
}

// StopRound
//
//	@brief Ends the current custom round.
//	@param client Player slot of the initiator.
//
//	@return True if the round was stopped.
//
//plugify:export StopRound
func StopRound(client int32) bool {
	if plugin.rounds.Current() == nil || !ForwardOnCancelCurrentRound(client) {
		return false
	}

	s2sdk.TerminateRound(plugin.config.Settings.General.RestartDelay, s2sdk.CSRoundEndReason_Draw)

	return true
}

// IsCustomRound
//
//	@brief Checks if the current round is custom.
//
//	@return True if the current round is custom.
//
//plugify:export IsCustomRound
func IsCustomRound() bool {
	return plugin.rounds.Current() != nil
}

// IsNextRoundCustom
//
//	@brief Checks if the next round is custom.
//
//	@return True if the next round is set.
//
//plugify:export IsNextRoundCustom
func IsNextRoundCustom() bool {
	return plugin.rounds.Next() != nil
}

// IsRoundEnd
//
//	@brief Checks if the round has ended (between round_end and round_start).
//
//	@return True if the round has ended.
//
//plugify:export IsRoundEnd
func IsRoundEnd() bool {
	return plugin.roundEnded
}

// IsRoundExists
//
//	@brief Checks if a round exists in the config.
//	@param name Round name.
//
//	@return True if the round exists.
//
//plugify:export IsRoundExists
func IsRoundExists(name string) bool {
	return plugin.CheckConfig() && plugin.rounds.Find(name) != nil
}

// GetRound
//
//	@brief Returns a round from the config by name.
//	@param name Round name.
//
//	@return Round settings (KeyValues3), or 0 if not found. Valid until the config is reloaded.
//
//plugify:export GetRound
func GetRound(name string) uintptr {
	if !plugin.CheckConfig() {
		return 0
	}

	return rounds.Handle(plugin.rounds.Find(name))
}

// GetRounds
//
//	@brief Returns all rounds from the config.
//
//	@return Round settings (KeyValues3). Valid until the config is reloaded.
//
//plugify:export GetRounds
func GetRounds() []uintptr {
	if !plugin.CheckConfig() {
		return nil
	}

	return plugin.rounds.Handles()
}

// GetRoundNames
//
//	@brief Returns the names of all rounds from the config.
//
//	@return Round names.
//
//plugify:export GetRoundNames
func GetRoundNames() []string {
	if !plugin.CheckConfig() {
		return nil
	}

	return plugin.rounds.Names()
}

// GetRoundIndex
//
//	@brief Returns the index of a round in the config.
//	@param name Round name.
//
//	@return Round index, or -1 if not found.
//
//plugify:export GetRoundIndex
func GetRoundIndex(name string) int32 {
	if !plugin.CheckConfig() {
		return -1
	}

	return plugin.rounds.Index(name)
}

// GetCurrentRound
//
//	@brief Returns the current round.
//
//	@return Round settings (KeyValues3), or 0 if the round is not custom. Valid until the round ends.
//
//plugify:export GetCurrentRound
func GetCurrentRound() uintptr {
	return rounds.Handle(plugin.rounds.Current())
}

// GetNextRound
//
//	@brief Returns the next round.
//
//	@return Round settings (KeyValues3), or 0 if not set. Valid until the round starts or is canceled.
//
//plugify:export GetNextRound
func GetNextRound() uintptr {
	return rounds.Handle(plugin.rounds.Next())
}

// GetCurrentRoundName
//
//	@brief Returns the current round name.
//
//	@return Round name, or empty string if the round is not custom.
//
//plugify:export GetCurrentRoundName
func GetCurrentRoundName() string {
	return rounds.Name(plugin.rounds.Current())
}

// GetNextRoundName
//
//	@brief Returns the next round name.
//
//	@return Round name, or empty string if not set.
//
//plugify:export GetNextRoundName
func GetNextRoundName() string {
	return rounds.Name(plugin.rounds.Next())
}

// GetJsonString
//
//	@brief Returns all rounds from the config in JSON.
//
//	@return Rounds in JSON.
//
//plugify:export GetJsonString
func GetJsonString() string {
	data, _ := json.Marshal(plugin.config.Settings.Rounds)
	return string(data)
}

// GetCurrentRoundJsonString
//
//	@brief Returns the current round in JSON.
//
//	@return Round in JSON, or 'null' if the round is not custom.
//
//plugify:export GetCurrentRoundJsonString
func GetCurrentRoundJsonString() string {
	data, _ := rounds.JSON(plugin.rounds.Current())
	return data
}

// GetNextRoundKeyValueJsonString
//
//	@brief Returns the next round in JSON.
//
//	@return Round in JSON, or 'null' if not set.
//
//plugify:export GetNextRoundKeyValueJsonString
func GetNextRoundKeyValueJsonString() string {
	data, _ := rounds.JSON(plugin.rounds.Next())
	return data
}

// ReloadConfig
//
//	@brief Reloads the config.
//
//plugify:export ReloadConfig
func ReloadConfig() {
	plugin.LoadConfig()
}
