package s2sdk

// Generated from s2sdk

// MoveType - Enum representing various movement types for entities.
type MoveType = int32

const (
	// None - Never moves.
	MoveType_None MoveType = 0
	// Isometric - Previously isometric movement type.
	MoveType_Isometric MoveType = 1
	// Walk - Player only - moving on the ground.
	MoveType_Walk MoveType = 2
	// Fly - No gravity, but still collides with stuff.
	MoveType_Fly MoveType = 3
	// Flygravity - Flies through the air and is affected by gravity.
	MoveType_Flygravity MoveType = 4
	// Vphysics - Uses VPHYSICS for simulation.
	MoveType_Vphysics MoveType = 5
	// Push - No clip to world, push and crush.
	MoveType_Push MoveType = 6
	// Noclip - No gravity, no collisions, still has velocity/avelocity.
	MoveType_Noclip MoveType = 7
	// Ladder - Used by players only when going onto a ladder.
	MoveType_Ladder MoveType = 8
	// Observer - Observer movement, depends on player's observer mode.
	MoveType_Observer MoveType = 9
	// Custom - Allows the entity to describe its own physics.
	MoveType_Custom MoveType = 10
)

// RenderMode - Enum representing rendering modes for materials.
type RenderMode = uint8

const (
	// Normal - Standard rendering mode (src).
	RenderMode_Normal RenderMode = 0
	// TransColor - Composite: c*a + dest*(1-a).
	RenderMode_TransColor RenderMode = 1
	// TransTexture - Composite: src*a + dest*(1-a).
	RenderMode_TransTexture RenderMode = 2
	// Glow - Composite: src*a + dest -- No Z buffer checks -- Fixed size in screen space.
	RenderMode_Glow RenderMode = 3
	// TransAlpha - Composite: src*srca + dest*(1-srca).
	RenderMode_TransAlpha RenderMode = 4
	// TransAdd - Composite: src*a + dest.
	RenderMode_TransAdd RenderMode = 5
	// Environmental - Not drawn, used for environmental effects.
	RenderMode_Environmental RenderMode = 6
	// TransAddFrameBlend - Uses a fractional frame value to blend between animation frames.
	RenderMode_TransAddFrameBlend RenderMode = 7
	// TransAlphaAdd - Composite: src + dest*(1-a).
	RenderMode_TransAlphaAdd RenderMode = 8
	// WorldGlow - Same as Glow but not fixed size in screen space.
	RenderMode_WorldGlow RenderMode = 9
	// None - No rendering.
	RenderMode_None RenderMode = 10
	// DevVisualizer - Developer visualizer rendering mode.
	RenderMode_DevVisualizer RenderMode = 11
)

// CSTeam - Enum representing the possible teams in Counter-Strike.
type CSTeam = int32

const (
	// None - No team.
	CSTeam_None CSTeam = 0
	// Spectator - Spectator team.
	CSTeam_Spectator CSTeam = 1
	// T - Terrorist team.
	CSTeam_T CSTeam = 2
	// CT - Counter-Terrorist team.
	CSTeam_CT CSTeam = 3
)

// FieldType - Represents the possible types of data that can be passed as a value in input actions.
type FieldType = int32

const (
	// Auto - Automatically detect the type of the value.
	FieldType_Auto FieldType = 0
	// Float32 - A 32-bit floating-point number.
	FieldType_Float32 FieldType = 1
	// Float64 - A 64-bit floating-point number.
	FieldType_Float64 FieldType = 2
	// Int32 - A 32-bit signed integer.
	FieldType_Int32 FieldType = 3
	// UInt32 - A 32-bit unsigned integer.
	FieldType_UInt32 FieldType = 4
	// Int64 - A 64-bit signed integer.
	FieldType_Int64 FieldType = 5
	// UInt64 - A 64-bit unsigned integer.
	FieldType_UInt64 FieldType = 6
	// Boolean - A boolean value (true or false).
	FieldType_Boolean FieldType = 7
	// Character - A single character.
	FieldType_Character FieldType = 8
	// String - A managed string object.
	FieldType_String FieldType = 9
	// CString - A null-terminated C-style string.
	FieldType_CString FieldType = 10
	// HScript - A script handle, typically for scripting integration.
	FieldType_HScript FieldType = 11
	// EHandle - An entity handle, used to reference an entity within the system.
	FieldType_EHandle FieldType = 12
	// Resource - A resource handle, such as a file or asset reference.
	FieldType_Resource FieldType = 13
	// Vector3d - A 3D vector, typically representing position or direction.
	FieldType_Vector3d FieldType = 14
	// Vector2d - A 2D vector, for planar data or coordinates.
	FieldType_Vector2d FieldType = 15
	// Vector4d - A 4D vector, often used for advanced mathematical representations.
	FieldType_Vector4d FieldType = 16
	// Color32 - A 32-bit color value (RGBA).
	FieldType_Color32 FieldType = 17
	// QAngle - A quaternion-based angle representation.
	FieldType_QAngle FieldType = 18
	// Quaternion - A quaternion, used for rotation and orientation calculations.
	FieldType_Quaternion FieldType = 19
)

