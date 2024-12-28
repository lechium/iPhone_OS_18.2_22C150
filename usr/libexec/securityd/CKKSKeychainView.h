//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKKSAccountStateTracker, CKKSCloudKitClassDependencies, CKKSCondition, CKKSIncomingQueueOperation, CKKSLockStateTracker, CKKSNearFutureScheduler, CKKSNewTLKOperation, CKKSOperationDependencies, CKKSOutgoingQueueOperation, CKKSProcessReceivedKeysOperation, CKKSReachabilityTracker, CKKSReencryptOutgoingItemsOperation, CKKSResultOperation, CKKSSecDbAdapter, CKKSSynchronizeOperation, CKKSZoneChangeFetcher, NSArray, NSDate, NSDictionary, NSHashTable, NSMutableSet, NSOperation, NSOperationQueue, NSSet, NSString, OctagonStateMachine, OctagonStateMultiStateArrivalWatcher, TPSyncingPolicy;
@protocol CKKSCuttlefishAdapterProtocol, OS_dispatch_queue, OTAccountsAdapter, OTPersonaAdapter;

@interface CKKSKeychainView : NSObject
{
    _Bool _keyStateMachineRefetched;	// 8 = 0x8
    _Bool _keyStateFullRefetchRequested;	// 9 = 0x9
    _Bool _firstManateeKeyFetched;	// 10 = 0xa
    _Bool _initiatedLocalScan;	// 11 = 0xb
    _Bool _itemModificationsBeforePolicyLoaded;	// 12 = 0xc
    _Bool _halted;	// 13 = 0xd
    _Bool _havoc;	// 14 = 0xe
    long long _accountStatus;	// 16 = 0x10
    CKContainer *_container;	// 24 = 0x18
    CKKSAccountStateTracker *_accountTracker;	// 32 = 0x20
    CKKSReachabilityTracker *_reachabilityTracker;	// 40 = 0x28
    CKKSCloudKitClassDependencies *_cloudKitClassDependencies;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    CKKSCondition *_loggedIn;	// 64 = 0x40
    CKKSCondition *_loggedOut;	// 72 = 0x48
    CKKSCondition *_accountStateKnown;	// 80 = 0x50
    long long _trustStatus;	// 88 = 0x58
    CKKSCondition *_trustStatusKnown;	// 96 = 0x60
    CKKSLockStateTracker *_lockStateTracker;	// 104 = 0x68
    OctagonStateMachine *_stateMachine;	// 112 = 0x70
    id <OTPersonaAdapter> _personaAdapter;	// 120 = 0x78
    id <OTAccountsAdapter> _accountsAdapter;	// 128 = 0x80
    id <CKKSCuttlefishAdapterProtocol> _cuttlefishAdapter;	// 136 = 0x88
    CKKSZoneChangeFetcher *_zoneChangeFetcher;	// 144 = 0x90
    CKKSNearFutureScheduler *_suggestTLKUpload;	// 152 = 0x98
    CKKSNearFutureScheduler *_outgoingQueueOperationScheduler;	// 160 = 0xa0
    CKKSNearFutureScheduler *_outgoingQueuePriorityOperationScheduler;	// 168 = 0xa8
    CKKSIncomingQueueOperation *_lastIncomingQueueOperation;	// 176 = 0xb0
    CKKSNewTLKOperation *_lastNewTLKOperation;	// 184 = 0xb8
    CKKSOutgoingQueueOperation *_lastOutgoingQueueOperation;	// 192 = 0xc0
    CKKSProcessReceivedKeysOperation *_lastProcessReceivedKeysOperation;	// 200 = 0xc8
    CKKSReencryptOutgoingItemsOperation *_lastReencryptOutgoingItemsOperation;	// 208 = 0xd0
    CKKSSynchronizeOperation *_lastSynchronizeOperation;	// 216 = 0xd8
    CKKSResultOperation *_lastFixupOperation;	// 224 = 0xe0
    NSOperation *_holdOutgoingQueueOperation;	// 232 = 0xe8
    NSOperation *_holdIncomingQueueOperation;	// 240 = 0xf0
    NSOperation *_holdLocalSynchronizeOperation;	// 248 = 0xf8
    NSString *_zoneName;	// 256 = 0x100
    CKKSOperationDependencies *_operationDependencies;	// 264 = 0x108
    CKKSCondition *_policyLoaded;	// 272 = 0x110
    OctagonStateMultiStateArrivalWatcher *_priorityViewsProcessed;	// 280 = 0x118
    CKKSResultOperation *_resultsOfNextIncomingQueueOperationOperation;	// 288 = 0x120
    NSHashTable *_outgoingQueueOperations;	// 296 = 0x128
    NSMutableSet *_resyncRecordsSeen;	// 304 = 0x130
    CKKSSecDbAdapter *_databaseProvider;	// 312 = 0x138
    NSOperationQueue *_operationQueue;	// 320 = 0x140
    CKKSResultOperation *_accountLoggedInDependency;	// 328 = 0x148
    NSArray *_currentTrustStates;	// 336 = 0x150
    NSSet *_viewAllowList;	// 344 = 0x158
}

