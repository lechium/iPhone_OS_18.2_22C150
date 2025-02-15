//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CarChromeNavigationCameraStyleManager, CarGuidanceCardViewController, CarMapTrackingController, CarMapWidgetETACardViewController, ChromeViewController, GEOComposedRoute, GuidanceObserver, NSArray, NSString;

@interface CarHybridInstrumentClusterNavigationModeController : NSObject
{
    _Bool _hasArrived;	// 8 = 0x8
    _Bool _hasETAInfo;	// 9 = 0x9
    ChromeViewController *_chromeViewController;	// 16 = 0x10
    long long _cameraStyle;	// 24 = 0x18
    CarGuidanceCardViewController *_guidanceCardController;	// 32 = 0x20
    CarMapWidgetETACardViewController *_etaCardController;	// 40 = 0x28
    GEOComposedRoute *_currentRoute;	// 48 = 0x30
    CarChromeNavigationCameraStyleManager *_cameraStyleManager;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000009d5a63
@property(retain, nonatomic) CarChromeNavigationCameraStyleManager *cameraStyleManager; // @synthesize cameraStyleManager=_cameraStyleManager;
@property(nonatomic) _Bool hasETAInfo; // @synthesize hasETAInfo=_hasETAInfo;
@property(nonatomic) _Bool hasArrived; // @synthesize hasArrived=_hasArrived;
@property(retain, nonatomic) GEOComposedRoute *currentRoute; // @synthesize currentRoute=_currentRoute;
@property(retain, nonatomic) CarMapWidgetETACardViewController *etaCardController; // @synthesize etaCardController=_etaCardController;
@property(retain, nonatomic) CarGuidanceCardViewController *guidanceCardController; // @synthesize guidanceCardController=_guidanceCardController;
@property(readonly, nonatomic) long long cameraStyle; // @synthesize cameraStyle=_cameraStyle;
@property(nonatomic) __weak ChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"ChromeViewController",?,W,N,V_chromeViewController

- (void)generateAttachmentsForRadarDraft:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000009d5720
- (void)carChromeNavigationCameraStyleManager:(id)arg1 didChangeInstrumentClusterCameraStyle:(long long)arg2;	// IMP=0x00100000009d56e5
- (void)carDisplayConfigDidChangeNotification:(id)arg1;	// IMP=0x00100000009d569c
- (void)chromeConfigurationDidUpdateNotification:(id)arg1;	// IMP=0x00100000009d5639
@property(readonly, nonatomic) unsigned long long maneuverViewLayoutType;
@property(readonly, nonatomic) struct CGSize availableSize;
@property(readonly, nonatomic) NSString *arrivalSubtitle;
@property(readonly, nonatomic) NSString *arrivalTitle;
- (id)contactSharingSuggestion;	// IMP=0x00100000009d55bc
- (id)sharingButtonTitle;	// IMP=0x00100000009d55af
- (_Bool)isSharingTrip;	// IMP=0x00100000009d55a7
- (id)upcomingWaypoints;	// IMP=0x00100000009d5517
- (void)etaCardSign:(id)arg1 didSelectAction:(unsigned long long)arg2;	// IMP=0x00100000009d53cf
- (void)navigationService:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3 batteryChargeInfo:(id)arg4;	// IMP=0x00100000009d53bd
- (void)navigationService:(id)arg1 didUpdateArrivalInfo:(id)arg2;	// IMP=0x00100000009d5383
- (void)navigationService:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x00100000009d530b
- (void)navigationService:(id)arg1 didReroute:(id)arg2 rerouteReason:(unsigned long long)arg3;	// IMP=0x00100000009d52f6
- (void)updateCardsAnimated:(_Bool)arg1;	// IMP=0x00100000009d5264
- (_Bool)shouldShowETATray;	// IMP=0x00100000009d4d81
- (_Bool)shouldShowGuidanceCard;	// IMP=0x00100000009d4a4f
- (id)_mapWidgetChromeViewController;	// IMP=0x00100000009d4811
- (void)chromeNavigationDisplay:(id)arg1 configurationDidChange:(id)arg2;	// IMP=0x00100000009d45a0
@property(readonly, nonatomic) NSArray *carFocusOrderSequences;
- (void)_setupGuidanceDisplays:(_Bool)arg1;	// IMP=0x00100000009d43e1
@property(readonly, nonatomic) GuidanceObserver *guidanceObserver;
- (void)_updateDisplayETA;	// IMP=0x00100000009d3fa5
- (_Bool)supportsAlternateRouteSelection;	// IMP=0x00100000009d3f9d
- (void)configureCard:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000009d38b8
- (id)desiredCards;	// IMP=0x00100000009d3777
- (id)personalizedItemSources;	// IMP=0x00100000009d3648
- (void)resignTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x00100000009d3474
- (void)becomeTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x00100000009d3077
@property(readonly, nonatomic) long long accessoriesHidingBehavior;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N

@property(readonly, nonatomic) long long autohideBehavior;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N

@property(readonly, nonatomic) _Bool shouldMapControlsModifyMapInsets;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool shouldAccessoriesModifyMapInsets;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool allowMapZoomAndRecentering;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool showsSpeedLimit;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool showsMapView;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (_Bool)wantsNavigationDisplay;	// IMP=0x00100000009d2fc9
@property(readonly, nonatomic) _Bool showsHeadingIndicator;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (_Bool)hidesStatusBanner;	// IMP=0x00100000009d2f36
- (void)configureNavigationDisplay:(id)arg1;	// IMP=0x00100000009d2d54
- (void)refreshCameraTypeAnimated:(_Bool)arg1;	// IMP=0x00100000009d2be9
- (void)setCameraStyle:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00100000009d2b1a
- (void)setCameraStyle:(long long)arg1;	// IMP=0x00100000009d2b06
- (id)mapView;	// IMP=0x00100000009d2ab6
- (void)prepareToEnterStackInChromeViewController:(id)arg1;	// IMP=0x00100000009d2a45
- (void)dealloc;	// IMP=0x00100000009d297f
- (id)init;	// IMP=0x00100000009d27bb

// Remaining properties
@property(readonly, nonatomic) _Bool allowKnobNudgeMapPanning;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

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

@property(readonly, nonatomic) _Bool shouldTimeoutAfterDisconnect;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool shouldTimeoutDuringNavigation;
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

