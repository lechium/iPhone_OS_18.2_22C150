//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDEventCountersManager, NSMutableDictionary, NSString;
@protocol HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDWidgetTimelineRefresherEventsAnalyzer
{
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 8 = 0x8
    NSMutableDictionary *_widgetRefreshReasonCounterGroupByKind;	// 16 = 0x10
    HMDEventCountersManager *_eventCountersManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000004a03c2
@property(readonly, nonatomic) HMDEventCountersManager *eventCountersManager; // @synthesize eventCountersManager=_eventCountersManager;
@property(readonly, nonatomic) NSMutableDictionary *widgetRefreshReasonCounterGroupByKind; // @synthesize widgetRefreshReasonCounterGroupByKind=_widgetRefreshReasonCounterGroupByKind;
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
- (void)resetAggregationAnalysisContext;	// IMP=0x00000000004a034b
- (void)populateAggregationAnalysisLogEvent:(id)arg1 forDate:(id)arg2;	// IMP=0x00000000004a0215
- (void)runDailyTask;	// IMP=0x00000000004a0197
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x000000000049ffaf
- (id)initWithEventCountersManager:(id)arg1 logEventSubmitter:(id)arg2 widgetKinds:(id)arg3 dailyScheduler:(id)arg4;	// IMP=0x000000000049fccf
- (id)initWithEventCountersManager:(id)arg1 logEventSubmitter:(id)arg2 dailyScheduler:(id)arg3;	// IMP=0x000000000049fb8e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

