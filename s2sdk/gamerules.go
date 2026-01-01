package s2sdk

/*
#include "gamerules.h"
#cgo noescape GetGameRulesProxy
#cgo noescape GetGameRules
#cgo noescape GetGameTeamManager
#cgo noescape GetGameTeamScore
#cgo noescape GetGamePlayerCount
#cgo noescape GetGameTotalRoundsPlayed
#cgo noescape TerminateRound
*/
import "C"
import (
	"errors"
	"github.com/untrustedmodders/go-plugify"
	"reflect"
	"runtime"
	"unsafe"
)

var _ = errors.New("")
var _ = reflect.TypeOf(0)
var _ = runtime.GOOS
var _ = unsafe.Sizeof(0)
var _ = plugify.Plugin.Loaded

// Generated from s2sdk (group: gamerules)

// GetGameRulesProxy
//
//	@brief Retrieves the pointer to the current game rules proxy instance.
//
//
//	@return A pointer to the game rules entity instance.
func GetGameRulesProxy() uintptr {
	__retVal := uintptr(C.GetGameRulesProxy())
	return __retVal
}

// GetGameRules
//
//	@brief Retrieves the pointer to the current game rules instance.
//
//
//	@return A pointer to the game rules object.
func GetGameRules() uintptr {
	__retVal := uintptr(C.GetGameRules())
	return __retVal
}

// GetGameTeamManager
//
//	@brief Retrieves the team manager instance for a specified team.
//
//	@param team: The numeric identifier of the team.
//
//	@return A pointer to the corresponding CTeam instance, or nullptr if the team was not found.
func GetGameTeamManager(team int32) uintptr {
	var __retVal uintptr
	__team := C.int32_t(team)
	__retVal = uintptr(C.GetGameTeamManager(__team))
	return __retVal
}

// GetGameTeamScore
//
//	@brief Retrieves the current score of a specified team.
//
//	@param team: The numeric identifier of the team.
//
//	@return The current score of the team, or -1 if the team could not be found.
func GetGameTeamScore(team int32) int32 {
	var __retVal int32
	__team := C.int32_t(team)
	__retVal = int32(C.GetGameTeamScore(__team))
	return __retVal
}

// GetGamePlayerCount
//
//	@brief Retrieves the number of players on a specified team.
//
//	@param team: The numeric identifier of the team (e.g., CS_TEAM_T, CS_TEAM_CT, CS_TEAM_SPECTATOR).
//
//	@return The number of players on the team, or -1 if game rules are unavailable.
func GetGamePlayerCount(team int32) int32 {
	var __retVal int32
	__team := C.int32_t(team)
	__retVal = int32(C.GetGamePlayerCount(__team))
	return __retVal
}

// GetGameTotalRoundsPlayed
//
//	@brief Returns the total number of rounds played in the current match.
//
//
//	@return The total number of rounds played, or -1 if the game rules are unavailable.
func GetGameTotalRoundsPlayed() int32 {
	__retVal := int32(C.GetGameTotalRoundsPlayed())
	return __retVal
}

// TerminateRound
//
//	@brief Forces the round to end with a specified reason and delay.
//
//	@param delay: Time (in seconds) to delay before the next round starts.
//	@param reason: The reason for ending the round, defined by the CSRoundEndReason enum.
func TerminateRound(delay float32, reason CSRoundEndReason) {
	__delay := C.float(delay)
	__reason := C.int32_t(reason)
	C.TerminateRound(__delay, __reason)
}