// DamageTypes - Enum representing various damage types.
type DamageTypes = int32

const (
	// DMG_GENERIC - Generic damage.
	DamageTypes_DMG_GENERIC DamageTypes = 0
	// DMG_CRUSH - Crush damage.
	DamageTypes_DMG_CRUSH DamageTypes = 1
	// DMG_BULLET - Bullet damage.
	DamageTypes_DMG_BULLET DamageTypes = 2
	// DMG_SLASH - Slash damage.
	DamageTypes_DMG_SLASH DamageTypes = 4
	// DMG_BURN - Burn damage.
	DamageTypes_DMG_BURN DamageTypes = 8
	// DMG_VEHICLE - Vehicle damage.
	DamageTypes_DMG_VEHICLE DamageTypes = 16
	// DMG_FALL - Fall damage.
	DamageTypes_DMG_FALL DamageTypes = 32
	// DMG_BLAST - Blast damage.
	DamageTypes_DMG_BLAST DamageTypes = 64
	// DMG_CLUB - Club damage.
	DamageTypes_DMG_CLUB DamageTypes = 128
	// DMG_SHOCK - Shock damage.
	DamageTypes_DMG_SHOCK DamageTypes = 256
	// DMG_SONIC - Sonic damage.
	DamageTypes_DMG_SONIC DamageTypes = 512
	// DMG_ENERGYBEAM - Energy beam damage.
	DamageTypes_DMG_ENERGYBEAM DamageTypes = 1024
	// DMG_DROWN - Drowning damage.
	DamageTypes_DMG_DROWN DamageTypes = 16384
	// DMG_POISON - Poison damage.
	DamageTypes_DMG_POISON DamageTypes = 32768
	// DMG_RADIATION - Radiation damage.
	DamageTypes_DMG_RADIATION DamageTypes = 65536
	// DMG_DROWNRECOVER - Recovering from drowning damage.
	DamageTypes_DMG_DROWNRECOVER DamageTypes = 131072
	// DMG_ACID - Acid damage.
	DamageTypes_DMG_ACID DamageTypes = 262144
	// DMG_PHYSGUN - Physgun damage.
	DamageTypes_DMG_PHYSGUN DamageTypes = 1048576
	// DMG_DISSOLVE - Dissolve damage.
	DamageTypes_DMG_DISSOLVE DamageTypes = 2097152
	// DMG_BLAST_SURFACE - Surface blast damage.
	DamageTypes_DMG_BLAST_SURFACE DamageTypes = 4194304
	// DMG_BUCKSHOT - Buckshot damage.
	DamageTypes_DMG_BUCKSHOT DamageTypes = 16777216
	// DMG_LASTGENERICFLAG - Last generic flag damage.
	DamageTypes_DMG_LASTGENERICFLAG DamageTypes = 16777216
	// DMG_HEADSHOT - Headshot damage.
	DamageTypes_DMG_HEADSHOT DamageTypes = 33554432
	// DMG_DANGERZONE - Danger zone damage.
	DamageTypes_DMG_DANGERZONE DamageTypes = 67108864
)

// ConVarFlag - Enum representing various flags for ConVars and ConCommands.
type ConVarFlag = int64

