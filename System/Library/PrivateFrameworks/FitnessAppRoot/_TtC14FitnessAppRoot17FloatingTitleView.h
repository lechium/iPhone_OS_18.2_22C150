//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UINavigationBarTitleView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC14FitnessAppRoot17FloatingTitleView : _UINavigationBarTitleView
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *floatingTabBar;	// 24 = 0x18
    MISSING_TYPE *layout;	// 32 = 0x20
    MISSING_TYPE *titleLabel;	// 96 = 0x60
    MISSING_TYPE *animationStartingPoint;	// 104 = 0x68
    MISSING_TYPE *animationOffset;	// 128 = 0x80
    MISSING_TYPE *delta;	// 144 = 0x90
    MISSING_TYPE *initialYContentOffsets;	// 160 = 0xa0
    MISSING_TYPE *isAnimating;	// 168 = 0xa8
    MISSING_TYPE *isBouncing;	// 169 = 0xa9
    MISSING_TYPE *isFrozen;	// 170 = 0xaa
    MISSING_TYPE *pendingScrollView;	// 176 = 0xb0
    MISSING_TYPE *scrollingDelegate;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x000000000002c630
- (void)layoutSubviews;	// IMP=0x000000000002b8d0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002af70
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000002af40
- (void)scrollViewDidScrollToTop:(id)arg1;	// IMP=0x000000000002cd50
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;	// IMP=0x000000000002cbc0
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000002cb00
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x000000000002caa0
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000000002ca40
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x000000000002c9e0
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;	// IMP=0x000000000002c820
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000000002c780

@end
