//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDEventCountersManager;

__attribute__((visibility("hidden")))
@interface HMDLogEventReachabilityEventsAnalyzer
{
    HMDEventCountersManager *_eventCountersManager;	// 8 = 0x8
}

+ (id)managedEventCounterRequestGroups;	// IMP=0x0010000000ba5b8f
- (void).cxx_destruct;	// IMP=0x0000000000ba5b7c
@property(readonly, nonatomic) HMDEventCountersManager *eventCountersManager; // @synthesize eventCountersManager=_eventCountersManager;
- (void)resetAggregationAnalysisContext;	// IMP=0x0000000000ba5b27
- (void)populateAggregationAnalysisLogEvent:(id)arg1 forDate:(id)arg2;	// IMP=0x0000000000ba59ee
- (void)_handleCameraRecordingReachabilityLogEvent:(id)arg1;	// IMP=0x0000000000ba58e2
- (void)_handleRemoteDeviceReachabilityChangedLogEvent:(id)arg1;	// IMP=0x0000000000ba5897
- (void)_handleReachabiltiyAddRemoveEvent:(id)arg1;	// IMP=0x0000000000ba584c
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x0000000000ba56fb
- (id)initWithEventCountersManager:(id)arg1;	// IMP=0x0000000000ba568d

@end
