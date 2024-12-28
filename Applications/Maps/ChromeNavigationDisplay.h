//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ChromeNavigationDisplayConfiguration, ChromeNavigationDisplayRateThrottle, ChromeViewController, GEOComposedRoute, MKMapView, MNTrafficIncidentAlert, NSString, NavCameraController, NavigationDisplay;
@protocol ChromeNavigationDisplayDelegate;

@interface ChromeNavigationDisplay : NSObject
{
    ChromeNavigationDisplayConfiguration *_configuration;	// 8 = 0x8
    _Bool _hasArrived;	// 16 = 0x10
    _Bool _isRunning;	// 17 = 0x11
    _Bool _mapClearsUserLocationOnReset;	// 18 = 0x12
    unsigned long long _currentStepIndex;	// 24 = 0x18
    double _currentCameraOffset;	// 32 = 0x20
    GEOComposedRoute *_route;	// 40 = 0x28
    NavigationDisplay *_navigationDisplay;	// 48 = 0x30
    ChromeNavigationDisplayRateThrottle *_throttle;	// 56 = 0x38
    ChromeNavigationDisplayConfiguration *_lastAppliedConfiguration;	// 64 = 0x40
    _Bool _suppressed;	// 72 = 0x48
    _Bool _cameraPanning;	// 73 = 0x49
    id <ChromeNavigationDisplayDelegate> _delegate;	// 80 = 0x50
    MNTrafficIncidentAlert *_trafficAlert;	// 88 = 0x58
    unsigned long long _currentCameraMode;	// 96 = 0x60
    ChromeViewController *_chromeViewController;	// 104 = 0x68
}

