//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccessibilityUIUtilities/AXUIDaemonApplicationDelegate.h>

@class AXElementActionManager, AXNotificationObserver, AXSSEventManager, AXUIBannerPresenter, FKAActionManager, FKACommandsViewController, FKAEventTap, FKARootViewController, FKATypeaheadViewController, NSDate, NSString, NSTimer, UIWindow;

@interface FKAApplicationDelegate : AXUIDaemonApplicationDelegate
{
    AXElementActionManager *_elementActionManager;	// 8 = 0x8
    UIWindow *_nonInteractiveWindow;	// 16 = 0x10
    _Bool _gesturesModeEnabled;	// 24 = 0x18
    _Bool _passthroughModeEnabled;	// 25 = 0x19
    _Bool _shouldIgnoreNextScreenChange;	// 26 = 0x1a
    _Bool _isShowingTextEditingModeInstructions;	// 27 = 0x1b
    int _nativeFocusElementDisplayID;	// 28 = 0x1c
    FKAEventTap *_eventTap;	// 32 = 0x20
    AXSSEventManager *_eventManager;	// 40 = 0x28
    FKATypeaheadViewController *_typeaheadController;	// 48 = 0x30
    FKACommandsViewController *_commandsViewController;	// 56 = 0x38
    AXUIBannerPresenter *_debugBannerPresenter;	// 64 = 0x40
    NSString *_gesturesModeKeyChordsIdentifier;	// 72 = 0x48
    AXNotificationObserver *_axNotificationObserver;	// 80 = 0x50
    id _availableCommandsUpdateToken;	// 88 = 0x58
    NSDate *_lastWakeDeviceDate;	// 96 = 0x60
    NSTimer *_typeaheadStartTimer;	// 104 = 0x68
    NSTimer *_debugDisplayTimer;	// 112 = 0x70
}

