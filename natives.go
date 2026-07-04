package main

import (
	"encoding/json"
	"fmt"
	"math/rand"
	"slices"

	"github.com/fr0nch/go-plugify-s2sdk/v2"
)

// SetNextRound
//
//	@brief Устанавливает следующий кастомный раунд по имени.
//	@param name Имя раунда.
//	@param client PlayerSlot игрока.
//
//	@return bool Если true то раунд поставился удачно, false не удачно.
//
//plugify:export SetNextRound
func SetNextRound(name string, client int32) bool {
	plugin.log.Debugf("[Natives] Native 'SetNextRound' start call.")

	if !plugin.CheckConfig() {
		return false
	}

	if plugin.GetRoundSettingsByName(name) != nil {
		if ForwardOnSetNextRound(&name, client) {
			plugin.CreateRound(name, false, nil)
			plugin.log.Debugf("[Natives] Native 'SetNextRound' end call. Name: %s. State: true.", name)
			return true
		}
		plugin.log.Debugf("[Natives] Native 'SetNextRound' end call. Name: %s. State: false.", name)
	} else {
		plugin.log.Debugf("[SetNextRound] Round name '%s' is invalid.", name)
	}

	return false
}

//plugify:export SetNextRoundFromJson
func SetNextRoundFromJson(presetRound string, client int32) bool {
	plugin.log.Debugf("[Natives] Native 'SetNextRoundFromJson' start call.")

	var round map[string]any

	if err := json.Unmarshal([]byte(presetRound), &round); err != nil {
		plugin.log.Debugf("[SetNextRoundFromJson] Invalid JSON round setting. Error marshaling to JSON: %v", err)
		return false
	}

	plugin.log.Debugf("[SetNextRoundFromJson] JSON setting:\n \n%s", round)

	if round["name"] == nil {
		round["name"] = fmt.Sprintf("CRound_FromJson_%d", rand.Intn(100))
		plugin.log.Debugf("[SetNextRoundFromJson] The round does not have a name set in the settings. It will be assigned the name '%s'", round["name"])
	}

	roundName := round["name"].(string)

	if ForwardOnSetNextRound(&roundName, client) {
		plugin.CreateRound("", false, round)
		plugin.log.Debugf("[Natives] Native 'SetNextRoundFromJson' end call. Name: %s. State: true.", roundName)
		return true
	}

	plugin.log.Debugf("[Natives] Native 'SetNextRoundFromJson' end call. Name: %s. State: false.", roundName)
	return false
}

//plugify:export CancelNextRound
func CancelNextRound(client int32) bool {
	plugin.log.Debugf("[Natives] Native 'CancelNextRound' start call.")

	if plugin.NextRound == nil {
		plugin.log.Debugf("[CancelNextRound] Next round is not a set.")
		return false
	}

	if !ForwardOnCancelNextRound(client) {
		return false
	}

	plugin.NextRound = nil

	plugin.log.Debugf("[Natives] Native 'CancelNextRound' end call.")

	return true
}

//plugify:export StartRound
func StartRound(name string, client int32) bool {
	plugin.log.Debugf("[Natives] Native 'StartRound' start call.")

	warmupPeriod := s2sdk.GetEntSchema2(plugin.GameRules, "CCSGameRules", "m_bWarmupPeriod", 0) > 0

	if warmupPeriod {
		plugin.log.Debugf("[StartRound] Cannot start round '%s' during the warmup period.", name)
		return false
	}

	if !plugin.CheckConfig() {
		return false
	}

	roundSettings := plugin.GetRoundSettingsByName(name)
	if roundSettings == nil {
		plugin.log.Debugf("[Natives] Native 'StartRound' \"%s\" is invalid.", name)
		return false
	}

	if ForwardOnForceRoundStart(&name, client) {
		s2sdk.TerminateRound(plugin.RestartDelay, s2sdk.CSRoundEndReason_Draw)
		plugin.CreateRound("", false, roundSettings)

		plugin.log.Debugf("[StartRound] Round name: '%s'.", name)
		plugin.log.Debugf("[StartRound] Settings: %s", name)

		plugin.log.Debugf("[Natives] Native 'StartRound' end call. Name: %s. State: true.")
		return true
	}

	plugin.log.Debugf("[Natives] Native 'StartRound' end call. Name: %s. State: false.")

	return false
}

