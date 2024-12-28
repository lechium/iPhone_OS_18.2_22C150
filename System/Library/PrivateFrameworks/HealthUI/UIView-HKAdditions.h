//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@interface UIView (HKAdditions)
- (void)_updateForCurrentSizeCategory;	// IMP=0x00900000000273e5
- (double)hk_layoutHeightFittingWidth:(double)arg1;	// IMP=0x00900000000273bc
- (void)hk_maskAllCornersWithRadius:(double)arg1;	// IMP=0x00900000000273a3
- (void)hk_maskCorners:(unsigned long long)arg1 radius:(double)arg2;	// IMP=0x00900000000272df
- (void)hk_constraintAspectRatioFromSize:(struct CGSize)arg1;	// IMP=0x0090000000027266
- (void)hk_alignVerticalConstraintsWithGuide:(id)arg1 insets:(struct NSDirectionalEdgeInsets)arg2;	// IMP=0x00900000000271a4
- (void)hk_alignHorizontalConstraintsWithGuide:(id)arg1 insets:(struct NSDirectionalEdgeInsets)arg2;	// IMP=0x00900000000270e2
- (void)hk_alignVerticalConstraintsWithView:(id)arg1 insets:(struct NSDirectionalEdgeInsets)arg2;	// IMP=0x0090000000027020
- (void)hk_alignHorizontalConstraintsWithView:(id)arg1 insets:(struct NSDirectionalEdgeInsets)arg2;	// IMP=0x0090000000026f5e
- (void)hk_alignConstraintsWithView:(id)arg1 insets:(struct NSDirectionalEdgeInsets)arg2;	// IMP=0x0090000000026e46
- (void)hk_alignConstraintsWithTopAnchor:(id)arg1 bottomAnchor:(id)arg2 insets:(struct NSDirectionalEdgeInsets)arg3;	// IMP=0x0090000000026d36
- (void)hk_alignConstraintsWithLeadingAnchor:(id)arg1 trailingAnchor:(id)arg2 insets:(struct NSDirectionalEdgeInsets)arg3;	// IMP=0x0090000000026c26
- (void)hk_alignConstraintsWithViewController:(id)arg1;	// IMP=0x00900000000268c8
- (void)hk_alignCenterConstraintsWithView:(id)arg1;	// IMP=0x0090000000026774
- (void)hk_alignHorizontalConstraintsWithView:(id)arg1 margin:(double)arg2;	// IMP=0x009000000002660a
- (void)hk_alignVerticalConstraintsWithView:(id)arg1 margin:(double)arg2;	// IMP=0x00900000000264a0
- (void)hk_alignConstraintsWithGuide:(id)arg1;	// IMP=0x009000000002622e
- (void)hk_alignConstraintsWithView:(id)arg1;	// IMP=0x0090000000025fbc
- (void)hk_constrainToSuperviewAlongEdges:(id)arg1 constant:(double)arg2;	// IMP=0x0090000000025cc6
- (void)hk_constrainToView:(id)arg1 fromEdge:(long long)arg2 toEdge:(long long)arg3 constant:(double)arg4;	// IMP=0x0090000000025be4
- (long long)hk_trailingTextAlignmentAtOrBelowSizeCategory:(id)arg1;	// IMP=0x0090000000025bab
- (_Bool)hk_isLeftToRight;	// IMP=0x0090000000025b75
- (id)hk_addConstraintsWithFormat:(id)arg1 options:(unsigned long long)arg2 views:(id)arg3;	// IMP=0x0090000000025b5d
- (id)hk_addConstraintsWithFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4;	// IMP=0x0090000000025b0b
- (id)hk_addEqualsConstraintWithItem:(id)arg1 attribute:(long long)arg2 relatedTo:(id)arg3 attribute:(long long)arg4 constant:(double)arg5;	// IMP=0x0090000000025a9a
- (id)hk_addEqualsConstraintWithItem:(id)arg1 attribute:(long long)arg2 relatedTo:(id)arg3 constant:(double)arg4;	// IMP=0x0090000000025a29
@end
