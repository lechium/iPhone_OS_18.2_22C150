//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BLSXPCBacklightProxyObserverMask, NSString, RBSProcessMonitor;
@protocol BLSBacklightProxy, BLSXPCBacklightProxyClientInterface;

__attribute__((visibility("hidden")))
@interface BLSHXPCBacklightProxyHost : NSObject
{
    id <BLSBacklightProxy> _localBacklightProxy;	// 8 = 0x8
    id <BLSXPCBacklightProxyClientInterface> _lock_observingClient;	// 16 = 0x10
    RBSProcessMonitor *_processMonitor;	// 24 = 0x18
    BLSXPCBacklightProxyObserverMask *_lock_observingMask;	// 32 = 0x20
    int _clientPid;	// 40 = 0x28
    unsigned int _entitlements;	// 44 = 0x2c
    struct os_unfair_lock_s _lock;	// 48 = 0x30
    _Bool _lock_clientIsTaskScheduled;	// 52 = 0x34
    _Bool _lock_stateIsStale;	// 53 = 0x35
    _Bool _lock_valid;	// 54 = 0x36
    _Bool _lock_observingDidCompleteUpdateToState;	// 55 = 0x37
    _Bool _lock_observingDidChangeAlwaysOnEnabled;	// 56 = 0x38
    _Bool _lock_observingActivatingWithEvent;	// 57 = 0x39
    _Bool _lock_observingDeactivatingWithEvent;	// 58 = 0x3a
    _Bool _lock_observingPerformingEvent;	// 59 = 0x3b
}

- (void).cxx_destruct;	// IMP=0x00000000000614c7
- (void)backlight:(id)arg1 performingEvent:(id)arg2;	// IMP=0x00000000000614ba
- (_Bool)observesPerformingAllEvents;	// IMP=0x0000000000061474
- (void)backlight:(id)arg1 deactivatingWithEvent:(id)arg2;	// IMP=0x0000000000061467
- (_Bool)observesDeactivation;	// IMP=0x0000000000061421
- (void)backlight:(id)arg1 activatingWithEvent:(id)arg2;	// IMP=0x000000000006138e
- (_Bool)observesActivation;	// IMP=0x0000000000061348
- (void)backlight:(id)arg1 didChangeAlwaysOnEnabled:(_Bool)arg2;	// IMP=0x00000000000612af
- (void)backlight:(id)arg1 didCompleteUpdateToState:(long long)arg2 forEvents:(id)arg3 abortedEvents:(id)arg4;	// IMP=0x000000000006101b
- (oneway void)nowObservingWithMask:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000060217
- (id)performChangeRequest:(id)arg1;	// IMP=0x000000000005fe0c
- (_Bool)deviceSupportsAlwaysOn;	// IMP=0x000000000005fdf6
- (_Bool)isAlwaysOnEnabled;	// IMP=0x000000000005fde0
- (_Bool)isTransitioning;	// IMP=0x000000000005fdca
- (id)getFlipbookState;	// IMP=0x000000000005fd91
- (id)getBacklightState;	// IMP=0x000000000005fd58
- (void)invalidate;	// IMP=0x000000000005fcda
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000005fb9b
- (id)initWithLocalBacklightProxy:(id)arg1 peer:(id)arg2;	// IMP=0x000000000005f9fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

