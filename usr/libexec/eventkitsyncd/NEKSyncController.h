//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NDTActivity, NEKAnalyticsDriver, NEKEnvironment, NEKProgressLiar, NEKRPCEndpoint, NEKServicesServer, NEKStatTracker, NEKStore, NEKSyncSession, NEKTestControl, NSString, SYService;
@protocol NEKSyncControllerDelegate, OS_dispatch_queue;

@interface NEKSyncController : NSObject
{
    struct os_unfair_lock_s _syServiceLock;	// 8 = 0x8
    SYService *_syncService;	// 16 = 0x10
    _Bool _wasUsingDataTransfer;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_sessionIdleQueue;	// 40 = 0x28
    NEKStore *_eventStore;	// 48 = 0x30
    NEKStore *_reminderStore;	// 56 = 0x38
    NEKSyncSession *_syncSession;	// 64 = 0x40
    NDTActivity *_activity;	// 72 = 0x48
    NEKAnalyticsDriver *_analyticsDriver;	// 80 = 0x50
    CDUnknownBlockType _completion;	// 88 = 0x58
    _Bool _isNightlySync;	// 96 = 0x60
    NEKStatTracker *_resetTimeoutTracker;	// 104 = 0x68
    NEKStatTracker *_deltaTimeoutTracker;	// 112 = 0x70
    NEKStatTracker *_nightlyTimeoutTracker;	// 120 = 0x78
    NEKRPCEndpoint *_rpcEndpoint;	// 128 = 0x80
    NEKProgressLiar *_preemptedSessionProgressLiar;	// 136 = 0x88
    NEKTestControl *_testingControl;	// 144 = 0x90
    NEKEnvironment *_environment;	// 152 = 0x98
    _Atomic int _sessionDepth;	// 160 = 0xa0
    NEKServicesServer *_servicesServer;	// 168 = 0xa8
    _Bool _isPerformingBackupResetSync;	// 176 = 0xb0
    id <NEKSyncControllerDelegate> _delegate;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x002000000004bfc3
@property(nonatomic) _Bool isPerformingBackupResetSync; // @synthesize isPerformingBackupResetSync=_isPerformingBackupResetSync;
@property(readonly, nonatomic) NEKStore *reminderStore; // @synthesize reminderStore=_reminderStore;
@property(readonly, nonatomic) NEKStore *eventStore; // @synthesize eventStore=_eventStore;
@property(nonatomic) __weak id <NEKSyncControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)changeObserverDidObserveTruncation:(id)arg1;	// IMP=0x001000000004be58
- (void)changeObserverDidObserveChanges:(id)arg1;	// IMP=0x001000000004bd45
- (void)prepDatabasesForResetSync;	// IMP=0x001000000004bc46
- (void)recordSuccessForSession:(id)arg1 receiving:(_Bool)arg2;	// IMP=0x001000000004babc
- (void)_recvSessionEnded:(id)arg1 error:(id)arg2;	// IMP=0x001000000004b67e
- (void)_sendSessionEnded:(id)arg1 error:(id)arg2;	// IMP=0x001000000004a60b
- (void)service:(id)arg1 sessionEnded:(id)arg2 error:(id)arg3;	// IMP=0x001000000004a097
- (void)bumpFaultsAndScheduleRetry;	// IMP=0x001000000004a058
- (void)clearRetryState;	// IMP=0x0010000000049fa9
- (void)clearRemoteBuildVersion;	// IMP=0x0010000000049f2c
- (char *)activityIdentifier:(id)arg1;	// IMP=0x0010000000049f1f
- (char *)activitySubsystem:(id)arg1;	// IMP=0x0010000000049f12
- (void)activityDefer:(id)arg1;	// IMP=0x0010000000049e3c
- (void)activityRun:(id)arg1;	// IMP=0x0010000000049e2a
- (void)scheduleDeferredRetry;	// IMP=0x0010000000049e18
- (void)scheduleRetry;	// IMP=0x0010000000049d0d
- (double)_nextDelay:(long long)arg1;	// IMP=0x0010000000049cbe
- (_Bool)_shouldFakeFailure;	// IMP=0x0010000000049c61
- (double)_fullSessionTimeout;	// IMP=0x00100000000499fb
- (void)_startRecvSession:(id)arg1 results:(struct StartSessionResults *)arg2;	// IMP=0x0010000000049935
- (void)_startSendSession:(id)arg1 results:(struct StartSessionResults *)arg2;	// IMP=0x0010000000048a6f
- (_Bool)service:(id)arg1 startSession:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000483e4
- (double)getFixedRetryInternal;	// IMP=0x0010000000048393
- (double)getFailureProbablity;	// IMP=0x0010000000048342
- (double)getMaximumSessionTimeout;	// IMP=0x00100000000482f1
- (double)getMinimumSessionTimeout;	// IMP=0x00100000000482a0
- (void)tc_setFixedRetryInternal:(double)arg1;	// IMP=0x0010000000048250
- (void)tc_setFailureProbablity:(double)arg1;	// IMP=0x00100000000481fb
- (void)tc_setMaximumSessionTimeout:(double)arg1;	// IMP=0x00100000000481ab
- (void)tc_setMinimumSessionTimeout:(double)arg1;	// IMP=0x001000000004815b
- (void)tc_requestReset;	// IMP=0x0010000000048149
- (void)tc_requestDelta;	// IMP=0x0010000000048133
- (void)tc_setObjectDelay:(double)arg1;	// IMP=0x00100000000480b8
- (void)tc_advanceChangeNumber;	// IMP=0x0010000000048068
- (void)tc_setAutomaticSync:(_Bool)arg1;	// IMP=0x0010000000047feb
- (void)tc_setNominal;	// IMP=0x0010000000047f66
- (void)tc_status:(CDUnknownBlockType)arg1;	// IMP=0x0010000000047c9a
- (_Bool)_clearToDeltaSync;	// IMP=0x0010000000047bf1
- (id)service:(id)arg1 willPreferSession:(id)arg2 overSession:(id)arg3;	// IMP=0x0010000000047941
- (void)_retrySession:(id)arg1;	// IMP=0x00100000000478ff
@property(readonly, nonatomic) _Bool isCurrentlySyncing;
- (void)_deleteWronglyImmutableCalendars;	// IMP=0x00100000000478eb
- (void)_setFaultCount:(long long)arg1;	// IMP=0x0010000000047873
- (long long)_faultCount;	// IMP=0x00100000000477f9
- (long long)maxDeltaRetries;	// IMP=0x00100000000477c3
- (void)deleteSYObject:(id)arg1 eventStore:(id)arg2 reminderStore:(id)arg3;	// IMP=0x00100000000477b1
- (void)_deleteSYObject:(id)arg1 eventStore:(id)arg2 reminderStore:(id)arg3;	// IMP=0x00100000000474fd
- (void)createOrUpdateSYObject:(id)arg1 eventStore:(id)arg2 reminderStore:(id)arg3 session:(id)arg4;	// IMP=0x001000000004681e
- (void)_retrySync;	// IMP=0x00100000000464c8
- (void)setNeedsMigrationSync;	// IMP=0x00100000000462f4
- (void)setNeedsNightlySync;	// IMP=0x0010000000046214
- (void)setNeedsReunionSync;	// IMP=0x00100000000460fd
- (void)setNeedsFullSync;	// IMP=0x001000000004601b
- (id)environment;	// IMP=0x0010000000046002
- (void)start;	// IMP=0x0010000000045b70
- (_Bool)_canUseDataTransfer;	// IMP=0x0010000000045a58
- (void)_setClipping:(id)arg1;	// IMP=0x00100000000459d3
- (id)initWithEnvironment:(id)arg1;	// IMP=0x0010000000045566

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
