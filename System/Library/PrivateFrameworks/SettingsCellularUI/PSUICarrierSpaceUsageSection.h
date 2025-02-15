//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CTCarrierSpaceUsageAccountMetrics, CTCarrierSpaceUsagePlanMetrics, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface PSUICarrierSpaceUsageSection : NSObject
{
    NSString *_sharedPlanIdentifier;	// 8 = 0x8
    CTCarrierSpaceUsagePlanMetrics *_primaryMetrics;	// 16 = 0x10
    CTCarrierSpaceUsageAccountMetrics *_accountMetrics;	// 24 = 0x18
    NSMutableArray *_otherMetrics;	// 32 = 0x20
    NSMutableArray *_barCategories;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000179db
@property(retain) NSMutableArray *barCategories; // @synthesize barCategories=_barCategories;
@property(retain) NSMutableArray *otherMetrics; // @synthesize otherMetrics=_otherMetrics;
@property(retain) CTCarrierSpaceUsageAccountMetrics *accountMetrics; // @synthesize accountMetrics=_accountMetrics;
@property(retain) CTCarrierSpaceUsagePlanMetrics *primaryMetrics; // @synthesize primaryMetrics=_primaryMetrics;
@property(retain) NSString *sharedPlanIdentifier; // @synthesize sharedPlanIdentifier=_sharedPlanIdentifier;
- (id)description;	// IMP=0x0000000000017787
- (_Bool)isSharedPlan;	// IMP=0x0000000000017706

@end

