package main

import (
	. "customrounds/s2sdk"
	"encoding/json"
	"fmt"
	"math/rand"
	"slices"
)

//plugify:export SetNextRound
func SetNextRound(name string, client int32) bool {
	CRDebug("[Natives] Native 'SetNextRound' start call.")

	if !Plugin.CheckConfig() {
		return false
	}

	if Plugin.GetRoundSettingsByName(name) != nil {
		if ForwardOnSetNextRound(&name, client) {
			Plugin.CreateRound(name, false, nil)
			CRDebug("[Natives] Native 'SetNextRound' end call. Name: %s. State: true.", name)
			return true
		}
		CRDebug("[Natives] Native 'SetNextRound' end call. Name: %s. State: false.", name)
	} else {
		CRDebug("[SetNextRound] Round name '%s' is invalid.", name)
	}

	return false
}

//plugify:export SetNextRoundFromJson
func SetNextRoundFromJson(presetRound string, client int32) bool {
	CRDebug("[Natives] Native 'SetNextRoundFromJson' start call.")

	var round map[string]any

	if err := json.Unmarshal([]byte(presetRound), &round); err != nil {
		CRDebug("[SetNextRoundFromJson] Invalid JSON round setting. Error marshaling to JSON: %v", err)
		return false
	}

	CRDebug("[SetNextRoundFromJson] JSON setting:\n \n%s", round)

	if round["name"] == nil {
		round["name"] = fmt.Sprintf("CRound_FromJson_%d", rand.Intn(100))
		CRDebug("[SetNextRoundFromJson] The round does not have a name set in the settings. It will be assigned the name '%s'", round["name"])
	}

	roundName := round["name"].(string)

	if ForwardOnSetNextRound(&roundName, client) {
		Plugin.CreateRound("", false, round)
		CRDebug("[Natives] Native 'SetNextRoundFromJson' end call. Name: %s. State: true.", roundName)
		return true
	}

	CRDebug("[Natives] Native 'SetNextRoundFromJson' end call. Name: %s. State: false.", roundName)
	return false
}

//plugify:export CancelNextRound
func CancelNextRound(client int32) bool {
	CRDebug("[Natives] Native 'CancelNextRound' start call.")

	if Plugin.NextRound == nil {
		CRDebug("[CancelNextRound] Next round is not a set.")
		return false
	}

	if !ForwardOnCancelNextRound(client) {
		return false
	}

	Plugin.NextRound = nil

	CRDebug("[Natives] Native 'CancelNextRound' end call.")

	return true
}

//plugify:export StartRound
func StartRound(name string, client int32) bool {
	CRDebug("[Natives] Native 'StartRound' start call.")

	warmupPeriod := GetEntSchema2(Plugin.GameRules, "CCSGameRules", "m_bWarmupPeriod", 0) > 0

	if warmupPeriod {
		CRDebug("[StartRound] Cannot start round '%s' during the warmup period.", name)
		return false
	}

	if !Plugin.CheckConfig() {
		return false
	}

	roundSettings := Plugin.GetRoundSettingsByName(name)
	if roundSettings == nil {
		CRDebug("[Natives] Native 'StartRound' \"%s\" is invalid.", name)
		return false
	}

	if ForwardOnForceRoundStart(&name, client) {
		TerminateRound(Plugin.RestartDelay, CSRoundEndReason_Draw)
		Plugin.CreateRound("", false, roundSettings)

		CRDebug("[StartRound] Round name: '%s'.", name)
		CRDebug("[StartRound] Settings: %s", name)

		CRDebug("[Natives] Native 'StartRound' end call. Name: %s. State: true.")
		return true
	}

	CRDebug("[Natives] Native 'StartRound' end call. Name: %s. State: false.")

	return false
}

//plugify:export StopRound
func StopRound(client int32) bool {
	CRDebug("[Natives] Native 'StopRound' start call.")

	if Plugin.CurrentRound == nil {
		CRDebug("[StopRound] Current round is not a set.")
		return false
	}

	if !ForwardOnCancelCurrentRound(client) {
		return false
	}

	TerminateRound(Plugin.RestartDelay, CSRoundEndReason_Draw)

	CRDebug("[Natives] Native 'StopRound' end call.")

	return true
}

//plugify:export IsCustomRound
func IsCustomRound() bool {
	result := Plugin.CurrentRound != nil && len(Plugin.CurrentRound) > 0
	CRDebug("[Natives] Native 'IsCustomRound' called. Result: %v.", result)
	return result
}

//plugify:export IsNextRoundCustom
func IsNextRoundCustom() bool {
	result := Plugin.NextRound != nil && len(Plugin.NextRound) > 0
	CRDebug("[Natives] Native 'IsNextRoundCustom' called. Result: %v.", result)
	return result
}

//plugify:export IsRoundEnd
func IsRoundEnd() bool {
	CRDebug("[Natives] Native 'IsRoundEnd' called. Result: %v.", Plugin.RoundEnded)
	return Plugin.RoundEnded
}

//plugify:export IsRoundExists
func IsRoundExists(name string) bool {
	if !Plugin.CheckConfig() {
		CRDebug("[Natives] Native 'IsRoundExists' called. Result: %v.", false)
		return false
	}

	result := slices.IndexFunc(Plugin.Config.Rounds, func(round map[string]any) bool {
		return round["name"] == name
	})

	return result != -1
}

//plugify:export GetNextRoundName
func GetNextRoundName() string {
	CRDebug("[Natives] Native 'GetNextRoundName' start call.")

	if Plugin.NextRound != nil {
		if name, ok := Plugin.NextRound["name"].(string); ok {
			CRDebug("[Natives] Native 'GetNextRoundName' end call. Name: %s. Len: %i.", name, len(name))
			return name
		}
	}

	return ""
}

//plugify:export GetCurrentRoundName
func GetCurrentRoundName() string {
	CRDebug("[Natives] Native 'GetCurrentRoundName' start call.")

	if Plugin.CurrentRound == nil {
		return ""
	}

	if name, ok := Plugin.CurrentRound["name"].(string); ok {
		CRDebug("[Natives] Native 'GetCurrentRoundName' end call. Name: %s. Len: %i", name, len(name))
		return name
	}

	return ""
}

//plugify:export GetJsonString
func GetJsonString() string {
	CRDebug("[Natives] Native 'GetJsonString' called.")

	jsonData, err := json.Marshal(Plugin.Config.Rounds)
	if err != nil {
		CRDebug("[Natives] Native 'GetJsonString' error marshaling to JSON: %v", err)
		return ""
	}

	return string(jsonData)
}

//plugify:export GetCurrentRoundJsonString
func GetCurrentRoundJsonString() string {
	CRDebug("[Natives] Native 'GetCurrentRoundJsonString' called.")

	jsonData, err := json.Marshal(Plugin.CurrentRound)
	if err != nil {
		CRDebug("[Natives] Native 'GetCurrentRoundJsonString' error marshaling to JSON: %v", err)
		return ""
	}

	return string(jsonData)
}

//plugify:export GetNextRoundKeyValueJsonString
func GetNextRoundKeyValueJsonString() string {
	CRDebug("[Natives] Native 'GetNextRoundKeyValue' called.")

	jsonData, err := json.Marshal(Plugin.NextRound)
	if err != nil {
		CRDebug("[Natives] Native 'GetNextRoundKeyValue' error marshaling to JSON: %v", err)
		return ""
	}

	return string(jsonData)
}

//plugify:export ReloadConfig
func ReloadConfig() {
	CRDebug("[Natives] Native 'ReloadConfig' called.")
	Plugin.LoadConfig()
}
