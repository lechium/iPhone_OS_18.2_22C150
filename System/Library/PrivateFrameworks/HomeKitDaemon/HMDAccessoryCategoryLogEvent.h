//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMHomeLogEvent.h>

@class NSData, NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAccessoryCategoryLogEvent : HMMHomeLogEvent
{
    _Bool _isDenominatorSpecifying;	// 8 = 0x8
    unsigned long long _accessoryDetailsType;	// 16 = 0x10
    NSString *_accessoryCategoryIdentifier;	// 24 = 0x18
}

+ (id)denominatorSpecifyingEvent;	// IMP=0x00100000005a6af4
- (void).cxx_destruct;	// IMP=0x00000000005a6ae1
@property(readonly) _Bool isDenominatorSpecifying; // @synthesize isDenominatorSpecifying=_isDenominatorSpecifying;
@property(readonly, nonatomic) NSString *accessoryCategoryIdentifier; // @synthesize accessoryCategoryIdentifier=_accessoryCategoryIdentifier;
@property(readonly) unsigned long long accessoryDetailsType; // @synthesize accessoryDetailsType=_accessoryDetailsType;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property(readonly, nonatomic) NSData *sampledData;
@property(readonly, nonatomic) NSUUID *sampledUUID;
@property(readonly, nonatomic) NSString *sampledCategory;
@property(readonly) _Bool enableEventFilterSpecifying;
- (id)initWithAccessoryDetailsType:(unsigned long long)arg1 accessoryCategoryIdentifier:(id)arg2 homeUUID:(id)arg3;	// IMP=0x00000000005a67ee

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

