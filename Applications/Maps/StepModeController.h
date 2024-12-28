//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, IOSBasedChromeViewController, MKMapCamera, NSString, NavigationPowerLogger, PlaceCardItem, RouteAnnotationsConfiguration, StatusBarBackgroundViewStyle, StepContainerViewController, UIView;
@protocol StatusBarSupplementaryView, StepActionCoordination;

@interface StepModeController : NSObject
{
    long long _previousHeadingIndicatorStyle;	// 8 = 0x8
    _Bool _previousEnabledStatus;	// 16 = 0x10
    NavigationPowerLogger *_powerLogger;	// 24 = 0x18
    _Bool _initializedWithUserTrackingMode;	// 32 = 0x20
    GEOComposedRoute *_route;	// 40 = 0x28
    IOSBasedChromeViewController *_chromeViewController;	// 48 = 0x30
    StepContainerViewController *_containerViewController;	// 56 = 0x38
    long long _desiredTrackingMode;	// 64 = 0x40
    MKMapCamera *_desiredInitialCamera;	// 72 = 0x48
    unsigned long long _initialStepIndex;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000e0ae3c
@property(nonatomic) unsigned long long initialStepIndex; // @synthesize initialStepIndex=_initialStepIndex;
@property(retain, nonatomic) MKMapCamera *desiredInitialCamera; // @synthesize desiredInitialCamera=_desiredInitialCamera;
@property(nonatomic) _Bool initializedWithUserTrackingMode; // @synthesize initializedWithUserTrackingMode=_initializedWithUserTrackingMode;
@property(nonatomic) long long desiredTrackingMode; // @synthesize desiredTrackingMode=_desiredTrackingMode;
@property(retain, nonatomic) StepContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) __weak IOSBasedChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(retain, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
- (_Bool)permitsLookAroundShowing;	// IMP=0x0010000000e0adae
- (_Bool)wantsLookAroundShowing;	// IMP=0x0010000000e0ada6
- (_Bool)permitsWeatherShowing;	// IMP=0x0010000000e0ad9e
- (_Bool)wantsWeatherShowing;	// IMP=0x0010000000e0ad96
@property(readonly, nonatomic) UIView<StatusBarSupplementaryView> *statusBarSupplementaryView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView<StatusBarSupplementaryView>",?,R,N

@property(readonly, nonatomic) StatusBarBackgroundViewStyle *statusBarBackgroundViewStyle;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"StatusBarBackgroundViewStyle",?,R,N

- (long long)preferredStatusBarStyle;	// IMP=0x0010000000e0acb2
- (_Bool)prefersStatusBarHidden;	// IMP=0x0010000000e0ac6e
- (_Bool)wantsStatusBarControl;	// IMP=0x0010000000e0ac66
@property(readonly, nonatomic) _Bool shouldResetStateAfterResigning;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (void)didEndDisplayingInLockScreen;	// IMP=0x0010000000e0ac58
- (void)willBeginDisplayingInSecureLockScreen;	// IMP=0x0010000000e0ac1b
- (_Bool)supportsLockscreen;	// IMP=0x0010000000e0abfe
- (void)_locationManagerApprovalDidChange:(id)arg1;	// IMP=0x0010000000e0ab07
- (void)getCurrentSceneTitleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000e0a916
- (void)_resignTopContextInChromeViewController:(id)arg1;	// IMP=0x0010000000e0a6f8
- (void)resignTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000e0a5d2
- (void)_becomeTopContextInChromeViewController:(id)arg1;	// IMP=0x0010000000e0a1b0
- (void)becomeTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000e0a08a
- (_Bool)updateRouteAnnotationsConfiguration:(id)arg1;	// IMP=0x0010000000e09fb3
- (_Bool)wantsRouteAnnotationsControl;	// IMP=0x0010000000e09fab
- (id)personalizedItemSources;	// IMP=0x0010000000e09e7c
- (id)fullscreenViewController;	// IMP=0x0010000000e09e6a
- (_Bool)wantsCompassLayoutControl;	// IMP=0x0010000000e09e54
@property(readonly, nonatomic) _Bool showsMapView;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (id)mapViewDelegate;	// IMP=0x0010000000e09e3e
- (id)transitionControllerForPopToMode:(id)arg1;	// IMP=0x0010000000e09e25
- (id)transitionControllerForPushFromMode:(id)arg1;	// IMP=0x0010000000e09e0c
- (_Bool)usesDefaultTransitions;	// IMP=0x0010000000e09e04
@property(readonly, nonatomic) id <StepActionCoordination> actionCoordinator;
- (void)updateWithDisplayedStep:(id)arg1;	// IMP=0x0010000000e09c34
- (id)initWithRoute:(id)arg1 initialStepIndex:(unsigned long long)arg2 desiredUserTrackingMode:(id)arg3;	// IMP=0x0010000000e09b11

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) PlaceCardItem *placeCardItemForLookAroundButton;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"PlaceCardItem",?,R,N

@property(readonly, nonatomic) RouteAnnotationsConfiguration *routeAnnotationsConfiguration;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"RouteAnnotationsConfiguration",?,R,N

@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsMapInsetsToRespectSafeAreaInsets;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N


@end
