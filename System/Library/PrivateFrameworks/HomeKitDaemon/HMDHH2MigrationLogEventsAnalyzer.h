//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCounterThresholdTTRTrigger, HMDEventCounterGroup, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHH2MigrationLogEventsAnalyzer
{
    HMDCounterThresholdTTRTrigger *_migrationFailureTTRTrigger;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    HMDEventCounterGroup *_counterGroup;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000b70479
@property(readonly, nonatomic) HMDEventCounterGroup *counterGroup; // @synthesize counterGroup=_counterGroup;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) HMDCounterThresholdTTRTrigger *migrationFailureTTRTrigger; // @synthesize migrationFailureTTRTrigger=_migrationFailureTTRTrigger;
- (void)runDailyTask;	// IMP=0x0000000000b703d0
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x0000000000b7033c
- (id)initWithDataSource:(id)arg1;	// IMP=0x0000000000b701c7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
