package main

import (
	"customrounds/s2sdk"
)

func (cr *CustomRoundsPlugin) HookEvents() {
	s2sdk.OnServerActivate_Register(cr.OnServerActivate)
	s2sdk.OnMapStart_Register(cr.OnMapStart)

	s2sdk.HookEvent("round_start", cr.EventsCallback, s2sdk.HookMode_Post)
	s2sdk.HookEvent("round_end", cr.EventsCallback, s2sdk.HookMode_Post)
	s2sdk.HookEvent("player_spawn", cr.EventsCallback, s2sdk.HookMode_Post)
}

func (cr *CustomRoundsPlugin) UnhookEvents() {
	s2sdk.UnhookEvent("player_spawn", cr.EventsCallback, s2sdk.HookMode_Post)
	s2sdk.UnhookEvent("round_end", cr.EventsCallback, s2sdk.HookMode_Post)
	s2sdk.UnhookEvent("round_start", cr.EventsCallback, s2sdk.HookMode_Post)

	s2sdk.OnMapStart_Unregister(cr.OnMapStart)
	s2sdk.OnServerActivate_Unregister(cr.OnServerActivate)
}

func (cr *CustomRoundsPlugin) OnServerActivate() {
	cr.GameRules = s2sdk.GetGameRules()
}

func (cr *CustomRoundsPlugin) OnMapStart() {
	CRDebug("[CustomRounds] Map started!")

	cr.LoadConfig()

	cr.RoundEnded = false
	cr.CurrentRound = nil
	cr.NextRound = nil
}

func (cr *CustomRoundsPlugin) EventsCallback(name string, event uintptr, dontBroadcast bool) s2sdk.ResultType {
	switch name {
	case "round_start":
		CRDebug("[Hooks] Event 'round_start' called.")
		cr.RoundEnded = false
		if cr.NextRound != nil && cr.CurrentRound == nil {
			cr.CurrentRound = cr.NextRound
			cr.NextRound = nil
		}
		ForwardOnRoundStart()
	case "round_end":
		CRDebug("[Hooks] Event 'round_end' called.")
		cr.RoundEnded = true
		ForwardOnRoundEnd()
	case "player_spawn":
		client := s2sdk.GetEventPlayerIndex(event, "userid")
		CRDebug("[Hooks] Event 'player_spawn' called. Client: %s[%d].", s2sdk.GetClientName(client), client)
		if cr.RespawnType > 0.0 {
			s2sdk.CreateTimer(float64(cr.RespawnType), TimerSpawn, s2sdk.TimerFlag_NoMapChange, []any{client})
		} else {
			s2sdk.QueueTaskForNextFrame(NextFrameSpawn, []any{client})
		}
	}

	return s2sdk.ResultType_Continue
}
