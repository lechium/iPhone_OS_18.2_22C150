//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CarMapTrackingController, ChromeViewController, MapsSuggestionsRouteGeniusEntry, NSArray, NSString, UIImageView, UILabel;

@interface CarSmallWidgetRouteGeniusModeController : UIViewController
{
    ChromeViewController *_chromeViewController;	// 8 = 0x8
    MapsSuggestionsRouteGeniusEntry *_currentSuggestion;	// 16 = 0x10
    UIImageView *_imageView;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_subtitleLabel;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000a48cd7
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) MapsSuggestionsRouteGeniusEntry *currentSuggestion; // @synthesize currentSuggestion=_currentSuggestion;
@property(nonatomic) __weak ChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"ChromeViewController",?,W,N,V_chromeViewController

- (void)didUpdateRouteGenius:(id)arg1;	// IMP=0x0010000000a48c18
@property(readonly, nonatomic) NSArray *carFocusOrderSequences;
- (void)resignTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000a48ad3
- (void)becomeTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000a48943
@property(readonly, nonatomic) _Bool showsMapView;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (id)fullscreenViewController;	// IMP=0x0010000000a48932
- (id)_car_smallWidgetName;	// IMP=0x0010000000a487f9
- (_Bool)_isHomeOrWorkSuggestion:(id)arg1;	// IMP=0x0010000000a48798
- (void)_updateRouteGeniusCardContents;	// IMP=0x0010000000a4846c
- (void)_setupRouteGeniusCardIfNeeded;	// IMP=0x0010000000a47348
- (id)initWithSuggestion:(id)arg1;	// IMP=0x0010000000a47296

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

