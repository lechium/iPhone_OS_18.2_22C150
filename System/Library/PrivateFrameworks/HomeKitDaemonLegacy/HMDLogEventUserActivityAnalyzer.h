//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDEventCounterGroup, HMDTimeBasedFlagsManager;

__attribute__((visibility("hidden")))
@interface HMDLogEventUserActivityAnalyzer
{
    HMDTimeBasedFlagsManager *_flagsManager;	// 8 = 0x8
    HMDEventCounterGroup *_counterGroup;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x001000000040cd53
+ (id)managedEventCounterRequestGroups;	// IMP=0x001000000040ccec
- (void).cxx_destruct;	// IMP=0x000000000040ccbb
@property(readonly, nonatomic) HMDEventCounterGroup *counterGroup; // @synthesize counterGroup=_counterGroup;
@property(readonly, nonatomic) HMDTimeBasedFlagsManager *flagsManager; // @synthesize flagsManager=_flagsManager;
- (void)finishCoalescingLogEvent:(id)arg1;	// IMP=0x000000000040cbc9
- (void)coalesceLogEvent:(id)arg1 fromSourceEvent:(id)arg2;	// IMP=0x000000000040c856
- (void)contributeLogEvent:(id)arg1 toCoreAnalyticsEvent:(id)arg2;	// IMP=0x000000000040c06c
- (void)deserializeLogEvent:(id)arg1 fromSerializedMetric:(id)arg2;	// IMP=0x000000000040b79a
- (void)contributeLogEvent:(id)arg1 toSerializedMetric:(id)arg2;	// IMP=0x000000000040b268
- (void)populateLogEvent:(id)arg1 forHomeWithUUID:(id)arg2 associatedToDate:(id)arg3;	// IMP=0x000000000040af23
- (void)resetAggregationAnalysisContext;	// IMP=0x000000000040aee6
- (void)populateAggregationAnalysisLogEvent:(id)arg1 forDate:(id)arg2;	// IMP=0x000000000040a41d
- (void)markActiveForEventName:(id)arg1 logEvent:(id)arg2;	// IMP=0x000000000040a25f
- (_Bool)_isTriggerSource:(unsigned long long)arg1;	// IMP=0x000000000040a24e
- (_Bool)_isUserSource:(unsigned long long)arg1;	// IMP=0x000000000040a23b
- (void)_handleCameraClipRequestLogEvent:(id)arg1;	// IMP=0x000000000040a1b2
- (void)_handleCameraStreamLogEvent:(id)arg1;	// IMP=0x000000000040a109
- (void)_handleActionSetRunLogEvent:(id)arg1;	// IMP=0x000000000040a021
- (void)_handleAddTriggerLogEvent:(id)arg1;	// IMP=0x0000000000409fc2
- (void)_handleAddActionSetLogEvent:(id)arg1;	// IMP=0x0000000000409f17
- (void)_handleAccessoryPairingLogEvent:(id)arg1;	// IMP=0x0000000000409e81
- (void)updateLinkTypeActivityCountsForReadWriteLogEvent:(id)arg1;	// IMP=0x0000000000409ba0
- (void)_handleReadWriteLogEvent:(id)arg1;	// IMP=0x000000000040991f
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x00000000004095e7
- (id)initWithEventCountersManager:(id)arg1 flagsManager:(id)arg2 dateProvider:(id)arg3;	// IMP=0x0000000000409516

@end

