//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ActionCoordinator, CardAnimation, NSDate, NSString, PlatformController, StatusIndicatorManager, StatusIndicatorView, UIView, UIViewController;
@protocol FloatingControlsPresentation, IOSBasedChromeContext><PresentationModeProtocol, _MKMapViewSuspendedEffectsToken;

@interface ControlContainerViewController
{
    ActionCoordinator *_coordinator;	// 8 = 0x8
    id <_MKMapViewSuspendedEffectsToken> _mapSuspendedEffectsToken;	// 16 = 0x10
    struct CGRect _frameWhenEnteringBackground;	// 24 = 0x18
    id <IOSBasedChromeContext><PresentationModeProtocol> _chromeContext;	// 56 = 0x38
    PlatformController *_platformController;	// 64 = 0x40
    StatusIndicatorManager *_statusIndicatorManager;	// 72 = 0x48
    StatusIndicatorView *_statusIndicatorView;	// 80 = 0x50
    NSDate *_dateCreated;	// 88 = 0x58
    UIViewController *_viewControllerInActivePresentation;	// 96 = 0x60
}

+ (Class)actionCoordinatorClass;	// IMP=0x00200000006be764
- (void).cxx_destruct;	// IMP=0x00200000006c29c1
@property(nonatomic) __weak UIViewController *viewControllerInActivePresentation; // @synthesize viewControllerInActivePresentation=_viewControllerInActivePresentation;
@property(nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain, nonatomic) StatusIndicatorView *statusIndicatorView; // @synthesize statusIndicatorView=_statusIndicatorView;
@property(retain, nonatomic) StatusIndicatorManager *statusIndicatorManager; // @synthesize statusIndicatorManager=_statusIndicatorManager;
@property(retain, nonatomic) PlatformController *platformController; // @synthesize platformController=_platformController;
@property(readonly, nonatomic) ActionCoordinator *actionCoordinator; // @synthesize actionCoordinator=_coordinator;
@property(nonatomic) __weak id <IOSBasedChromeContext><PresentationModeProtocol> chromeContext; // @synthesize chromeContext=_chromeContext;
@property(readonly, nonatomic) id <FloatingControlsPresentation> floatingControlsPresentationController;
- (int)currentMapViewTargetForAnalytics;	// IMP=0x00100000006c2806
- (int)currentUITargetForAnalytics;	// IMP=0x00100000006c2786
- (void)_offlineMapsStateChanged;	// IMP=0x00100000006c26b3
- (void)updateTopBannerViewWithTopBannerItems:(id)arg1;	// IMP=0x00100000006c25be
- (double)_topBannerMaxHeight;	// IMP=0x00100000006c2498
- (id)_topBannerViewHorizontalConstraints;	// IMP=0x00100000006c223c
- (id)statusBarSupplementaryView;	// IMP=0x00100000006c21c9
- (id)statusBarBackgroundViewStyle;	// IMP=0x00100000006c21a9
- (void)statusIndicatorTypeChanged:(unsigned long long)arg1;	// IMP=0x00100000006c2100
- (void)_didTapStatusIndicatorView:(id)arg1;	// IMP=0x00100000006c1fcb
- (void)_captureStatusIndicatorViewTapAction:(int)arg1;	// IMP=0x00100000006c1f27
- (void)setChromeHidden:(_Bool)arg1;	// IMP=0x00100000006c1cce
- (void)didTapMapView:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x00100000006c1a7e
- (void)expandPlaceCardController;	// IMP=0x00100000006c19c1
- (void)mapView:(id)arg1 calloutPrimaryActionTriggeredForAnnotationView:(id)arg2;	// IMP=0x00100000006c19af
- (void)mapView:(id)arg1 calloutPrimaryActionTriggeredForLabelMarker:(id)arg2;	// IMP=0x00100000006c199d
- (void)mapViewDidStartUserInteraction:(id)arg1;	// IMP=0x00100000006c1931
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;	// IMP=0x00100000006c185b
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x00100000006c16ae
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(_Bool)arg3 fromTrackingButton:(_Bool)arg4;	// IMP=0x00100000006c1511
- (void)mapView:(id)arg1 didStopRespondingToGesture:(long long)arg2 zoomDirection:(long long)arg3 zoomGestureType:(long long)arg4 didDecelerate:(_Bool)arg5 tiltDirection:(long long)arg6;	// IMP=0x00100000006c1436
- (void)mapView:(id)arg1 willStartRespondingToGesture:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x00100000006c137c
- (void)mapView:(id)arg1 didChangeDisplayedFloorOrdinal:(short)arg2 forVenue:(id)arg3;	// IMP=0x00100000006c129f
- (void)mapView:(id)arg1 didChangeFocusedVenue:(id)arg2 focusedBuilding:(id)arg3;	// IMP=0x00100000006c11b4
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;	// IMP=0x00100000006c1006
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;	// IMP=0x00100000006c0ee1
- (void)mapViewDidChangeVisibleRegion:(id)arg1;	// IMP=0x00100000006c0e3b
- (_Bool)mapViewShouldHandleTapToDeselect:(id)arg1;	// IMP=0x00100000006c0d7a
- (void)mapView:(id)arg1 didChangeMapType:(unsigned long long)arg2;	// IMP=0x00100000006c0ccc
- (void)mapView:(id)arg1 didChangeLookAroundAvailability:(long long)arg2;	// IMP=0x00100000006c0c80
- (void)mapView:(id)arg1 didBecomePitched:(_Bool)arg2;	// IMP=0x00100000006c0c37
- (void)_cancelAllOngoingGesturesBeingRecognizedInView:(id)arg1;	// IMP=0x00100000006c0ab4
@property(readonly, nonatomic) UIView *passThroughView;
- (long long)preferredUserInterfaceStyle;	// IMP=0x00100000006c0a20
- (void)updateContentInjection;	// IMP=0x00100000006c09b0
- (void)_setUpdateContentInjectionBlockForController:(id)arg1;	// IMP=0x00100000006c080c
- (void)transitionAlongsideContainee:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000006c0752
- (void)willPresentContainee:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000006c0693
- (void)replaceCurrentWithController:(id)arg1 moveToContaineeLayout:(unsigned long long)arg2;	// IMP=0x00100000006c05fc
- (void)removeControllersFromStack:(id)arg1;	// IMP=0x00100000006c04a8
- (void)presentController:(id)arg1 animated:(_Bool)arg2 useDefaultContaineeLayout:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000006c0348
- (_Bool)_permitCompassShowing;	// IMP=0x00100000006c0289
@property(readonly, nonatomic) long long floatingControlsOptions;
- (void)containerStyleManagerDidChangeStyle:(unsigned long long)arg1;	// IMP=0x00100000006bff85
- (void)containerStyleManagerWillChangeStyle:(unsigned long long)arg1;	// IMP=0x00100000006bff56
- (unsigned long long)originalLayoutForViewController:(id)arg1;	// IMP=0x00100000006bfe08
- (_Bool)isRootContainer;	// IMP=0x00100000006bfe00
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000006bfd53
- (void)_applicationDidBecomeActive:(id)arg1;	// IMP=0x00100000006bfc5e
- (void)_applicationDidEnterBackground:(id)arg1;	// IMP=0x00100000006bfbe3
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000006bf6d8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000006bf65b
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00100000006bf5b5
- (void)viewDidLoad;	// IMP=0x00100000006bf50f
- (id)_controlContainerDimmingBehaviour;	// IMP=0x00100000006bf410
- (_Bool)_chromeEnabled;	// IMP=0x00100000006bf379
- (_Bool)delaysFirstCardPresentation;	// IMP=0x00100000006bf371
- (id)_mapViewIfCurrent;	// IMP=0x00100000006bf29e
- (void)contentHeightUpdatedWithValue:(double)arg1;	// IMP=0x00100000006bee8e
- (void)updateLayoutAnimated:(_Bool)arg1;	// IMP=0x00100000006becef
- (void)refreshControls;	// IMP=0x00100000006beca3
- (void)setChromeViewController:(id)arg1;	// IMP=0x00100000006bec57
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000006bebf0
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00100000006beb34
- (id)keyCommands;	// IMP=0x00100000006bea0a
- (id)initWithPlatformController:(id)arg1;	// IMP=0x00100000006be7e0
- (void)resetState;	// IMP=0x00100000006be78a
- (id)coordinator;	// IMP=0x00100000006be775
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000006be75c
@property(readonly, nonatomic) struct CGRect lookAroundButtonFrame;

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
