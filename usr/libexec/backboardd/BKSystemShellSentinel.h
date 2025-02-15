//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSystemAppHeartbeat, BKSystemShellClient, BKSystemShellControlServiceListener, BKSystemShellDescriptor, BKSystemShellServiceListener, BSCompoundAssertion, NSArray, NSMapTable, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSSet, NSString;

@interface BKSystemShellSentinel : NSObject
{
    BKSystemShellServiceListener *_shellListener;	// 8 = 0x8
    BKSystemShellControlServiceListener *_controlListener;	// 16 = 0x10
    BKSystemAppHeartbeat *_heartbeat;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    BKSystemShellClient *_lock_systemApp;	// 40 = 0x28
    NSMutableDictionary *_lock_pidToClient;	// 48 = 0x30
    NSMutableOrderedSet *_lock_connectedSystemApps;	// 56 = 0x38
    NSMutableSet *_lock_shellsFinishedStartup;	// 64 = 0x40
    NSMapTable *_lock_checkinCompletionsBySystemApp;	// 72 = 0x48
    _Bool _lock_systemAppBlocked;	// 80 = 0x50
    NSString *_lock_activeAlternateSystemAppBundleIdentifier;	// 88 = 0x58
    NSString *_lock_activeAlternateSystemAppJobLabel;	// 96 = 0x60
    struct os_unfair_lock_s _collectivePingDataLock;	// 104 = 0x68
    NSMutableSet *_collectivePingDataLock_collectivePingShells;	// 112 = 0x70
    BSCompoundAssertion *_observers;	// 120 = 0x78
}

+ (id)dataMigrationQueue;	// IMP=0x002000000007891e
+ (id)sharedInstance;	// IMP=0x00100000000788ee
- (void).cxx_destruct;	// IMP=0x0020000000078495
- (void)terminateShellWithJobLabel:(id)arg1;	// IMP=0x0010000000078129
- (oneway void)setWatchdogMonitoringEnabled:(id)arg1;	// IMP=0x00100000000780aa
- (oneway void)restartWithOptions:(id)arg1;	// IMP=0x0010000000078011
- (oneway void)finishedLaunching;	// IMP=0x0010000000077cb4
- (void)checkInBypassingDataMigrationUsingCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000077c61
- (void)checkInAfterDataMigrationUsingCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000077bce
- (void)_lock_checkInWithRemoteCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000077a43
- (void)_lock_completeCheckInForShell:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000777bf
- (void)_lock_completeCheckInForShell:(id)arg1;	// IMP=0x0010000000077609
- (_Bool)_lock_unblockSystemApp;	// IMP=0x0010000000077563
- (_Bool)_lock_blockSystemApp;	// IMP=0x0010000000077202
- (void)_lock_handleRelaunchRequestFromSystemApp:(id)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x00100000000770fd
- (void)_lock_updatePrimarySystemApp;	// IMP=0x001000000007696a
- (void)_lock_bootstrapSystemApp;	// IMP=0x00100000000767ef
- (id)_lock_currentConnectionShell;	// IMP=0x0010000000076716
- (_Bool)_pingSystemShellForCollectiveWatchdog:(id)arg1;	// IMP=0x0010000000076520
- (id)_collectivePingSystemShellSet;	// IMP=0x00100000000764e2
- (void)_removeSystemShellFromCollectivePingSet:(id)arg1;	// IMP=0x001000000007648e
- (void)_addSystemShellToCollectivePingSet:(id)arg1;	// IMP=0x0010000000076417
- (id)systemApp;	// IMP=0x0010000000076405
- (id)systemApplications;	// IMP=0x00100000000763f3
- (void)systemShellDidTerminate:(int)arg1;	// IMP=0x00100000000761ed
- (void)systemShellDidConnect:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000075ee4
- (_Bool)unblockSystemApp;	// IMP=0x0010000000075ead
- (_Bool)blockSystemApp;	// IMP=0x0010000000075e76
- (_Bool)collectiveWatchdogPing;	// IMP=0x0010000000075c41
- (void)dataMigratorDidComplete;	// IMP=0x0010000000075aca
- (void)startServerWithDataMigration;	// IMP=0x0010000000075ab4
- (void)startServerWithoutDataMigration;	// IMP=0x0010000000075a79
- (id)systemShellState;	// IMP=0x0010000000075935
@property(readonly, copy, nonatomic) NSSet *shellsFinishedStartup;
@property(readonly, copy, nonatomic) NSArray *systemShells;
@property(readonly, copy, nonatomic) BKSystemShellDescriptor *primarySystemShell;
@property(copy) NSString *activeAlternateSystemAppBundleIdentifier;
- (_Bool)auditTokenRepresentsSystemApp:(CDStruct_6ad76789 *)arg1;	// IMP=0x00100000000756cb
- (id)addSystemShellObserver:(id)arg1 reason:(id)arg2;	// IMP=0x00100000000756ac
@property(readonly, copy) NSString *description;
- (void)invalidate;	// IMP=0x001000000007558b
- (id)init;	// IMP=0x00100000000753c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

