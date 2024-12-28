//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDActiveXPCClientConnectionsManager, HMFTimer, NSObject, NSSet, NSString;
@protocol HMDActiveXPCClientConnectionsPeriodicTimerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDActiveXPCClientConnectionsPeriodicTimer : HMFObject
{
    NSString *_logIdentifier;	// 8 = 0x8
    double _timeInterval;	// 16 = 0x10
    id <HMDActiveXPCClientConnectionsPeriodicTimerDelegate> _delegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    HMFTimer *_timer;	// 40 = 0x28
    HMDActiveXPCClientConnectionsManager *_clientConnectionsManager;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x0010000000627685
- (void).cxx_destruct;	// IMP=0x000000000062760e
@property(readonly) HMDActiveXPCClientConnectionsManager *clientConnectionsManager; // @synthesize clientConnectionsManager=_clientConnectionsManager;
@property(readonly) HMFTimer *timer; // @synthesize timer=_timer;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak id <HMDActiveXPCClientConnectionsPeriodicTimerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000006273ec
- (void)clientConnectionsManager:(id)arg1 didHandleDeactivationForClientConnection:(id)arg2;	// IMP=0x0000000000627399
- (void)clientConnectionsManager:(id)arg1 didHandleActivationForClientConnection:(id)arg2;	// IMP=0x0000000000627346
- (void)_updateTimer;	// IMP=0x0000000000627101
- (void)_configure;	// IMP=0x0000000000626f7c
- (void)removeClientConnection:(id)arg1;	// IMP=0x0000000000626ee4
- (void)addClientConnection:(id)arg1;	// IMP=0x0000000000626e3f
@property(readonly, copy) NSSet *clientConnections;
- (id)initWithTimer:(id)arg1 clientConnectionsManager:(id)arg2 logIdentifier:(id)arg3 workQueue:(id)arg4;	// IMP=0x0000000000626c4e
- (id)initWithTimeInterval:(double)arg1 logIdentifier:(id)arg2 workQueue:(id)arg3;	// IMP=0x0000000000626b73

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
