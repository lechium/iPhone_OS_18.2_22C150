//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKDatabaseConnection, GKEntitlements, GKEventTuple, GKGameInternal, GKInviteSession, GKMatchResponse, GKPeerDiscovery, GKThreadsafeDictionary, GKViceroyNearbyDiscovery, LSApplicationRecord, NSDate, NSDictionary, NSLocale, NSMapTable, NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSXPCConnection, _GKStateMachine;
@protocol GKUIViewService, OS_dispatch_queue, OS_dispatch_source;

@interface GKClientProxy : NSObject
{
    _Bool _installed;	// 8 = 0x8
    _Bool _supportsMultipleActivePlayers;	// 9 = 0x9
    _Bool _isOcelot;	// 10 = 0xa
    _Bool _isGameCenterEnabledClient;	// 11 = 0xb
    _Bool _isAppUnlistedAndDisallowed;	// 12 = 0xc
    unsigned char _achievementsRateLimitedCurrentState;	// 13 = 0xd
    unsigned char _scoresRateLimitedCurrentState;	// 14 = 0xe
    _Bool _initialized;	// 15 = 0xf
    _Bool _supportsNearbyAdvertising;	// 16 = 0x10
    int _pid;	// 20 = 0x14
    unsigned int _applicationState;	// 24 = 0x18
    unsigned int _previousApplicationState;	// 28 = 0x1c
    NSObject<OS_dispatch_queue> *_replyQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_authQueue;	// 40 = 0x28
    NSXPCConnection *_connection;	// 48 = 0x30
    GKEntitlements *_entitlements;	// 56 = 0x38
    NSNumber *_adamID;	// 64 = 0x40
    LSApplicationRecord *_applicationRecord;	// 72 = 0x48
    NSNumber *_sandboxExtensionToken;	// 80 = 0x50
    NSNumber *_externalVersion;	// 88 = 0x58
    NSString *_bundleIdentifier;	// 96 = 0x60
    NSString *_originalBundleIdentifier;	// 104 = 0x68
    NSString *_bundleVersion;	// 112 = 0x70
    NSString *_bundleShortVersion;	// 120 = 0x78
    long long _environment;	// 128 = 0x80
    NSString *_persistentAnchorIdentifier;	// 136 = 0x88
    NSDate *_achievementsRateLimitingStartDate;	// 144 = 0x90
    long long _achievementsRateLimitingCurrentNumberOfRequests;	// 152 = 0x98
    NSDate *_scoresRateLimitingStartDate;	// 160 = 0xa0
    long long _scoresRateLimitingCurrentNumberOfRequests;	// 168 = 0xa8
    NSMutableDictionary *_alreadyCoalescingNetworkRequests;	// 176 = 0xb0
    NSString *_language;	// 184 = 0xb8
    GKClientProxy<GKUIViewService> *_viewService;	// 192 = 0xc0
    GKGameInternal *_currentGame;	// 200 = 0xc8
    GKViceroyNearbyDiscovery *_nearbyDiscovery;	// 208 = 0xd0
    GKPeerDiscovery *_peerDiscovery;	// 216 = 0xd8
    GKEventTuple *_launchEvent;	// 224 = 0xe0
    GKInviteSession *_inviteSession;	// 232 = 0xe8
    GKMatchResponse *_currentMatchResponse;	// 240 = 0xf0
    NSMapTable *_extensionProxies;	// 248 = 0xf8
    _GKStateMachine *_appInitStateMachine;	// 256 = 0x100
    GKThreadsafeDictionary *_appSessions;	// 264 = 0x108
    NSObject<OS_dispatch_queue> *_delayedRequestsQueue;	// 272 = 0x110
    GKDatabaseConnection *_delayedRequestsDBConnection;	// 280 = 0x118
    NSObject<OS_dispatch_queue> *_cacheQueue;	// 288 = 0x120
    NSMutableArray *_pendingDataTypesForRefresh;	// 296 = 0x128
    NSDictionary *_preferencesFromBag;	// 304 = 0x130
    NSObject<OS_dispatch_source> *_checkMatchStatusTimer;	// 312 = 0x138
    NSObject<OS_dispatch_queue> *_checkMatchStatusQueue;	// 320 = 0x140
    NSString *_parentBundleIdentifier;	// 328 = 0x148
}