const (
	// None - The default, no flags at all.
	ConVarFlag_None ConVarFlag = 0
	// LinkedConcommand - Linked to a ConCommand.
	ConVarFlag_LinkedConcommand ConVarFlag = 1
	// DevelopmentOnly - Hidden in released products. Automatically removed if ALLOW_DEVELOPMENT_CVARS is defined.
	ConVarFlag_DevelopmentOnly ConVarFlag = 2
	// GameDll - Defined by the game DLL.
	ConVarFlag_GameDll ConVarFlag = 4
	// ClientDll - Defined by the client DLL.
	ConVarFlag_ClientDll ConVarFlag = 8
	// Hidden - Hidden. Doesn't appear in find or auto-complete. Like DEVELOPMENTONLY but cannot be compiled out.
	ConVarFlag_Hidden ConVarFlag = 16
	// Protected - Server cvar; data is not sent since it's sensitive (e.g., passwords).
	ConVarFlag_Protected ConVarFlag = 32
	// SpOnly - This cvar cannot be changed by clients connected to a multiplayer server.
	ConVarFlag_SpOnly ConVarFlag = 64
	// Archive - Saved to vars.rc.
	ConVarFlag_Archive ConVarFlag = 128
	// Notify - Notifies players when changed.
	ConVarFlag_Notify ConVarFlag = 256
	// UserInfo - Changes the client's info string.
	ConVarFlag_UserInfo ConVarFlag = 512
	// Missing0 - Hides the cvar from lookups.
	ConVarFlag_Missing0 ConVarFlag = 1024
	// Unlogged - If this is a server cvar, changes are not logged to the file or console.
	ConVarFlag_Unlogged ConVarFlag = 2048
	// Missing1 - Hides the cvar from lookups.
	ConVarFlag_Missing1 ConVarFlag = 4096
	// Replicated - Server-enforced setting on clients.
	ConVarFlag_Replicated ConVarFlag = 8192
	// Cheat - Only usable in singleplayer/debug or multiplayer with sv_cheats.
	ConVarFlag_Cheat ConVarFlag = 16384
	// PerUser - Causes auto-generated varnameN for splitscreen slots.
	ConVarFlag_PerUser ConVarFlag = 32768
	// Demo - Records this cvar when starting a demo file.
	ConVarFlag_Demo ConVarFlag = 65536
	// DontRecord - Excluded from demo files.
	ConVarFlag_DontRecord ConVarFlag = 131072
	// Missing2 - Reserved for future use.
	ConVarFlag_Missing2 ConVarFlag = 262144
	// Release - Cvars tagged with this are available to customers.
	ConVarFlag_Release ConVarFlag = 524288
	// MenuBarItem - Marks the cvar as a menu bar item.
	ConVarFlag_MenuBarItem ConVarFlag = 1048576
	// Missing3 - Reserved for future use.
	ConVarFlag_Missing3 ConVarFlag = 2097152
	// NotConnected - Cannot be changed by a client connected to a server.
	ConVarFlag_NotConnected ConVarFlag = 4194304
	// VconsoleFuzzyMatching - Enables fuzzy matching for vconsole.
	ConVarFlag_VconsoleFuzzyMatching ConVarFlag = 8388608
	// ServerCanExecute - The server can execute this command on clients.
	ConVarFlag_ServerCanExecute ConVarFlag = 16777216
	// ClientCanExecute - Allows clients to execute this command.
	ConVarFlag_ClientCanExecute ConVarFlag = 33554432
	// ServerCannotQuery - The server cannot query this cvar's value.
	ConVarFlag_ServerCannotQuery ConVarFlag = 67108864
	// VconsoleSetFocus - Sets focus in the vconsole.
	ConVarFlag_VconsoleSetFocus ConVarFlag = 134217728
	// ClientCmdCanExecute - IVEngineClient::ClientCmd can execute this command.
	ConVarFlag_ClientCmdCanExecute ConVarFlag = 268435456
	// ExecutePerTick - Executes the cvar every tick.
	ConVarFlag_ExecutePerTick ConVarFlag = 536870912
)

// ResultType - Enum representing the possible results of an operation.
type ResultType = int32

const (
	// Continue - The action continues to be processed without interruption.
	ResultType_Continue ResultType = 0
	// Changed - Indicates that the action has altered the state or behavior during execution.
	ResultType_Changed ResultType = 1
	// Handled - The action has been successfully handled, and no further action is required.
	ResultType_Handled ResultType = 2
	// Stop - The action processing is halted, and no further steps will be executed.
	ResultType_Stop ResultType = 3
)

// CommandCallingContext - The command execution context.
type CommandCallingContext = int32

const (
	// Console - The command execute from the client's console.
	CommandCallingContext_Console CommandCallingContext = 0
	// Chat - The command execute from the client's chat.
	CommandCallingContext_Chat CommandCallingContext = 1
)

// HookMode - Enum representing the type of callback.
type HookMode = uint8

const (
	// Pre - Callback will be executed before the original function
	HookMode_Pre HookMode = 0
	// Post - Callback will be executed after the original function
	HookMode_Post HookMode = 1
)

type ConVarType = int16

