//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIStatusBarVisualProvider_Phone.h"

@class NSDictionary, NSLayoutConstraint, NSString, _UIStatusBarCellularItem, _UIStatusBarDisplayItemPlacementGroup, _UIStatusBarRegionAxisCenteringLayout, _UIStatusBarRegionAxisStackingLayout;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVisualProvider_LegacyPhone : _UIStatusBarVisualProvider_Phone
{
    NSDictionary *_orderedDisplayItemPlacements;	// 8 = 0x8
    _UIStatusBarDisplayItemPlacementGroup *_lowerWifiGroup;	// 16 = 0x10
    NSLayoutConstraint *_backgroundHeightConstraint;	// 24 = 0x18
    _UIStatusBarCellularItem *_condensedCellularItem;	// 32 = 0x20
    NSLayoutConstraint *_leadingTopConstraint;	// 40 = 0x28
    NSLayoutConstraint *_leadingHeightConstraint;	// 48 = 0x30
    _UIStatusBarRegionAxisStackingLayout *_leadingHorizontalLayout;	// 56 = 0x38
    NSLayoutConstraint *_centerTopConstraint;	// 64 = 0x40
    NSLayoutConstraint *_centerHeightConstraint;	// 72 = 0x48
    _UIStatusBarRegionAxisCenteringLayout *_centerHorizontalLayout;	// 80 = 0x50
    NSLayoutConstraint *_trailingTopConstraint;	// 88 = 0x58
    NSLayoutConstraint *_trailingHeightConstraint;	// 96 = 0x60
    _UIStatusBarRegionAxisStackingLayout *_trailingHorizontalLayout;	// 104 = 0x68
    NSLayoutConstraint *_expandedLeadingBottomConstraint;	// 112 = 0x70
    NSLayoutConstraint *_expandedTrailingBottomConstraint;	// 120 = 0x78
}

