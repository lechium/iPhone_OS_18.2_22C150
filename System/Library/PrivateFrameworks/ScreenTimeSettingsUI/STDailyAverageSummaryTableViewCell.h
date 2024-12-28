//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class STDailyAverageView, STHorizontallySegmentedView, STUsageGraphViewController, STUsageSummaryTitleView;

__attribute__((visibility("hidden")))
@interface STDailyAverageSummaryTableViewCell
{
    STDailyAverageView *_dailyAverageView;	// 120 = 0x78
    STUsageSummaryTitleView *_titleView;	// 128 = 0x80
    STUsageGraphViewController *_usageGraphViewController;	// 136 = 0x88
    STHorizontallySegmentedView *_topItemsView;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000005c88c
@property(readonly) STHorizontallySegmentedView *topItemsView; // @synthesize topItemsView=_topItemsView;
@property(readonly) STUsageGraphViewController *usageGraphViewController; // @synthesize usageGraphViewController=_usageGraphViewController;
@property(readonly) STUsageSummaryTitleView *titleView; // @synthesize titleView=_titleView;
@property(readonly) STDailyAverageView *dailyAverageView; // @synthesize dailyAverageView=_dailyAverageView;
- (void)_layoutDidChangeFrom:(_Bool)arg1 to:(_Bool)arg2;	// IMP=0x000000000005c7cb
- (void)_numberOfLinesDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;	// IMP=0x000000000005c761
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000005c460
- (void)dealloc;	// IMP=0x000000000005c3d2
- (id)initWithUsageReport:(id)arg1;	// IMP=0x000000000005bc17

@end
