package main

import (
	. "customrounds/s2sdk"
)

type EventPtr = uintptr

func (cr *CustomRoundsPlugin) HookEvents() {
	OnMapStart_Register(cr.OnMapStart)

	HookEvent("round_start", cr.EventsCallback, HookMode_Post)
	HookEvent("round_end", cr.EventsCallback, HookMode_Post)
	HookEvent("player_spawn", cr.EventsCallback, HookMode_Post)
}

func (cr *CustomRoundsPlugin) OnMapStart() {
	CRDebug("[CustomRounds] Map started!")

	cr.LoadConfig()

	cr.RoundEnded = false
	cr.CurrentRound = nil
	cr.NextRound = nil
}

func (cr *CustomRoundsPlugin) EventsCallback(name string, event EventPtr, dontBroadcast bool) ResultType {
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
		client := GetEventPlayerIndex(event, "userid")
		CRDebug("[Hooks] Event 'player_spawn' called. Client: %s[%d].", GetClientName(client), client)
		if cr.RespawnType > 0.0 {
			CreateTimer(float64(cr.RespawnType), TimerSpawn, TimerFlag_NoMapChange, []any{client})
		} else {
			QueueTaskForNextFrame(NextFrameSpawn, []any{client})
		}
	}

	return ResultType_Continue
}