const (
	// Invalid - Invalid type
	ConVarType_Invalid ConVarType = -1
	// Bool - Boolean type
	ConVarType_Bool ConVarType = 0
	// Int16 - 16-bit signed integer
	ConVarType_Int16 ConVarType = 1
	// UInt16 - 16-bit unsigned integer
	ConVarType_UInt16 ConVarType = 2
	// Int32 - 32-bit signed integer
	ConVarType_Int32 ConVarType = 3
	// UInt32 - 32-bit unsigned integer
	ConVarType_UInt32 ConVarType = 4
	// Int64 - 64-bit signed integer
	ConVarType_Int64 ConVarType = 5
	// UInt64 - 64-bit unsigned integer
	ConVarType_UInt64 ConVarType = 6
	// Float32 - 32-bit floating point
	ConVarType_Float32 ConVarType = 7
	// Float64 - 64-bit floating point (double)
	ConVarType_Float64 ConVarType = 8
	// String - String type
	ConVarType_String ConVarType = 9
	// Color - Color type
	ConVarType_Color ConVarType = 10
	// Vector2 - 2D vector
	ConVarType_Vector2 ConVarType = 11
	// Vector3 - 3D vector
	ConVarType_Vector3 ConVarType = 12
	// Vector4 - 4D vector
	ConVarType_Vector4 ConVarType = 13
	// Qangle - Quaternion angle
	ConVarType_Qangle ConVarType = 14
	// Max - Maximum value (used for bounds checking)
	ConVarType_Max ConVarType = 15
)

// CvarValueStatus - Enum representing various flags for ConVars and ConCommands.
type CvarValueStatus = int32

const (
	// ValueIntact - It got the value fine.
	CvarValueStatus_ValueIntact CvarValueStatus = 0
	// CvarNotFound - It did not found the value.
	CvarValueStatus_CvarNotFound CvarValueStatus = 1
	// NotACvar - There's a ConCommand, but it's not a ConVar.
	CvarValueStatus_NotACvar CvarValueStatus = 2
	// CvarProtected - The cvar was marked with FCVAR_SERVER_CAN_NOT_QUERY, so the server is not allowed to have its value.
	CvarValueStatus_CvarProtected CvarValueStatus = 3
)

// EventHookError - Enum representing the type of callback.
type EventHookError = int32

const (
	// Okay - Indicates that the event hook was successfully created.
	EventHookError_Okay EventHookError = 0
	// InvalidEvent - Indicates that the event name provided is invalid or does not exist.
	EventHookError_InvalidEvent EventHookError = 1
	// NotActive - Indicates that the event system is not currently active or initialized.
	EventHookError_NotActive EventHookError = 2
	// InvalidCallback - Indicates that the callback function provided is invalid or not compatible with the event system.
	EventHookError_InvalidCallback EventHookError = 3
)

// LoggingVerbosity - Enum representing the possible verbosity of a logger.
type LoggingVerbosity = int32

const (
	// Off - Turns off all spew.
	LoggingVerbosity_Off LoggingVerbosity = 0
	// Essential - Turns on vital logs.
	LoggingVerbosity_Essential LoggingVerbosity = 1
	// Default - Turns on most messages.
	LoggingVerbosity_Default LoggingVerbosity = 2
	// Detailed - Allows for walls of text that are usually useful.
	LoggingVerbosity_Detailed LoggingVerbosity = 3
	// Max - Allows everything.
	LoggingVerbosity_Max LoggingVerbosity = 4
)

// LoggingSeverity - Enum representing the possible verbosity of a logger.
type LoggingSeverity = int32

const (
	// Off - Turns off all spew.
	LoggingSeverity_Off LoggingSeverity = 0
	// Detailed - A debug message.
	LoggingSeverity_Detailed LoggingSeverity = 1
	// Message - An informative logging message.
	LoggingSeverity_Message LoggingSeverity = 2
	// Warning - A warning, typically non-fatal.
	LoggingSeverity_Warning LoggingSeverity = 3
	// Assert - A message caused by an Assert**() operation.
	LoggingSeverity_Assert LoggingSeverity = 4
	// Error - An error, typically fatal/unrecoverable.
	LoggingSeverity_Error LoggingSeverity = 5
)

// LoggingChannelFlags - Logging channel behavior flags, set on channel creation.
type LoggingChannelFlags = int32

const (
	// ConsoleOnly - Indicates that the spew is only relevant to interactive consoles.
	LoggingChannelFlags_ConsoleOnly LoggingChannelFlags = 1
	// DoNotEcho - Indicates that spew should not be echoed to any output devices.
	LoggingChannelFlags_DoNotEcho LoggingChannelFlags = 2
)

