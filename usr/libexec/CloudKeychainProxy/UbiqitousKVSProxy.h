//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableSet, NSString, NSURL;
@protocol CKDAccount, CKDLockMonitor, CKDStore, OS_dispatch_queue;

@interface UbiqitousKVSProxy : NSObject
{
    id currentiCloudToken;	// 8 = 0x8
    int callbackMethod;	// 16 = 0x10
    _Bool _seenKVSStoreChange;	// 20 = 0x14
    _Bool _ensurePeerRegistration;	// 21 = 0x15
    _Bool _ensurePeerRegistrationEnqueuedButNotStarted;	// 22 = 0x16
    _Bool _shadowEnsurePeerRegistration;	// 23 = 0x17
    _Bool _inCallout;	// 24 = 0x18
    NSObject<CKDStore> *_store;	// 32 = 0x20
    NSObject<CKDAccount> *_account;	// 40 = 0x28
    NSObject<CKDLockMonitor> *_lockMonitor;	// 48 = 0x30
    NSURL *_persistenceURL;	// 56 = 0x38
    NSMutableSet *_alwaysKeys;	// 64 = 0x40
    NSMutableSet *_firstUnlockKeys;	// 72 = 0x48
    NSMutableSet *_unlockedKeys;	// 80 = 0x50
    NSMutableSet *_pendingKeys;	// 88 = 0x58
    NSMutableSet *_shadowPendingKeys;	// 96 = 0x60
    NSString *_dsid;	// 104 = 0x68
    NSString *_accountUUID;	// 112 = 0x70
    NSMutableSet *_pendingSyncPeerIDs;	// 120 = 0x78
    NSMutableSet *_shadowPendingSyncPeerIDs;	// 128 = 0x80
    NSMutableSet *_pendingSyncBackupPeerIDs;	// 136 = 0x88
    NSMutableSet *_shadowPendingSyncBackupPeerIDs;	// 144 = 0x90
    NSMutableArray *_freshnessCompletions;	// 152 = 0x98
    unsigned long long _nextFreshnessTime;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 168 = 0xa8
    NSObject<OS_dispatch_queue> *_ckdkvsproxy_queue;	// 176 = 0xb0
    CDUnknownBlockType _shadowFlushBlock;	// 184 = 0xb8
}

