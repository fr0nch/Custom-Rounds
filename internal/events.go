package internal

import (
	s2sdk "github.com/fr0nch/go-plugify-s2sdk/v2"
)

func (cr *CustomRoundsPlugin) RegisterEvents() {
	s2sdk.OnMapStart_Register(cr.OnMapStart)

	s2sdk.HookEvent("round_start", cr.OnRoundStart, s2sdk.HookMode_Post)
	s2sdk.HookEvent("round_end", cr.OnRoundEnd, s2sdk.HookMode_Post)
	s2sdk.HookEvent("player_spawn", cr.OnPlayerSpawn, s2sdk.HookMode_Post)
}

func (cr *CustomRoundsPlugin) UnregisterEvents() {
	s2sdk.UnhookEvent("player_spawn", cr.OnPlayerSpawn, s2sdk.HookMode_Post)
	s2sdk.UnhookEvent("round_end", cr.OnRoundEnd, s2sdk.HookMode_Post)
	s2sdk.UnhookEvent("round_start", cr.OnRoundStart, s2sdk.HookMode_Post)

	s2sdk.OnMapStart_Unregister(cr.OnMapStart)
}

func (cr *CustomRoundsPlugin) OnMapStart() {
	cr.LoadConfig()
	cr.roundEnded = false
	cr.rounds.Reset()
}

func (cr *CustomRoundsPlugin) OnRoundStart(name string, event uintptr, dontBroadcast bool) s2sdk.ResultType {
	cr.roundEnded = false
	cr.rounds.BeginRound()
	ForwardOnRoundStart()

	return s2sdk.ResultType_Continue
}

func (cr *CustomRoundsPlugin) OnRoundEnd(name string, event uintptr, dontBroadcast bool) s2sdk.ResultType {
	cr.roundEnded = true
	ForwardOnRoundEnd()
	cr.rounds.EndRound()

	return s2sdk.ResultType_Continue
}

func (cr *CustomRoundsPlugin) OnPlayerSpawn(name string, event uintptr, dontBroadcast bool) s2sdk.ResultType {
	client := s2sdk.GetEventPlayerSlot(event, "userid")
	if delay := cr.config.Settings.General.RespawnType; delay > 0 {
		s2sdk.CreateTimer(float64(delay), cr.timerSpawn, s2sdk.TimerFlag_NoMapChange, []any{client})
	} else {
		s2sdk.QueueTaskForNextFrame(cr.nextFrameSpawn, []any{client})
	}

	return s2sdk.ResultType_Continue
}

func (cr *CustomRoundsPlugin) timerSpawn(timer uint32, userData []any) {
	cr.nextFrameSpawn(userData)
}

func (cr *CustomRoundsPlugin) nextFrameSpawn(userData []any) {
	client := userData[0].(int32)
	if s2sdk.IsClientInGame(client) && s2sdk.IsClientAlive(client) {
		ForwardOnPlayerSpawn(client)
	}
}
