//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDEventCountersManager;
@protocol HMMRadarInitiating;

__attribute__((visibility("hidden")))
@interface HMDLogEventProcessMemoryEventsAnalyzer
{
    HMDEventCountersManager *_eventCountersManager;	// 8 = 0x8
    id <HMMRadarInitiating> _radarInitiator;	// 16 = 0x10
}

+ (id)managedEventCounterRequestGroups;	// IMP=0x0010000000a4927b
- (void).cxx_destruct;	// IMP=0x0000000000a4924a
@property(readonly) id <HMMRadarInitiating> radarInitiator; // @synthesize radarInitiator=_radarInitiator;
@property(readonly) HMDEventCountersManager *eventCountersManager; // @synthesize eventCountersManager=_eventCountersManager;
- (void)resetAggregationAnalysisContext;	// IMP=0x0000000000a491da
- (void)populateAggregationAnalysisLogEvent:(id)arg1 forDate:(id)arg2;	// IMP=0x0000000000a4909d
- (void)_handleMemorySampleLogEvent:(id)arg1;	// IMP=0x0000000000a48f21
- (void)_handleMemoryPressureNotificationLogEvent:(id)arg1;	// IMP=0x0000000000a48dc8
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x0000000000a48cf1
@property(readonly) unsigned long long storedPeakProcessMemoryKB;
@property(readonly) unsigned long long storedAverageProcessMemoryKB;
- (id)initWithDataSource:(id)arg1;	// IMP=0x0000000000a48ade

@end

