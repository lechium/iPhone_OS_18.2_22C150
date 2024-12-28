//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKCalendarWeekView.h"

@class CALayer, NSArray;

__attribute__((visibility("hidden")))
@interface HKMonthWeekView : HKCalendarWeekView
{
    _Bool _displaysMonthTitle;	// 8 = 0x8
    _Bool _displaysTopBorderLine;	// 9 = 0x9
    _Bool _isRTL;	// 10 = 0xa
    CALayer *_topBorderLine;	// 16 = 0x10
    _Bool _accessoryContentsFetched;	// 24 = 0x18
    NSArray *_accessoryViews;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001a81e9
@property(nonatomic) _Bool accessoryContentsFetched; // @synthesize accessoryContentsFetched=_accessoryContentsFetched;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000001a80ba
- (struct CGRect)_frameForTopBorderLine;	// IMP=0x00000000001a7ee3
- (void)layoutSubviews;	// IMP=0x00000000001a75d0
- (void)setMonthWeekStart:(id)arg1;	// IMP=0x00000000001a74fb
- (void)setTitleHighlighted:(_Bool)arg1;	// IMP=0x00000000001a748e
- (id)cellMatchingDate:(id)arg1;	// IMP=0x00000000001a736e
- (void)selectedCalendarDay:(id)arg1;	// IMP=0x00000000001a7303
- (_Bool)containsMonthTitle;	// IMP=0x00000000001a72c3
- (_Bool)supportsRTL;	// IMP=0x00000000001a72bb
- (Class)monthTitleClass;	// IMP=0x00000000001a72aa
- (Class)cellClass;	// IMP=0x00000000001a7299
- (void)clearAccessoryViews;	// IMP=0x00000000001a7241
@property(readonly, nonatomic) NSArray *accessoryViews; // @synthesize accessoryViews=_accessoryViews;
- (id)initWithDateCache:(id)arg1 displaysMonthTitle:(_Bool)arg2 displaysTopBorderLine:(_Bool)arg3;	// IMP=0x00000000001a6a35

@end
