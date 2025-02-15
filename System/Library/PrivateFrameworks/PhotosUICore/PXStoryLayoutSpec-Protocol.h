//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSShadow, PXExploreLayoutMetrics, PXStoryChromeButtonSpec, PXStoryDetailsViewButtonSpec, UIColor;

@protocol PXStoryLayoutSpec
@property(readonly, nonatomic) double bottomTitleContentOffset;
@property(readonly, nonatomic) double distanceBetweenChapterTitleBaselineAndBottomWithChrome;
@property(readonly, nonatomic) double distanceBetweenChapterTitleBaselineAndBottomWithoutChrome;
@property(readonly, nonatomic) double distanceBetweenBufferingIndicatorCenterAndBottom;
@property(readonly, nonatomic) struct CGSize bufferingIndicatorSize;
@property(readonly, nonatomic) struct CGSize scrubberCurrentAssetSize;
@property(readonly, nonatomic) double scrubberVerticalPadding;
@property(readonly, nonatomic) NSDictionary *styleSwitcherTitleAttributes;
@property(readonly, nonatomic) long long styleSwitcherLayoutDirection;
@property(readonly, nonatomic) struct UIEdgeInsets styleSwitcherPageControlInset;
@property(readonly, nonatomic) double styleSwitcherPageControlHeight;
@property(readonly, nonatomic) _Bool styleSwitcherShowsTitle;
@property(readonly, nonatomic) double styleSwitcherViewportSpacing;
@property(readonly, nonatomic) struct UIEdgeInsets styleSwitcherChromeInset;
@property(readonly, nonatomic) struct UIEdgeInsets styleSwitcherViewportInset;
@property(readonly, nonatomic) _Bool styleSwitcherShowsRestartButton;
@property(readonly, nonatomic) _Bool styleSwitcherWantsChromeButtonsTitleCenterAligned;
@property(readonly, nonatomic) double styleSwitcherChromeButtonHorizontalMargin;
@property(readonly, nonatomic) PXStoryChromeButtonSpec *styleSwitcherChromeButtonSpec;
@property(readonly, nonatomic) _Bool canScaleWhenPressed;
@property(readonly, nonatomic) _Bool thumbnailMenuIncludesFeatureLessAction;
@property(readonly, nonatomic) _Bool thumbnailMenuIncludesFavoriteAction;
@property(readonly, nonatomic) _Bool thumbnailChromeShowsFavoriteButton;
@property(readonly, nonatomic) _Bool thumbnailChromeShowsActionMenuButton;
@property(readonly, nonatomic) struct CGSize thumbnailChromeDetailsViewButtonPadding;
@property(readonly, nonatomic) PXStoryDetailsViewButtonSpec *thumbnailChromeDetailsViewButtonSpec;
@property(readonly, nonatomic) struct CGSize thumbnailPlayButtonPadding;
@property(readonly, nonatomic) _Bool thumbnailChromeShowsPlayButton;
@property(readonly, nonatomic) PXStoryChromeButtonSpec *thumbnailChromePlayButtonSpec;
@property(readonly, nonatomic) PXStoryChromeButtonSpec *thumbnailChromeButtonSpec;
@property(readonly, nonatomic) double thumbnailChromeButtonSpacing;
@property(readonly, nonatomic) struct CGSize thumbnailChromePadding;
@property(readonly, nonatomic) NSShadow *thumbnailShadow;
@property(readonly, nonatomic) double thumbnailCornerRadius;
@property(readonly, nonatomic) double browserGridCellCornersRadius;
@property(readonly, nonatomic) PXExploreLayoutMetrics *browserGridLayoutMetrics;
@property(readonly, nonatomic) long long browserGridScrollDecelerationRate;
@property(readonly, nonatomic) long long scrollDecelerationRate;
@property(readonly, nonatomic) double interpageSpacing;
@property(readonly, nonatomic) UIColor *backgroundColor;
@end

