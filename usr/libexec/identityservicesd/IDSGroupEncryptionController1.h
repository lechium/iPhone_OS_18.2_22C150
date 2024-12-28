//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDSessionController, IDSRealTimeEncryptionIdentity, IMDispatchTimer, NSMutableArray, NSMutableDictionary, NSString;
@protocol IDSGlobalLinkP2PKeyNegotiatorProvider, OS_dispatch_queue;

@interface IDSGroupEncryptionController1 : NSObject
{
    id _sessionController;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_realtimeEncryptionQueue;	// 16 = 0x10
    _Bool _isInternal;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 28 = 0x1c
    _Bool _shouldBroadcastAllValidMkMs;	// 32 = 0x20
    _Bool _shouldSendMKMOverQR;	// 33 = 0x21
    double _mkmAcknowledgementTimeout;	// 40 = 0x28
    double _preKeyRequestDelayDuration;	// 48 = 0x30
    unsigned int _prekeyExpireDuration;	// 56 = 0x38
    unsigned int _previousPrekeyExpireDuration;	// 60 = 0x3c
    unsigned int _mkmExpireDuration;	// 64 = 0x40
    unsigned int _mkmRollDuration;	// 68 = 0x44
    double _mkmRatchetMaxWaitWindow;	// 72 = 0x48
    id <IDSGlobalLinkP2PKeyNegotiatorProvider> _p2pNegotiatorProvider;	// 80 = 0x50
    NSMutableDictionary *_accountIDs;	// 88 = 0x58
    NSMutableDictionary *_fromURIs;	// 96 = 0x60
    IDSRealTimeEncryptionIdentity *_identityForDevice;	// 104 = 0x68
    IDSRealTimeEncryptionIdentity *_previousIdentityForDevice;	// 112 = 0x70
    NSMutableDictionary *_prekeyAckCountForGroup;	// 120 = 0x78
    NSMutableDictionary *_publicKeyForDevice;	// 128 = 0x80
    NSMutableDictionary *_groupIDToKeyMaterialCache;	// 136 = 0x88
    NSMutableDictionary *_groupIDToStableKeyMaterialCache;	// 144 = 0x90
    NSMutableDictionary *_membersForGroup;	// 152 = 0x98
    NSMutableDictionary *_membersLightweightStatusDict;	// 160 = 0xa0
    NSMutableDictionary *_participantsForGroup;	// 168 = 0xa8
    NSMutableDictionary *_groupIDToTypeToParticipantsPushTokens;	// 176 = 0xb0
    NSMutableDictionary *_participantsInfoForGroup;	// 184 = 0xb8
    NSMutableDictionary *_groupIDToLocalParticipantID;	// 192 = 0xc0
    NSMutableDictionary *_participantsWaitingForKeyMaterials;	// 200 = 0xc8
    NSMutableDictionary *_participantsWaitingForStableKeyMaterials;	// 208 = 0xd0
    NSMutableDictionary *_participantsWaitingForInitialKeyMaterials;	// 216 = 0xd8
    NSMutableDictionary *_endpointSubscriptionForGroup;	// 224 = 0xe0
    NSMutableDictionary *_lastKnownGroupIDToPushTokens;	// 232 = 0xe8
    NSMutableDictionary *_lastKnownAccountIDToPushTokens;	// 240 = 0xf0
    NSMutableDictionary *_pendingMasterKeyMaterials;	// 248 = 0xf8
    NSMutableDictionary *_pendingStableKeyMaterials;	// 256 = 0x100
    NSMutableDictionary *_groupIDToResetKeyMaterialCacheTimer;	// 264 = 0x108
    NSMutableDictionary *_encryptionSequenceNumbers;	// 272 = 0x110
    NSMutableDictionary *_groupIDToMKMExpirationTimer;	// 280 = 0x118
    NSMutableDictionary *_groupIDToMKMExpirationTimerBlock;	// 288 = 0x120
    NSMutableDictionary *_groupIDToMKMRollTimer;	// 296 = 0x128
    NSMutableDictionary *_groupIDToMKMRollTimerBlock;	// 304 = 0x130
    NSMutableDictionary *_groupIDToMKMRecoveryRetryCount;	// 312 = 0x138
    NSMutableDictionary *_groupIDToSKMRecoveryRetryCount;	// 320 = 0x140
    NSMutableDictionary *_groupIDToIsKeyMaterialRecoveryRunning;	// 328 = 0x148
    NSMutableDictionary *_groupIDToIsDeferredPreKeyRequestPending;	// 336 = 0x150
    NSMutableDictionary *_groupIDToInitialKeyMaterialDistributionTimeoutBlock;	// 344 = 0x158
    NSMutableDictionary *_groupIDToLastMemberAddDate;	// 352 = 0x160
    NSMutableArray *_preKeyChangeHandlers;	// 360 = 0x168
    IMDispatchTimer *_endpointUpdateTimer;	// 368 = 0x170
    _Bool _isTestRunning;	// 376 = 0x178
    _Bool _fakeMKMWrapping;	// 377 = 0x179
}

