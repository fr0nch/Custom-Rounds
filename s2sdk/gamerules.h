#pragma once

#include "shared.h"

extern uintptr_t (*__s2sdk_GetGameRulesProxy)();

static uintptr_t GetGameRulesProxy() {
	return __s2sdk_GetGameRulesProxy();
}

extern uintptr_t (*__s2sdk_GetGameRules)();

static uintptr_t GetGameRules() {
	return __s2sdk_GetGameRules();
}

extern uintptr_t (*__s2sdk_GetGameTeamManager)(int32_t);

static uintptr_t GetGameTeamManager(int32_t team) {
	return __s2sdk_GetGameTeamManager(team);
}

extern int32_t (*__s2sdk_GetGameTeamScore)(int32_t);

static int32_t GetGameTeamScore(int32_t team) {
	return __s2sdk_GetGameTeamScore(team);
}

extern int32_t (*__s2sdk_GetGamePlayerCount)(int32_t);

static int32_t GetGamePlayerCount(int32_t team) {
	return __s2sdk_GetGamePlayerCount(team);
}

extern int32_t (*__s2sdk_GetGameTotalRoundsPlayed)();

static int32_t GetGameTotalRoundsPlayed() {
	return __s2sdk_GetGameTotalRoundsPlayed();
}

extern void (*__s2sdk_TerminateRound)(float, int32_t);

static void TerminateRound(float delay, int32_t reason) {
	__s2sdk_TerminateRound(delay, reason);
}

