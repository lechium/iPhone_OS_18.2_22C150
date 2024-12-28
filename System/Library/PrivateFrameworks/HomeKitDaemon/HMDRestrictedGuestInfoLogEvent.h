//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMHomeLogEvent.h>

@class MISSING_TYPE, NSDictionary, NSString;

@interface HMDRestrictedGuestInfoLogEvent : HMMHomeLogEvent
{
    MISSING_TYPE *hasHomeKey;	// 8 = 0x8
    MISSING_TYPE *hasPinCode;	// 9 = 0x9
    MISSING_TYPE *isChildWatch;	// 10 = 0xa
    MISSING_TYPE *numberOfAccessories;	// 16 = 0x10
    MISSING_TYPE *numberOfSchedules;	// 24 = 0x18
    MISSING_TYPE *scheduleType;	// 32 = 0x20
    MISSING_TYPE *coreAnalyticsEventName;	// 40 = 0x28
    MISSING_TYPE *coreAnalyticsEventOptions;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000001c500
- (id)initWithStartTime:(double)arg1 homeUUID:(id)arg2;	// IMP=0x000000000001c470
- (id)initWithHomeUUID:(id)arg1;	// IMP=0x000000000001c2b0
@property(nonatomic) unsigned long long coreAnalyticsEventOptions; // @synthesize coreAnalyticsEventOptions;
@property(nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;
@property(nonatomic, copy) NSString *coreAnalyticsEventName;
@property(nonatomic) unsigned long long scheduleType; // @synthesize scheduleType;
@property(nonatomic) long long numberOfSchedules; // @synthesize numberOfSchedules;
@property(nonatomic) long long numberOfAccessories; // @synthesize numberOfAccessories;
@property(nonatomic) _Bool isChildWatch; // @synthesize isChildWatch;
@property(nonatomic) _Bool hasPinCode; // @synthesize hasPinCode;
@property(nonatomic) _Bool hasHomeKey; // @synthesize hasHomeKey;

@end