+ (_Bool)isKeyRatchetingEnabledForPlatform;	// IMP=0x00200000001db79d
+ (id)sharedInstance;	// IMP=0x00100000001c36c7
- (void).cxx_destruct;	// IMP=0x00200000001e7689
@property(readonly, nonatomic) IDSRealTimeEncryptionIdentity *previousIdentityForDevice; // @synthesize previousIdentityForDevice=_previousIdentityForDevice;
@property(readonly, nonatomic) IDSRealTimeEncryptionIdentity *identityForDevice; // @synthesize identityForDevice=_identityForDevice;
@property(readonly, nonatomic) NSMutableDictionary *groupIDToKeyMaterialCache; // @synthesize groupIDToKeyMaterialCache=_groupIDToKeyMaterialCache;
@property(readonly, nonatomic) NSMutableDictionary *groupIDToStableKeyMaterialCache; // @synthesize groupIDToStableKeyMaterialCache=_groupIDToStableKeyMaterialCache;
@property(nonatomic) _Bool fakeMKMWrapping; // @synthesize fakeMKMWrapping=_fakeMKMWrapping;
@property(nonatomic) _Bool isTestRunning; // @synthesize isTestRunning=_isTestRunning;
@property(retain, nonatomic) IDSDSessionController *sessionController; // @synthesize sessionController=_sessionController;
- (struct __SecKey *)previousFullIdentityKey;	// IMP=0x00100000001e7604
- (unsigned long long)participantIDForPushToken:(id)arg1;	// IMP=0x00100000001e73f8
- (struct __SecKey *)fullIdentityKey;	// IMP=0x00100000001e73e2
- (void)ensureSessionForID:(id)arg1 groupID:(id)arg2;	// IMP=0x00100000001e73dc
- (void)cleanUpSessionForID:(id)arg1 groupID:(id)arg2;	// IMP=0x00100000001e73d6
- (void)_sendingKeysToMembers:(id)arg1;	// IMP=0x00100000001e73d0
- (id)getLightweightStatusDictForGroup:(id)arg1;	// IMP=0x00100000001e73b7
- (id)getMembersForGroup:(id)arg1;	// IMP=0x00100000001e739e
- (id)getParticipantsInfoForGroup:(id)arg1;	// IMP=0x00100000001e7385
- (id)getParticipantsForGroup:(id)arg1 ofType:(long long)arg2;	// IMP=0x00100000001e72f8
- (id)getParticipantsForGroup:(id)arg1;	// IMP=0x00100000001e72df
- (id)getParticipantsWaitingForInitialKeyMaterials:(id)arg1;	// IMP=0x00100000001e72c6
- (id)getParticipantsWaitingForStableKeyMaterials:(id)arg1;	// IMP=0x00100000001e72ad
- (id)getParticipantsWaitingForKeyMaterials:(id)arg1;	// IMP=0x00100000001e7294
- (id)stablekeyMaterialCacheToGroup:(id)arg1;	// IMP=0x00100000001e727b
- (id)keyMaterialCacheToGroup:(id)arg1;	// IMP=0x00100000001e7262
- (void)account:(id)arg1 didUpdateRegisteredDevices:(id)arg2;	// IMP=0x00100000001e6b59
- (void)didUpdateParticipants:(id)arg1 ofType:(long long)arg2 forGroup:(id)arg3 sessionID:(id)arg4;	// IMP=0x00100000001e6a46
- (void);	// IMP=0x00100000001e5a95
- (void)_updateLightweightParticipants:(id)arg1 forGroup:(id)arg2 sessionID:(id)arg3;	// IMP=0x00100000001e4b5c
- (void)_dispatchDeferredPrekeyRequestForGroupID:(id)arg1 previousParticipantsPushTokens:(id)arg2 currentActiveParticipants:(id)arg3 sessionID:(id)arg4;	// IMP=0x00100000001e487c
- (id)_getAndUpdateParticipantsWaitingForKeyMaterialsForGroup:(id)arg1 waitingParticipants:(id)arg2 addedParticipantsDiff:(id)arg3 currentParticipantsPushTokens:(id)arg4 participantType:(long long)arg5;	// IMP=0x00100000001e3f8d
- (void)_updateAllActiveParticipantsInfoFromParticipants:(id)arg1 standardParticipantsPushTokens:(id)arg2 lightweightParticipantsPushTokens:(id)arg3 groupID:(id)arg4;	// IMP=0x00100000001e37ad
- (void)_dispatchDeferredPrekeyRequestForGroupID:(id)arg1 previousParticipantsPushTokens:(id)arg2 currentActiveParticipants:(id)arg3 sessionID:(id)arg4 waitingParticipantsTokens:(id)arg5;	// IMP=0x00100000001e323b
- (id)allParticipantsInfoForGroup:(id)arg1;	// IMP=0x00100000001e31c2
- (_Bool)_isValidPushToken:(id)arg1;	// IMP=0x00100000001e3177
- (void)_updateRelevantEncryptedDataBlobForSession:(id)arg1;	// IMP=0x00100000001e30a1
- (void)didUpdateMembers:(id)arg1 forGroup:(id)arg2 sessionID:(id)arg3 lightweightStatusDict:(id)arg4 hasChangedStandardMembers:(_Bool)arg5 newlyAddedMembers:(id)arg6;	// IMP=0x00100000001e2c08
- (void)setMembers:(id)arg1 forGroup:(id)arg2 sessionID:(id)arg3 lightweightStatusDict:(id)arg4;	// IMP=0x00100000001e2140
- (void)updateLightweightMemberTypes:(id)arg1 members:(id)arg2 triggeredLocally:(_Bool)arg3 forGroup:(id)arg4 sessionID:(id)arg5;	// IMP=0x00100000001e1a6a
- (_Bool)_isMemberLightweight:(id)arg1 lightweightStatusDict:(id)arg2;	// IMP=0x00100000001e1a55
- (_Bool)_isMemberStandard:(id)arg1 lightweightStatusDict:(id)arg2;	// IMP=0x00100000001e1a07
- (void)didReceiveEndpointsUpdate:(id)arg1 forGroup:(id)arg2 sessionID:(id)arg3;	// IMP=0x00100000001e124c
- (void)rollNewKeysAfterResettingPrekeysForGroups:(id)arg1 withReason:(long long)arg2;	// IMP=0x00100000001e0b11
- (void)updateServerDesiredKeyMaterialsForGroup:(id)arg1 sessionID:(id)arg2;	// IMP=0x00100000001df50d
- (id)_compactKeyMaterialMessage:(id)arg1 isOutgoing:(_Bool)arg2 groupID:(id)arg3;	// IMP=0x00100000001dee79
- (id)_generateMKMBlobForQRFromMessage:(id)arg1 account:(id)arg2 destination:(id)arg3 fromURI:(id)arg4;	// IMP=0x00100000001de772
- (void)processedQRMKMPayloadFromData:(id)arg1 forGroupID:(id)arg2 account:(id)arg3 remoteURI:(id)arg4 localURI:(id)arg5 tokens:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x00100000001ddccc
- (void)sendKeyMaterialsToWaitingParticipantsForGroup:(id)arg1 sessionID:(id)arg2;	// IMP=0x00100000001dd607
- (CDStruct_89ddc8e1)participantsReadyForKeyMaterialsForGroup:(id)arg1;	// IMP=0x00100000001dd1e9
- (void)removeExpiredPrekeys;	// IMP=0x00100000001dd0c4
- (void)sendPublicKeyToDestination:(id)arg1 group:(id)arg2 sessionID:(id)arg3;	// IMP=0x00100000001dcbba
- (void)sendPublicKeyToGroup:(id)arg1 sessionID:(id)arg2;	// IMP=0x00100000001dcaab
- (void)_sendMessage:(id)arg1 toDestination:(id)arg2 forGroup:(id)arg3 sessionID:(id)arg4 command:(long long)arg5 timeout:(double)arg6 shouldExpire:(_Bool)arg7 useQR:(_Bool)arg8 completion:(CDUnknownBlockType)arg9 completionBlock:(CDUnknownBlockType)arg10;	// IMP=0x00100000001db85f
- (double)mkmRatchetMaxWaitWindow;	// IMP=0x00100000001db7b5
- (id)deriveMKI:(id)arg1 withInfo:(id)arg2;	// IMP=0x00100000001db667
- (id)deriveMKS:(id)arg1 withInfo:(id)arg2;	// IMP=0x00100000001db5ee
- (id)deriveMKM:(id)arg1 withInfo:(id)arg2;	// IMP=0x00100000001db575
- (id)deriveKeyMaterial:(id)arg1 withInfo:(id)arg2;	// IMP=0x00100000001db2be
- (void)_alreadyLocked_sendRatchetedKeyMaterials:(id)arg1 toAVC:(id)arg2;	// IMP=0x00100000001db067
- (_Bool)_alreadyLocked_shouldRatchetForGroup:(id)arg1;	// IMP=0x00100000001dae72
- (void)ratchetAndSendKeyMaterialsToAVCForGroup:(id)arg1 sessionID:(id)arg2;	// IMP=0x00100000001da5ac
- (void)reportTimeDifferenceBetweenFirstPacketAndMKI:(long long)arg1 forMKI:(id)arg2 service:(id)arg3 activeParticipants:(long long)arg4;	// IMP=0x00100000001da461
- (void)unsubscribeEndpointsForGroup:(id)arg1;	// IMP=0x00100000001da2eb
- (void)resetKeysForGroup:(id)arg1 shouldRemoveCurrentParticipants:(_Bool)arg2;	// IMP=0x00100000001d9f4e
- (void)removeActiveParticipant:(id)arg1 forGroup:(id)arg2;	// IMP=0x00100000001d97a4
- (void)removeLocalActiveParticipantForGroup:(id)arg1;	// IMP=0x00100000001d9739
- (id)activeParticipantsForGroup:(id)arg1;	// IMP=0x00100000001d969f
- (void)resetDevicePrekey;	// IMP=0x00100000001d9602
- (_Bool)_shouldEnforceRemoteTimeout;	// IMP=0x00100000001d94c0
- (double)_multiwayFTMessageSendTimeout;	// IMP=0x00100000001d9374
- (void)sendKeyMaterialsToLocal:(id)arg1 sessionID:(id)arg2;	// IMP=0x00100000001d909f
- (void)_sendKeyMaterialsToGroup:(id)arg1 sessionID:(id)arg2 toSpecificMembers:(id)arg3 shouldIncludeCachedPeerKeyMaterial:(_Bool)arg4 requireMKM:(_Bool)arg5 requireSKM:(_Bool)arg6;	// IMP=0x00100000001d6c0a
- (id)destinationsExcludingSelfForDestinations:(id)arg1;	// IMP=0x00100000001d6964
- (void)resetKeyMaterialLocalSentStatus:(id)arg1;	// IMP=0x00100000001d68fe
- (void)resetSKMLocalSentStatus:(id)arg1;	// IMP=0x00100000001d6635
- (void)resetMKMLocalSentStatus:(id)arg1;	// IMP=0x00100000001d6363
- (id)_protectedCachedKeyMaterialsForDestination:(id)arg1 pushToken:(id)arg2 forGroup:(id)arg3 outURIs:(id *)arg4 includePeers:(_Bool)arg5;	// IMP=0x00100000001d613b
- (void)sendPendingKeyMaterialsToGroup:(id)arg1 sessionID:(id)arg2 forDevice:(id)arg3 fromURI:(id)arg4;	// IMP=0x00100000001d5e91
- (id)stableKeyMaterialForGroup:(id)arg1 sessionID:(id)arg2;	// IMP=0x00100000001d5d16
- (id)masterKeyMaterialForGroup:(id)arg1;	// IMP=0x00100000001d5b9b
- (void)notifyStableKeyMaterialsReceivedForGroup:(id)arg1 sessionID:(id)arg2;	// IMP=0x00100000001d5733
- (void)receivedGroupStableKeyMaterial:(id)arg1 fromPushToken:(id)arg2 sessionID:(id)arg3 groupID:(id)arg4;	// IMP=0x00100000001d53ec
- (void)noteReceivedGroupMasterKeyMaterials:(id)arg1 URIs:(id)arg2 sessionID:(id)arg3;	// IMP=0x00100000001d5123
- (void)requestPendingKeyMaterialsForGroup:(id)arg1 sessionID:(id)arg2;	// IMP=0x00100000001d4e30
- (id)receivedAndSetKeyMaterial:(id)arg1 stableKeyMaterial:(id)arg2 forDevice:(id)arg3 fromURI:(id)arg4 groupID:(id)arg5 sessionID:(id)arg6 fromSender:(_Bool)arg7 error:(id *)arg8 forMKM:(_Bool)arg9 forSKM:(_Bool)arg10;	// IMP=0x00100000001d38a3
- (_Bool)_storePendingKeyMaterial:(id)arg1 stableKeyMaterial:(id)arg2 hasValidMKM:(_Bool)arg3 hasValidSKM:(_Bool)arg4 forDevice:(id)arg5;	// IMP=0x00100000001d3482
- (void)processIncomingKeyMaterialsRecoveryRequest:(id)arg1 fromDevice:(id)arg2 fromURI:(id)arg3 groupID:(id)arg4 sessionID:(id)arg5 serverDate:(id)arg6 requireMKM:(_Bool)arg7 requireSKM:(_Bool)arg8;	// IMP=0x00100000001d2c27
- (void)sendKeyMaterialsRecoveryRequestToParticipants:(id)arg1 groupID:(id)arg2 sessionID:(id)arg3 requireMKM:(_Bool)arg4 requireSKM:(_Bool)arg5;	// IMP=0x00100000001d252b
- (void)sendKeyMaterialsRecoveryRequestToGroup:(id)arg1 requireMKM:(_Bool)arg2 requireSKM:(_Bool)arg3;	// IMP=0x00100000001d1e15
- (void)sendKeyMaterialsRecoveryRequestToDevice:(id)arg1 fromURI:(id)arg2 participantID:(id)arg3 groupID:(id)arg4 sessionID:(id)arg5 requireMKM:(_Bool)arg6 requireSKM:(_Bool)arg7;	// IMP=0x00100000001d1547
- (void)sendKeyMaterialsRecoveryRequestToDevice:(id)arg1 fromURI:(id)arg2 groupID:(id)arg3 sessionID:(id)arg4 requireMKM:(_Bool)arg5 requireSKM:(_Bool)arg6;	// IMP=0x00100000001d150d
- (void)createStableKeyMaterialAndSendToFrameworkForGroup:(id)arg1 sessionID:(id)arg2;	// IMP=0x00100000001d1322
- (id)createStableKeyMaterialForGroup:(id)arg1 sessionID:(id)arg2;	// IMP=0x00100000001d0fad
- (void)createKeyMaterialForGroup:(id)arg1 sessionID:(id)arg2;	// IMP=0x00100000001d0311
- (unsigned long long)localParticipantIDForGroupID:(id)arg1;	// IMP=0x00100000001d02db
- (long long)setLocalParticipantID:(unsigned long long)arg1 forGroupID:(id)arg2 sessionID:(id)arg3;	// IMP=0x00100000001cff4e
- (void)_mkmRollTimerFiredForGroup:(id)arg1 sessionID:(id)arg2;	// IMP=0x00100000001cfa5f
- (void)_stopMkmExpirationTimerForGroup:(id)arg1;	// IMP=0x00100000001cf8dd
- (void)_startMkmExpirationTimer:(int)arg1 forGroupID:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00100000001cf5c0
- (void)_handleMkmExpirationTimerForGroup:(id)arg1;	// IMP=0x00100000001cf480
- (void)_stopMkmRollTimerForGroup:(id)arg1;	// IMP=0x00100000001cf309
- (void)_startMkmRollTimer:(int)arg1 forGroupID:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00100000001cefff
- (void)_handleMkmRollTimerForGroup:(id)arg1;	// IMP=0x00100000001ceeab
- (void)cleanUpExpiredMasterKeyMaterial;	// IMP=0x00100000001ce06a
- (id)participantIDsForURIs:(id)arg1 group:(id)arg2;	// IMP=0x00100000001cdc77
- (id)participantInfoByURIForGroup:(id)arg1;	// IMP=0x00100000001cd929
- (void)sendPrekeyRequestToDestination:(id)arg1 group:(id)arg2 sessionID:(id)arg3;	// IMP=0x00100000001cd555
- (void)sendPrekeyRequestToGroup:(id)arg1 sessionID:(id)arg2;	// IMP=0x00100000001cd46c
- (id)publicKeys;	// IMP=0x00100000001cd1c2
- (long long)realTimeEncryptionPublicWrapModeForDevice:(id)arg1;	// IMP=0x00100000001cd057
- (id)realTimeEncryptionPublicKeyDataForDevice:(id)arg1;	// IMP=0x00100000001cceea
- (id)realTimeEncryptionPublicKeyForDevice:(id)arg1;	// IMP=0x00100000001ccd8c
- (void)_locked_updateParticipantsWaitingForKeyMaterialsIfNeededForGroupID:(id)arg1 remoteToken:(id)arg2 previousRemotePublicKey:(id)arg3 newRemotePublicKey:(id)arg4;	// IMP=0x00100000001ccac0
- (_Bool)setRealTimeEncryptionPublicKey:(id)arg1 forDevice:(id)arg2 fromURI:(id)arg3 groupID:(id)arg4 sessionID:(id)arg5 serverDate:(id)arg6 wrapMode:(long long)arg7;	// IMP=0x00100000001cc132
- (unsigned long long)encryptionSequenceNumberForGroupID:(id)arg1;	// IMP=0x00100000001cc02d
- (void)storeEncryptionSequenceNumber:(unsigned long long)arg1 groupID:(id)arg2;	// IMP=0x00100000001cbe5c
- (void)resetKeyMaterialCacheTimerIfNeeded:(id)arg1;	// IMP=0x00100000001cbbdb
- (void)resetMKMCacheAfterTimeoutForGroup:(id)arg1 interval:(unsigned long long)arg2;	// IMP=0x00100000001cb7de
- (void)_resetKeyCacheForGroup:(id)arg1;	// IMP=0x00100000001cb6c5
- (void)reportPrekeyAckStatus:(id)arg1;	// IMP=0x00100000001cb5c3
- (void)processIncomingPrekeyAckForGroup:(id)arg1;	// IMP=0x00100000001cb45f
- (id)realTimeEncryptionPublicKeyData;	// IMP=0x00100000001cb092
- (long long)realTimeEncryptionPublicKeyWrappingMode;	// IMP=0x00100000001cb06f
- (id)createRealTimeEncryptionFullIdentityForDevice:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ca65d
- (void)_startKeyRecoveryForMKM:(_Bool)arg1 forSKM:(_Bool)arg2 forDevice:(id)arg3 forGroupID:(id)arg4;	// IMP=0x00100000001ca4e2
- (void)_doCheckPendingKeyMaterialsAndSendKeyRecoveryRequestForMKM:(_Bool)arg1 forSKM:(_Bool)arg2 forDevice:(id)arg3 forGroupID:(id)arg4;	// IMP=0x00100000001c9860
- (void)_sendKeyRecoveryRequestForPendingKeys:(id)arg1 requireMKM:(_Bool)arg2 requireSKM:(_Bool)arg3 forDevice:(id)arg4;	// IMP=0x00100000001c8f58
- (void)_dispatchRenewPrekeyTimer;	// IMP=0x00100000001c8d6a
- (void)_sendRenewedPrekeysToGroups;	// IMP=0x00100000001c89dc
- (void)_noteKeyMaterialNotNeededForDestination:(id)arg1 groupID:(id)arg2;	// IMP=0x00100000001c8751
- (void)_noteKeyMaterialDidSendToDestination:(id)arg1 groupID:(id)arg2 withSuccess:(_Bool)arg3;	// IMP=0x00100000001c837d
- (void)_initializeParticipantsWaitingForInitialKeyMaterialsForGroup:(id)arg1;	// IMP=0x00100000001c7d92
- (id)_pruneLightweightParticipantsForGroupID:(id)arg1 forTokens:(id)arg2;	// IMP=0x00100000001c7cb6
- (id)_pruneInvalidAndLocalPushTokensFromTokens:(id)arg1;	// IMP=0x00100000001c7c10
- (void)_requestKeyMaterialForGroup:(id)arg1 sessionID:(id)arg2 toSpecificMembers:(id)arg3 shouldTrackDistribution:(_Bool)arg4 shouldIncludeCachedPeerKeyMaterial:(_Bool)arg5 requireMKM:(_Bool)arg6 requireSKM:(_Bool)arg7;	// IMP=0x00100000001c7bd3
- (void)_requestKeyMaterialForGroup:(id)arg1 sessionID:(id)arg2 toSpecificMembers:(id)arg3 shouldTrackDistribution:(_Bool)arg4 shouldIncludeCachedPeerKeyMaterial:(_Bool)arg5 requireMKM:(_Bool)arg6 requireSKM:(_Bool)arg7 isFirstSession:(_Bool)arg8;	// IMP=0x00100000001c7b93
- (id)_getSetofStandardParticipantsForGroup:(id)arg1;	// IMP=0x00100000001c7451
- (void)_requestKeyMaterialForGroup:(id)arg1 sessionID:(id)arg2 toSpecificMembers:(id)arg3 shouldTrackDistribution:(_Bool)arg4 shouldIncludeCachedPeerKeyMaterial:(_Bool)arg5 shouldGenerateMKM:(_Bool)arg6 requireMKM:(_Bool)arg7 requireSKM:(_Bool)arg8 isFirstSession:(_Bool)arg9;	// IMP=0x00100000001c5920
- (void)reliablyRequestKeyMaterialForGroup:(id)arg1 sessionID:(id)arg2;	// IMP=0x00100000001c58f6
- (void)requestKeyMaterialForGroup:(id)arg1 sessionID:(id)arg2 shouldGenerateMKM:(_Bool)arg3;	// IMP=0x00100000001c58c6
- (void)requestKeyMaterialForGroup:(id)arg1 sessionID:(id)arg2;	// IMP=0x00100000001c5896
- (void)requestKeyMaterialForGroup:(id)arg1 sessionID:(id)arg2 toSpecificMembers:(id)arg3 requireMKM:(_Bool)arg4 requireSKM:(_Bool)arg5;	// IMP=0x00100000001c586b
- (void)removeAccountForGroup:(id)arg1;	// IMP=0x00100000001c557f
- (void)setAccount:(id)arg1 fromURI:(id)arg2 forGroup:(id)arg3;	// IMP=0x00100000001c502e
- (id)_ensureGroupStableKeyMaterialCacheForGroup:(id)arg1;	// IMP=0x00100000001c4f97
- (id)_locked_ensureGroupMasterKeyMaterialCacheForGroup:(id)arg1;	// IMP=0x00100000001c4d8f
- (_Bool)_isUsingAccount:(id)arg1;	// IMP=0x00100000001c4c43
- (id)_localDevicePushToken;	// IMP=0x00100000001c4bb8
- (void)notifyPreKeyChange;	// IMP=0x00100000001c4a38
- (CDUnknownBlockType)addPreKeyChangeHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c48ff
- (struct __SecKey *)publicKeyForPushToken:(id)arg1;	// IMP=0x00100000001c48b4
- (struct __SecKey *)previousLocalPrivatePreKey;	// IMP=0x00100000001c489e
- (struct __SecKey *)previousLocalPublicPreKey;	// IMP=0x00100000001c4888
- (struct __SecKey *)localPrivatePreKey;	// IMP=0x00100000001c4872
- (struct __SecKey *)localPublicPreKey;	// IMP=0x00100000001c485c
- (id)remotePushTokensForGroup:(id)arg1;	// IMP=0x00100000001c443f
- (id)localPushToken;	// IMP=0x00100000001c442d
- (id)p2pNegotiatorProvider;	// IMP=0x00100000001c441f
- (id)init;	// IMP=0x00100000001c371c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