- (void).cxx_destruct;	// IMP=0x00200000001c5c7e
@property _Bool havoc; // @synthesize havoc=_havoc;
@property(retain) NSSet *viewAllowList; // @synthesize viewAllowList=_viewAllowList;
@property(retain) NSArray *currentTrustStates; // @synthesize currentTrustStates=_currentTrustStates;
@property _Bool halted; // @synthesize halted=_halted;
@property(retain) CKKSResultOperation *accountLoggedInDependency; // @synthesize accountLoggedInDependency=_accountLoggedInDependency;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) CKKSSecDbAdapter *databaseProvider; // @synthesize databaseProvider=_databaseProvider;
@property(retain) NSMutableSet *resyncRecordsSeen; // @synthesize resyncRecordsSeen=_resyncRecordsSeen;
@property(retain) NSHashTable *outgoingQueueOperations; // @synthesize outgoingQueueOperations=_outgoingQueueOperations;
@property(retain) CKKSResultOperation *resultsOfNextIncomingQueueOperationOperation; // @synthesize resultsOfNextIncomingQueueOperationOperation=_resultsOfNextIncomingQueueOperationOperation;
@property _Bool itemModificationsBeforePolicyLoaded; // @synthesize itemModificationsBeforePolicyLoaded=_itemModificationsBeforePolicyLoaded;
@property(retain) OctagonStateMultiStateArrivalWatcher *priorityViewsProcessed; // @synthesize priorityViewsProcessed=_priorityViewsProcessed;
@property(retain) CKKSCondition *policyLoaded; // @synthesize policyLoaded=_policyLoaded;
@property(readonly) CKKSOperationDependencies *operationDependencies; // @synthesize operationDependencies=_operationDependencies;
@property _Bool initiatedLocalScan; // @synthesize initiatedLocalScan=_initiatedLocalScan;
@property(readonly) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(retain) NSOperation *holdLocalSynchronizeOperation; // @synthesize holdLocalSynchronizeOperation=_holdLocalSynchronizeOperation;
@property(retain) NSOperation *holdIncomingQueueOperation; // @synthesize holdIncomingQueueOperation=_holdIncomingQueueOperation;
@property(retain) NSOperation *holdOutgoingQueueOperation; // @synthesize holdOutgoingQueueOperation=_holdOutgoingQueueOperation;
@property(retain) CKKSResultOperation *lastFixupOperation; // @synthesize lastFixupOperation=_lastFixupOperation;
@property(retain) CKKSSynchronizeOperation *lastSynchronizeOperation; // @synthesize lastSynchronizeOperation=_lastSynchronizeOperation;
@property(retain) CKKSReencryptOutgoingItemsOperation *lastReencryptOutgoingItemsOperation; // @synthesize lastReencryptOutgoingItemsOperation=_lastReencryptOutgoingItemsOperation;
@property(retain) CKKSProcessReceivedKeysOperation *lastProcessReceivedKeysOperation; // @synthesize lastProcessReceivedKeysOperation=_lastProcessReceivedKeysOperation;
@property(retain) CKKSOutgoingQueueOperation *lastOutgoingQueueOperation; // @synthesize lastOutgoingQueueOperation=_lastOutgoingQueueOperation;
@property(retain) CKKSNewTLKOperation *lastNewTLKOperation; // @synthesize lastNewTLKOperation=_lastNewTLKOperation;
@property(retain) CKKSIncomingQueueOperation *lastIncomingQueueOperation; // @synthesize lastIncomingQueueOperation=_lastIncomingQueueOperation;
@property(retain) CKKSNearFutureScheduler *outgoingQueuePriorityOperationScheduler; // @synthesize outgoingQueuePriorityOperationScheduler=_outgoingQueuePriorityOperationScheduler;
@property(retain) CKKSNearFutureScheduler *outgoingQueueOperationScheduler; // @synthesize outgoingQueueOperationScheduler=_outgoingQueueOperationScheduler;
@property(retain) CKKSNearFutureScheduler *suggestTLKUpload; // @synthesize suggestTLKUpload=_suggestTLKUpload;
@property(retain) CKKSZoneChangeFetcher *zoneChangeFetcher; // @synthesize zoneChangeFetcher=_zoneChangeFetcher;
@property(retain) id <CKKSCuttlefishAdapterProtocol> cuttlefishAdapter; // @synthesize cuttlefishAdapter=_cuttlefishAdapter;
@property(retain) id <OTAccountsAdapter> accountsAdapter; // @synthesize accountsAdapter=_accountsAdapter;
@property _Bool firstManateeKeyFetched; // @synthesize firstManateeKeyFetched=_firstManateeKeyFetched;
@property _Bool keyStateFullRefetchRequested; // @synthesize keyStateFullRefetchRequested=_keyStateFullRefetchRequested;
@property _Bool keyStateMachineRefetched; // @synthesize keyStateMachineRefetched=_keyStateMachineRefetched;
@property(retain) id <OTPersonaAdapter> personaAdapter; // @synthesize personaAdapter=_personaAdapter;
@property(readonly) OctagonStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain) CKKSLockStateTracker *lockStateTracker; // @synthesize lockStateTracker=_lockStateTracker;
@property(retain) CKKSCondition *trustStatusKnown; // @synthesize trustStatusKnown=_trustStatusKnown;
@property long long trustStatus; // @synthesize trustStatus=_trustStatus;
@property(retain) CKKSCondition *accountStateKnown; // @synthesize accountStateKnown=_accountStateKnown;
@property(retain) CKKSCondition *loggedOut; // @synthesize loggedOut=_loggedOut;
@property(retain) CKKSCondition *loggedIn; // @synthesize loggedIn=_loggedIn;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) CKKSCloudKitClassDependencies *cloudKitClassDependencies; // @synthesize cloudKitClassDependencies=_cloudKitClassDependencies;
@property(readonly) CKKSReachabilityTracker *reachabilityTracker; // @synthesize reachabilityTracker=_reachabilityTracker;
@property(retain) CKKSAccountStateTracker *accountTracker; // @synthesize accountTracker=_accountTracker;
@property(readonly) CKContainer *container; // @synthesize container=_container;
@property long long accountStatus; // @synthesize accountStatus=_accountStatus;
- (id)fastStatus:(id)arg1 zoneStateEntry:(id)arg2;	// IMP=0x00100000001c53bc
- (id)intransactionSlowStatus:(id)arg1;	// IMP=0x00100000001c41dc
- (void)rpcStatus:(id)arg1 fast:(_Bool)arg2 waitForNonTransientState:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000001c3e43
- (id)viewsForPeerID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001c3c72
- (_Bool)waitUntilReadyForRPCForOperation:(id)arg1 fast:(_Bool)arg2 errorOnNoCloudKitAccount:(_Bool)arg3 errorOnPolicyMissing:(_Bool)arg4 error:(id *)arg5;	// IMP=0x00100000001c38ca
- (id)policyDependentViewStateForName:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001c38ab
- (id)policyDependentViewStateForName:(id)arg1 timeout:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000001c357c
- (_Bool)waitForPolicy:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00100000001c33d8
- (void)halt;	// IMP=0x00100000001c2fda
- (void)cancelAllOperations;	// IMP=0x00100000001c2f8d
- (void)cancelPendingOperations;	// IMP=0x00100000001c2dbe
- (void)waitForOperationsOfClass:(Class)arg1;	// IMP=0x00100000001c2c18
- (_Bool)waitUntilAllOperationsAreFinished;	// IMP=0x00100000001c2b9c
- (_Bool)scheduleOperationWithoutDependencies:(id)arg1;	// IMP=0x00100000001c2a96
- (void)scheduleOperation:(id)arg1;	// IMP=0x00100000001c295a
- (_Bool)waitForKeyHierarchyReadiness;	// IMP=0x00100000001c2741
- (_Bool)waitForFetchAndIncomingQueueProcessing;	// IMP=0x00100000001c25c3
- (_Bool)outgoingQueueEmpty:(id *)arg1;	// IMP=0x00100000001c251d
- (void)trustedPeerSetChanged:(id)arg1;	// IMP=0x00100000001c2448
- (void)selfPeerChanged:(id)arg1;	// IMP=0x00100000001c23a0
- (_Bool)shouldRetryAfterFetchError:(id)arg1 zoneID:(id)arg2;	// IMP=0x00100000001c2059
- (_Bool)ckErrorOrPartialError:(id)arg1 isError:(long long)arg2 zoneID:(id)arg3;	// IMP=0x00100000001c1e45
- (void)changesFetched:(id)arg1 deletedRecordIDs:(id)arg2 zoneID:(id)arg3 newChangeToken:(id)arg4 moreComing:(_Bool)arg5 resync:(_Bool)arg6;	// IMP=0x00100000001c1be1
- (id)participateInFetch:(id)arg1;	// IMP=0x00100000001c1aa7
- (_Bool)_onQueueZoneIsReadyForFetching:(id)arg1;	// IMP=0x00100000001c15ab
- (_Bool)zoneIsReadyForFetching:(id)arg1;	// IMP=0x00100000001c14c0
- (void)_onqueuePrioritizePriorityViews;	// IMP=0x00100000001c111a
- (id)viewStateForName:(id)arg1;	// IMP=0x00100000001c10a0
- (void)testDropPolicy;	// IMP=0x00100000001c0ffd
- (void)setSyncingViewsAllowList:(id)arg1;	// IMP=0x00100000001c0feb
- (id)createViewState:(id)arg1 contextID:(id)arg2 zoneIsNew:(_Bool)arg3 priorityView:(_Bool)arg4 ckksManagedView:(_Bool)arg5;	// IMP=0x00100000001c0caf
- (void)onqueueCreatePriorityViewsProcessedWatcher;	// IMP=0x00100000001c0a4e
- (_Bool)setCurrentSyncingPolicy:(id)arg1 policyIsFresh:(_Bool)arg2;	// IMP=0x00100000001bff1e
- (_Bool)setCurrentSyncingPolicy:(id)arg1;	// IMP=0x00100000001bff0a
@property(readonly) TPSyncingPolicy *syncingPolicy;
- (void)endTrustedOperation;	// IMP=0x00100000001bfd27
- (void)beginTrustedOperation:(id)arg1 suggestTLKUpload:(id)arg2 requestPolicyCheck:(id)arg3;	// IMP=0x00100000001bf938
- (void)handleCKLogout;	// IMP=0x00100000001bf806
- (void)handleCKLogin;	// IMP=0x00100000001bf4c4
- (void)cloudkitAccountStateChange:(id)arg1 to:(id)arg2;	// IMP=0x00100000001bf02b
- (long long)accountStatusFromCKAccountInfo:(id)arg1;	// IMP=0x00100000001befc7
- (id)createAccountLoggedInDependency:(id)arg1;	// IMP=0x00100000001beea6
- (void)beginCloudKitOperation;	// IMP=0x00100000001bee52
- (_Bool)insideSQLTransaction;	// IMP=0x00100000001bede4
- (void)dispatchSyncWithReadOnlySQLTransaction:(CDUnknownBlockType)arg1;	// IMP=0x00100000001bed5d
- (void)dispatchSyncWithSQLTransaction:(CDUnknownBlockType)arg1;	// IMP=0x00100000001becd6
- (_Bool)_onqueueResetAllInflightOQE:(id *)arg1;	// IMP=0x00100000001be6eb
- (id)resyncLocal;	// IMP=0x00100000001be670
- (id)resyncWithCloud;	// IMP=0x00100000001be5f5
- (void)xpc24HrNotification;	// IMP=0x00100000001be5b1
- (void)pcsMirrorKeysForServices:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001be461
- (void)toggleHavoc:(CDUnknownBlockType)arg1;	// IMP=0x00100000001be36f
- (id)updateDeviceState:(_Bool)arg1 waitForKeyHierarchyInitialization:(unsigned long long)arg2 ckoperationGroup:(id)arg3;	// IMP=0x00100000001be18f
- (void)scanLocalItems;	// IMP=0x00100000001be14b
- (id)rpcWaitForPriorityViewProcessing;	// IMP=0x00100000001be050
- (id)rpcProcessIncomingQueue:(id)arg1 errorOnClassAFailure:(_Bool)arg2;	// IMP=0x00100000001bdd49
- (id)rpcFetchAndProcessIncomingQueue:(id)arg1 because:(id)arg2 errorOnClassAFailure:(_Bool)arg3;	// IMP=0x00100000001bd43e
- (id)rpcFetchBecause:(id)arg1;	// IMP=0x00100000001bcdf1
- (id)resultsOfNextProcessIncomingQueueOperation;	// IMP=0x00100000001bccd5
- (void)_onqueueProcessOutgoingQueue:(id)arg1 priorityRush:(_Bool)arg2;	// IMP=0x00100000001bca25
- (id);	// IMP=0x00100000001bc642
- (id)findFirstPendingOperation:(id)arg1 ofClass:(Class)arg2;	// IMP=0x00100000001bc462
- (id)findFirstPendingOperation:(id)arg1;	// IMP=0x00100000001bc44e
- (id)viewsRequiringTLKUpload;	// IMP=0x00100000001bc353
- (void)receiveTLKUploadRecords:(id)arg1;	// IMP=0x00100000001bc1f5
- (id)findKeySets:(_Bool)arg1;	// IMP=0x00100000001bc0ae
- (void)sendMetricForFirstManateeAccess;	// IMP=0x00100000001bbf45
- (void)decryptCurrentItems:(id)arg1 cache:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x00100000001bb5cf
- (void)decryptPCSIdentities:(id)arg1 cache:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x00100000001bae39
- (_Bool)unwrapKeysAndSaveToCache:(id)arg1 syncKeys:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001baab4
- (_Bool)unwrapTLKAndSaveToCache:(id)arg1 tlks:(id)arg2 tlkShares:(id)arg3 error:(id *)arg4;	// IMP=0x00100000001ba4c6
- (void)fetchPCSIdentityOutOfBand:(id)arg1 forceFetch:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b99df
- (void)getCurrentItemOutOfBand:(id)arg1 forceFetch:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b8eb4
- (void)getCurrentItemForAccessGroup:(id)arg1 identifier:(id)arg2 viewHint:(id)arg3 fetchCloudValue:(_Bool)arg4 complete:(CDUnknownBlockType)arg5;	// IMP=0x00100000001b88cf
- (id)zoneIDForViewHint:(id)arg1 pcsShortcut:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000001b86ec
- (void)unsetCurrentItemsForAccessGroup:(id)arg1 identifiers:(id)arg2 viewHint:(id)arg3 complete:(CDUnknownBlockType)arg4;	// IMP=0x00100000001b80bc
- (void)setCurrentItemForAccessGroup:(id)arg1 hash:(id)arg2 accessGroup:(id)arg3 identifier:(id)arg4 viewHint:(id)arg5 replacing:(id)arg6 hash:(id)arg7 complete:(CDUnknownBlockType)arg8;	// IMP=0x00100000001b7a75
- (void)handleKeychainEventDbConnection:(struct __OpaqueSecDbConnection *)arg1 source:(unsigned long long)arg2 added:(struct SecDbItem *)arg3 deleted:(struct SecDbItem *)arg4 rateLimiter:(id)arg5;	// IMP=0x00100000001b698f
- (void)notifyPasswordsOrPCSChangedForAddedItem:(struct SecDbItem *)arg1 modified:(struct SecDbItem *)arg2 deleted:(struct SecDbItem *)arg3;	// IMP=0x00100000001b6922
- (void)notifyForItem:(struct SecDbItem *)arg1;	// IMP=0x00100000001b6739
- (_Bool)_onqueueOtherDevicesReportHavingTLKs:(id)arg1 trustStates:(id)arg2;	// IMP=0x00100000001b5418
- (id)tlkMissingOperation:(id)arg1;	// IMP=0x00100000001b5304
- (_Bool)allowOutOfBandFetch:(id *)arg1;	// IMP=0x00100000001b4dca
@property(readonly) NSDate *earliestFetchTime;
@property(readonly) NSSet *viewList;
- (id)viewsInState:(id)arg1;	// IMP=0x00100000001b47c0
- (_Bool)anyViewsInState:(id)arg1;	// IMP=0x00100000001b45e6
- (id)loseTrustOperation:(id)arg1;	// IMP=0x00100000001b44d2
- (id)becomeReadyOperation:(id)arg1;	// IMP=0x00100000001b43be
- (id)_onqueueNextStateMachineTransition:(id)arg1 flags:(id)arg2 pendingFlags:(id)arg3;	// IMP=0x00100000001b02cb
- (void)_onqueuePokeKeyStateMachine;	// IMP=0x00100000001b0257
- (void)keyStateMachineRequestProcess;	// IMP=0x00100000001b0213
- (id)rpcResetCloudKit:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001afb2a
- (id)rpcResetLocal:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001af667
- (id)performInitializedOperation;	// IMP=0x00100000001af58b
@property(readonly) NSDictionary *stateConditions;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (id)initWithContainer:(id)arg1 contextID:(id)arg2 activeAccount:(id)arg3 accountTracker:(id)arg4 lockStateTracker:(id)arg5 reachabilityTracker:(id)arg6 savedTLKNotifier:(id)arg7 cloudKitClassDependencies:(id)arg8 personaAdapter:(id)arg9 accountsAdapter:(id)arg10 cuttlefishAdapter:(id)arg11;	// IMP=0x00100000001ae814
- (void)modifyTLKSharesForExternallyManagedView:(id)arg1 adding:(id)arg2 deleting:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000208969
- (void)loadKeys:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000020888b
- (void)fetchCloudKitExternallyManagedViewKeyHierarchy:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000002086e3
- (void)fetchExternallyManagedViewKeyHierarchy:(id)arg1 forceFetch:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000020856f
- (void)proposeTLKForExternallyManagedView:(id)arg1 proposedTLK:(id)arg2 wrappedOldTLK:(id)arg3 tlkShares:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000208209
- (void)resetExternallyManagedCloudKitView:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000020807e
- (id)externalManagedViewForRPC:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000207ce3

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
