//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class GEOTransitBoardingInfo, NSArray, NSString, UIScrollView, UIStackView;

@interface TransitDirectionsBoardingInfoListView : UIView
{
    UIScrollView *_scrollView;	// 8 = 0x8
    UIStackView *_stackView;	// 16 = 0x10
    unsigned long long _scrollBehavior;	// 24 = 0x18
    UIView *_closestViewWhenDragBegan;	// 32 = 0x20
    _Bool _needsResetContentOffset;	// 40 = 0x28
    int _targetForAnalytics;	// 44 = 0x2c
    GEOTransitBoardingInfo *_boardingInfo;	// 48 = 0x30
    NSArray *_preboardingStrings;	// 56 = 0x38
    _Bool _dropsPastDepartures;	// 64 = 0x40
    NSString *_buttonTitle;	// 72 = 0x48
    id _buttonTarget;	// 80 = 0x50
    SEL _buttonAction;	// 88 = 0x58
}

+ (id)defaultFinalButtonTitle;	// IMP=0x0020000000be1cff
- (void).cxx_destruct;	// IMP=0x0020000000be467f
- (void)setTargetForAnalytics:(int)arg1;	// IMP=0x0010000000be466f
- (id)_closestViewToPoint:(struct CGPoint)arg1 fromEdge:(unsigned long long)arg2;	// IMP=0x0010000000be43b1
- (struct CGPoint)_targetContentOffsetForView:(id)arg1;	// IMP=0x0010000000be41d6
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0010000000be3f39
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0010000000be3ed8
- (void)_updateFixedWidthConstraints;	// IMP=0x0010000000be3c06
- (void)setFinalButtonTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;	// IMP=0x0010000000be3b1d
- (void)_refreshAllInfoViews;	// IMP=0x0010000000be39e3
- (void)setDropPastDepartures:(_Bool)arg1;	// IMP=0x0010000000be39c0
- (void)_applyUpdatedInfoViewsIfNeeded:(id)arg1;	// IMP=0x0010000000be38a4
- (void)_processUpcomingInfoViews:(id)arg1;	// IMP=0x0010000000be3366
- (void)_rebuildListView;	// IMP=0x0010000000be30d9
- (id)_viewForInstruction:(id)arg1;	// IMP=0x0010000000be2f30
- (id)_viewForEntry:(id)arg1;	// IMP=0x0010000000be2e2b
- (_Bool)_shouldIncludeEntry:(id)arg1;	// IMP=0x0010000000be2d2c
- (void)_dropPastDepartures;	// IMP=0x0010000000be2a5c
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0010000000be289a
- (void)setPreboardingStrings:(id)arg1;	// IMP=0x0010000000be27be
- (void)setBoardingInfo:(id)arg1;	// IMP=0x0010000000be26d2
- (void)layoutSubviews;	// IMP=0x0010000000be25ef
- (id)_scrollView;	// IMP=0x0010000000be25da
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000be1dd5
- (double)_contentBottomAnchorAdjustment;	// IMP=0x0010000000be1d67

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

