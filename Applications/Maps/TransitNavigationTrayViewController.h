//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CardButton, ContainerHeaderView, NSLayoutConstraint, NSNumber, NSString, RoutePlanningTransitionController, TransitDirectionsListViewController, UIScrollView, UIView;
@protocol TransitNavigationTrayDelegate;

@interface TransitNavigationTrayViewController
{
    ContainerHeaderView *_containerHeaderView;	// 8 = 0x8
    TransitDirectionsListViewController *_listViewController;	// 16 = 0x10
    RoutePlanningTransitionController *_transitionController;	// 24 = 0x18
    CardButton *_endButton;	// 32 = 0x20
    _Bool _hasForcedInitialContaineeHeight;	// 40 = 0x28
    unsigned long long _previousLayoutForTransition;	// 48 = 0x30
    unsigned long long _previousStyleForTransition;	// 56 = 0x38
    double _previousMediumTransitionHeight;	// 64 = 0x40
    double _preTransitionContentOffsetY;	// 72 = 0x48
    NSLayoutConstraint *_headerBottomConstraint;	// 80 = 0x50
    UIView *_lowLuminanceBackgroundView;	// 88 = 0x58
    id <TransitNavigationTrayDelegate> _trayDelegate;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0020000000431dee
@property(nonatomic) __weak id <TransitNavigationTrayDelegate> trayDelegate; // @synthesize trayDelegate=_trayDelegate;
@property(readonly, nonatomic) NSNumber *displayedItemIndexForAnalytics;
- (void)_recordChangeToLayout:(unsigned long long)arg1;	// IMP=0x0010000000431c51
- (int)currentUITargetForAnalytics;	// IMP=0x0010000000431c46
@property(readonly, nonatomic) UIScrollView *pptTestScrollView;
- (_Bool)pptTestMoveToBoardStep;	// IMP=0x0010000000431bda
- (void)pptTestMoveToNextStep;	// IMP=0x0010000000431b92
@property(readonly, nonatomic) _Bool pptTestHasNextStep;
@property(readonly, nonatomic) long long pptTestCurrentStepIndex;
@property(readonly, nonatomic) _Bool pptTestSupportStepping;
- (void)_endButtonPressed;	// IMP=0x00100000004319f8
- (double)_maximumMediumCardHeight;	// IMP=0x00100000004318fc
- (struct CGRect)_rectOfRowToKeepVisible;	// IMP=0x0010000000431891
- (void)transitionControllerWillFinish:(id)arg1;	// IMP=0x001000000043188b
- (void)transitionControllerWillStart:(id)arg1;	// IMP=0x0010000000431885
- (id)transitionContextForTransitionController:(id)arg1;	// IMP=0x00100000004315e4
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000431410
- (void)headerViewTapped:(id)arg1;	// IMP=0x0000000000431347
- (id)contentView;	// IMP=0x001000000043132a
- (id)headerView;	// IMP=0x0010000000431315
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x001000000043102d
- (void)didChangeContainerStyle:(unsigned long long)arg1;	// IMP=0x0010000000430f2e
- (void)didChangeLayout:(unsigned long long)arg1;	// IMP=0x0010000000430e33
- (void)willChangeLayout:(unsigned long long)arg1;	// IMP=0x0010000000430db8
- (void)updateBacklightSceneEnvironment;	// IMP=0x0010000000430cb7
- (void)updateForCurrentDisplayedStepAnimated:(_Bool)arg1;	// IMP=0x0010000000430990
- (void)updateForCurrentDisplayedStep;	// IMP=0x0010000000430979
- (void)updateForClusteredLegSelectedRideIndexChange;	// IMP=0x0010000000430931
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000043084d
- (void)_updateListBackgroundAlphaForCurrentCardHeight:(double)arg1;	// IMP=0x0010000000430830
- (void)_updateHeaderViewForCurrentCardHeight:(double)arg1;	// IMP=0x00100000004306ba
- (void)_updateTransitionControllerForTransitionProgressSmallToMedium:(double)arg1 mediumToFull:(double)arg2;	// IMP=0x0010000000430168
- (_Bool)_updateListContentInsetWithHeight:(double)arg1;	// IMP=0x001000000042fecd
- (void)_updateTransitionProgressForCurrentCard;	// IMP=0x001000000042fcc9
- (void)viewDidLayoutSubviews;	// IMP=0x001000000042fbe3
- (void)viewWillLayoutSubviews;	// IMP=0x001000000042f9e0
- (void)viewDidLoad;	// IMP=0x001000000042ec42
- (void)setTitle:(id)arg1;	// IMP=0x001000000042ebd0
- (id)initWithRoute:(id)arg1 stepsListDelegate:(id)arg2;	// IMP=0x001000000042ea28
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000042ea20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
