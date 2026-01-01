package s2sdk

/*
#include "panorama.h"
#cgo noescape PanoramaSendYesNoVote
#cgo noescape PanoramaSendYesNoVoteToAll
#cgo noescape PanoramaRemovePlayerFromVote
#cgo noescape PanoramaIsPlayerInVotePool
#cgo noescape PanoramaRedrawVoteToClient
#cgo noescape PanoramaIsVoteInProgress
#cgo noescape PanoramaEndVote
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

// Generated from s2sdk (group: panorama)

// PanoramaSendYesNoVote
//
//	@brief Start a new Yes/No vote
//
//	@param duration: Maximum time to leave vote active for
//	@param caller: Player slot of the vote caller. Use VOTE_CALLER_SERVER for 'Server'.
//	@param voteTitle: Translation string to use as the vote message. (Only '#SFUI_vote' or '#Panorama_vote' strings)
//	@param detailStr: Extra string used in some vote translation strings.
//	@param votePassTitle: Translation string to use as the vote message. (Only '#SFUI_vote' or '#Panorama_vote' strings)
//	@param detailPassStr: Extra string used in some vote translation strings when the vote passes.
//	@param failReason: Reason for the vote to fail, used in some translation strings.
//	@param filter: Recipient filter with all the clients who are allowed to participate in the vote.
//	@param result: Called when a menu action is completed.
//	@param handler: Called when the vote has finished.
func PanoramaSendYesNoVote(duration float64, caller int32, voteTitle string, detailStr string, votePassTitle string, detailPassStr string, failReason VoteCreateFailed, filter uint64, result YesNoVoteResult, handler YesNoVoteHandler) bool {
	var __retVal bool
	__duration := C.double(duration)
	__caller := C.int32_t(caller)
	__voteTitle := plugify.ConstructString(voteTitle)
	__detailStr := plugify.ConstructString(detailStr)
	__votePassTitle := plugify.ConstructString(votePassTitle)
	__detailPassStr := plugify.ConstructString(detailPassStr)
	__failReason := C.int32_t(failReason)
	__filter := C.uint64_t(filter)
	__result := plugify.GetFunctionPointerForDelegate(result)
	__handler := plugify.GetFunctionPointerForDelegate(handler)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PanoramaSendYesNoVote(__duration, __caller, (*C.String)(unsafe.Pointer(&__voteTitle)), (*C.String)(unsafe.Pointer(&__detailStr)), (*C.String)(unsafe.Pointer(&__votePassTitle)), (*C.String)(unsafe.Pointer(&__detailPassStr)), __failReason, __filter, __result, __handler))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__voteTitle)
			plugify.DestroyString(&__detailStr)
			plugify.DestroyString(&__votePassTitle)
			plugify.DestroyString(&__detailPassStr)
		},
	}.Do()
	return __retVal
}

// PanoramaSendYesNoVoteToAll
//
//	@brief Start a new Yes/No vote with all players included
//
//	@param duration: Maximum time to leave vote active for
//	@param caller: Player slot of the vote caller. Use VOTE_CALLER_SERVER for 'Server'.
//	@param voteTitle: Translation string to use as the vote message. (Only '#SFUI_vote' or '#Panorama_vote' strings)
//	@param detailStr: Extra string used in some vote translation strings.
//	@param votePassTitle: Translation string to use as the vote message. (Only '#SFUI_vote' or '#Panorama_vote' strings)
//	@param detailPassStr: Extra string used in some vote translation strings when the vote passes.
//	@param failReason: Reason for the vote to fail, used in some translation strings.
//	@param result: Called when a menu action is completed.
//	@param handler: Called when the vote has finished.
func PanoramaSendYesNoVoteToAll(duration float64, caller int32, voteTitle string, detailStr string, votePassTitle string, detailPassStr string, failReason VoteCreateFailed, result YesNoVoteResult, handler YesNoVoteHandler) bool {
	var __retVal bool
	__duration := C.double(duration)
	__caller := C.int32_t(caller)
	__voteTitle := plugify.ConstructString(voteTitle)
	__detailStr := plugify.ConstructString(detailStr)
	__votePassTitle := plugify.ConstructString(votePassTitle)
	__detailPassStr := plugify.ConstructString(detailPassStr)
	__failReason := C.int32_t(failReason)
	__result := plugify.GetFunctionPointerForDelegate(result)
	__handler := plugify.GetFunctionPointerForDelegate(handler)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PanoramaSendYesNoVoteToAll(__duration, __caller, (*C.String)(unsafe.Pointer(&__voteTitle)), (*C.String)(unsafe.Pointer(&__detailStr)), (*C.String)(unsafe.Pointer(&__votePassTitle)), (*C.String)(unsafe.Pointer(&__detailPassStr)), __failReason, __result, __handler))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__voteTitle)
			plugify.DestroyString(&__detailStr)
			plugify.DestroyString(&__votePassTitle)
			plugify.DestroyString(&__detailPassStr)
		},
	}.Do()
	return __retVal
}

// PanoramaRemovePlayerFromVote
//
//	@brief Removes a player from the current vote.
//
//	@param playerSlot: The slot/index of the player to remove from the vote.
func PanoramaRemovePlayerFromVote(playerSlot int32) {
	__playerSlot := C.int32_t(playerSlot)
	C.PanoramaRemovePlayerFromVote(__playerSlot)
}

// PanoramaIsPlayerInVotePool
//
//	@brief Checks if a player is in the vote pool.
//
//	@param playerSlot: The slot/index of the player to check.
//
//	@return true if the player is in the vote pool, false otherwise.
func PanoramaIsPlayerInVotePool(playerSlot int32) bool {
	var __retVal bool
	__playerSlot := C.int32_t(playerSlot)
	__retVal = bool(C.PanoramaIsPlayerInVotePool(__playerSlot))
	return __retVal
}

// PanoramaRedrawVoteToClient
//
//	@brief Redraws the vote UI to a specific player client.
//
//	@param playerSlot: The slot/index of the player to update.
//
//	@return true if the vote UI was successfully redrawn, false otherwise.
func PanoramaRedrawVoteToClient(playerSlot int32) bool {
	var __retVal bool
	__playerSlot := C.int32_t(playerSlot)
	__retVal = bool(C.PanoramaRedrawVoteToClient(__playerSlot))
	return __retVal
}

// PanoramaIsVoteInProgress
//
//	@brief Checks if a vote is currently in progress.
//
//
//	@return true if a vote is active, false otherwise.
func PanoramaIsVoteInProgress() bool {
	__retVal := bool(C.PanoramaIsVoteInProgress())
	return __retVal
}

// PanoramaEndVote
//
//	@brief Ends the current vote with a specified reason.
//
//	@param reason: The reason for ending the vote.
func PanoramaEndVote(reason VoteEndReason) {
	__reason := C.int32_t(reason)
	C.PanoramaEndVote(__reason)
}
