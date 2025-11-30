#pragma once

#include "s2sdk.h"

static bool PanoramaSendYesNoVote(double duration, int32_t caller, String* voteTitle, String* detailStr, String* votePassTitle, String* detailPassStr, int32_t failReason, uint64_t filter, void* result, void* handler) {
	typedef bool (*PanoramaSendYesNoVoteFn)(double, int32_t, String*, String*, String*, String*, int32_t, uint64_t, void*, void*);
	static PanoramaSendYesNoVoteFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PanoramaSendYesNoVote", (void**)&__func);
	return __func(duration, caller, voteTitle, detailStr, votePassTitle, detailPassStr, failReason, filter, result, handler);
}

static bool PanoramaSendYesNoVoteToAll(double duration, int32_t caller, String* voteTitle, String* detailStr, String* votePassTitle, String* detailPassStr, int32_t failReason, void* result, void* handler) {
	typedef bool (*PanoramaSendYesNoVoteToAllFn)(double, int32_t, String*, String*, String*, String*, int32_t, void*, void*);
	static PanoramaSendYesNoVoteToAllFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PanoramaSendYesNoVoteToAll", (void**)&__func);
	return __func(duration, caller, voteTitle, detailStr, votePassTitle, detailPassStr, failReason, result, handler);
}

static void PanoramaRemovePlayerFromVote(int32_t playerSlot) {
	typedef void (*PanoramaRemovePlayerFromVoteFn)(int32_t);
	static PanoramaRemovePlayerFromVoteFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PanoramaRemovePlayerFromVote", (void**)&__func);
	__func(playerSlot);
}

static bool PanoramaIsPlayerInVotePool(int32_t playerSlot) {
	typedef bool (*PanoramaIsPlayerInVotePoolFn)(int32_t);
	static PanoramaIsPlayerInVotePoolFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PanoramaIsPlayerInVotePool", (void**)&__func);
	return __func(playerSlot);
}

static bool PanoramaRedrawVoteToClient(int32_t playerSlot) {
	typedef bool (*PanoramaRedrawVoteToClientFn)(int32_t);
	static PanoramaRedrawVoteToClientFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PanoramaRedrawVoteToClient", (void**)&__func);
	return __func(playerSlot);
}

static bool PanoramaIsVoteInProgress() {
	typedef bool (*PanoramaIsVoteInProgressFn)();
	static PanoramaIsVoteInProgressFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PanoramaIsVoteInProgress", (void**)&__func);
	return __func();
}

static void PanoramaEndVote(int32_t reason) {
	typedef void (*PanoramaEndVoteFn)(int32_t);
	static PanoramaEndVoteFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PanoramaEndVote", (void**)&__func);
	__func(reason);
}

