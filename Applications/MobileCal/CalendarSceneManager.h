//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUIKCalendarModel, CalendarDiagnosticsUIViewController, EKEvent, MainWindowRootViewController, MobileCalWindow, NSArray, NSString, RootNavigationController, UIApplicationShortcutItem;

@interface CalendarSceneManager : NSObject
{
    CUIKCalendarModel *_model;	// 8 = 0x8
    MobileCalWindow *_mobileCalWindow;	// 16 = 0x10
    RootNavigationController *_rootNavigationController;	// 24 = 0x18
    MainWindowRootViewController *_rootViewController;	// 32 = 0x20
    _Bool _launchedFromURLOrActivity;	// 40 = 0x28
    _Bool _sceneHasCompletedExtendedLaunch;	// 41 = 0x29
    _Bool _finishedSetup;	// 42 = 0x2a
    _Bool _showingSplashScreen;	// 43 = 0x2b
    _Bool _maintainToday;	// 44 = 0x2c
    _Bool _sceneNeedsToCallExtendedLaunchCompletionSPI;	// 45 = 0x2d
    NSArray *_userActivitiesToContinueAfterConnection;	// 48 = 0x30
    UIApplicationShortcutItem *_shortcutItemToRunAfterConnection;	// 56 = 0x38
    EKEvent *_selectedOccurrenceToRestoreAfterConnection;	// 64 = 0x40
    CDUnknownBlockType _splashScreenCompletionAction;	// 72 = 0x48
    CalendarDiagnosticsUIViewController *_diagnosticsViewController;	// 80 = 0x50
}

+ (id)_encodeIdentifier:(id)arg1;	// IMP=0x0020000000146b1f
+ (id)_applicationLastActiveTime;	// IMP=0x0010000000140609
+ (id)_sharedState;	// IMP=0x00100000001405b4
+ (void)setApplicationLastActiveTimeProvider:(id)arg1;	// IMP=0x001000000013ecfc
+ (_Bool)isSceneCalendarAppScene:(id)arg1;	// IMP=0x001000000013ecab
- (void).cxx_destruct;	// IMP=0x00200000001482bf
@property(retain, nonatomic) CalendarDiagnosticsUIViewController *diagnosticsViewController; // @synthesize diagnosticsViewController=_diagnosticsViewController;
@property(copy, nonatomic) CDUnknownBlockType splashScreenCompletionAction; // @synthesize splashScreenCompletionAction=_splashScreenCompletionAction;
@property(readonly, nonatomic) MainWindowRootViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void)_collectStats:(id)arg1;	// IMP=0x00100000001480be
- (void)_receivedSplashScreenCompletedNotification;	// IMP=0x0010000000147f56
- (void)_splashScreenDidDismissShouldNotify:(_Bool)arg1;	// IMP=0x0010000000147e40
- (void)_constructAndPresentSplashScreenFromViewController:(id)arg1 window:(id)arg2;	// IMP=0x001000000014779f
- (void)windowScene:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000147307
- (void)scene:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;	// IMP=0x0010000000147247
- (void)scene:(id)arg1 continueUserActivity:(id)arg2;	// IMP=0x0010000000147224
- (void)_selectedIdentityDidUpdate:(id)arg1;	// IMP=0x00100000001471c0
- (void)_updateSceneActivationConditions;	// IMP=0x0010000000146c18
- (id)_eventURLFromLaunchURL:(id)arg1 isTravel:(_Bool *)arg2;	// IMP=0x001000000014687b
- (void)_openURL:(id)arg1;	// IMP=0x00100000001460bc
- (void)scene:(id)arg1 openURLContexts:(id)arg2;	// IMP=0x0010000000145d3a
- (void)_mainViewControllerDidRequestSceneTitleUpdate:(id)arg1;	// IMP=0x0010000000145ced
- (_Bool)_isAnyWindowShowingDelegateCalendar;	// IMP=0x0010000000145a8c
- (void)_updateSceneTitle;	// IMP=0x00100000001458e9
- (_Bool)_continueUserActivity:(id)arg1 restoreSelectedOccurrence:(_Bool)arg2 restoreSelectedDate:(_Bool)arg3 restorationHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000144479
- (void)_restoreStateFromUserActivity:(id)arg1;	// IMP=0x001000000014391f
- (void)_restoreModelPersistedStateFromUserActivity:(id)arg1;	// IMP=0x00100000001436e4
- (id)_extractNumberFromUserActivity:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000143626
- (_Bool)_isUserActivityForStateRestoration:(id)arg1;	// IMP=0x0010000000143596
- (void)_addPersistedStateFromCalendarModelToDictionary:(id)arg1;	// IMP=0x001000000014333f
- (id)stateRestorationActivityForScene:(id)arg1;	// IMP=0x0010000000142cb6
- (void)sceneWillEnterForeground:(id)arg1;	// IMP=0x0010000000142b1a
- (void)sceneDidEnterBackground:(id)arg1;	// IMP=0x0010000000142a40
- (void)sceneWillResignActive:(id)arg1;	// IMP=0x0010000000142991
- (void)sceneDidBecomeActive:(id)arg1;	// IMP=0x0010000000142525
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x0010000000141f56
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x0010000000140eab
- (_Bool)_shouldMaintainToday;	// IMP=0x0010000000140d09
- (_Bool)_shouldResumeToTodayOnBecomeActive;	// IMP=0x0010000000140a69
- (_Bool)_areMultipleScenesOpen;	// IMP=0x001000000014086b
- (void)_refreshAccountListAndViewContentsIfNeededForModel:(id)arg1;	// IMP=0x0010000000140781
- (id)_setUpModel;	// IMP=0x00100000001406e2
- (double);	// IMP=0x0010000000140683
- (void)_extendedLaunchDidComplete;	// IMP=0x001000000014054a
- (void)_topMainViewControllerCompletedExtendedLaunch:(id)arg1;	// IMP=0x0010000000140452
- (void)_displayedOccurrencesChangedForTheFirstTime:(id)arg1;	// IMP=0x00100000001401ce
- (void)_stateRestoreSelectedCalendarsFromUserActivity:(id)arg1;	// IMP=0x001000000013f961
- (void)__buildCalendarSyncHashesForCalendars:(id)arg1;	// IMP=0x001000000013f8ed
- (void)__restoreSelectedCalendarsFromPreferences;	// IMP=0x001000000013f2a7
- (void)_restoreSelectedCalendarsFromPreferenceIfNeeded;	// IMP=0x001000000013f280
- (void)showDebugMenu;	// IMP=0x001000000013f169
- (void)_setupDebugMenu:(id)arg1;	// IMP=0x001000000013f0d0
- (void)diagnosticsViewControllerDidDismiss;	// IMP=0x001000000013f074
- (void)_showEvent:(id)arg1 inView:(unsigned long long)arg2;	// IMP=0x001000000013f050
- (void)_showDate:(id)arg1 inView:(unsigned long long)arg2;	// IMP=0x001000000013edbc
- (void)setLaunchedFromURLOrActivity;	// IMP=0x001000000013edb2
- (void)handleURL:(id)arg1 context:(id)arg2;	// IMP=0x001000000013ed98
@property(readonly, nonatomic) _Bool showingSplashScreen;
@property(readonly, nonatomic) MobileCalWindow *mobileCalWindow;
@property(readonly, nonatomic) RootNavigationController *rootNavigationController;
@property(readonly, nonatomic) CUIKCalendarModel *model;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

