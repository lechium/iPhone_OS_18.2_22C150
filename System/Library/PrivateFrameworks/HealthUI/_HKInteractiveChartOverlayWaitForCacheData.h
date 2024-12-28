//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKInteractiveChartOverlayViewController, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _HKInteractiveChartOverlayWaitForCacheData : NSObject
{
    HKInteractiveChartOverlayViewController *_overlayController;	// 8 = 0x8
    NSMutableArray *_waitForDataSources;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000010a866
@property(retain, nonatomic) NSMutableArray *waitForDataSources; // @synthesize waitForDataSources=_waitForDataSources;
@property(nonatomic) __weak HKInteractiveChartOverlayViewController *overlayController; // @synthesize overlayController=_overlayController;
- (void)removeWaitForDataSource:(id)arg1;	// IMP=0x000000000010a7bb
- (id)_findDataSource:(id)arg1;	// IMP=0x000000000010a61a
- (void)addWaitForDataSource:(id)arg1 graphSeriesContext:(id)arg2 timeScope:(long long)arg3 resolution:(long long)arg4 startDate:(id)arg5 endDate:(id)arg6 priorityDelegate:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x000000000010a46e
- (id)initWithOverlayController:(id)arg1;	// IMP=0x000000000010a3ec

@end