+ (double)height;	// IMP=0x00100000014b05e2
+ (struct CGSize)intrinsicLockScreenContentSizeForOrientation:(long long)arg1;	// IMP=0x00100000014b05bf
+ (double)_heightExpanded:(_Bool)arg1;	// IMP=0x00100000014b05a3
- (void).cxx_destruct;	// IMP=0x00000000014b7890
@property(retain, nonatomic) NSLayoutConstraint *expandedTrailingBottomConstraint; // @synthesize expandedTrailingBottomConstraint=_expandedTrailingBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *expandedLeadingBottomConstraint; // @synthesize expandedLeadingBottomConstraint=_expandedLeadingBottomConstraint;
@property(retain, nonatomic) _UIStatusBarRegionAxisStackingLayout *trailingHorizontalLayout; // @synthesize trailingHorizontalLayout=_trailingHorizontalLayout;
@property(retain, nonatomic) NSLayoutConstraint *trailingHeightConstraint; // @synthesize trailingHeightConstraint=_trailingHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trailingTopConstraint; // @synthesize trailingTopConstraint=_trailingTopConstraint;
@property(retain, nonatomic) _UIStatusBarRegionAxisCenteringLayout *centerHorizontalLayout; // @synthesize centerHorizontalLayout=_centerHorizontalLayout;
@property(retain, nonatomic) NSLayoutConstraint *centerHeightConstraint; // @synthesize centerHeightConstraint=_centerHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *centerTopConstraint; // @synthesize centerTopConstraint=_centerTopConstraint;
@property(retain, nonatomic) _UIStatusBarRegionAxisStackingLayout *leadingHorizontalLayout; // @synthesize leadingHorizontalLayout=_leadingHorizontalLayout;
@property(retain, nonatomic) NSLayoutConstraint *leadingHeightConstraint; // @synthesize leadingHeightConstraint=_leadingHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingTopConstraint; // @synthesize leadingTopConstraint=_leadingTopConstraint;
@property(retain, nonatomic) _UIStatusBarCellularItem *condensedCellularItem; // @synthesize condensedCellularItem=_condensedCellularItem;
@property(retain, nonatomic) NSLayoutConstraint *backgroundHeightConstraint; // @synthesize backgroundHeightConstraint=_backgroundHeightConstraint;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacementGroup *lowerWifiGroup; // @synthesize lowerWifiGroup=_lowerWifiGroup;
@property(retain, nonatomic) NSDictionary *orderedDisplayItemPlacements; // @synthesize orderedDisplayItemPlacements=_orderedDisplayItemPlacements;
- (id)_backgroundActivityDetailRemovalAnimation;	// IMP=0x00000000014b671f
- (void)setOnLockScreen:(_Bool)arg1;	// IMP=0x00000000014b66b0
- (void)_updateLockScreenSizing;	// IMP=0x00000000014b64f4
- (void)setExpanded:(_Bool)arg1;	// IMP=0x00000000014b634c
- (void)_updateBackgroundHeight;	// IMP=0x00000000014b6316
- (void)updateDataForService:(id)arg1;	// IMP=0x00000000014b6261
- (void)_updateExpandedTrailingRegion;	// IMP=0x00000000014b604b
- (void)_updateLowerRegionsWithData:(id)arg1;	// IMP=0x00000000014b5d46
- (void)statusBarRegionsUpdated;	// IMP=0x00000000014b5d34
- (void)dataUpdated:(id)arg1;	// IMP=0x00000000014b5d22
- (void)orientationUpdatedFromOrientation:(long long)arg1;	// IMP=0x00000000014b5cb4
- (struct CGRect)clockBoundsForLayoutItem:(id)arg1;	// IMP=0x00000000014b5ac9
- (id)displayItemIdentifiersForPartWithIdentifier:(id)arg1;	// IMP=0x00000000014b59f4
- (id)styleAttributesForStyle:(long long)arg1;	// IMP=0x00000000014b578b
- (id)regionIdentifiersForPartWithIdentifier:(id)arg1;	// IMP=0x00000000014b5440
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x00000000014b536f
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;	// IMP=0x00000000014b522a
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;	// IMP=0x00000000014b4fb6
- (id)_animationForSingleLineDualCarrier;	// IMP=0x00000000014b4e18
- (id)willUpdateWithData:(id)arg1;	// IMP=0x00000000014b4bf8
- (void)actionable:(id)arg1 highlighted:(_Bool)arg2 initialPress:(_Bool)arg3;	// IMP=0x00000000014b4854
- (double)animatedTypeDisplayItemSpacingFactorForCellularType:(long long)arg1;	// IMP=0x00000000014b4846
- (id)condensedFontForCellularType:(long long)arg1 defaultFont:(id)arg2 baselineOffset:(double *)arg3;	// IMP=0x00000000014b470d
- (id)stringForCellularType:(long long)arg1 condensed:(_Bool)arg2;	// IMP=0x00000000014b46dc
- (void)itemCreated:(id)arg1;	// IMP=0x00000000014b449e
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;	// IMP=0x00000000014b267d
- (id)setupInContainerView:(id)arg1;	// IMP=0x00000000014b0929
- (id)clockFont;	// IMP=0x00000000014b0917
- (struct CGSize)smallPillSize;	// IMP=0x00000000014b0906
- (struct CGSize)pillSize;	// IMP=0x00000000014b08f0
- (id)pillFont;	// IMP=0x00000000014b0878
- (id)expandedFont;	// IMP=0x00000000014b0800
- (id)timeFont;	// IMP=0x00000000014b0788
- (id)normalFont;	// IMP=0x00000000014b0710
- (double)lowerExpandedBaselineOffset;	// IMP=0x00000000014b0702
- (double)dualLineExpandedBaselineOffset;	// IMP=0x00000000014b06f4
- (double)expandedBaselineOffset;	// IMP=0x00000000014b06e6
- (double)baselineOffset;	// IMP=0x00000000014b067f
- (struct NSDirectionalEdgeInsets)edgeInsets;	// IMP=0x00000000014b0655
- (double)regionSpacing;	// IMP=0x00000000014b0647
- (double)effectiveHeight;	// IMP=0x00000000014b05f6
- (_Bool)wantsExpandedLeadingPlacements;	// IMP=0x00000000014b059b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
