//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE;

@interface _TtC16AccessorySetupUI23ASUIProductCarouselView : UIView
{
    MISSING_TYPE *currentPageIdxPublisher;	// 8 = 0x8
    MISSING_TYPE *currentNumberOfPagesPublisher;	// 16 = 0x10
    MISSING_TYPE *pages;	// 24 = 0x18
    MISSING_TYPE *devices;	// 32 = 0x20
    MISSING_TYPE *appName;	// 40 = 0x28
    MISSING_TYPE *productStackView;	// 56 = 0x38
    MISSING_TYPE *productScrollView;	// 64 = 0x40
    MISSING_TYPE *titleLabel;	// 72 = 0x48
    MISSING_TYPE *backingTitleLabel;	// 80 = 0x50
    MISSING_TYPE *subtitleLabel;	// 88 = 0x58
    MISSING_TYPE *backingSubtitleLabel;	// 96 = 0x60
    MISSING_TYPE *otaLabel;	// 104 = 0x68
    MISSING_TYPE *backingOTALabel;	// 112 = 0x70
    MISSING_TYPE *pageControl;	// 120 = 0x78
    MISSING_TYPE *backingPageControl;	// 128 = 0x80
    MISSING_TYPE *backingPageControlHeightConstraint;	// 136 = 0x88
    MISSING_TYPE *currentPageIdx;	// 144 = 0x90
    MISSING_TYPE *shouldOnlyDisplayCenterPage;	// 152 = 0x98
    MISSING_TYPE *numberOfPages;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x0020000000009670
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000009610
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000093f0
- (void)layoutSubviews;	// IMP=0x00100000000090b0
- (void)pageControlChangedWithPageControl:(id)arg1;	// IMP=0x0010000000008f60
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;	// IMP=0x0010000000009b30
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00100000000097a0

@end

