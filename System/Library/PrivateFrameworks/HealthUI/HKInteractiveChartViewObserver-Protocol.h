//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/NSObject-Protocol.h>

@class HKValueRange, NSArray;

@protocol HKInteractiveChartViewObserver <NSObject>

@optional
- (void)didUpdateSeriesWithNewValueRange:(HKValueRange *)arg1;
- (void)configureDisplayTypes:(NSArray *)arg1 timeScope:(long long)arg2 stackOffset:(long long)arg3;
- (void)didUpdateVisibleValueRange:(HKValueRange *)arg1 changeContext:(long long)arg2;
- (void)didUpdateFromDateZoom:(long long)arg1 toDateZoom:(long long)arg2 newVisibleRange:(HKValueRange *)arg3;
@end
