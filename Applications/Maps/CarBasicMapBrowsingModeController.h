//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CarMapTrackingController, ChromeViewController, NSArray, NSString;

@interface CarBasicMapBrowsingModeController : NSObject
{
    _Bool _didSetInitialTracking;	// 8 = 0x8
    ChromeViewController *_chromeViewController;	// 16 = 0x10
    CarMapTrackingController *_trackingController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000c91825
@property(nonatomic) __weak ChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"ChromeViewController",?,W,N,V_chromeViewController

@property(readonly, nonatomic) NSArray *carFocusOrderSequences;
- (void)resignTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000c9175f
- (void)becomeTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000c91525
- (void)configureNavigationDisplay:(id)arg1;	// IMP=0x0010000000c914c2
@property(readonly, nonatomic) _Bool showsMapView;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (void)setMapCamera:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000c91371
- (void)setVisibleMapRegion:(CDStruct_b7cb895d)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000c911c2
- (void)setInitialTrackingIfNeededAndPossible;	// IMP=0x0010000000c90fcb
@property(readonly, nonatomic) CarMapTrackingController *trackingController; // @synthesize trackingController=_trackingController;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"CarMapTrackingController",?,R,N,V_trackingController

- (id)mapView;	// IMP=0x0010000000c90f40
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;	// IMP=0x0010000000c90ed1

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

@property(readonly, nonatomic) _Bool showsSpeedLimit;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly) Class superclass;
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
