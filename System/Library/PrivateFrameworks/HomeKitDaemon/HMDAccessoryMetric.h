//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessory, HMDAccessoryDiagnosticsMetric, HMDAccessorySessionMetric, HMFTimer, NSArray, NSDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessoryMetric : HMFObject
{
    HMDAccessorySessionMetric *_sessionMetric;	// 8 = 0x8
    HMDAccessoryDiagnosticsMetric *_diagnosticsMetric;	// 16 = 0x10
    HMDAccessory *_accessory;	// 24 = 0x18
    HMFTimer *_accessoryMetricTimer;	// 32 = 0x20
    double _timerInterval;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    NSArray *_deltaCounters;	// 56 = 0x38
    NSDictionary *_previousDiagnosticMetrics;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x0010000000768f5c
- (void).cxx_destruct;	// IMP=0x0000000000768985
@property(retain, nonatomic) NSDictionary *previousDiagnosticMetrics; // @synthesize previousDiagnosticMetrics=_previousDiagnosticMetrics;
@property(readonly, nonatomic) NSArray *deltaCounters; // @synthesize deltaCounters=_deltaCounters;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) double timerInterval; // @synthesize timerInterval=_timerInterval;
@property(retain, nonatomic) HMFTimer *accessoryMetricTimer; // @synthesize accessoryMetricTimer=_accessoryMetricTimer;
@property(readonly) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) HMDAccessoryDiagnosticsMetric *diagnosticsMetric; // @synthesize diagnosticsMetric=_diagnosticsMetric;
@property(readonly, nonatomic) HMDAccessorySessionMetric *sessionMetric; // @synthesize sessionMetric=_sessionMetric;
- (id)logIdentifier;	// IMP=0x0000000000768815
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000768184
- (void)submitMetricAndStop;	// IMP=0x000000000076810b
- (void)_initDiagnosticCounters;	// IMP=0x0000000000767ec5
- (id)initWithAccessory:(id)arg1;	// IMP=0x0000000000767bb3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

