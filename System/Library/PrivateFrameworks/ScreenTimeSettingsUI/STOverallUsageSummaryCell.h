//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class STNoUsageDataView, STUsageGraphViewController, STUsageSummaryTitleView;

__attribute__((visibility("hidden")))
@interface STOverallUsageSummaryCell
{
    STUsageSummaryTitleView *_titleView;	// 120 = 0x78
    STUsageGraphViewController *_weekGraphViewController;	// 128 = 0x80
    STNoUsageDataView *_noUsageDataView;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000089918
@property(readonly) STNoUsageDataView *noUsageDataView; // @synthesize noUsageDataView=_noUsageDataView;
@property(readonly) STUsageGraphViewController *weekGraphViewController; // @synthesize weekGraphViewController=_weekGraphViewController;
@property(readonly) STUsageSummaryTitleView *titleView; // @synthesize titleView=_titleView;
- (void)_setNoUsageDataViewVisibility;	// IMP=0x00000000000897d3
- (void)setValue:(id)arg1;	// IMP=0x00000000000894e7
- (id)value;	// IMP=0x00000000000894a9
- (void)_hasMulitlineLayoutDidChangeFrom:(_Bool)arg1 to:(_Bool)arg2;	// IMP=0x0000000000089436
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000008928d
- (void)dealloc;	// IMP=0x0000000000089233
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x000000000008899e

@end

