//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKIOHIDService, BKIOHIDServiceMatcher, BSCompoundAssertion, CMDeviceOrientationManager, NSMutableDictionary, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface BKOrientationManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_observerCalloutQueue;	// 16 = 0x10
    BSCompoundAssertion *_observers;	// 24 = 0x18
    NSMutableDictionary *_queue_processDeathWatchers;	// 32 = 0x20
    double _queue_updateInterval;	// 40 = 0x28
    float _queue_interruptEventThresholds;	// 48 = 0x30
    _Bool _queue_isOrientationEventsEnabled;	// 52 = 0x34
    long long _queue_lastUnambiguousRawAccelerometerDeviceOrientation;	// 56 = 0x38
    long long _queue_currentUserInterfaceOrientation;	// 64 = 0x40
    long long _queue_currentRawAccelerometerDeviceOrientation;	// 72 = 0x48
    long long _queue_lastEffectiveInterfaceOrientation;	// 80 = 0x50
    long long _queue_effectiveDeviceOrientation;	// 88 = 0x58
    unsigned long long _queue_orientationLocksEnabled;	// 96 = 0x60
    _Bool _queue_ignoreAccelerometerAndOrientationEventsForTesting;	// 104 = 0x68
    NSOperationQueue *_queue_orientationManagerOperationQueue;	// 112 = 0x70
    CMDeviceOrientationManager *_queue_orientationManager;	// 120 = 0x78
    BKIOHIDService *_queue_HIDService;	// 128 = 0x80
    BKIOHIDServiceMatcher *_queue_HIDServiceMatcher;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_notifyQueue;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0020000000098673
- (void)serviceDidDisappear:(id)arg1;	// IMP=0x0010000000098603
- (void)matcher:(id)arg1 servicesDidMatch:(id)arg2;	// IMP=0x001000000009856b
- (void)dealloc;	// IMP=0x00100000000984d8
- (id)_initWithDeviceOrientationManager:(id)arg1;	// IMP=0x00100000000981f8
- (id)init;	// IMP=0x00100000000981b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