// VoteCreateFailed - Enum representing the possible reasons a vote creation or processing has failed.
type VoteCreateFailed = int32

const (
	// Generic - Generic vote failure.
	VoteCreateFailed_Generic VoteCreateFailed = 0
	// TransitioningPlayers - Vote failed due to players transitioning.
	VoteCreateFailed_TransitioningPlayers VoteCreateFailed = 1
	// RateExceeded - Vote failed because vote rate limit was exceeded.
	VoteCreateFailed_RateExceeded VoteCreateFailed = 2
	// YesMustExceedNo - Vote failed because Yes votes must exceed No votes.
	VoteCreateFailed_YesMustExceedNo VoteCreateFailed = 3
	// QuorumFailure - Vote failed due to quorum not being met.
	VoteCreateFailed_QuorumFailure VoteCreateFailed = 4
	// IssueDisabled - Vote failed because the issue is disabled.
	VoteCreateFailed_IssueDisabled VoteCreateFailed = 5
	// MapNotFound - Vote failed because the map was not found.
	VoteCreateFailed_MapNotFound VoteCreateFailed = 6
	// MapNameRequired - Vote failed because map name is required.
	VoteCreateFailed_MapNameRequired VoteCreateFailed = 7
	// FailedRecently - Vote failed because a similar vote failed recently.
	VoteCreateFailed_FailedRecently VoteCreateFailed = 8
	// FailedRecentKick - Vote to kick failed recently.
	VoteCreateFailed_FailedRecentKick VoteCreateFailed = 9
	// FailedRecentChangeMap - Vote to change map failed recently.
	VoteCreateFailed_FailedRecentChangeMap VoteCreateFailed = 10
	// FailedRecentSwapTeams - Vote to swap teams failed recently.
	VoteCreateFailed_FailedRecentSwapTeams VoteCreateFailed = 11
	// FailedRecentScrambleTeams - Vote to scramble teams failed recently.
	VoteCreateFailed_FailedRecentScrambleTeams VoteCreateFailed = 12
	// FailedRecentRestart - Vote to restart failed recently.
	VoteCreateFailed_FailedRecentRestart VoteCreateFailed = 13
	// TeamCantCall - Team is not allowed to call vote.
	VoteCreateFailed_TeamCantCall VoteCreateFailed = 14
	// WaitingForPlayers - Vote failed because game is waiting for players.
	VoteCreateFailed_WaitingForPlayers VoteCreateFailed = 15
	// PlayerNotFound - Target player was not found.
	VoteCreateFailed_PlayerNotFound VoteCreateFailed = 16
	// CannotKickAdmin - Cannot kick an admin.
	VoteCreateFailed_CannotKickAdmin VoteCreateFailed = 17
	// ScrambleInProgress - Scramble is currently in progress.
	VoteCreateFailed_ScrambleInProgress VoteCreateFailed = 18
	// SwapInProgress - Swap is currently in progress.
	VoteCreateFailed_SwapInProgress VoteCreateFailed = 19
	// Spectator - Spectators are not allowed to vote.
	VoteCreateFailed_Spectator VoteCreateFailed = 20
	// Disabled - Voting is disabled.
	VoteCreateFailed_Disabled VoteCreateFailed = 21
	// NextLevelSet - Next level is already set.
	VoteCreateFailed_NextLevelSet VoteCreateFailed = 22
	// Rematch - Rematch vote failed.
	VoteCreateFailed_Rematch VoteCreateFailed = 23
	// TooEarlySurrender - Vote to surrender failed due to being too early.
	VoteCreateFailed_TooEarlySurrender VoteCreateFailed = 24
	// Continue - Vote to continue failed.
	VoteCreateFailed_Continue VoteCreateFailed = 25
	// MatchPaused - Vote failed because match is already paused.
	VoteCreateFailed_MatchPaused VoteCreateFailed = 26
	// MatchNotPaused - Vote failed because match is not paused.
	VoteCreateFailed_MatchNotPaused VoteCreateFailed = 27
	// NotInWarmup - Vote failed because game is not in warmup.
	VoteCreateFailed_NotInWarmup VoteCreateFailed = 28
	// Not10Players - Vote failed because there are not 10 players.
	VoteCreateFailed_Not10Players VoteCreateFailed = 29
	// TimeoutActive - Vote failed due to an active timeout.
	VoteCreateFailed_TimeoutActive VoteCreateFailed = 30
	// TimeoutInactive - Vote failed because timeout is inactive.
	VoteCreateFailed_TimeoutInactive VoteCreateFailed = 31
	// TimeoutExhausted - Vote failed because timeout has been exhausted.
	VoteCreateFailed_TimeoutExhausted VoteCreateFailed = 32
	// CantRoundEnd - Vote failed because the round can't end now.
	VoteCreateFailed_CantRoundEnd VoteCreateFailed = 33
	// Max - Sentinel value. Not a real failure reason.
	VoteCreateFailed_Max VoteCreateFailed = 34
)

