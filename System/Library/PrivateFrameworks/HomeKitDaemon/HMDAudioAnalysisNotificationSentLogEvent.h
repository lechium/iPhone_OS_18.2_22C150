//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDate, NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAudioAnalysisNotificationSentLogEvent : HMMLogEvent
{
    NSDate *_dateOfOccurrence;	// 8 = 0x8
    unsigned long long _reason;	// 16 = 0x10
    unsigned long long _state;	// 24 = 0x18
}

+ (id)shortDescription;	// IMP=0x0010000000d069c4
- (void).cxx_destruct;	// IMP=0x0000000000d069b1
@property(readonly) unsigned long long state; // @synthesize state=_state;
@property(readonly) unsigned long long reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) NSDate *dateOfOccurrence; // @synthesize dateOfOccurrence=_dateOfOccurrence;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithDate:(id)arg1 reason:(unsigned long long)arg2 state:(unsigned long long)arg3;	// IMP=0x0000000000d067c1

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
