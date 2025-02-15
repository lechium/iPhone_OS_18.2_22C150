//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKKSAccountStateTracker, CKKSCloudKitClassDependencies, CKKSCondition, CKKSLockStateTracker, CKKSRateLimiter, CKKSReachabilityTracker, MISSING_TYPE, NSMutableDictionary, NSOperationQueue, NSSet, NSString, NSXPCListener;
@protocol OTAccountsAdapter, OTPersonaAdapter, OTSOSAdapter;

@interface CKKSViewManager : NSObject
{
    CKContainer *_container;	// 8 = 0x8
    CKKSAccountStateTracker *_accountTracker;	// 16 = 0x10
    CKKSLockStateTracker *_lockStateTracker;	// 24 = 0x18
    CKKSReachabilityTracker *_reachabilityTracker;	// 32 = 0x20
    id <OTPersonaAdapter> _personaAdapter;	// 40 = 0x28
    CKKSCondition *_completedSecCKKSInitialize;	// 48 = 0x30
    CKKSRateLimiter *_globalRateLimiter;	// 56 = 0x38
    id <OTSOSAdapter> _sosPeerAdapter;	// 64 = 0x40
    id <OTAccountsAdapter> _accountsAdapter;	// 72 = 0x48
    NSXPCListener *_listener;	// 80 = 0x50
    NSSet *_viewAllowList;	// 88 = 0x58
    CKKSCloudKitClassDependencies *_cloudKitClassDependencies;	// 96 = 0x60
    NSMutableDictionary *_pendingSyncCallbacks;	// 104 = 0x68
    NSOperationQueue *_operationQueue;	// 112 = 0x70
}