+ (id)featureEnabledStatusDidChangeNotification;	// IMP=0x0020000000013ca6
+ (_Bool)isFeatureEnabled;	// IMP=0x0010000000013c96
+ (id)debugFeatureName;	// IMP=0x0010000000013c89
+ (id)loggingFacility;	// IMP=0x0010000000013c7f
- (void).cxx_destruct;	// IMP=0x0020000000019643
@property(retain, nonatomic) NSTimer *debugDisplayTimer; // @synthesize debugDisplayTimer=_debugDisplayTimer;
@property(retain, nonatomic) NSTimer *typeaheadStartTimer; // @synthesize typeaheadStartTimer=_typeaheadStartTimer;
@property(nonatomic) int nativeFocusElementDisplayID; // @synthesize nativeFocusElementDisplayID=_nativeFocusElementDisplayID;
@property(nonatomic) _Bool isShowingTextEditingModeInstructions; // @synthesize isShowingTextEditingModeInstructions=_isShowingTextEditingModeInstructions;
- (_Bool)shouldIgnoreNextScreenChange;	// IMP=0x00100000000195a9
@property(retain, nonatomic) NSDate *lastWakeDeviceDate; // @synthesize lastWakeDeviceDate=_lastWakeDeviceDate;
@property(retain, nonatomic) id availableCommandsUpdateToken; // @synthesize availableCommandsUpdateToken=_availableCommandsUpdateToken;
@property(retain, nonatomic) AXNotificationObserver *axNotificationObserver; // @synthesize axNotificationObserver=_axNotificationObserver;
@property(copy, nonatomic) NSString *gesturesModeKeyChordsIdentifier; // @synthesize gesturesModeKeyChordsIdentifier=_gesturesModeKeyChordsIdentifier;
@property(nonatomic, getter=isPassthroughModeEnabled) _Bool passthroughModeEnabled; // @synthesize passthroughModeEnabled=_passthroughModeEnabled;
@property(nonatomic, getter=isGesturesModeEnabled) _Bool gesturesModeEnabled; // @synthesize gesturesModeEnabled=_gesturesModeEnabled;
@property(retain, nonatomic) AXUIBannerPresenter *debugBannerPresenter; // @synthesize debugBannerPresenter=_debugBannerPresenter;
@property(retain, nonatomic) FKACommandsViewController *commandsViewController; // @synthesize commandsViewController=_commandsViewController;
@property(retain, nonatomic) FKATypeaheadViewController *typeaheadController; // @synthesize typeaheadController=_typeaheadController;
@property(readonly, nonatomic) AXSSEventManager *eventManager; // @synthesize eventManager=_eventManager;
@property(retain, nonatomic) FKAEventTap *eventTap; // @synthesize eventTap=_eventTap;
- (void)didReleaseNativeFocus;	// IMP=0x00100000000193e2
- (void)willAquireNativeFocus;	// IMP=0x0010000000019371
- (void)_announceCommandList:(id)arg1;	// IMP=0x00100000000190e7
- (void)_dismissTextEditingModeInstructionsIfNeeded;	// IMP=0x0010000000019026
- (id)_keyChordForExitingTextMode;	// IMP=0x0010000000018f41
- (void)_didUpdateFocusRingTimeout;	// IMP=0x0010000000018eb4
- (void)_didUpdateAvailableCommandsWithUpdatedMap:(id)arg1;	// IMP=0x0010000000018dd3
- (_Bool)_canEnableFocusRingCheckingSystemSleepingState:(_Bool)arg1;	// IMP=0x0010000000018c4b
- (void)_cancelFocusRingTimeout;	// IMP=0x0010000000018c25
- (void)_resetFocusRingTimeout;	// IMP=0x0010000000018b8e
- (void)_disableFocusRingForTimeout;	// IMP=0x0010000000018b12
- (void)_disableFocusRing;	// IMP=0x0010000000018ab9
- (void)_enableFocusRingWithTimeout;	// IMP=0x0010000000018a48
- (void)_enableFocusRingIfNecessary;	// IMP=0x0010000000018a31
- (void)_enableFocusRingIfNecessaryCheckingSystemSleepingState:(_Bool)arg1;	// IMP=0x00100000000189f3
- (void)observer:(id)arg1 didObserveNotification:(int)arg2 notificationData:(void *)arg3;	// IMP=0x00100000000187d0
- (void)_handleNativeFocusItemChange:(id)arg1;	// IMP=0x001000000001860e
- (void)_handleScreenChange;	// IMP=0x00100000000185c8
- (void)_handleUpdatedElementsForScreenChange:(_Bool)arg1;	// IMP=0x0010000000018543
- (_Bool)_dismissActionsControllerByForce:(_Bool)arg1;	// IMP=0x00100000000183d6
- (_Bool)_areActionsValidForElement:(id)arg1;	// IMP=0x0010000000018378
- (void)_showActionsForElement:(id)arg1;	// IMP=0x0010000000017d98
- (void)_addTransientCommandsForGesturesMode;	// IMP=0x0010000000016a98
- (_Bool)_canPerform3DTouchCommand;	// IMP=0x0010000000016a8e
- (void)_showDebugBannerText:(id)arg1;	// IMP=0x001000000001697c
- (void)_showBannerWithText:(id)arg1 andSecondaryText:(id)arg2 orCustomView:(id)arg3 isSticky:(_Bool)arg4 fromUserAction:(_Bool)arg5;	// IMP=0x0010000000016838
- (void)_showBannerWithCustomView:(id)arg1 isSticky:(_Bool)arg2;	// IMP=0x001000000001680c
- (void)_showBannerWithText:(id)arg1 secondaryText:(id)arg2 isSticky:(_Bool)arg3 fromUserAction:(_Bool)arg4;	// IMP=0x00100000000167e4
- (void)_showBannerWithText:(id)arg1;	// IMP=0x00100000000167ba
@property(readonly, nonatomic) FKARootViewController *nonInteractiveRootViewController;
@property(readonly, nonatomic) FKARootViewController *rootViewController;
- (_Bool)_sceneVendedByOneness:(id)arg1;	// IMP=0x0010000000016623
- (void)enumerateSceneDelegatesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000016558
- (id)_sceneDelegates;	// IMP=0x00100000000163a4
- (id)_sceneDelegateForFocusedElement;	// IMP=0x0010000000015f81
- (id)_fkaDelegateScenes;	// IMP=0x0010000000015d16
@property(readonly, nonatomic) UIWindow *nonInteractiveWindow;
- (void)_didUpdateHardwareKeyboardAttachedStatus;	// IMP=0x0010000000015c0d
- (void)eventManager:(id)arg1 repostEvent:(id)arg2;	// IMP=0x0010000000015ba4
- (_Bool)eventManager:(id)arg1 shouldRepostEvent:(id)arg2;	// IMP=0x001000000001569f
- (void)willDismissFloatingViewForPresenter:(id)arg1;	// IMP=0x00100000000155c5
- (void)_updateTypeaheadNamesViewControllerItemsForQueryString:(id)arg1;	// IMP=0x00100000000154b8
- (void)_updateTypeaheadNamesViewControllerItems;	// IMP=0x001000000001544a
- (void)_hideTypeaheadNames;	// IMP=0x0010000000015364
- (void)_showTypeaheadNames;	// IMP=0x0010000000015272
- (void)typeaheadViewControllerDidTypeReturn:(id)arg1;	// IMP=0x0010000000015225
- (void)typeaheadViewControllerWillDismiss:(id)arg1;	// IMP=0x001000000001519f
- (void)typeaheadViewControllerWillAppear:(id)arg1;	// IMP=0x0010000000015152
- (void)typeaheadViewController:(id)arg1 didChangeQueryString:(id)arg2;	// IMP=0x0010000000014ed7
- (void)didMoveToInnerElementForActionManager:(id)arg1;	// IMP=0x0010000000014e22
- (void)didExitTextEditingModeForActionManager:(id)arg1;	// IMP=0x0010000000014e10
- (void)didToggleNotificationCenterForActionManager:(id)arg1;	// IMP=0x0010000000014d8f
- (_Bool)canMoveApplicationFocusForActionManager:(id)arg1;	// IMP=0x0010000000014d47
- (void)didSuppressCommandForActionManager:(id)arg1;	// IMP=0x0010000000014d17
- (_Bool)actionManagerCanAvoidRepostingTextInput:(id)arg1;	// IMP=0x0010000000014ccf
- (void)wakeDeviceIfNeededForActionManager:(id)arg1;	// IMP=0x0010000000014cbd
- (void)_wakeDeviceIfNeeded;	// IMP=0x0010000000014bbe
- (_Bool)dismissHelpForActionManager:(id)arg1;	// IMP=0x0010000000014b1e
- (void)showDebugDisplayWithKeyChord:(id)arg1;	// IMP=0x0010000000014a6f
- (void)showDebugDisplay:(id)arg1;	// IMP=0x0010000000014998
- (void)showHelpForActionManager:(id)arg1;	// IMP=0x0010000000014883
- (void)actionManager:(id)arg1 displaySysdiagnoseStatus:(id)arg2;	// IMP=0x001000000001486e
- (void)togglePassthroughModeForActionManager:(id)arg1;	// IMP=0x001000000001483b
- (void)toggleGesturesModeForActionManager:(id)arg1;	// IMP=0x0010000000014808
- (void)_hideTypeaheadSynchronously;	// IMP=0x00100000000145cc
- (void)hideTypeaheadSynchronouslyForActionManager:(id)arg1;	// IMP=0x00100000000145ba
- (void)toggleTypeaheadForActionManager:(id)arg1;	// IMP=0x00100000000143c0
- (void)actionManager:(id)arg1 showActionsForElement:(id)arg2;	// IMP=0x00100000000141d1
- (id)gestureViewController;	// IMP=0x0010000000014181
- (void)eventTap:(id)arg1 handleKeyboardEvent:(id)arg2;	// IMP=0x0010000000013f8f
- (void)willTerminate;	// IMP=0x0010000000013f13
- (void)_setupUI;	// IMP=0x0010000000013d41
- (void)didFinishLaunching;	// IMP=0x0010000000013cba
- (void)setShouldIgnoreNextScreenChange:(_Bool)arg1;	// IMP=0x0010000000013bdf
@property(readonly, nonatomic) AXUIBannerPresenter *bannerPresenter;
@property(readonly, nonatomic) AXElementActionManager *elementActionManager;
@property(readonly, nonatomic) FKAActionManager *actionManager;
- (void)dealloc;	// IMP=0x0010000000013915
- (id)_notificationsToRegister;	// IMP=0x0010000000013908
- (id)init;	// IMP=0x0010000000013292

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
