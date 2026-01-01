#include "shared.h"

PLUGIFY_EXPORT uintptr_t (*__s2sdk_GetGameRulesProxy)() = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_GetGameRules)() = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_GetGameTeamManager)(int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetGameTeamScore)(int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetGamePlayerCount)(int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetGameTotalRoundsPlayed)() = NULL;


PLUGIFY_EXPORT void (*__s2sdk_TerminateRound)(float, int32_t) = NULL;


