//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, NavSignLaneGuidanceInfo, NavSignLaneGuidanceView, UIView;
@protocol NavDrivingSignLayoutDelegate;

@interface NavPrimaryDrivingSignView
{
    _Bool _animatingToHideLaneGuidanceView;	// 8 = 0x8
    NavSignLaneGuidanceInfo *_laneGuidanceInfo;	// 16 = 0x10
    NavSignLaneGuidanceView *_laneGuidanceView;	// 24 = 0x18
    NSLayoutConstraint *_laneGuidanceViewTopMarginConstraint;	// 32 = 0x20
    NSLayoutConstraint *_laneGuidanceViewLeadingMarginConstraint;	// 40 = 0x28
    NSLayoutConstraint *_laneGuidanceViewTrailingMarginConstraint;	// 48 = 0x30
    NSLayoutConstraint *_laneGuidanceViewMajorLabelConstraint;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000912760
@property(nonatomic) _Bool animatingToHideLaneGuidanceView; // @synthesize animatingToHideLaneGuidanceView=_animatingToHideLaneGuidanceView;
@property(readonly, nonatomic) NSLayoutConstraint *laneGuidanceViewMajorLabelConstraint; // @synthesize laneGuidanceViewMajorLabelConstraint=_laneGuidanceViewMajorLabelConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *laneGuidanceViewTrailingMarginConstraint; // @synthesize laneGuidanceViewTrailingMarginConstraint=_laneGuidanceViewTrailingMarginConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *laneGuidanceViewLeadingMarginConstraint; // @synthesize laneGuidanceViewLeadingMarginConstraint=_laneGuidanceViewLeadingMarginConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *laneGuidanceViewTopMarginConstraint; // @synthesize laneGuidanceViewTopMarginConstraint=_laneGuidanceViewTopMarginConstraint;
@property(readonly, nonatomic) NavSignLaneGuidanceView *laneGuidanceView; // @synthesize laneGuidanceView=_laneGuidanceView;
@property(retain, nonatomic) NavSignLaneGuidanceInfo *laneGuidanceInfo; // @synthesize laneGuidanceInfo=_laneGuidanceInfo;
- (id)debugDescription;	// IMP=0x0010000000912617
- (void)_animateTransitioningFromOldLaneGuidance:(id)arg1;	// IMP=0x0010000000912158
- (void)_animateShowingLaneGuidanceView;	// IMP=0x0010000000911e1c
- (void)hideLaneGuidanceAnimated:(_Bool)arg1;	// IMP=0x0010000000911c05
- (void)showLaneGuidance:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000091174e
- (void)updateLaneGuidance:(id)arg1;	// IMP=0x0010000000911706
- (_Bool)highlightedLanesNotInVisibleRange;	// IMP=0x0010000000911689
@property(readonly, nonatomic) UIView *viewForSecondarySignTextToAlignLeading;
@property(nonatomic) _Bool debugHighlightLanes;
- (void)clearContent;	// IMP=0x001000000091145b
- (id)accessibilityIdentifier;	// IMP=0x0010000000911449
- (void)_updateLabelText;	// IMP=0x0010000000911252
- (void)_updateConstraints;	// IMP=0x0010000000910d89
- (void)_setupConstraints;	// IMP=0x001000000091095a
- (void)refreshSign;	// IMP=0x00100000009108a4
- (void)_setupSubviews;	// IMP=0x00100000009107e5
- (id)_defaultSignLayoutDelegate;	// IMP=0x00100000009107cc

// Remaining properties
@property(nonatomic) __weak id <NavDrivingSignLayoutDelegate> signLayoutDelegate; // @dynamic signLayoutDelegate;

@end

