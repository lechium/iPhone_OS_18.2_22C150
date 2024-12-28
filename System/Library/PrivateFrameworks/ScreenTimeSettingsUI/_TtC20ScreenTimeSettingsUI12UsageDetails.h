//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSDate, NSDictionary;

@interface _TtC20ScreenTimeSettingsUI12UsageDetails : NSObject
{
    MISSING_TYPE *usageItems;	// 8 = 0x8
    MISSING_TYPE *firstPickupByWeekdayByWeek;	// 3 = 0x3
}

+ (id)detailsForUserWithAltDSID:(id)arg1 deviceActivityIdentifier:(id)arg2 dateInterval:(id)arg3 referenceDate:(id)arg4 usageContext:(long long)arg5 error:(id *)arg6;	// IMP=0x00400000000f33b0
+ (id)earliestUsageDateForUserWithAltDSID:(id)arg1 deviceActivityIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00400000000f31a0
+ (id)webUsageItemIdentifier;	// IMP=0x00400000000f2ac0
+ (id)screenTimeUsageItemIdentifier;	// IMP=0x00400000000f2a60
+ (id)notificationUsageItemIdentifier;	// IMP=0x00400000000f2a00
+ (id)pickupUsageItemIdentifier;	// IMP=0x00400000000f29a0
+ (id)categoryUsageItemIdentifier;	// IMP=0x00400000000f2940
+ (id)appUsageItemIdentifier;	// IMP=0x00400000000f28e0
- (void).cxx_destruct;	// IMP=0x00000000000f2860
- (id)init;	// IMP=0x00000000000f27d0
@property(nonatomic, readonly) NSDictionary *firstPickupByWeekdayByWeek;
@property(nonatomic, readonly) NSDate *lastUpdatedDate;
@property(nonatomic, readonly) NSArray *usageItems;

@end