+ (id)manager;	// IMP=0x002000000013a7f3
+ (MISSING_TYPE *)callSyncCallbackWithErrorNoAccount: /* Error: Ran out of types for this method. */;	// IMP=0x001000000013a778
- (void).cxx_destruct;	// IMP=0x0020000000138a4f
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) NSMutableDictionary *pendingSyncCallbacks; // @synthesize pendingSyncCallbacks=_pendingSyncCallbacks;
@property(retain) CKKSCloudKitClassDependencies *cloudKitClassDependencies; // @synthesize cloudKitClassDependencies=_cloudKitClassDependencies;
@property(retain) NSSet *viewAllowList; // @synthesize viewAllowList=_viewAllowList;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain) id <OTAccountsAdapter> accountsAdapter; // @synthesize accountsAdapter=_accountsAdapter;
@property(retain) id <OTSOSAdapter> sosPeerAdapter; // @synthesize sosPeerAdapter=_sosPeerAdapter;
@property(retain) CKKSRateLimiter *globalRateLimiter; // @synthesize globalRateLimiter=_globalRateLimiter;
@property(retain) CKKSCondition *completedSecCKKSInitialize; // @synthesize completedSecCKKSInitialize=_completedSecCKKSInitialize;
@property(retain) id <OTPersonaAdapter> personaAdapter; // @synthesize personaAdapter=_personaAdapter;
@property(retain) CKKSReachabilityTracker *reachabilityTracker; // @synthesize reachabilityTracker=_reachabilityTracker;
@property(retain) CKKSLockStateTracker *lockStateTracker; // @synthesize lockStateTracker=_lockStateTracker;
@property(retain) CKKSAccountStateTracker *accountTracker; // @synthesize accountTracker=_accountTracker;
@property(retain) CKContainer *container; // @synthesize container=_container;
- (void)dropAllActors;	// IMP=0x0010000000138821
- (void)haltAll;	// IMP=0x00100000001387dd
- (void)xpc24HrNotification;	// IMP=0x0010000000138667
- (void)pcsMirrorKeysForServices:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000138468
- (void)toggleHavoc:(CDUnknownBlockType)arg1;	// IMP=0x00100000001381b8
- (void)deleteSEView:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000137dd7
- (void)modifyTLKSharesForSEView:(id)arg1 adding:(id)arg2 deleting:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000001379bc
- (void)fetchSEViewKeyHierarchy:(id)arg1 forceFetch:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000013759b
- (void)proposeTLKForSEView:(id)arg1 proposedTLK:(id)arg2 wrappedOldTLK:(id)arg3 tlkShares:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000137166
- (id)sanitizeErrorDomain:(id)arg1;	// IMP=0x001000000013703d
- (void)rpcCKMetric:(id)arg1 attributes:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000136dec
- (void)rpcGetCKDeviceIDWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000136c91
- (void)rpcPushOutgoingChanges:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000013672e
- (void)rpcFetchAndProcessChanges:(id)arg1 classA:(_Bool)arg2 onlyIfNoRecentFetch:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000001360aa
- (void)rpcStatus:(id)arg1 fast:(_Bool)arg2 waitForNonTransientState:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000135dbc
- (void)rpcResyncLocal:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000013594a
- (void)rpcResync:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000135491
- (void)rpcResetCloudKit:(id)arg1 reason:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000135172
- (void)rpcResetLocal:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000134e53
- (void)performanceCounters:(CDUnknownBlockType)arg1;	// IMP=0x0010000000134e3e
- (id)currentTLKsFilteredByPolicy:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0010000000134615
- (void)syncBackupAndNotifyAboutSync;	// IMP=0x0010000000134572
- (void)notifyNewTLKsInKeychain;	// IMP=0x00100000001344f3
- (void)fetchPCSIdentityOutOfBand:(id)arg1 forceFetch:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x00100000001342ed
- (void)getCurrentItemOutOfBand:(id)arg1 forceFetch:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x00100000001340e7
- (void)getCurrentItemForAccessGroup:(id)arg1 identifier:(id)arg2 viewHint:(id)arg3 fetchCloudValue:(_Bool)arg4 complete:(CDUnknownBlockType)arg5;	// IMP=0x0010000000133e8e
- (void)unsetCurrentItemsForAccessGroup:(id)arg1 identifiers:(id)arg2 viewHint:(id)arg3 complete:(CDUnknownBlockType)arg4;	// IMP=0x0010000000133c3f
- (void)setCurrentItemForAccessGroup:(id)arg1 hash:(id)arg2 accessGroup:(id)arg3 identifier:(id)arg4 viewHint:(id)arg5 replacing:(id)arg6 hash:(id)arg7 complete:(CDUnknownBlockType)arg8;	// IMP=0x001000000013397f
- (id)defaultViewError;	// IMP=0x0010000000133881
- (void)handleKeychainEventDbConnection:(struct __OpaqueSecDbConnection *)arg1 source:(unsigned long long)arg2 added:(struct SecDbItem *)arg3 deleted:(struct SecDbItem *)arg4;	// IMP=0x0010000000132ed1
- (void)cloudkitAccountStateChange:(id)arg1 to:(id)arg2;	// IMP=0x0010000000132b1b
- (id)pendingCallbackUUIDs;	// IMP=0x0010000000132a57
- (_Bool)peekCallbackForUUID:(id)arg1;	// IMP=0x0010000000132968
- (CDUnknownBlockType)claimCallbackForUUID:(id)arg1;	// IMP=0x00100000001327bb
- (void)registerSyncStatusCallback:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0010000000132650
- (id)restartCKKSAccountSyncWithoutSettingPolicy:(id)arg1;	// IMP=0x00100000001325d2
- (id)ckksAccountSyncForContainer:(id)arg1 contextID:(id)arg2;	// IMP=0x00100000001324d4
- (id)restartCKKSAccountSync:(id)arg1;	// IMP=0x001000000013243f
- (void)lockStateChangeNotification:(_Bool)arg1;	// IMP=0x00100000001323bb
- (id)getGlobalRateLimiter;	// IMP=0x00100000001322b7
- (void)setupAnalytics;	// IMP=0x0010000000131eeb
- (_Bool)waitForTrustReady;	// IMP=0x0010000000131e59
- (_Bool)allowClientRPC:(id *)arg1;	// IMP=0x0010000000131d25
- (id)initWithContainer:(id)arg1 sosAdapter:(id)arg2 accountStateTracker:(id)arg3 lockStateTracker:(id)arg4 reachabilityTracker:(id)arg5 personaAdapter:(id)arg6 cloudKitClassDependencies:(id)arg7 accountsAdapter:(id)arg8;	// IMP=0x0010000000131ab4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