// VoteAction - Enum representing the possible types of a vote actions.
type VoteAction = int32

const (
	// Start - Triggered when the vote begins. No additional parameters are used.
	VoteAction_Start VoteAction = 0
	// Vote - Triggered when a player casts a vote. 'clientSlot' holds the voter's slot and 'choice' is the selected option (e.g., VOTE_OPTION1 for yes, VOTE_OPTION2 for no).
	VoteAction_Vote VoteAction = 1
	// End - Triggered when the vote concludes. 'clientSlot' is typically -1. 'choice' contains the reason the vote ended (from YesNoVoteEndReason).
	VoteAction_End VoteAction = 2
)

// VoteEndReason - Enum representing the possible types of a vote.
type VoteEndReason = int32

const (
	// AllVotes - All possible votes were cast.
	VoteEndReason_AllVotes VoteEndReason = 0
	// TimeUp - Time ran out.
	VoteEndReason_TimeUp VoteEndReason = 1
	// Cancelled - The vote got cancelled.
	VoteEndReason_Cancelled VoteEndReason = 2
)

// TimerFlag - Enum representing the possible flags of a timer.
type TimerFlag = int32

const (
	// Default - Timer with no unique properties.
	TimerFlag_Default TimerFlag = 0
	// Repeat - Timer will repeat until stopped.
	TimerFlag_Repeat TimerFlag = 1
	// NoMapChange - Timer will not carry over mapchanges.
	TimerFlag_NoMapChange TimerFlag = 2
)

// CSRoundEndReason - Enum representing the possible reasons for a round ending in Counter-Strike.
type CSRoundEndReason = int32

const (
	// TargetBombed - Target successfully bombed.
	CSRoundEndReason_TargetBombed CSRoundEndReason = 1
	// VIPEscaped - The VIP has escaped (not present in CS:GO).
	CSRoundEndReason_VIPEscaped CSRoundEndReason = 2
	// VIPKilled - VIP has been assassinated (not present in CS:GO).
	CSRoundEndReason_VIPKilled CSRoundEndReason = 3
	// TerroristsEscaped - The terrorists have escaped.
	CSRoundEndReason_TerroristsEscaped CSRoundEndReason = 4
	// CTStoppedEscape - The CTs have prevented most of the terrorists from escaping.
	CSRoundEndReason_CTStoppedEscape CSRoundEndReason = 5
	// TerroristsStopped - Escaping terrorists have all been neutralized.
	CSRoundEndReason_TerroristsStopped CSRoundEndReason = 6
	// BombDefused - The bomb has been defused.
	CSRoundEndReason_BombDefused CSRoundEndReason = 7
	// CTWin - Counter-Terrorists win.
	CSRoundEndReason_CTWin CSRoundEndReason = 8
	// TerroristWin - Terrorists win.
	CSRoundEndReason_TerroristWin CSRoundEndReason = 9
	// Draw - Round draw.
	CSRoundEndReason_Draw CSRoundEndReason = 10
	// HostagesRescued - All hostages have been rescued.
	CSRoundEndReason_HostagesRescued CSRoundEndReason = 11
	// TargetSaved - Target has been saved.
	CSRoundEndReason_TargetSaved CSRoundEndReason = 12
	// HostagesNotRescued - Hostages have not been rescued.
	CSRoundEndReason_HostagesNotRescued CSRoundEndReason = 13
	// TerroristsNotEscaped - Terrorists have not escaped.
	CSRoundEndReason_TerroristsNotEscaped CSRoundEndReason = 14
	// VIPNotEscaped - VIP has not escaped (not present in CS:GO).
	CSRoundEndReason_VIPNotEscaped CSRoundEndReason = 15
	// GameStart - Game commencing.
	CSRoundEndReason_GameStart CSRoundEndReason = 16
	// TerroristsSurrender - Terrorists surrender.
	CSRoundEndReason_TerroristsSurrender CSRoundEndReason = 17
	// CTSurrender - CTs surrender.
	CSRoundEndReason_CTSurrender CSRoundEndReason = 18
	// TerroristsPlanted - Terrorists planted the bomb.
	CSRoundEndReason_TerroristsPlanted CSRoundEndReason = 19
	// CTsReachedHostage - CTs reached the hostage.
	CSRoundEndReason_CTsReachedHostage CSRoundEndReason = 20
	// SurvivalWin - Survival mode win.
	CSRoundEndReason_SurvivalWin CSRoundEndReason = 21
	// SurvivalDraw - Survival mode draw.
	CSRoundEndReason_SurvivalDraw CSRoundEndReason = 22
)

