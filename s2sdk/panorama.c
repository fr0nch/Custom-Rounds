#include "shared.h"

PLUGIFY_EXPORT bool (*__s2sdk_PanoramaSendYesNoVote)(double, int32_t, String*, String*, String*, String*, int32_t, uint64_t, void*, void*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PanoramaSendYesNoVoteToAll)(double, int32_t, String*, String*, String*, String*, int32_t, void*, void*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_PanoramaRemovePlayerFromVote)(int32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PanoramaIsPlayerInVotePool)(int32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PanoramaRedrawVoteToClient)(int32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_PanoramaIsVoteInProgress)() = NULL;


PLUGIFY_EXPORT void (*__s2sdk_PanoramaEndVote)(int32_t) = NULL;


