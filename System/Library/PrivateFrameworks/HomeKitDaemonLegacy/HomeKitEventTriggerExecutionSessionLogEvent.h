//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class HMDAnalyticsEventTriggerExecutionSessionData;

__attribute__((visibility("hidden")))
@interface HomeKitEventTriggerExecutionSessionLogEvent : HMMLogEvent
{
    HMDAnalyticsEventTriggerExecutionSessionData *_analyticsData;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000664a13
@property(readonly, nonatomic) HMDAnalyticsEventTriggerExecutionSessionData *analyticsData; // @synthesize analyticsData=_analyticsData;
- (id)initWithStartTime:(double)arg1 sessionID:(id)arg2;	// IMP=0x000000000066490a

@end