// CSWeaponType - Enum representing different weapon types.
type CSWeaponType = uint32

const (
	CSWeaponType_Knife         CSWeaponType = 0
	CSWeaponType_Pistol        CSWeaponType = 1
	CSWeaponType_SubmachineGun CSWeaponType = 2
	CSWeaponType_Rifle         CSWeaponType = 3
	CSWeaponType_Shotgun       CSWeaponType = 4
	CSWeaponType_SniperRifle   CSWeaponType = 5
	CSWeaponType_MachineGun    CSWeaponType = 6
	CSWeaponType_C4            CSWeaponType = 7
	CSWeaponType_Taser         CSWeaponType = 8
	CSWeaponType_Grenade       CSWeaponType = 9
	CSWeaponType_Equipment     CSWeaponType = 10
	CSWeaponType_StackableItem CSWeaponType = 11
	CSWeaponType_Unknown       CSWeaponType = 12
)

// CSWeaponCategory - Enum representing different weapon categories.
type CSWeaponCategory = uint32

const (
	CSWeaponCategory_Other     CSWeaponCategory = 0
	CSWeaponCategory_Melee     CSWeaponCategory = 1
	CSWeaponCategory_Secondary CSWeaponCategory = 2
	CSWeaponCategory_SMG       CSWeaponCategory = 3
	CSWeaponCategory_Rifle     CSWeaponCategory = 4
	CSWeaponCategory_Heavy     CSWeaponCategory = 5
	CSWeaponCategory_Count     CSWeaponCategory = 6
)

// GearSlot - Enum representing different gear slots.
type GearSlot = uint32

const (
	GearSlot_Invalid        GearSlot = 4294967295
	GearSlot_Rifle          GearSlot = 0
	GearSlot_Pistol         GearSlot = 1
	GearSlot_Knife          GearSlot = 2
	GearSlot_Grenades       GearSlot = 3
	GearSlot_C4             GearSlot = 4
	GearSlot_ReservedSlot6  GearSlot = 5
	GearSlot_ReservedSlot7  GearSlot = 6
	GearSlot_ReservedSlot8  GearSlot = 7
	GearSlot_ReservedSlot9  GearSlot = 8
	GearSlot_ReservedSlot10 GearSlot = 9
	GearSlot_ReservedSlot11 GearSlot = 10
	GearSlot_Boosts         GearSlot = 11
	GearSlot_Utility        GearSlot = 12
	GearSlot_Count          GearSlot = 13
	GearSlot_First          GearSlot = 0
	GearSlot_Last           GearSlot = 12
)

// WeaponDefIndex - Enum representing different weapon definition indices.
type WeaponDefIndex = uint16

