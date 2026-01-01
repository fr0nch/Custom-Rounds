package s2sdk

// Generated from s2sdk

// CommandCallback - Handles the execution of a command triggered by a caller. This function processes the command, interprets its context, and handles any provided arguments.
type CommandCallback func(caller int32, context CommandCallingContext, arguments []string) ResultType

// ChangeCallback - Handles changes to a console variable's value. This function is called whenever the value of a specific console variable is modified.
type ChangeCallback func(conVarHandle uint64, newValue string, oldValue string)

// CvarValueCallback - Handles changes to a console variable's value. This function is called whenever the value of a specific console variable is modified.
type CvarValueCallback func(playerSlot int32, cookie int32, code CvarValueStatus, name string, value string, data []any)

// TaskCallback - Defines a QueueTask Callback.
type TaskCallback func(userData []any)

// HookEntityOutputCallback - This function is a callback handler for entity output events. It is triggered when a specific output event is activated, and it handles the process by passing the activator, the caller, and a delay parameter for the output.
type HookEntityOutputCallback func(activatorHandle int32, callerHandle int32, flDelay float32) ResultType

// EventCallback - Handles events triggered by the game event system. This function processes the event data, determines the necessary action, and optionally prevents event broadcasting.
type EventCallback func(name string, event uintptr, dontBroadcast bool) ResultType

// YesNoVoteResult - Handles the final result of a Yes/No vote. This function is called when a vote concludes, and is responsible for determining whether the vote passed based on the number of 'yes' and 'no' votes. Also receives context about the clients who participated in the vote.
type YesNoVoteResult func(numVotes int32, yesVotes int32, noVotes int32, numClients int32, clientInfoSlot []int32, clientInfoItem []int32) bool

type YesNoVoteHandler func(action VoteAction, clientSlot int32, choice int32)

// TimerCallback - This function is invoked when a timer event occurs. It handles the timer-related logic and performs necessary actions based on the event.
type TimerCallback func(timer uint32, userData []any)

// OnClientConnectCallback - Called on client connection. If you return true, the client will be allowed in the server. If you return false (or return nothing), the client will be rejected. If the client is rejected by this forward or any other, OnClientDisconnect will not be called.<br>Note: Do not write to rejectmsg if you plan on returning true. If multiple plugins write to the string buffer, it is not defined which plugin's string will be shown to the client, but it is guaranteed one of them will.
type OnClientConnectCallback func(playerSlot int32, name string, networkId string) bool

// OnClientConnect_PostCallback - Called on client connection.
type OnClientConnect_PostCallback func(playerSlot int32)

// OnClientConnectedCallback - Called once a client successfully connects. This callback is paired with OnClientDisconnect.
type OnClientConnectedCallback func(playerSlot int32)

// OnClientPutInServerCallback - Called when a client is entering the game.
type OnClientPutInServerCallback func(playerSlot int32)

// OnClientDisconnectCallback - Called when a client is disconnecting from the server.
type OnClientDisconnectCallback func(playerSlot int32)

// OnClientDisconnect_PostCallback - Called when a client is disconnected from the server.
type OnClientDisconnect_PostCallback func(playerSlot int32, reason int32)

// OnClientActiveCallback - Called when a client is activated by the game.
type OnClientActiveCallback func(playerSlot int32, isActive bool)

// OnClientFullyConnectCallback - Called when a client is fully connected to the game.
type OnClientFullyConnectCallback func(playerSlot int32)

// OnClientSettingsChangedCallback - Called whenever the client's settings are changed.
type OnClientSettingsChangedCallback func(playerSlot int32)

// OnClientAuthenticatedCallback - Called when a client is fully connected to the game.
type OnClientAuthenticatedCallback func(playerSlot int32, steamID uint64)

// OnRoundTerminatedCallback - Called right before a round terminates.
type OnRoundTerminatedCallback func(delay float32, reason CSRoundEndReason)

// OnEntityCreatedCallback - Called when an entity is created.
type OnEntityCreatedCallback func(entityHandle int32)

// OnEntityDeletedCallback - Called when when an entity is destroyed.
type OnEntityDeletedCallback func(entityHandle int32)

// OnEntityParentChangedCallback - When an entity is reparented to another entity.
type OnEntityParentChangedCallback func(entityHandle int32, parentHandle int32)

// OnServerCheckTransmitCallback - When entities is transmitted to another entities.
type OnServerCheckTransmitCallback func(checkTransmitInfoList []uintptr)

// OnServerStartupCallback - Called on every server startup.
type OnServerStartupCallback func()

// OnServerActivateCallback - Called on every server activate.
type OnServerActivateCallback func()

// OnServerSpawnCallback - Called on every server spawn.
type OnServerSpawnCallback func()

// OnServerStartedCallback - Called on every server started only once.
type OnServerStartedCallback func()

// OnMapStartCallback - Called on every map start.
type OnMapStartCallback func()

// OnMapEndCallback - Called on every map end.
type OnMapEndCallback func()

// OnGameFrameCallback - Called before every server frame. Note that you should avoid doing expensive computations or declaring large local arrays.
type OnGameFrameCallback func(simulating bool, firstTick bool, lastTick bool)

// OnUpdateWhenNotInGameCallback - Called when the server is not in game.
type OnUpdateWhenNotInGameCallback func(deltaTime float32)

// OnPreWorldUpdateCallback - Called before every server frame, before entities are updated.
type OnPreWorldUpdateCallback func(simulating bool)

// UserMessageCallback - Callback function for user messages.
type UserMessageCallback func(userMessage uintptr) ResultType
