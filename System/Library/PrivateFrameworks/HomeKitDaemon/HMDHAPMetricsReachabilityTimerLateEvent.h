//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

__attribute__((visibility("hidden")))
@interface HMDHAPMetricsReachabilityTimerLateEvent
{
    NSNumber *_actualDuration;	// 8 = 0x8
    NSNumber *_expectedDuration;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000084fe8e
@property(readonly, nonatomic) NSNumber *expectedDuration; // @synthesize expectedDuration=_expectedDuration;
@property(readonly, nonatomic) NSNumber *actualDuration; // @synthesize actualDuration=_actualDuration;
- (id)coreAnalyticsEventDictionary;	// IMP=0x000000000084fd13
- (id)coreAnalyticsEventName;	// IMP=0x000000000084fd06
- (id)initWithAccessory:(id)arg1 actualDuration:(id)arg2 expectedDuration:(id)arg3;	// IMP=0x000000000084fc5e

@end