//plugify:export StopRound
func StopRound(client int32) bool {
	plugin.log.Debugf("[Natives] Native 'StopRound' start call.")

	if plugin.CurrentRound == nil {
		plugin.log.Debugf("[StopRound] Current round is not a set.")
		return false
	}

	if !ForwardOnCancelCurrentRound(client) {
		return false
	}

	s2sdk.TerminateRound(plugin.RestartDelay, s2sdk.CSRoundEndReason_Draw)

	plugin.log.Debugf("[Natives] Native 'StopRound' end call.")

	return true
}

//plugify:export IsCustomRound
func IsCustomRound() bool {
	result := plugin.CurrentRound != nil && len(plugin.CurrentRound) > 0
	plugin.log.Debugf("[Natives] Native 'IsCustomRound' called. Result: %v.", result)
	return result
}

//plugify:export IsNextRoundCustom
func IsNextRoundCustom() bool {
	result := plugin.NextRound != nil && len(plugin.NextRound) > 0
	plugin.log.Debugf("[Natives] Native 'IsNextRoundCustom' called. Result: %v.", result)
	return result
}

//plugify:export IsRoundEnd
func IsRoundEnd() bool {
	plugin.log.Debugf("[Natives] Native 'IsRoundEnd' called. Result: %v.", plugin.RoundEnded)
	return plugin.RoundEnded
}

//plugify:export IsRoundExists
func IsRoundExists(name string) bool {
	if !plugin.CheckConfig() {
		plugin.log.Debugf("[Natives] Native 'IsRoundExists' called. Result: %v.", false)
		return false
	}

	result := slices.IndexFunc(plugin.Config.Rounds, func(round map[string]any) bool {
		return round["name"] == name
	})

	return result != -1
}

//plugify:export GetNextRoundName
func GetNextRoundName() string {
	plugin.log.Debugf("[Natives] Native 'GetNextRoundName' start call.")

	if plugin.NextRound != nil {
		if name, ok := plugin.NextRound["name"].(string); ok {
			plugin.log.Debugf("[Natives] Native 'GetNextRoundName' end call. Name: %s. Len: %i.", name, len(name))
			return name
		}
	}

	return ""
}

//plugify:export GetCurrentRoundName
func GetCurrentRoundName() string {
	plugin.log.Debugf("[Natives] Native 'GetCurrentRoundName' start call.")

	if plugin.CurrentRound == nil {
		return ""
	}

	if name, ok := plugin.CurrentRound["name"].(string); ok {
		plugin.log.Debugf("[Natives] Native 'GetCurrentRoundName' end call. Name: %s. Len: %i", name, len(name))
		return name
	}

	return ""
}

//plugify:export GetJsonString
func GetJsonString() string {
	//plugin.Log.Debugf("[Natives] Native 'GetJsonString' called.")

	jsonData, err := json.Marshal(plugin.Config.Rounds)
	if err != nil {
		//plugin.Log.Debugf("[Natives] Native 'GetJsonString' error marshaling to JSON: %v", err)
		return ""
	}

	return string(jsonData)
}

//plugify:export GetCurrentRoundJsonString
func GetCurrentRoundJsonString() string {
	plugin.log.Debugf("[Natives] Native 'GetCurrentRoundJsonString' called.")

	jsonData, err := json.Marshal(plugin.CurrentRound)
	if err != nil {
		plugin.log.Debugf("[Natives] Native 'GetCurrentRoundJsonString' error marshaling to JSON: %v", err)
		return ""
	}

	return string(jsonData)
}

//plugify:export GetNextRoundKeyValueJsonString
func GetNextRoundKeyValueJsonString() string {
	plugin.log.Debugf("[Natives] Native 'GetNextRoundKeyValue' called.")

	jsonData, err := json.Marshal(plugin.NextRound)
	if err != nil {
		plugin.log.Debugf("[Natives] Native 'GetNextRoundKeyValue' error marshaling to JSON: %v", err)
		return ""
	}

	return string(jsonData)
}

//plugify:export ReloadConfig
func ReloadConfig() {
	plugin.log.Debugf("[Natives] Native 'ReloadConfig' called.")
	plugin.LoadConfig()
}