+ (id)withAccount:(id)arg1 store:(id)arg2 lockMonitor:(id)arg3 persistence:(id)arg4;	// IMP=0x00200000000075f8
- (void).cxx_destruct;	// IMP=0x00200000000050c5
@property(copy) CDUnknownBlockType shadowFlushBlock; // @synthesize shadowFlushBlock=_shadowFlushBlock;
@property(retain) NSObject<OS_dispatch_queue> *ckdkvsproxy_queue; // @synthesize ckdkvsproxy_queue=_ckdkvsproxy_queue;
@property(retain) NSObject<OS_dispatch_queue> *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
@property unsigned long long nextFreshnessTime; // @synthesize nextFreshnessTime=_nextFreshnessTime;
@property(retain, nonatomic) NSMutableArray *freshnessCompletions; // @synthesize freshnessCompletions=_freshnessCompletions;
@property _Bool inCallout; // @synthesize inCallout=_inCallout;
@property _Bool shadowEnsurePeerRegistration; // @synthesize shadowEnsurePeerRegistration=_shadowEnsurePeerRegistration;
@property _Bool ensurePeerRegistrationEnqueuedButNotStarted; // @synthesize ensurePeerRegistrationEnqueuedButNotStarted=_ensurePeerRegistrationEnqueuedButNotStarted;
@property _Bool ensurePeerRegistration; // @synthesize ensurePeerRegistration=_ensurePeerRegistration;
@property(retain, nonatomic) NSMutableSet *shadowPendingSyncBackupPeerIDs; // @synthesize shadowPendingSyncBackupPeerIDs=_shadowPendingSyncBackupPeerIDs;
@property(retain, nonatomic) NSMutableSet *pendingSyncBackupPeerIDs; // @synthesize pendingSyncBackupPeerIDs=_pendingSyncBackupPeerIDs;
@property(retain, nonatomic) NSMutableSet *shadowPendingSyncPeerIDs; // @synthesize shadowPendingSyncPeerIDs=_shadowPendingSyncPeerIDs;
@property(retain, nonatomic) NSMutableSet *pendingSyncPeerIDs; // @synthesize pendingSyncPeerIDs=_pendingSyncPeerIDs;
@property(retain, nonatomic) NSString *accountUUID; // @synthesize accountUUID=_accountUUID;
@property(retain, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
@property(retain, nonatomic) NSMutableSet *shadowPendingKeys; // @synthesize shadowPendingKeys=_shadowPendingKeys;
@property(retain, nonatomic) NSMutableSet *pendingKeys; // @synthesize pendingKeys=_pendingKeys;
@property _Bool seenKVSStoreChange; // @synthesize seenKVSStoreChange=_seenKVSStoreChange;
@property(retain, nonatomic) NSMutableSet *unlockedKeys; // @synthesize unlockedKeys=_unlockedKeys;
@property(retain, nonatomic) NSMutableSet *firstUnlockKeys; // @synthesize firstUnlockKeys=_firstUnlockKeys;
@property(retain, nonatomic) NSMutableSet *alwaysKeys; // @synthesize alwaysKeys=_alwaysKeys;
@property(readonly) NSURL *persistenceURL; // @synthesize persistenceURL=_persistenceURL;
@property(readonly) NSObject<CKDLockMonitor> *lockMonitor; // @synthesize lockMonitor=_lockMonitor;
@property(readonly) NSObject<CKDAccount> *account; // @synthesize account=_account;
@property(readonly) NSObject<CKDStore> *store; // @synthesize store=_store;
- (void)processPendingKeysForCurrentLockState;	// IMP=0x0010000000004dcc
- (void)processKeyChangedEvent:(id)arg1;	// IMP=0x0010000000004a85
- (id)copyValues:(id)arg1;	// IMP=0x001000000000497d
- (id)pendKeysAndGetPendingForCurrentLockState:(id)arg1;	// IMP=0x0000000000004947
- (id)pendingKeysForCurrentLockState;	// IMP=0x0010000000004900
- (void)intersectWithCurrentLockState:(id)arg1;	// IMP=0x0010000000004897
- (id)pendKeysAndGetNewlyPended:(id)arg1;	// IMP=0x00100000000047d2
- (id)keysForCurrentLockState;	// IMP=0x00100000000046ed
- (void)unlocked;	// IMP=0x001000000000469f
- (void)locked;	// IMP=0x0010000000004651
- (void)storeAccountChanged;	// IMP=0x0010000000004603
- (void)storeKeysChanged:(id)arg1 initial:(_Bool)arg2;	// IMP=0x0010000000004560
- (void)handleNotification:(const char *)arg1;	// IMP=0x001000000000450e
- (void)_queue_kvsStoreChange;	// IMP=0x00100000000044a9
- (void)_queue_unlocked;	// IMP=0x00100000000043c4
- (void)_queue_locked;	// IMP=0x0010000000004323
- (void)requestEnsurePeerRegistration;	// IMP=0x00100000000042da
- (_Bool)hasPendingKey:(id)arg1;	// IMP=0x0010000000004222
- (_Bool)hasSyncPendingFor:(id)arg1;	// IMP=0x00100000000041b5
- (void)requestSyncWithPeerIDs:(id)arg1 backupPeerIDs:(id)arg2;	// IMP=0x0010000000004018
- (_Bool)hasPendingSyncIDs;	// IMP=0x0010000000003fdf
- (_Bool)hasPendingShadowSyncIDs;	// IMP=0x0010000000003f8f
- (_Bool)hasPendingNonShadowSyncIDs;	// IMP=0x0010000000003f52
- (void)doSyncWithAllPeers;	// IMP=0x0010000000003eb4
- (void)doSyncWithPendingPeers;	// IMP=0x0010000000003e12
- (void)doEnsurePeerRegistration;	// IMP=0x0010000000003d5b
- (void)handlePendingEnsurePeerRegistrationRequests:(_Bool)arg1;	// IMP=0x0010000000003d0a
- (void)sendKeysCallout:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003c78
- (void)calloutWith:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003bd5
- (void)doAfterFlush:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003b8f
- (void)_queue_storeAccountChanged;	// IMP=0x0010000000003a70
- (void)_queue_storeKeysChanged:(id)arg1 initial:(_Bool)arg2;	// IMP=0x001000000000382e
- (void)_queue_handleNotification:(const char *)arg1;	// IMP=0x00100000000037ca
- (void)registerKeys:(id)arg1 forAccount:(id)arg2;	// IMP=0x0010000000003443
- (void)removeKeys:(id)arg1 forAccount:(id)arg2;	// IMP=0x00100000000032ea
- (void)registerAtTimeKeys:(id)arg1;	// IMP=0x001000000000313b
- (id)copyAllKeyInterests;	// IMP=0x00100000000030d9
- (void)waitForSyncDone:(_Bool)arg1 error:(id)arg2;	// IMP=0x0010000000002f7c
- (void)waitForSynchronization:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002da9
- (void)setObjectsFromDictionary:(id)arg1;	// IMP=0x0010000000002d97
- (void)setStoreObjectsFromDictionary:(id)arg1;	// IMP=0x0010000000002917
- (void)perfCounters:(CDUnknownBlockType)arg1;	// IMP=0x00100000000028ae
- (void)persistState;	// IMP=0x001000000000278c
@property(retain, nonatomic) NSDictionary *persistentData;
- (void)dealloc;	// IMP=0x00100000000021b0
- (void)_queue_processAllItems;	// IMP=0x001000000000204e
- (id)copyAsDictionary;	// IMP=0x001000000000200a
- (id)objectForKey:(id)arg1;	// IMP=0x0010000000001f90
- (void)synchronizeStore;	// IMP=0x0010000000001f1a
- (void)clearStore;	// IMP=0x0010000000001edd
@property(readonly, copy) NSString *description;
- (id)initWithAccount:(id)arg1 store:(id)arg2 lockMonitor:(id)arg3 persistence:(id)arg4;	// IMP=0x0010000000001a6f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
