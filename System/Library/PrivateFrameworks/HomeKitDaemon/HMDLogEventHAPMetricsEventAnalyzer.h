//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDEventCountersManager;

__attribute__((visibility("hidden")))
@interface HMDLogEventHAPMetricsEventAnalyzer
{
    HMDEventCountersManager *_eventCountersManager;	// 8 = 0x8
}

+ (id)managedEventCounterRequestGroups;	// IMP=0x0010000000566c24
- (void).cxx_destruct;	// IMP=0x0000000000566c11
@property(readonly) HMDEventCountersManager *eventCountersManager; // @synthesize eventCountersManager=_eventCountersManager;
- (void)resetAggregationAnalysisContext;	// IMP=0x0000000000566bb7
- (void)populateAggregationAnalysisLogEvent:(id)arg1 forDate:(id)arg2;	// IMP=0x0000000000566a15
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x0000000000566790
- (id)initWithEventCountersManager:(id)arg1;	// IMP=0x0000000000566722

@end
