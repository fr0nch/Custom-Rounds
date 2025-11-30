#pragma once

#include "s2sdk.h"

static uintptr_t GetGameRulesProxy() {
	typedef uintptr_t (*GetGameRulesProxyFn)();
	static GetGameRulesProxyFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetGameRulesProxy", (void**)&__func);
	return __func();
}

static uintptr_t GetGameRules() {
	typedef uintptr_t (*GetGameRulesFn)();
	static GetGameRulesFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetGameRules", (void**)&__func);
	return __func();
}

static uintptr_t GetGameTeamManager(int32_t team) {
	typedef uintptr_t (*GetGameTeamManagerFn)(int32_t);
	static GetGameTeamManagerFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetGameTeamManager", (void**)&__func);
	return __func(team);
}

static int32_t GetGameTeamScore(int32_t team) {
	typedef int32_t (*GetGameTeamScoreFn)(int32_t);
	static GetGameTeamScoreFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetGameTeamScore", (void**)&__func);
	return __func(team);
}

static int32_t GetGamePlayerCount(int32_t team) {
	typedef int32_t (*GetGamePlayerCountFn)(int32_t);
	static GetGamePlayerCountFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetGamePlayerCount", (void**)&__func);
	return __func(team);
}

static int32_t GetGameTotalRoundsPlayed() {
	typedef int32_t (*GetGameTotalRoundsPlayedFn)();
	static GetGameTotalRoundsPlayedFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetGameTotalRoundsPlayed", (void**)&__func);
	return __func();
}

static void TerminateRound(float delay, int32_t reason) {
	typedef void (*TerminateRoundFn)(float, int32_t);
	static TerminateRoundFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.TerminateRound", (void**)&__func);
	__func(delay, reason);
}

