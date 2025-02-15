//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CarMapTrackingController, ChromeMapSettings, ChromeViewController, GEOComposedRoute, MapsSuggestionsRouteGeniusEntry, MapsThrottler, NSArray, NSString, SearchResult;
@protocol OS_dispatch_queue;

@interface CarBasicRouteGeniusModeController : NSObject
{
    GEOComposedRoute *_currentlyDisplayedRoute;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    MapsThrottler *_locationUpdateReframingThrottler;	// 24 = 0x18
    _Bool _navigationAidedDrivingEnabled;	// 32 = 0x20
    ChromeViewController *_chromeViewController;	// 40 = 0x28
    MapsSuggestionsRouteGeniusEntry *_currentSuggestion;	// 48 = 0x30
    long long _state;	// 56 = 0x38
    ChromeMapSettings *_routeGeniusMapSettings;	// 64 = 0x40
    SearchResult *_destinationPin;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000cb3e78
@property(retain, nonatomic) SearchResult *destinationPin; // @synthesize destinationPin=_destinationPin;
@property(retain, nonatomic) ChromeMapSettings *routeGeniusMapSettings; // @synthesize routeGeniusMapSettings=_routeGeniusMapSettings;
@property(nonatomic) _Bool navigationAidedDrivingEnabled; // @synthesize navigationAidedDrivingEnabled=_navigationAidedDrivingEnabled;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak ChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"ChromeViewController",?,W,N,V_chromeViewController

- (void)didUpdateRouteGenius:(id)arg1;	// IMP=0x0010000000cb3dda
@property(readonly, nonatomic) NSArray *carFocusOrderSequences;
@property(retain, nonatomic) MapsSuggestionsRouteGeniusEntry *currentSuggestion; // @synthesize currentSuggestion=_currentSuggestion;
- (id)currentRoute;	// IMP=0x0010000000cb3da9
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;	// IMP=0x0010000000cb382c
- (void)mapInsetsDidChangeAnimated:(_Bool)arg1;	// IMP=0x0010000000cb381a
- (void)recenterCameraOnRouteAnimated:(_Bool)arg1;	// IMP=0x0010000000cb3408
- (void)frameRouteAnimated:(_Bool)arg1;	// IMP=0x0010000000cb3010
- (void)_externalDeviceUpdated:(id)arg1;	// IMP=0x0010000000cb2f94
- (void)poiShapeLoader:(id)arg1 didLoadStartPOIShape:(id)arg2 endPOIShapes:(id)arg3;	// IMP=0x0010000000cb2c4c
- (id)routeAnnotationsProvider;	// IMP=0x0010000000cb2bfc
- (_Bool)wantsRouteAnnotationsControl;	// IMP=0x0010000000cb2bf4
- (void)_clearAnnotations;	// IMP=0x0010000000cb2b1f
- (void)resignTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000cb2829
- (void)becomeTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000cb1beb
- (void)configureNavigationDisplay:(id)arg1;	// IMP=0x0010000000cb1b61
@property(readonly, nonatomic) _Bool shouldMapControlsModifyMapInsets;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool shouldAccessoriesModifyMapInsets;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (_Bool)wantsNavigationDisplay;	// IMP=0x0010000000cb1ad0
@property(readonly, nonatomic) _Bool shouldTimeoutAfterDisconnect;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool showsMapView;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (id)personalizedItemSources;	// IMP=0x0010000000cb19dc
- (void)updateRouteAnnotations;	// IMP=0x0010000000cb083c
- (void)updateSearchPins;	// IMP=0x0010000000cb0442
- (void)_updateForCurrentRoute;	// IMP=0x0010000000cafb9f
- (id)initWithSuggestion:(id)arg1;	// IMP=0x0010000000cafabb

// Remaining properties
@property(readonly, nonatomic) long long accessoriesHidingBehavior;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N

@property(readonly, nonatomic) _Bool allowKnobNudgeMapPanning;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool allowMapZoomAndRecentering;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) long long autohideBehavior;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N

@property(readonly, nonatomic) double autohideIdlenessInterval;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,R,N

@property(readonly, nonatomic) int currentUsageTarget;
// Preceding property had unknown attributes: ?
// Original attribute string: Ti,?,R,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool invalidAfterDisconnect;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) CDStruct_917cde60 mapControlsConfiguration;
// Preceding property had unknown attributes: ?
// Original attribute string: T{?=QQQ},?,R,N

@property(readonly, nonatomic) NSArray *preferredCarFocusEnvironments;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,N

@property(readonly, nonatomic) _Bool shouldAllowKnobFocusMovement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool shouldTimeoutDuringNavigation;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool showsHeadingIndicator;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool showsSpeedLimit;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly) Class superclass;
@property(readonly, nonatomic) CarMapTrackingController *trackingController;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"CarMapTrackingController",?,R,N

@property(readonly, nonatomic) id visuallySelectedItem;
// Preceding property had unknown attributes: ?
// Original attribute string: T@,?,R,N

@property(readonly, nonatomic) _Bool wantsMapInsetsToRespectSafeAreaInsets;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool zoomInButtonPressed;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool zoomOutButtonPressed;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N


@end

