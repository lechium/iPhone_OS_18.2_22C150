//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDUserActivityType3StateDailyCountLogEvent : HMMLogEvent
{
    unsigned long long _totalManualScheduleUpdateCount;	// 8 = 0x8
    unsigned long long _totalAutomaticScheduleStateUpdateCount;	// 16 = 0x10
    unsigned long long _totalManualFocusUpdateCount;	// 24 = 0x18
    unsigned long long _enterType5ByManualScheduleUpdateCount;	// 32 = 0x20
    unsigned long long _enterType5ByAutomaticScheduleStateUpdateCount;	// 40 = 0x28
    unsigned long long _enterType5ByManualFocusUpdateCount;	// 48 = 0x30
    unsigned long long _enterTransitionByManualScheduleUpdateCount;	// 56 = 0x38
    unsigned long long _enterTransitionByAutomaticScheduleStateUpdateCount;	// 64 = 0x40
    unsigned long long _enterTransitionByManualFocusUpdateCount;	// 72 = 0x48
}

@property(readonly, nonatomic) unsigned long long enterTransitionByManualFocusUpdateCount; // @synthesize enterTransitionByManualFocusUpdateCount=_enterTransitionByManualFocusUpdateCount;
@property(readonly, nonatomic) unsigned long long enterTransitionByAutomaticScheduleStateUpdateCount; // @synthesize enterTransitionByAutomaticScheduleStateUpdateCount=_enterTransitionByAutomaticScheduleStateUpdateCount;
@property(readonly, nonatomic) unsigned long long enterTransitionByManualScheduleUpdateCount; // @synthesize enterTransitionByManualScheduleUpdateCount=_enterTransitionByManualScheduleUpdateCount;
@property(readonly, nonatomic) unsigned long long enterType5ByManualFocusUpdateCount; // @synthesize enterType5ByManualFocusUpdateCount=_enterType5ByManualFocusUpdateCount;
@property(readonly, nonatomic) unsigned long long enterType5ByAutomaticScheduleStateUpdateCount; // @synthesize enterType5ByAutomaticScheduleStateUpdateCount=_enterType5ByAutomaticScheduleStateUpdateCount;
@property(readonly, nonatomic) unsigned long long enterType5ByManualScheduleUpdateCount; // @synthesize enterType5ByManualScheduleUpdateCount=_enterType5ByManualScheduleUpdateCount;
@property(readonly, nonatomic) unsigned long long totalManualFocusUpdateCount; // @synthesize totalManualFocusUpdateCount=_totalManualFocusUpdateCount;
@property(readonly, nonatomic) unsigned long long totalAutomaticScheduleStateUpdateCount; // @synthesize totalAutomaticScheduleStateUpdateCount=_totalAutomaticScheduleStateUpdateCount;
@property(readonly, nonatomic) unsigned long long totalManualScheduleUpdateCount; // @synthesize totalManualScheduleUpdateCount=_totalManualScheduleUpdateCount;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithTotalManualScheduleUpdateCount:(unsigned long long)arg1 totalAutomaticScheduleStateUpdateCount:(unsigned long long)arg2 totalManualFocusUpdateCount:(unsigned long long)arg3 enterType5ByManualScheduleUpdateCount:(unsigned long long)arg4 enterType5ByAutomaticScheduleStateUpdateCount:(unsigned long long)arg5 enterType5ByManualFocusUpdateCount:(unsigned long long)arg6 enterTransitionByManualScheduleUpdateCount:(unsigned long long)arg7 enterTransitionByAutomaticScheduleStateUpdateCount:(unsigned long long)arg8 enterTransitionByManualFocusUpdateCount:(unsigned long long)arg9;	// IMP=0x0000000000b462cf

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSUUID",?,R,N

@property(readonly) Class superclass;

@end
