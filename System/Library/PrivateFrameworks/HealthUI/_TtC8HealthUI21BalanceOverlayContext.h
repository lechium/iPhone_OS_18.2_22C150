//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKInteractiveChartOverlayViewController, MISSING_TYPE, NSDateInterval;

__attribute__((visibility("hidden")))
@interface _TtC8HealthUI21BalanceOverlayContext : NSObject
{
    MISSING_TYPE *baseDisplayType;	// 8 = 0x8
    MISSING_TYPE *overlayDisplayType;	// 16 = 0x10
    MISSING_TYPE *currentContextItem;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000039e820
- (id)init;	// IMP=0x000000000039e7c0
- (long long)resolutionForTimeScope:(long long)arg1 traitResolution:(long long)arg2;	// IMP=0x000000000039e760
- (id)contextItemForLastUpdate;	// IMP=0x000000000039e6d0
- (void)updateContextItemForDateInterval:(NSDateInterval *)arg1 overlayController:(HKInteractiveChartOverlayViewController *)arg2 timeScope:(long long)arg3 resolution:(long long)arg4 completion:(void (^)(_Bool, NSError *))arg5;	// IMP=0x000000000039e300
- (id)overlayDisplayTypeForTimeScope:(long long)arg1;	// IMP=0x000000000039e250
- (id)sampleTypeForDateRangeUpdates;	// IMP=0x000000000039e240

@end

