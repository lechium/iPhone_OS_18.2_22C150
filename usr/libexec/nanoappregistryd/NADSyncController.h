//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NADApplicationStore, NADSyncSession, NSLock, NSString, PSYSyncCoordinator, SYService;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NADSyncController : NSObject
{
    NADApplicationStore *_applicationStore;	// 8 = 0x8
    NADSyncSession *_syncSession;	// 16 = 0x10
    SYService *_service;	// 24 = 0x18
    PSYSyncCoordinator *_pairedSyncCoordinator;	// 32 = 0x20
    NSLock *_timerLock;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_pairedSyncWatchdogQueue;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_pairedSyncWatchdogTimer;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000006ce9
@property(retain, nonatomic) NSObject<OS_dispatch_source> *pairedSyncWatchdogTimer; // @synthesize pairedSyncWatchdogTimer=_pairedSyncWatchdogTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pairedSyncWatchdogQueue; // @synthesize pairedSyncWatchdogQueue=_pairedSyncWatchdogQueue;
@property(retain, nonatomic) NSLock *timerLock; // @synthesize timerLock=_timerLock;
@property(retain, nonatomic) PSYSyncCoordinator *pairedSyncCoordinator; // @synthesize pairedSyncCoordinator=_pairedSyncCoordinator;
@property(retain, nonatomic) SYService *service; // @synthesize service=_service;
@property(retain, nonatomic) NADSyncSession *syncSession; // @synthesize syncSession=_syncSession;
@property(readonly, nonatomic) NADApplicationStore *applicationStore; // @synthesize applicationStore=_applicationStore;
- (void)performBlockWithWatchdogTimerLock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006b9c
- (void)scheduleWatchdogTimer;	// IMP=0x0010000000006a42
- (void)lock_cancelWatchdogTimer;	// IMP=0x00100000000069ba
- (void)cancelWatchdogTimer;	// IMP=0x00100000000068f7
- (void)pairedSyncWatchdogTimerFired;	// IMP=0x0010000000006757
- (_Bool)shouldStartSyncSessionForReunionSync:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000006390
- (_Bool)shouldStartSyncSession:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000006024
- (_Bool)needToCoordinatePairedSyncSessionForDevice:(id)arg1;	// IMP=0x0010000000005faa
- (_Bool)canCoordinatePairedSyncSessionForDevice:(id)arg1;	// IMP=0x0010000000005f91
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;	// IMP=0x0010000000005d67
- (void)syncSessionDidUpdateProgress:(id)arg1;	// IMP=0x0010000000005c77
- (void)service:(id)arg1 sessionEnded:(id)arg2 error:(id)arg3;	// IMP=0x0010000000005979
- (_Bool)service:(id)arg1 startSession:(id)arg2 error:(id *)arg3;	// IMP=0x001000000000552d
- (void)completeSessionWorkWithPairedSyncSuccess:(_Bool)arg1 error:(id)arg2 notifyAssistant:(_Bool)arg3;	// IMP=0x00100000000053ba
- (id)initWithApplicationStore:(id)arg1;	// IMP=0x0010000000004ef4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
