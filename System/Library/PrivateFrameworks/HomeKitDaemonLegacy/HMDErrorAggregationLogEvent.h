//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDErrorAggregationLogEvent : HMMLogEvent
{
    NSDictionary *_coreAnalyticsSerializedEvent;	// 8 = 0x8
}

+ (id)createErrorEventForRequestGroup:(id)arg1 errorString:(id)arg2 errorCount:(id)arg3;	// IMP=0x0010000000c266bf
+ (id)createSummaryEventForRequestGroup:(id)arg1 totalErrorCount:(id)arg2 totalEventCount:(id)arg3;	// IMP=0x0010000000c26628
- (void).cxx_destruct;	// IMP=0x0000000000c26615
@property(readonly, nonatomic) NSDictionary *coreAnalyticsSerializedEvent; // @synthesize coreAnalyticsSerializedEvent=_coreAnalyticsSerializedEvent;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithEventGroupName:(id)arg1 errorString:(id)arg2 errorCount:(id)arg3 eventCount:(id)arg4;	// IMP=0x0000000000c263d1

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