+ (id)syncQueue;	// IMP=0x0020000000122c39
+ (_Bool)isFirstParty:(_Bool)arg1 sourceApp:(id)arg2 allowList:(id)arg3;	// IMP=0x001000000012187c
+ (void)removeClient:(id)arg1;	// IMP=0x0010000000127a7f
+ (void)enumerateClientsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001279b1
+ (id)clientsToBeEnumerated;	// IMP=0x00100000001277ac
+ (id)clientForMatchmakingRID:(id)arg1;	// IMP=0x00100000001275d3
+ (id)clientForInviteSessionToken:(id)arg1;	// IMP=0x001000000012725b
+ (_Bool)isGameCenterDashboardForegroundRunning;	// IMP=0x0010000000126e5d
+ (void)checkGameCenterEnabledForegroundClients;	// IMP=0x0010000000126e57
+ (id)nonGameCenterForegroundClient;	// IMP=0x0010000000126cfa
+ (id)foregroundClient;	// IMP=0x0010000000126bc2
+ (id)clientForBundleID:(id)arg1 pid:(int)arg2 createIfNecessary:(_Bool)arg3;	// IMP=0x0010000000126ba8
+ (id)clientForBundleID:(id)arg1 bundle:(id)arg2 pid:(int)arg3 createIfNecessary:(_Bool)arg4;	// IMP=0x0010000000125caf
+ (_Bool)isExtensionBundleID:(id)arg1;	// IMP=0x0010000000125b5a
+ (id)clientForProcessIdentifier:(int)arg1;	// IMP=0x0010000000125abc
+ (id)clientForBundleID:(id)arg1;	// IMP=0x0010000000125a9f
+ (id)gameCenterClient;	// IMP=0x0010000000125a78
+ (id)_clientLookup;	// IMP=0x0010000000125a11
+ (id)factoryQueue;	// IMP=0x00100000001259ba
+ (void)saveAppInitState:(id)arg1 forBundleID:(id)arg2 pid:(int)arg3;	// IMP=0x001000000012c246
+ (id)lastKnownAppInitStateForClientWithBundleID:(id)arg1 pid:(int)arg2;	// IMP=0x001000000012beb6
+ (void)authenticationDidChange;	// IMP=0x001000000012b987
+ (void)performDelayedRequestsForEnvironment:(long long)arg1;	// IMP=0x0010000000131c6f
+ (id)storeAndForwardDirectoryPathForEnvironment:(long long)arg1;	// IMP=0x0010000000130c46
+ (void)closeDatabaseFromManagedObjectContextForMOC:(id)arg1;	// IMP=0x0010000000135b05
+ (void)closeDatabaseFromManagedObjectContextForPlayerID:(id)arg1;	// IMP=0x0010000000135ab9
+ (id)createPersistentStoreCoordinator;	// IMP=0x0010000000135a01
+ (id)gameCenterCacheDatabaseURLForPlayerID:(id)arg1 language:(id)arg2 name:(id)arg3 fileManager:(id)arg4;	// IMP=0x00100000001358e3
+ (id)newManagedObjectContextForPlayerID:(id)arg1 bundleID:(id)arg2 language:(id)arg3 environment:(long long)arg4;	// IMP=0x001000000013555d
+ (id)_newManagedObjectContextWithCacheURL:(id)arg1 environment:(long long)arg2 psc:(id)arg3 storeOptions:(id)arg4;	// IMP=0x0010000000134d4c
+ (void)migrateInsecureDatabaseToSecureDatabaseURL:(id)arg1 usingPersistantStoreCoordinator:(id)arg2 fileManager:(id)arg3 options:(id)arg4 playerID:(id)arg5 bundleID:(id)arg6 language:(id)arg7 name:(id)arg8;	// IMP=0x0010000000134c17
+ (id)cacheFileQueue;	// IMP=0x0010000000134bc0
+ (id)managedObjectModel;	// IMP=0x0010000000134a67
+ (void)removeAllCaches;	// IMP=0x00100000001349fb
+ (void)removeAllCachesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001344c2
+ (void)removeCacheForPlayerID:(id)arg1;	// IMP=0x0010000000133f4a
+ (id)insecureDatabaseFileURLForBundleID:(id)arg1 language:(id)arg2 playerID:(id)arg3 name:(id)arg4;	// IMP=0x0010000000133eb1
+ (id)insecureDatabaseDirectoryURLForBundleID:(id)arg1 language:(id)arg2 playerID:(id)arg3;	// IMP=0x0010000000133da0
+ (id)cacheDirectoryForBundleID:(id)arg1;	// IMP=0x0010000000133d07
+ (id)_existingManagedObjectContextForPlayerID:(id)arg1;	// IMP=0x001000000013389a
+ (id)contextKeyForPlayerID:(id)arg1;	// IMP=0x0010000000133882
+ (id)getParentBundleIDPrefixWithChildBundleID:(id)arg1 parentBundleID:(id)arg2;	// IMP=0x001000000019a3e5
- (void).cxx_destruct;	// IMP=0x00200000001257ef
@property(readonly, nonatomic) _Bool supportsNearbyAdvertising; // @synthesize supportsNearbyAdvertising=_supportsNearbyAdvertising;
@property(retain, nonatomic) NSString *parentBundleIdentifier; // @synthesize parentBundleIdentifier=_parentBundleIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *checkMatchStatusQueue; // @synthesize checkMatchStatusQueue=_checkMatchStatusQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *checkMatchStatusTimer; // @synthesize checkMatchStatusTimer=_checkMatchStatusTimer;
@property(copy, nonatomic) NSDictionary *preferencesFromBag; // @synthesize preferencesFromBag=_preferencesFromBag;
@property(retain, nonatomic) NSMutableArray *pendingDataTypesForRefresh; // @synthesize pendingDataTypesForRefresh=_pendingDataTypesForRefresh;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // @synthesize cacheQueue=_cacheQueue;
@property(retain, nonatomic) GKDatabaseConnection *delayedRequestsDBConnection; // @synthesize delayedRequestsDBConnection=_delayedRequestsDBConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delayedRequestsQueue; // @synthesize delayedRequestsQueue=_delayedRequestsQueue;
@property(retain, nonatomic) GKThreadsafeDictionary *appSessions; // @synthesize appSessions=_appSessions;
@property(retain) _GKStateMachine *appInitStateMachine; // @synthesize appInitStateMachine=_appInitStateMachine;
@property _Bool initialized; // @synthesize initialized=_initialized;
@property(retain, nonatomic) NSMapTable *extensionProxies; // @synthesize extensionProxies=_extensionProxies;
@property(retain) GKMatchResponse *currentMatchResponse; // @synthesize currentMatchResponse=_currentMatchResponse;
@property(retain) GKInviteSession *inviteSession; // @synthesize inviteSession=_inviteSession;
@property(retain, nonatomic) GKEventTuple *launchEvent; // @synthesize launchEvent=_launchEvent;
@property unsigned int previousApplicationState; // @synthesize previousApplicationState=_previousApplicationState;
@property unsigned int applicationState; // @synthesize applicationState=_applicationState;
@property(retain, nonatomic) GKPeerDiscovery *peerDiscovery; // @synthesize peerDiscovery=_peerDiscovery;
@property(retain, nonatomic) GKViceroyNearbyDiscovery *nearbyDiscovery; // @synthesize nearbyDiscovery=_nearbyDiscovery;
@property(retain, nonatomic) GKGameInternal *currentGame; // @synthesize currentGame=_currentGame;
@property(nonatomic) __weak GKClientProxy<GKUIViewService> *viewService; // @synthesize viewService=_viewService;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSMutableDictionary *alreadyCoalescingNetworkRequests; // @synthesize alreadyCoalescingNetworkRequests=_alreadyCoalescingNetworkRequests;
@property(nonatomic) unsigned char scoresRateLimitedCurrentState; // @synthesize scoresRateLimitedCurrentState=_scoresRateLimitedCurrentState;
@property(nonatomic) long long scoresRateLimitingCurrentNumberOfRequests; // @synthesize scoresRateLimitingCurrentNumberOfRequests=_scoresRateLimitingCurrentNumberOfRequests;
@property(retain, nonatomic) NSDate *scoresRateLimitingStartDate; // @synthesize scoresRateLimitingStartDate=_scoresRateLimitingStartDate;
@property(nonatomic) unsigned char achievementsRateLimitedCurrentState; // @synthesize achievementsRateLimitedCurrentState=_achievementsRateLimitedCurrentState;
@property(nonatomic) long long achievementsRateLimitingCurrentNumberOfRequests; // @synthesize achievementsRateLimitingCurrentNumberOfRequests=_achievementsRateLimitingCurrentNumberOfRequests;
@property(retain, nonatomic) NSDate *achievementsRateLimitingStartDate; // @synthesize achievementsRateLimitingStartDate=_achievementsRateLimitingStartDate;
@property _Bool isAppUnlistedAndDisallowed; // @synthesize isAppUnlistedAndDisallowed=_isAppUnlistedAndDisallowed;
@property _Bool isGameCenterEnabledClient; // @synthesize isGameCenterEnabledClient=_isGameCenterEnabledClient;
@property _Bool isOcelot; // @synthesize isOcelot=_isOcelot;
@property(copy, nonatomic) NSString *persistentAnchorIdentifier; // @synthesize persistentAnchorIdentifier=_persistentAnchorIdentifier;
@property(nonatomic) _Bool supportsMultipleActivePlayers; // @synthesize supportsMultipleActivePlayers=_supportsMultipleActivePlayers;
@property(nonatomic) _Bool installed; // @synthesize installed=_installed;
@property(nonatomic) long long environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSString *bundleShortVersion; // @synthesize bundleShortVersion=_bundleShortVersion;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSString *originalBundleIdentifier; // @synthesize originalBundleIdentifier=_originalBundleIdentifier;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSNumber *externalVersion; // @synthesize externalVersion=_externalVersion;
@property(retain, nonatomic) NSNumber *sandboxExtensionToken; // @synthesize sandboxExtensionToken=_sandboxExtensionToken;
@property(readonly, nonatomic) LSApplicationRecord *applicationRecord; // @synthesize applicationRecord=_applicationRecord;
@property(retain, nonatomic) NSNumber *adamID; // @synthesize adamID=_adamID;
@property(retain) GKEntitlements *entitlements; // @synthesize entitlements=_entitlements;
@property(nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *authQueue; // @synthesize authQueue=_authQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *replyQueue; // @synthesize replyQueue=_replyQueue;
- (void)receivedData:(id)arg1 deviceID:(id)arg2 data:(id)arg3;	// IMP=0x00100000001251d1
- (void)playerLost:(id)arg1 deviceID:(id)arg2;	// IMP=0x00100000001250da
- (void)playerFound:(id)arg1 deviceID:(id)arg2 discoveryInfo:(id)arg3;	// IMP=0x0010000000124fbf
- (oneway void)refreshPendingDataTypes;	// IMP=0x0010000000124d66
- (void)deleteInviteSession;	// IMP=0x0010000000124be3
- (id)fetchOrCreateInviteSession;	// IMP=0x001000000012490d
- (void)cancelInvitationForSession:(id)arg1 playerID:(id)arg2 pushTokens:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000124237
- (void)cancelOutstandingCheckMatchStatus;	// IMP=0x00100000001241ae
- (_Bool)processMatchResponse:(id)arg1;	// IMP=0x0010000000123403
- (void)checkMatchStatus;	// IMP=0x0010000000122ecc
- (void)performAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000122e66
- (void)performSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000122c90
- (_Bool)clientHasAnyPrivateEntitlement;	// IMP=0x0010000000122ae9
- (void)setLaunchEvent:(unsigned long long)arg1 withContext:(id)arg2;	// IMP=0x0010000000122950
- (void)updatePreferencesFromBag:(id)arg1;	// IMP=0x00100000001228fb
- (void)setExtensionProxy:(id)arg1 forBundleID:(id)arg2;	// IMP=0x00100000001227cd
@property(readonly, nonatomic) NSString *protocolVersion;
- (_Bool)conformsToMultiUserRestrictions;	// IMP=0x0010000000122766
- (_Bool)isExtension;	// IMP=0x001000000012275e
- (_Bool)isUIService;	// IMP=0x0010000000122756
- (_Bool)isGameCenter;	// IMP=0x0010000000122708
- (_Bool)isDevSigned;	// IMP=0x0010000000122660
- (long long)appSignatureType;	// IMP=0x00100000001225b6
@property(readonly, nonatomic) NSLocale *locale; // @dynamic locale;
@property(readonly, nonatomic) NSDictionary *gameDescriptor;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000012203c
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)credentialForPlayer:(id)arg1;	// IMP=0x0010000000121d47
- (id)transportWithCredential:(id)arg1;	// IMP=0x0010000000121c93
- (void)dealloc;	// IMP=0x0010000000121b9f
- (void)updateIfRecentlyInstalled;	// IMP=0x0010000000121952
@property(readonly, nonatomic) _Bool distributorIsFirstPartyApple;
- (void)clearDiscoveryInfo;	// IMP=0x00100000001212a8
- (id)initWithBundleIdentifier:(id)arg1 bundleOrNil:(id)arg2 pid:(int)arg3;	// IMP=0x00100000001206da
- (void)initializeInitializationStateMachine;	// IMP=0x0010000000120571
- (void)handleCloudKitShareMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000012b80e
- (oneway void)resetLoginCancelCount;	// IMP=0x001000000012b73e
- (oneway void)loadRemoteImageDataForURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000012b685
- (oneway void)localizedMessageFromDictionary:(id)arg1 forBundleID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000012b573
- (oneway void)getAuthenticatedPlayerIDWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012b4a8
- (oneway void)getAccountNameWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012b1c4
- (oneway void)getAuthenticatedLocalPlayersWithStatus:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000012a3ed
- (oneway void)getGamedFiredUpWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012a23b
- (oneway void)getAuthenticatedPlayerCredential:(CDUnknownBlockType)arg1;	// IMP=0x0010000000129dc5
- (oneway void)getAuthenticatedPlayerInfo:(CDUnknownBlockType)arg1;	// IMP=0x00100000001299c4
- (oneway void)getPrivateServicesForPID:(int)arg1 localPlayer:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000129695
- (oneway void)getServicesForPID:(int)arg1 localPlayer:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000001292f5
- (oneway void)getPrivateServicesWithTransport:(id)arg1 forClient:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000128ea2
- (oneway void)getServicesWithTransport:(id)arg1 forClient:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000128a4d
- (oneway void)setTestGame:(id)arg1 protocolVersion:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000001289b4
- (oneway void)messagesDidReceiveGameCenterURL:(id)arg1 senderHandle:(id)arg2 contactID:(id)arg3;	// IMP=0x0010000000127efd
- (oneway void)setHostPID:(int)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000127ee6
- (id)serviceForClass:(Class)arg1 transport:(id)arg2 client:(id)arg3 credential:(id)arg4;	// IMP=0x0010000000127c43
- (void)didEnterForeground;	// IMP=0x001000000012c711
- (void)updateAppInitState;	// IMP=0x001000000012c624
- (id)verifyAuthorized;	// IMP=0x001000000012bd5d
- (id)appInitState;	// IMP=0x001000000012bd44
- (_Bool)setAppInitState:(id)arg1;	// IMP=0x001000000012bd2b
- (void)stateDidChange;	// IMP=0x001000000012bcb0
- (id)missingTransitionFromState:(id)arg1 toState:(id)arg2;	// IMP=0x001000000012bc2e
- (void)sendAuthenticationDidChangeNotificationWithAuthenticatingBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000012b9c4
- (void)bgInitializeWithCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000130766
- (void)initializeWithCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001300cd
- (void)removeAppSessionForPlayer:(id)arg1;	// IMP=0x00100000001300b4
- (id)appSessionForPlayer:(id)arg1;	// IMP=0x001000000013002d
- (void)addAppSession:(id)arg1 forCredential:(id)arg2;	// IMP=0x001000000012ff15
- (void)backgroundWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012f874
- (void)terminateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012f257
- (id)appTerminateRequestWithBackgroundFlag:(_Bool)arg1;	// IMP=0x001000000012f117
- (oneway void)authenticatedPlayersDidChange:(id)arg1 authenticatingBundleID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000012eb79
- (oneway void)completedOptimisticAuthenticationWithResponse:(id)arg1 error:(id)arg2;	// IMP=0x001000000012eacd
- (oneway void)setCurrentGame:(id)arg1 serverEnvironment:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000012e508
- (oneway void)getPreferenceForKey:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000012e498
- (oneway void)setPreferencesValues:(id)arg1;	// IMP=0x001000000012e337
- (oneway void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;	// IMP=0x001000000012dfd9
- (oneway void)setBadgeCount:(unsigned long long)arg1 forType:(unsigned long long)arg2;	// IMP=0x001000000012df81
- (oneway void)didReceiveData:(id)arg1 reliably:(_Bool)arg2 forRecipients:(id)arg3 fromSender:(id)arg4;	// IMP=0x001000000012dedf
- (oneway void)didDisconnectFromParticipantWithID:(id)arg1;	// IMP=0x001000000012de6f
- (oneway void)didConnectToParticipantWithID:(id)arg1;	// IMP=0x001000000012ddff
- (oneway void)relayPushNotification:(id)arg1;	// IMP=0x001000000012dcc7
- (oneway void)nearbyDataReceivedForPlayerID:(id)arg1 deviceID:(id)arg2 data:(id)arg3;	// IMP=0x001000000012dc23
- (oneway void)nearbyPlayerLostForPlayerID:(id)arg1 deviceID:(id)arg2;	// IMP=0x001000000012db91
- (oneway void)nearbyPlayerFoundForPlayerID:(id)arg1 deviceID:(id)arg2 discoveryInfo:(id)arg3;	// IMP=0x001000000012daed
- (oneway void)cancelGameInvite:(id)arg1;	// IMP=0x001000000012d9b5
- (oneway void)cancelInviteWithNotification:(id)arg1;	// IMP=0x001000000012d87d
- (oneway void)updateInviteWithNotification:(id)arg1;	// IMP=0x001000000012d73c
- (oneway void)declineInviteWithNotification:(id)arg1;	// IMP=0x001000000012d604
- (oneway void)acceptInviteWithNotification:(id)arg1;	// IMP=0x001000000012d4cc
- (oneway void)acceptMultiplayerGameInvite;	// IMP=0x001000000012d3fd
- (oneway void)fetchTurnBasedData;	// IMP=0x001000000012d399
- (oneway void)achievementSelected:(id)arg1;	// IMP=0x001000000012d329
- (oneway void)scoreSelected:(id)arg1;	// IMP=0x001000000012d2b9
- (oneway void)challengeCompleted:(id)arg1;	// IMP=0x001000000012d249
- (oneway void)challengeReceived:(id)arg1;	// IMP=0x001000000012d1d9
- (oneway void)completedChallengeSelected:(id)arg1;	// IMP=0x001000000012d169
- (oneway void)receivedChallengeSelected:(id)arg1;	// IMP=0x001000000012d0f9
- (oneway void)friendRequestSelected:(id)arg1;	// IMP=0x001000000012d049
- (oneway void)respondedToNearbyInvite:(id)arg1;	// IMP=0x001000000012cfd9
- (oneway void)resetNetworkActivity;	// IMP=0x001000000012cf95
- (oneway void)endNetworkActivity;	// IMP=0x001000000012cf51
- (oneway void)beginNetworkActivity;	// IMP=0x001000000012cf0d
- (oneway void)requestSandboxExtension:(CDUnknownBlockType)arg1;	// IMP=0x001000000012ce3f
- (oneway void)presentBannerWithNotification:(id)arg1;	// IMP=0x001000000012cdcf
- (oneway void)metricsValuesChanged;	// IMP=0x001000000012cd8b
- (id)connectionProxyForUseCase:(id)arg1;	// IMP=0x001000000012cc44
- (void)performDelayedRequestsForCredential:(id)arg1;	// IMP=0x0010000000132121
- (void)performDelayedRequestsForEnvironment:(long long)arg1;	// IMP=0x0010000000132052
- (id)removeGameWriterWithCredential:(id)arg1;	// IMP=0x0010000000131bdd
- (id)deletePlayerPhotoWriterWithCredential:(id)arg1;	// IMP=0x0010000000131b4b
- (id)setPlayerPhotoWriterWithCredential:(id)arg1;	// IMP=0x0010000000131ab9
- (id)setPlayerStatusWriterWithCredential:(id)arg1;	// IMP=0x0010000000131a27
- (id)_delayedRequestWriterWithCacheWriterClass:(Class)arg1 cacheReaderClass:(Class)arg2 networkWriterClass:(Class)arg3 bagKey:(id)arg4 batchSubmissionInterval:(long long)arg5 credential:(id)arg6;	// IMP=0x0010000000131676
- (void)_removeDelayedRequestStore;	// IMP=0x00100000001311f4
- (void)_setupDelayedRequestsWriters;	// IMP=0x0010000000130fc7
- (id)requestsCacheForEnvironment:(long long)arg1;	// IMP=0x0010000000130da3
- (id)storeAndForwardDirectoryPathForEnvironment:(long long)arg1;	// IMP=0x0010000000130d35
- (id)transactionGroupIfCacheExistsForPlayerID:(id)arg1;	// IMP=0x0010000000133c21
- (id)transactionGroupWithName:(id)arg1 forPlayerID:(id)arg2;	// IMP=0x0010000000133b41
- (id)_managedObjectContextForPlayerID:(id)arg1;	// IMP=0x0010000000133920

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end