const (
	WeaponDefIndex_Invalid             WeaponDefIndex = 0
	WeaponDefIndex_Deagle              WeaponDefIndex = 1
	WeaponDefIndex_Elite               WeaponDefIndex = 2
	WeaponDefIndex_FiveSeven           WeaponDefIndex = 3
	WeaponDefIndex_Glock               WeaponDefIndex = 4
	WeaponDefIndex_AK47                WeaponDefIndex = 7
	WeaponDefIndex_AUG                 WeaponDefIndex = 8
	WeaponDefIndex_AWP                 WeaponDefIndex = 9
	WeaponDefIndex_FAMAS               WeaponDefIndex = 10
	WeaponDefIndex_G3SG1               WeaponDefIndex = 11
	WeaponDefIndex_GalilAR             WeaponDefIndex = 13
	WeaponDefIndex_M249                WeaponDefIndex = 14
	WeaponDefIndex_M4A1                WeaponDefIndex = 16
	WeaponDefIndex_MAC10               WeaponDefIndex = 17
	WeaponDefIndex_P90                 WeaponDefIndex = 19
	WeaponDefIndex_MP5SD               WeaponDefIndex = 23
	WeaponDefIndex_UMP45               WeaponDefIndex = 24
	WeaponDefIndex_XM1014              WeaponDefIndex = 25
	WeaponDefIndex_Bizon               WeaponDefIndex = 26
	WeaponDefIndex_MAG7                WeaponDefIndex = 27
	WeaponDefIndex_Negev               WeaponDefIndex = 28
	WeaponDefIndex_SawedOff            WeaponDefIndex = 29
	WeaponDefIndex_Tec9                WeaponDefIndex = 30
	WeaponDefIndex_Taser               WeaponDefIndex = 31
	WeaponDefIndex_HKP2000             WeaponDefIndex = 32
	WeaponDefIndex_MP7                 WeaponDefIndex = 33
	WeaponDefIndex_MP9                 WeaponDefIndex = 34
	WeaponDefIndex_Nova                WeaponDefIndex = 35
	WeaponDefIndex_P250                WeaponDefIndex = 36
	WeaponDefIndex_SCAR20              WeaponDefIndex = 38
	WeaponDefIndex_SG556               WeaponDefIndex = 39
	WeaponDefIndex_SSG08               WeaponDefIndex = 40
	WeaponDefIndex_KnifeGG             WeaponDefIndex = 41
	WeaponDefIndex_Knife               WeaponDefIndex = 42
	WeaponDefIndex_Flashbang           WeaponDefIndex = 43
	WeaponDefIndex_HEGrenade           WeaponDefIndex = 44
	WeaponDefIndex_SmokeGrenade        WeaponDefIndex = 45
	WeaponDefIndex_Molotov             WeaponDefIndex = 46
	WeaponDefIndex_Decoy               WeaponDefIndex = 47
	WeaponDefIndex_IncGrenade          WeaponDefIndex = 48
	WeaponDefIndex_C4                  WeaponDefIndex = 49
	WeaponDefIndex_Kevlar              WeaponDefIndex = 50
	WeaponDefIndex_AssaultSuit         WeaponDefIndex = 51
	WeaponDefIndex_HeavyAssaultSuit    WeaponDefIndex = 52
	WeaponDefIndex_Defuser             WeaponDefIndex = 55
	WeaponDefIndex_KnifeT              WeaponDefIndex = 59
	WeaponDefIndex_M4A1Silencer        WeaponDefIndex = 60
	WeaponDefIndex_USPSilencer         WeaponDefIndex = 61
	WeaponDefIndex_CZ75A               WeaponDefIndex = 63
	WeaponDefIndex_Revolver            WeaponDefIndex = 64
	WeaponDefIndex_Bayonet             WeaponDefIndex = 500
	WeaponDefIndex_KnifeCSS            WeaponDefIndex = 503
	WeaponDefIndex_KnifeFlip           WeaponDefIndex = 505
	WeaponDefIndex_KnifeGut            WeaponDefIndex = 506
	WeaponDefIndex_KnifeKarambit       WeaponDefIndex = 507
	WeaponDefIndex_KnifeM9Bayonet      WeaponDefIndex = 508
	WeaponDefIndex_KnifeTactical       WeaponDefIndex = 509
	WeaponDefIndex_KnifeFalchion       WeaponDefIndex = 512
	WeaponDefIndex_KnifeBowie          WeaponDefIndex = 514
	WeaponDefIndex_KnifeButterfly      WeaponDefIndex = 515
	WeaponDefIndex_KnifePush           WeaponDefIndex = 516
	WeaponDefIndex_KnifeCord           WeaponDefIndex = 517
	WeaponDefIndex_KnifeCanis          WeaponDefIndex = 518
	WeaponDefIndex_KnifeUrsus          WeaponDefIndex = 519
	WeaponDefIndex_KnifeGypsyJackknife WeaponDefIndex = 520
	WeaponDefIndex_KnifeOutdoor        WeaponDefIndex = 521
	WeaponDefIndex_KnifeStiletto       WeaponDefIndex = 522
	WeaponDefIndex_KnifeWidowmaker     WeaponDefIndex = 523
	WeaponDefIndex_KnifeSkeleton       WeaponDefIndex = 525
	WeaponDefIndex_KnifeKukri          WeaponDefIndex = 526
)

// noCopy prevents copying via go vet
type noCopy struct{}

func (*noCopy) Lock()   {}
func (*noCopy) Unlock() {}

// ownership indicates whether the instance owns the underlying handle
type ownership bool

const (
	Owned    ownership = true
	Borrowed ownership = false
)