+ (id)defaultConfiguration;	// IMP=0x0020000000de1410
- (void).cxx_destruct;	// IMP=0x0020000000de514d
@property(nonatomic) __weak ChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(nonatomic) unsigned long long currentCameraMode; // @synthesize currentCameraMode=_currentCameraMode;
@property(retain, nonatomic) MNTrafficIncidentAlert *trafficAlert; // @synthesize trafficAlert=_trafficAlert;
@property(nonatomic, getter=isCameraPanning) _Bool cameraPanning; // @synthesize cameraPanning=_cameraPanning;
@property(nonatomic, getter=isSuppressed) _Bool suppressed; // @synthesize suppressed=_suppressed;
@property(nonatomic) __weak id <ChromeNavigationDisplayDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) ChromeNavigationDisplayConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)navigationService:(id)arg1 didUpdateTrafficForRouteID:(id)arg2;	// IMP=0x0010000000de4e7f
- (void)navigationService:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;	// IMP=0x0010000000de4d88
- (void)navigationService:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;	// IMP=0x0010000000de4c91
- (void)navigationService:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;	// IMP=0x0010000000de4b9a
- (void)navigationService:(id)arg1 didEnableGuidancePrompts:(_Bool)arg2;	// IMP=0x0010000000de4b94
- (void)navigationService:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3 reason:(unsigned long long)arg4;	// IMP=0x0010000000de4b82
- (void)navigationService:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x0010000000de4afb
- (void)navigationService:(id)arg1 didUpdateMatchedLocation:(id)arg2;	// IMP=0x0010000000de4ae6
- (void)navigationService:(id)arg1 didUpdateAlternateRoutes:(id)arg2 traffics:(id)arg3;	// IMP=0x0010000000de4ad4
- (void)navigationService:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 traffic:(id)arg4;	// IMP=0x0010000000de4abf
- (void)navigationService:(id)arg1 didReroute:(id)arg2 rerouteReason:(unsigned long long)arg3;	// IMP=0x0010000000de4a51
- (void)navigationServiceDidCancelReroute:(id)arg1;	// IMP=0x0010000000de4a4b
- (void)navigationServiceWillReroute:(id)arg1;	// IMP=0x0010000000de4a45
- (_Bool)mapView:(id)arg1 shouldSelectLabelMarker:(id)arg2;	// IMP=0x0010000000de4974
- (void)navigationService:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x0010000000de4907
- (void)navigationService:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x0010000000de48ce
- (void)didTapMapView:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x0010000000de480d
- (void)mapViewNavigationCameraHasStoppedPanning:(id)arg1;	// IMP=0x0010000000de47f4
- (void)mapViewNavigationCameraHasStartedPanning:(id)arg1;	// IMP=0x0010000000de47d8
- (void)mapView:(id)arg1 willStartRespondingToGesture:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000de476e
- (void)navigationDisplay:(id)arg1 didChangeUserTrackingMode:(long long)arg2;	// IMP=0x0010000000de4719
- (void)throttle:(id)arg1 calculatedNewDisplayRate:(long long)arg2;	// IMP=0x0010000000de467c
- (void)setTemporaryDisplayRate:(long long)arg1 forDuration:(double)arg2;	// IMP=0x0010000000de45bb
- (void)updateDisplayRate;	// IMP=0x0010000000de4324
- (unsigned long long)_routeMarkerOptionsForCameraStyle:(long long)arg1 incidentAlert:(id)arg2;	// IMP=0x0010000000de42f8
- (void)_transitionToCameraStyle:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000de3f2c
- (void)setCameraPanning:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000de3e34
- (void)_stopNavigationCameraMotion;	// IMP=0x0010000000de3da9
- (void)_pauseNavigationCameraMotion;	// IMP=0x0010000000de3d32
- (void)_startNavigationCameraMotionAnimated:(_Bool)arg1;	// IMP=0x0010000000de3976
- (void)mapInsetsDidChangeAnimated:(_Bool)arg1;	// IMP=0x0010000000de3912
- (double)_horizontalCameraOffset;	// IMP=0x0010000000de37a1
- (void)_applyHorizontalCameraOffset:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000de35dd
- (void);	// IMP=0x0010000000de34cb
- (void)_prepareNavigationDisplay;	// IMP=0x0010000000de3056
- (void)_cleanupNavigationDisplay;	// IMP=0x0010000000de2e3f
- (void)startRunningNavigationAnimated:(_Bool)arg1;	// IMP=0x0010000000de2c96
- (void)stopRunningNavigationAnimated:(_Bool)arg1;	// IMP=0x0010000000de2b00
- (void)setSuppressed:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000de28fc
- (void)zoomOut;	// IMP=0x0010000000de2808
- (void)zoomIn;	// IMP=0x0010000000de2728
@property(readonly, nonatomic) NavCameraController *cameraController;
- (void)_ioHIDRepeatCurrentGuidance:(id)arg1;	// IMP=0x0010000000de2672
- (void)_updateWithMatchedLocation:(id)arg1;	// IMP=0x0010000000de2474
- (void)_clearAnnotations;	// IMP=0x0010000000de2374
- (void)_updateDirectionsAnnotationManagerDisplayedRoutes;	// IMP=0x0010000000de232b
- (_Bool)updateRouteAnnotationsConfiguration:(id)arg1;	// IMP=0x0010000000de1fec
- (void)_updateForCurrentRoute;	// IMP=0x0010000000de1e45
- (void)_setRoute:(id)arg1;	// IMP=0x0010000000de1c4c
- (void)_captureCurrentNavigationState;	// IMP=0x0010000000de1a64
- (void)_updateWithRouteGeniusEntry:(id)arg1;	// IMP=0x0010000000de1a26
- (void)updateWithRoute:(id)arg1;	// IMP=0x0010000000de19c4
- (void)_setConfiguration:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000de15da
- (void)configureDisplay:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000de1473
@property(readonly, nonatomic) id mapViewDelegate;
@property(readonly, nonatomic) __weak MKMapView *mapView;
- (id)initWithChromeViewController:(id)arg1;	// IMP=0x0010000000de1317
- (id)init;	// IMP=0x0010000000de1303
- (void)dealloc;	// IMP=0x0010000000de12c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
