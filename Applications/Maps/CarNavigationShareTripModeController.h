//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CarMapTrackingController, CarShareTripFooterView, CarShareTripKeyboardSearchController, CarTableView, CarUserInputCell, ChromeViewController, MSPSharedTripSharingIdentity, NSArray, NSMutableDictionary, NSString, NSTimer, SharedTripSuggestionsDataSource;

@interface CarNavigationShareTripModeController : UIViewController
{
    CarTableView *_tableView;	// 8 = 0x8
    SharedTripSuggestionsDataSource *_dataSource;	// 16 = 0x10
    NSTimer *_dismissTimer;	// 24 = 0x18
    NSMutableDictionary *_cellsByContactStringValue;	// 32 = 0x20
    _Bool _userInteracted;	// 40 = 0x28
    CarUserInputCell *_userInputCell;	// 48 = 0x30
    CarShareTripKeyboardSearchController *_contactSearchResultsController;	// 56 = 0x38
    MSPSharedTripSharingIdentity *_sharingIdentity;	// 64 = 0x40
    CarShareTripFooterView *_footerView;	// 72 = 0x48
    struct CGSize _lastViewSize;	// 80 = 0x50
    ChromeViewController *_chromeViewController;	// 96 = 0x60
}

+ (void)attemptToStartShareWithContact:(id)arg1 sharingIdentity:(id)arg2 interruptPresenter:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0020000000416125
- (void).cxx_destruct;	// IMP=0x0020000000416918
@property(nonatomic) __weak ChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"ChromeViewController",?,W,N,V_chromeViewController

@property(readonly, nonatomic) int currentUsageTarget;
// Preceding property had unknown attributes: ?
// Original attribute string: Ti,?,R,N

- (int)backButtonUsageActionToMode:(id)arg1;	// IMP=0x00100000004168d5
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00100000004168c3
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000041687b
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000416873
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x001000000041686b
- (void)_attemptToStartShareWithContact:(id)arg1;	// IMP=0x0010000000415f19
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000415d4e
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x0010000000415d0d
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0010000000415b0d
- (void)carShareTripContactCellDidFinishRingAnimation:(id)arg1;	// IMP=0x0010000000415a66
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00100000004159be
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00100000004158b0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 itemIdentifier:(id)arg3;	// IMP=0x00100000004155e1
- (void)capabilityLevelFetcher:(id)arg1 didUpdateCapabilityLevelsForHandles:(id)arg2;	// IMP=0x001000000041535d
- (void)sharedTripService:(id)arg1 sharingDidInvalidateWithError:(id)arg2;	// IMP=0x0010000000415357
- (void)sharedTripService:(id)arg1 didUpdateReceivers:(id)arg2;	// IMP=0x0010000000415351
- (void)_updateWithSharingIdentity:(id)arg1;	// IMP=0x00100000004152b9
- (void)sharedTripService:(id)arg1 didUpdateSharingIdentity:(id)arg2;	// IMP=0x00100000004152a4
- (void)sharedTripServiceDidUpdateSendingAvailability:(id)arg1;	// IMP=0x0010000000415255
- (void)_handleContactSearchResults:(id)arg1 query:(id)arg2;	// IMP=0x0010000000414de3
- (void)_requestKeyboardInputUsingInteractionModel:(unsigned long long)arg1;	// IMP=0x0010000000414c8a
- (void)_displayContactResults:(id)arg1 withTitle:(id)arg2;	// IMP=0x0010000000414aeb
- (void)_requestDictation;	// IMP=0x0010000000414aa7
- (void)userInputCell:(id)arg1 didSelectAction:(unsigned long long)arg2 usingInteractionModel:(unsigned long long)arg3;	// IMP=0x0010000000414a46
- (void)_commitPendingShares;	// IMP=0x00100000004148ae
- (void)_cancelDismiss;	// IMP=0x001000000041486c
- (void)_dismissAfterDelay;	// IMP=0x0010000000414716
- (void)_toggleSharingForContactAtIndexPath:(id)arg1;	// IMP=0x00100000004146a9
- (void)_externalDeviceUpdated:(id)arg1;	// IMP=0x0010000000414623
- (id)focusOrderSubItems;	// IMP=0x00100000004144d2
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) NSArray *preferredCarFocusEnvironments;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,N

@property(readonly, nonatomic) NSArray *carFocusOrderSequences;
- (void)_closeResultsController;	// IMP=0x0010000000414191
- (void)carCardViewCloseButtonTapped:(id)arg1;	// IMP=0x00100000004140de
- (void)configureCard:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000413dff
- (id)desiredCards;	// IMP=0x0010000000413d7d
- (void)resignTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000413b51
- (void)becomeTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x001000000041397e
@property(readonly, nonatomic) long long accessoriesHidingBehavior;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N

@property(readonly, nonatomic) _Bool shouldAllowKnobFocusMovement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool invalidAfterDisconnect;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool showsMapView;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (void)_updateSizeOfView:(id)arg1;	// IMP=0x001000000041384b
- (void)_updateSharingFooterWithIdentity:(id)arg1;	// IMP=0x00100000004136f1
- (void)viewDidLayoutSubviews;	// IMP=0x00100000004135ab
- (void)_setupTableFooterView;	// IMP=0x0010000000413266
- (void)_setupTableHeaderView;	// IMP=0x0010000000412eec
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000412e1b
- (void)viewDidLoad;	// IMP=0x0010000000412994
- (id)init;	// IMP=0x0010000000412894

// Remaining properties
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

@property(nonatomic) struct CGSize availableCardSize;
// Preceding property had unknown attributes: ?
// Original attribute string: T{CGSize=dd},?,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CDStruct_917cde60 mapControlsConfiguration;
// Preceding property had unknown attributes: ?
// Original attribute string: T{?=QQQ},?,R,N

@property(readonly, nonatomic) _Bool shouldAccessoriesModifyMapInsets;
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

