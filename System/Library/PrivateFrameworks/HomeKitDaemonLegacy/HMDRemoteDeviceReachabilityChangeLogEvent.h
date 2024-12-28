//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDRemoteDeviceReachabilityChangeLogEvent : HMMLogEvent
{
    _Bool _reachable;	// 8 = 0x8
    _Bool _targetSupportsIDSPresence;	// 9 = 0x9
    unsigned long long _reason;	// 16 = 0x10
}

@property(readonly) _Bool targetSupportsIDSPresence; // @synthesize targetSupportsIDSPresence=_targetSupportsIDSPresence;
@property(readonly) _Bool reachable; // @synthesize reachable=_reachable;
@property(readonly) unsigned long long reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithReason:(unsigned long long)arg1 reachable:(_Bool)arg2 targetSupportsIDSPresence:(_Bool)arg3;	// IMP=0x00000000004fd0ec

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
