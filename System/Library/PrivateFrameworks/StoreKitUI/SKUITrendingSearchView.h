//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIScrollView.h>

@class NSArray, UIStackView, UIView;

__attribute__((visibility("hidden")))
@interface SKUITrendingSearchView : UIScrollView
{
    UIView *_trendingTitleView;	// 8 = 0x8
    NSArray *_trendingSearchViews;	// 16 = 0x10
    UIStackView *_trendingSearchesStackView;	// 24 = 0x18
    UIStackView *_titleStackView;	// 32 = 0x20
    NSArray *_verticalMarginRelatedConstraints;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000e1167
@property(retain, nonatomic) NSArray *verticalMarginRelatedConstraints; // @synthesize verticalMarginRelatedConstraints=_verticalMarginRelatedConstraints;
@property(nonatomic) __weak UIStackView *titleStackView; // @synthesize titleStackView=_titleStackView;
@property(nonatomic) __weak UIStackView *trendingSearchesStackView; // @synthesize trendingSearchesStackView=_trendingSearchesStackView;
@property(copy, nonatomic) NSArray *trendingSearchViews; // @synthesize trendingSearchViews=_trendingSearchViews;
@property(copy, nonatomic) UIView *trendingTitleView; // @synthesize trendingTitleView=_trendingTitleView;
- (void)updateConstraints;	// IMP=0x00000000000e0f28
- (void)layoutMarginsDidChange;	// IMP=0x00000000000e0f16
- (void)layoutSubviews;	// IMP=0x00000000000e0d85
- (void)commonInitWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000e0498
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e0420
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000e03af

@end
