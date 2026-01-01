#pragma once

#include "shared.h"

extern bool (*__s2sdk_PanoramaSendYesNoVote)(double, int32_t, String*, String*, String*, String*, int32_t, uint64_t, void*, void*);

static bool PanoramaSendYesNoVote(double duration, int32_t caller, String* voteTitle, String* detailStr, String* votePassTitle, String* detailPassStr, int32_t failReason, uint64_t filter, void* result, void* handler) {
	return __s2sdk_PanoramaSendYesNoVote(duration, caller, voteTitle, detailStr, votePassTitle, detailPassStr, failReason, filter, result, handler);
}

extern bool (*__s2sdk_PanoramaSendYesNoVoteToAll)(double, int32_t, String*, String*, String*, String*, int32_t, void*, void*);

static bool PanoramaSendYesNoVoteToAll(double duration, int32_t caller, String* voteTitle, String* detailStr, String* votePassTitle, String* detailPassStr, int32_t failReason, void* result, void* handler) {
	return __s2sdk_PanoramaSendYesNoVoteToAll(duration, caller, voteTitle, detailStr, votePassTitle, detailPassStr, failReason, result, handler);
}

extern void (*__s2sdk_PanoramaRemovePlayerFromVote)(int32_t);

static void PanoramaRemovePlayerFromVote(int32_t playerSlot) {
	__s2sdk_PanoramaRemovePlayerFromVote(playerSlot);
}

extern bool (*__s2sdk_PanoramaIsPlayerInVotePool)(int32_t);

static bool PanoramaIsPlayerInVotePool(int32_t playerSlot) {
	return __s2sdk_PanoramaIsPlayerInVotePool(playerSlot);
}

extern bool (*__s2sdk_PanoramaRedrawVoteToClient)(int32_t);

static bool PanoramaRedrawVoteToClient(int32_t playerSlot) {
	return __s2sdk_PanoramaRedrawVoteToClient(playerSlot);
}

extern bool (*__s2sdk_PanoramaIsVoteInProgress)();

static bool PanoramaIsVoteInProgress() {
	return __s2sdk_PanoramaIsVoteInProgress();
}

extern void (*__s2sdk_PanoramaEndVote)(int32_t);

static void PanoramaEndVote(int32_t reason) {
	__s2sdk_PanoramaEndVote(reason);
}

