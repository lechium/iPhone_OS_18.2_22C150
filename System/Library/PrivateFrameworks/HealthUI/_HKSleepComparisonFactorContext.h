//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKInteractiveChartDataFormatter;

__attribute__((visibility("hidden")))
@interface _HKSleepComparisonFactorContext
{
    HKInteractiveChartDataFormatter *_sleepChartFormatter;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002e1905
@property(readonly, nonatomic) HKInteractiveChartDataFormatter *sleepChartFormatter; // @synthesize sleepChartFormatter=_sleepChartFormatter;
- (_Bool)healthFactorContext;	// IMP=0x00000000002e18ec
- (id)stackedHeight;	// IMP=0x00000000002e18d3
- (void)_setContextItem:(id)arg1 timeScope:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002e17ad
- (void)updateContextItemForDateInterval:(id)arg1 overlayController:(id)arg2 timeScope:(long long)arg3 resolution:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000002e1021
- (id)initWithStackedFactorDisplayType:(id)arg1 currentCalendarOverride:(id)arg2 overlayChartController:(id)arg3 applicationItems:(id)arg4 contextChangeDelegate:(id)arg5 primarySleepDisplayType:(id)arg6 sleepChartFormatter:(id)arg7;	// IMP=0x00000000002e0ec0

@end

