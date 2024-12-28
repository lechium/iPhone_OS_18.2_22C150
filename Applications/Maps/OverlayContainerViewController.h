//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CardAnimation, DimmingContainerView, MISSING_TYPE, NSArray, NSLayoutConstraint, NSNumber, NSString, TopBannerView, UILayoutGuide, UIView;
@protocol OverlayContainerDimmingBehaviour;

@interface OverlayContainerViewController
{
    NSLayoutConstraint *_topContentConstraint;	// 8 = 0x8
    NSArray *_topContentHorizontalConstraints;	// 16 = 0x10
    NSLayoutConstraint *_overlayToTopInsetConstraint;	// 24 = 0x18
    DimmingContainerView *_dimmingView;	// 32 = 0x20
    _Bool _dimmingViewDisabled;	// 40 = 0x28
    NSNumber *_dimmingViewDisabledAlphaUpdateCache;	// 48 = 0x30
    UIView *_topDimmingView;	// 56 = 0x38
    struct CGAffineTransform _modeTransitiontransform;	// 64 = 0x40
    UIView *_topContentView;	// 112 = 0x70
    UIView *_overlayView;	// 120 = 0x78
    TopBannerView *_topBannerView;	// 128 = 0x80
    unsigned long long _topContentSizeStyle;	// 136 = 0x88
    UILayoutGuide *_innerLayoutGuide;	// 144 = 0x90
    id <OverlayContainerDimmingBehaviour> _dimmingBehaviour;	// 152 = 0x98
    NSArray *_innerLayoutGuideConstraints;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x0020000000808933
@property(retain, nonatomic) NSArray *innerLayoutGuideConstraints; // @synthesize innerLayoutGuideConstraints=_innerLayoutGuideConstraints;
@property(retain, nonatomic) id <OverlayContainerDimmingBehaviour> dimmingBehaviour; // @synthesize dimmingBehaviour=_dimmingBehaviour;
@property(retain, nonatomic) UILayoutGuide *innerLayoutGuide; // @synthesize innerLayoutGuide=_innerLayoutGuide;
@property(nonatomic) unsigned long long topContentSizeStyle; // @synthesize topContentSizeStyle=_topContentSizeStyle;
@property(retain, nonatomic) TopBannerView *topBannerView; // @synthesize topBannerView=_topBannerView;
@property(readonly, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly, nonatomic) UIView *topContentView; // @synthesize topContentView=_topContentView;
@property(readonly, nonatomic) double _topBannerMaxHeight;
@property(readonly, nonatomic) NSArray *_topBannerViewHorizontalConstraints;
- (id)_topBannerViewConstraints;	// IMP=0x001000000080857d
- (void)updateTopBannerViewWithTopBannerItems:(id)arg1;	// IMP=0x001000000080829d
- (void)viewControllerWantsTopBannerItemsUpdate:(id)arg1;	// IMP=0x0010000000808211
- (double)topLabelEdgeInset;	// IMP=0x00100000008081bb
- (double)topEdgeInset;	// IMP=0x0010000000808041
- (void)contentHeightUpdatedWithValue:(double)arg1;	// IMP=0x0010000000807e9a
- (void)updateTheme;	// IMP=0x0010000000807e94
- (void)presentController:(id)arg1 animated:(_Bool)arg2 useDefaultContaineeLayout:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000807da2
- (void)updateContainerStyleDependentConstraints;	// IMP=0x0010000000807973
- (void)containerStyleManagerConfigureLayoutForStyle:(unsigned long long)arg1;	// IMP=0x0010000000807828
- (void)setupConstraints;	// IMP=0x00100000008073de
- (void)layoutGuideUpdated;	// IMP=0x0010000000806922
- (void)updateEdgePadding;	// IMP=0x001000000080675d
- (void)_dismissAction:(id)arg1;	// IMP=0x00100000008066b4
- (void)applyTransitionWithProgress:(double)arg1;	// IMP=0x0010000000806147
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000806074
- (MISSING_TYPE *)viewDidLayoutSubviews;	// IMP=0x0010000000805f02
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000805ed3
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000805e92
- (void)viewDidLoad;	// IMP=0x001000000080556d
@property(readonly, nonatomic) UIView *passThroughView;
- (void)updateViewsForCustomDismissalTransition;	// IMP=0x0010000000805264
- (void)updateViewsForCustomPresentationTransition;	// IMP=0x0010000000804fc1
- (void)transitionEnded;	// IMP=0x0010000000804f80
- (double)currentDimmingValue;	// IMP=0x0010000000804f36
- (void)restoreDimmingViewAlphaCacheIfNeeded;	// IMP=0x0010000000804ebf
- (void)_updateDimming;	// IMP=0x0010000000804d31
- (void)_updateDimmingViewsWithAlpha:(double)arg1;	// IMP=0x0010000000804c0b
- (void)_updateDimmingViewsWithAlpha:(double)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000804b74

// Remaining properties
@property(readonly, nonatomic) double availableHeight;
@property(readonly, nonatomic) NSString *blurGroupName;
@property(readonly, nonatomic) double bottomEdgePadding;
@property(readonly, nonatomic) double bottomSafeOffset;
@property(readonly) CardAnimation *cardHeightAnimation;
@property(readonly, nonatomic) unsigned long long containeeLayout;
@property(readonly, nonatomic) unsigned long long containerStyle;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double edgePadding;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double leadingEdgePadding;
@property(readonly, nonatomic) double leftSafeOffset;
@property(readonly, nonatomic) unsigned long long maxLayoutForEdgeInsetsUpdate;
@property(readonly, nonatomic) double rightSafeOffset;
@property(readonly) Class superclass;
@property(readonly, nonatomic) double topEdgePadding;

@end
