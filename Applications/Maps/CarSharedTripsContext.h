//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CarMapTrackingController, CarSharedTripDetailCardViewController, CarSharedTripsCardViewController, ChromeViewController, NSArray, NSString, SharedTripsAnnotationsController;

@interface CarSharedTripsContext
{
    SharedTripsAnnotationsController *_annotationsController;	// 8 = 0x8
    CarSharedTripsCardViewController *_listCardViewController;	// 16 = 0x10
    CarSharedTripDetailCardViewController *_selectedSharedTripCardViewController;	// 24 = 0x18
    ChromeViewController *_chromeViewController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000d4e098
@property(nonatomic) __weak ChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"ChromeViewController",?,W,N,V_chromeViewController

@property(readonly, nonatomic) NSArray *carFocusOrderSequences;
- (id)_transportTypeStringForAnalytics;	// IMP=0x0010000000d4dde8
@property(readonly, nonatomic) int currentUsageTarget;
// Preceding property had unknown attributes: ?
// Original attribute string: Ti,?,R,N

- (id)backButtonUsageEventValueToContext:(id)arg1;	// IMP=0x0010000000d4ddb7
- (int)backButtonUsageActionToContext:(id)arg1;	// IMP=0x0010000000d4ddac
- (void)sharedTripDetailCard:(id)arg1 didSelectAction:(unsigned long long)arg2;	// IMP=0x0010000000d4dbd5
- (_Bool)provideAttachmentsForRadarDraft:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000d4d8a3
- (_Bool)usesDefaultTransitions;	// IMP=0x0010000000d4d89b
- (void)presentErrorForUnsupportedProtocolOrTransportWithTrip:(id)arg1;	// IMP=0x0010000000d4d750
- (void)presentErrorForChinaTrip:(id)arg1;	// IMP=0x0010000000d4d605
- (void)presentDetailsForSelectedTrip;	// IMP=0x0010000000d4d4ec
- (id)sharedTripsAnnotationsController;	// IMP=0x0010000000d4d4ab
- (id)searchPinsManager;	// IMP=0x0010000000d4d45b
- (id)routeAnnotationsController;	// IMP=0x0010000000d4d40b
- (id)mapView;	// IMP=0x0010000000d4d3bb
- (id)cameraController;	// IMP=0x0010000000d4d36b
- (id)routeAnnotationsProvider;	// IMP=0x0010000000d4d359
- (id)personalizedItemSources;	// IMP=0x0010000000d4d2b7
- (void)layoutForUnobscuredBoundsChange;	// IMP=0x0010000000d4d2a0
- (void)carCardViewCloseButtonTapped:(id)arg1;	// IMP=0x0010000000d4d05b
- (void)configureCard:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000d4cbe4
- (id)desiredCards;	// IMP=0x0010000000d4cb16
- (void)resignTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000d4c99a
- (void)becomeTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000d4c6be
- (void)dismiss;	// IMP=0x0010000000d4c66b
- (id)init;	// IMP=0x0010000000d4c3c1

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

@property(readonly, nonatomic) _Bool shouldAccessoriesModifyMapInsets;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool shouldAllowKnobFocusMovement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool shouldMapControlsModifyMapInsets;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool shouldTimeoutAfterDisconnect;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool shouldTimeoutDuringNavigation;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool showsHeadingIndicator;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool showsMapView;
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
