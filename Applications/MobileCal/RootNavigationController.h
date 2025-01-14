//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UINavigationController.h>

@class CNContact, CUIKCalendarModel, CalendarsViewController, MISSING_TYPE, NSAttributedString, NSDate, NSMutableDictionary, NSObject, NSString, NSUserActivity, PaletteView, UIAction, UIBarButtonItem, UIButton, UILabel, UIMenu, UISegmentedControl, UIWindow, _UINavigationBarPalette;
@protocol ViewSwitcherLayoutHandler;

@interface RootNavigationController : UINavigationController
{
    UIBarButtonItem *_listToggleBarButtonItem;	// 8 = 0x8
    UIBarButtonItem *_addEventBarButtonItem;	// 16 = 0x10
    UIBarButtonItem *_searchBarButtonItem;	// 24 = 0x18
    long long _lastListToggleBarButtonDayViewMode;	// 32 = 0x20
    UIMenu *_compactMonthMenu;	// 40 = 0x28
    UIAction *_compactScaleAction;	// 48 = 0x30
    UIAction *_minimalScaleAction;	// 56 = 0x38
    UIAction *_largeScaleAction;	// 64 = 0x40
    UIAction *_listAction;	// 72 = 0x48
    UISegmentedControl *_viewSwitcherSegmentedControl;	// 80 = 0x50
    _UINavigationBarPalette *_palette;	// 88 = 0x58
    NSAttributedString *_currentDateLabelString;	// 96 = 0x60
    UILabel *_currentDateLabel;	// 104 = 0x68
    UIBarButtonItem *_leftFixedSpaceBarItem;	// 112 = 0x70
    UIBarButtonItem *_labelBarItem;	// 120 = 0x78
    NSMutableDictionary *_navBarDateStringCache;	// 128 = 0x80
    NSUserActivity *_userActivityForDateInView;	// 136 = 0x88
    NSUserActivity *_userActivityForEvent;	// 144 = 0x90
    NSUserActivity *_tomorrowUA;	// 152 = 0x98
    UIButton *_calendarsButton;	// 160 = 0xa0
    CalendarsViewController *_calendarsViewController;	// 168 = 0xa8
    _Bool _showingAccountErrors;	// 176 = 0xb0
    _Bool _interactedWithCalendarButtonForCurrentError;	// 177 = 0xb1
    _Bool _traitCollectionChangeShouldResultInCompactDayView;	// 178 = 0xb2
    _Bool _hideNavBarAfterTraitCollectionTransition;	// 179 = 0xb3
    _Bool _shouldSetNavBarVisibilityAfterTraitCollectionTransition;	// 180 = 0xb4
    _Bool _viewSwitchKeyCommandsTemporarilyLockedOut;	// 181 = 0xb5
    _Bool _userActivityNeedsUpdate;	// 182 = 0xb6
    _Bool _extendedLaunchOver;	// 183 = 0xb7
    _Bool _hasLoadedInitialNotificationCount;	// 184 = 0xb8
    long long _regularBackgroundedViewType;	// 192 = 0xc0
    long long _compactBackgroundedViewType;	// 200 = 0xc8
    CNContact *_cachedMeContact;	// 208 = 0xd0
    MISSING_TYPE *_isTransitioningTraitCollection;	// 216 = 0xd8
    _Bool _showingOverriddenToolbarItems;	// 217 = 0xd9
    CUIKCalendarModel *_model;	// 224 = 0xe0
    NSDate *_lastActiveTime;	// 232 = 0xe8
    UISegmentedControl *_viewSwitcher;	// 240 = 0xf0
    UIWindow *_window;	// 248 = 0xf8
    unsigned long long _numberOfNotifications;	// 256 = 0x100
    NSObject<ViewSwitcherLayoutHandler> *_viewSwitcherLayoutHandler;	// 264 = 0x108
    UIBarButtonItem *_todayBarButtonItem;	// 272 = 0x110
    PaletteView *_paletteView;	// 280 = 0x118
    UINavigationController *_reportProblemNavigationController;	// 288 = 0x120
    UIBarButtonItem *_inboxBarButtonItem;	// 296 = 0x128
    UIBarButtonItem *_calendarsBarButtonItem;	// 304 = 0x130
    UIBarButtonItem *_dividedMonthToggleBarButtonItem;	// 312 = 0x138
}

+ (_Bool)_diagnosticsAvailable;	// IMP=0x00200000000dac25
+ (id)_inboxTitleForNotificationCount:(unsigned long long)arg1;	// IMP=0x00100000000d9ba3
+ (void)recursiveAnimationRemove:(id)arg1;	// IMP=0x00100000000d323b
+ (_Bool)_shouldForwardViewWillTransitionToSize;	// IMP=0x00100000000d2685
- (void).cxx_destruct;	// IMP=0x00200000000dd846
@property(retain, nonatomic) UIBarButtonItem *dividedMonthToggleBarButtonItem; // @synthesize dividedMonthToggleBarButtonItem=_dividedMonthToggleBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *calendarsBarButtonItem; // @synthesize calendarsBarButtonItem=_calendarsBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *inboxBarButtonItem; // @synthesize inboxBarButtonItem=_inboxBarButtonItem;
@property(nonatomic) _Bool showingOverriddenToolbarItems; // @synthesize showingOverriddenToolbarItems=_showingOverriddenToolbarItems;
@property(retain, nonatomic) UINavigationController *reportProblemNavigationController; // @synthesize reportProblemNavigationController=_reportProblemNavigationController;
@property(readonly, nonatomic) _Bool isTransitioningTraitCollection; // @synthesize isTransitioningTraitCollection=_isTransitioningTraitCollection;
@property(retain, nonatomic) PaletteView *paletteView; // @synthesize paletteView=_paletteView;
@property(retain, nonatomic) UIBarButtonItem *todayBarButtonItem; // @synthesize todayBarButtonItem=_todayBarButtonItem;
@property(nonatomic) __weak NSObject<ViewSwitcherLayoutHandler> *viewSwitcherLayoutHandler; // @synthesize viewSwitcherLayoutHandler=_viewSwitcherLayoutHandler;
@property(nonatomic) unsigned long long numberOfNotifications; // @synthesize numberOfNotifications=_numberOfNotifications;
@property(nonatomic) __weak UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) UISegmentedControl *viewSwitcher; // @synthesize viewSwitcher=_viewSwitcher;
@property(retain, nonatomic) NSDate *lastActiveTime; // @synthesize lastActiveTime=_lastActiveTime;
@property(retain, nonatomic) CUIKCalendarModel *model; // @synthesize model=_model;
- (void)updateShouldDisplayJumpToTodayTip;	// IMP=0x00100000000dd50e
- (void)updateSelectedDateForJumpToTodayTip;	// IMP=0x00100000000dd2c0
- (void)updateDeviceOrientationForJumpToTodayTip;	// IMP=0x00100000000dd235
- (void)controllerAppearedTipsConfiguration;	// IMP=0x00100000000dd157
- (id)undoManager;	// IMP=0x00100000000dd13a
- (void)displayIntegrationAlert:(id)arg1;	// IMP=0x00100000000dd087
- (void)pasteboardManager:(id)arg1 didFinishPasteWithResult:(unsigned long long)arg2 willOpenEditor:(_Bool)arg3;	// IMP=0x00100000000dd069
- (void)pasteboardManager:(id)arg1 beginEditingEvent:(id)arg2;	// IMP=0x00100000000dd046
- (void)pasteboardManager:(id)arg1 presentAlert:(id)arg2;	// IMP=0x00100000000dcfdd
- (id)editorForPasteboardManager:(id)arg1;	// IMP=0x00100000000dcfcb
- (id)pasteboardManager;	// IMP=0x00100000000dcf7b
- (_Bool)canBecomeFirstResponder;	// IMP=0x00100000000dcf73
- (void)copy:(id)arg1;	// IMP=0x00100000000dceb4
- (void)cut:(id)arg1;	// IMP=0x00100000000dcdf5
- (void)paste:(id)arg1;	// IMP=0x00100000000dcd9c
- (void)handleDuplicateKeyCommand;	// IMP=0x00100000000dccc6
- (_Bool)_canPerformDuplicateKeyCommand;	// IMP=0x00100000000dcba6
- (_Bool)allSelectedEventsIndividuallyRepresented;	// IMP=0x00100000000dcb2a
- (void)handleDeleteKeyCommand;	// IMP=0x00100000000dca8c
- (_Bool)_canPerformDeleteKeyCommand;	// IMP=0x00100000000dc9ce
- (void)handleViewAvailabilityCommand;	// IMP=0x00100000000dc76e
- (void)handleDismissSplashScreenKeyCommand;	// IMP=0x00100000000dc716
- (void)handleCloseKeyCommand;	// IMP=0x00100000000dc595
- (void)handleSearchKeyCommand;	// IMP=0x00100000000dc3a2
- (void)handleNewEventKeyCommand;	// IMP=0x00100000000dc19f
- (void)handleSelectPreviousOccurrenceCommand;	// IMP=0x00100000000dc162
- (void)handleSelectNextOccurrenceCommand;	// IMP=0x00100000000dc125
- (void)handleSelectPreviousEventCommand;	// IMP=0x00100000000dc113
- (void)handleSelectNextEventCommand;	// IMP=0x00100000000dc101
- (void)handleGoToPreviousDateComponentUnitCommand;	// IMP=0x00100000000dc0ea
- (void)handleGoToNextDateComponentUnitCommand;	// IMP=0x00100000000dc0d3
- (void)handleRefreshKeyCommand;	// IMP=0x00100000000dc028
- (void)handleYearKeyCommand;	// IMP=0x00100000000dc014
- (void)handleMonthKeyCommand;	// IMP=0x00100000000dbffd
- (void)handleWeekKeyCommand;	// IMP=0x00100000000dbfe6
- (void)handleDayKeyCommand;	// IMP=0x00100000000dbfcf
- (void)_switchToView:(long long)arg1;	// IMP=0x00100000000dbe41
- (void)handleTodayKeyCommand;	// IMP=0x00100000000dbe28
- (_Bool)_isAddEventPopoverDisplayed;	// IMP=0x00100000000dbdda
- (_Bool)_isTextEditingInProgress;	// IMP=0x00100000000dbd8f
- (_Bool)_canChangeSelectedDate;	// IMP=0x00100000000dbcfe
- (_Bool)_canChangeSelectedEvent;	// IMP=0x00100000000dbc6d
- (_Bool)_willKeyCommandChangeSelectedDate:(SEL)arg1;	// IMP=0x00100000000dbc51
- (_Bool)_willKeyCommandChangeSelectedEvent:(SEL)arg1;	// IMP=0x00100000000dbc1b
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00100000000db862
- (_Bool)shouldHandleCanPerformActionForSelector:(SEL)arg1;	// IMP=0x00100000000db75f
- (id)_topPresentedController;	// IMP=0x00100000000db6b3
- (id)resetToWeekView;	// IMP=0x00100000000db5b9
- (id)_now;	// IMP=0x00100000000db4f5
- (id)resetToDayView;	// IMP=0x00100000000db3fb
- (id)resetToMonthViewSplit:(_Bool)arg1;	// IMP=0x00100000000db2b1
- (id)resetToMonthView;	// IMP=0x00100000000db1d4
- (id)resetToYearView;	// IMP=0x00100000000daf64
- (void)reportProblemViewControllerDidFinish:(id)arg1;	// IMP=0x00100000000daf52
- (void)_cancelPressedWhileInReportProblemView;	// IMP=0x00100000000daf40
- (void)_dismissReportProblemController;	// IMP=0x00100000000daf09
- (void)_showAddSubscribedCalendarWithURL:(id)arg1;	// IMP=0x00100000000dadd3
- (void)_showDebugReportProblemViewController;	// IMP=0x00100000000dac6c
- (void)showEventWithIdentifier:(id)arg1 isSearchResult:(_Bool)arg2 date:(id)arg3 context:(id)arg4;	// IMP=0x00100000000da8b0
- (void)handleURL:(id)arg1 context:(id)arg2;	// IMP=0x00100000000d9ce4
- (void)_notificationCountChanged:(id)arg1;	// IMP=0x00100000000d9970
- (void)_updateViewSwitcherFont;	// IMP=0x00100000000d93f0
- (void)_setSegmentWidthsForViewSwitcher:(id)arg1;	// IMP=0x00100000000d9366
- (unsigned long long)_viewSwitcherNumSegments;	// IMP=0x00100000000d934c
- (double)_viewSwitcherSegmentWidth;	// IMP=0x00100000000d9110
- (id)_switcherFontOfSize:(double)arg1 isSemibold:(_Bool)arg2;	// IMP=0x00100000000d90c1
- (id)_viewSwitcherSegmentedControl;	// IMP=0x00100000000d8f54
- (id)_viewSwitcherLabelStrings;	// IMP=0x00100000000d8d0d
- (_Bool)_shouldShowListViewInModeSwitcher;	// IMP=0x00100000000d8c4e
- (void)_configureViewSwitcherShowingViewController:(id)arg1;	// IMP=0x00100000000d8be5
- (void)_viewSwitcherSelectedValueChanged:(id)arg1;	// IMP=0x00100000000d89e0
- (long long)_viewTypeRepresentedByViewSwitcherIndex:(unsigned long long)arg1;	// IMP=0x00100000000d89c2
- (unsigned long long);	// IMP=0x00100000000d89a3
- (id)_navBarStringYearFontForTraitCollection:(id)arg1 useSmallerSize:(_Bool)arg2 bold:(_Bool)arg3;	// IMP=0x00100000000d88be
- (double)_dateLabelMaxWidth;	// IMP=0x00100000000d86ac
- (void)_setCurrentDateLabelString:(id)arg1;	// IMP=0x00100000000d8583
- (void)_updateLeftFixedSpaceBarButtonItemWidthWithViewController:(id)arg1 targetWindowSize:(struct CGSize)arg2;	// IMP=0x00100000000d847d
- (void)_updateDateLabelFrame;	// IMP=0x00100000000d83f1
- (id)_navBarDateStringFromDate:(id)arg1 includingMonth:(_Bool)arg2 includingYear:(_Bool)arg3 format:(long long)arg4;	// IMP=0x00100000000d7c56
- (void)setNavBarStringFromDate:(id)arg1 includeMonth:(_Bool)arg2 includeYear:(_Bool)arg3;	// IMP=0x00100000000d7859
- (void)_invalidateNavBarDateStringCache;	// IMP=0x00100000000d7838
- (void)_timeZoneChanged:(id)arg1;	// IMP=0x00100000000d7826
- (void)_localeChanged:(id)arg1;	// IMP=0x00100000000d7814
- (id)_higherScopeCompactCalendarViewControllerRelativeTo:(id)arg1;	// IMP=0x00100000000d7675
- (void)_updateBackButtonToDate:(id)arg1 container:(id)arg2;	// IMP=0x00100000000d7463
- (void)updateBackButtonToDate:(id)arg1;	// IMP=0x00100000000d72ab
- (void)weekViewController:(id)arg1 didSelectEvent:(id)arg2;	// IMP=0x00100000000d7288
- (void)weekViewController:(id)arg1 didEditEvent:(id)arg2 creationMethod:(unsigned long long)arg3;	// IMP=0x00100000000d70bb
- (void)showContactWithIdentifier:(id)arg1;	// IMP=0x00100000000d6d10
- (void)showEvent:(id)arg1 animated:(_Bool)arg2 showMode:(unsigned long long)arg3 context:(id)arg4;	// IMP=0x00100000000d6aaf
- (void)currentlyVisibleDateRangeFromStartDate:(id *)arg1 toEndDate:(id *)arg2;	// IMP=0x00100000000d6a0b
- (_Bool)isDateVisible:(id)arg1;	// IMP=0x00100000000d694e
- (void)showDate:(id)arg1 andTime:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x00100000000d6845
- (void)showDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000d682e
- (id)bestDateForNewEvent;	// IMP=0x00100000000d678c
- (void)willEnterForeground;	// IMP=0x00100000000d6769
- (void)didEnterBackground;	// IMP=0x00100000000d668f
- (_Bool)shouldSaveSelectedEvent;	// IMP=0x00100000000d6607
- (void)restoreEventDetailViewControllers:(id)arg1;	// IMP=0x00100000000d618a
- (void)_setNavigationStackOfMainViewControllersForTraitsTransitionFromTraitCollection:(id)arg1 toNewTraitCollection:(id)arg2 withPreTransitionViewType:(long long)arg3 withPreferredPostTransitionViewType:(long long)arg4;	// IMP=0x00100000000d5ab6
- (Class)classForStackBaseContainerForCurrentTraits;	// IMP=0x00100000000d5aa5
- (void)_updateNavbarStringForNewStateAfterWindowSizeChange;	// IMP=0x00100000000d5a39
- (void)_updateViewSwitcherSegmentWidthsAfterWindowSizeChange;	// IMP=0x00100000000d59a1
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000000d58e8
- (void)_adjustNavBarVisibilityAfterTraitCollectionChange;	// IMP=0x00100000000d58ab
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000000d4e83
- (_Bool)_canSkipViewHierarchyRebuildingWhenTransitioningFromOldCollection:(id)arg1 toNewCollection:(id)arg2;	// IMP=0x00100000000d4de4
- (long long)_preferredPostTransitionViewFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2 currentViewType:(long long)arg3;	// IMP=0x00100000000d4c1d
- (long long)_preferredCompactSingleDayView;	// IMP=0x00100000000d4bf8
- (void)_replayJournal:(id)arg1 withRootVC:(id)arg2 topMainVC:(id)arg3;	// IMP=0x00100000000d3821
- (_Bool)_viewControllerRequiresSystemPresentation:(id)arg1;	// IMP=0x00100000000d37df
- (id)_tornDownJournalOfShownViewControllers;	// IMP=0x00100000000d3552
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000d34f9
- (void)recursiveAnimationRemoveForSmallLayers:(id)arg1;	// IMP=0x00100000000d3248
- (void)_performCustomRotationAnimationForMainWindowWithTransitionCoordinator:(id)arg1;	// IMP=0x00100000000d2b29
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000000d2778
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;	// IMP=0x00100000000d2772
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000d268d
- (_Bool)_containsViewControllerRequiringNavBarVisibilityRestoration;	// IMP=0x00100000000d2547
- (_Bool)_nodeContainsViewControllersRequiringTeardown:(id)arg1;	// IMP=0x00100000000d2372
- (void)recursiveBuildJournal:(id)arg1 ofViewControllerSubtree:(id)arg2 stopCondition:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d1c62
- (_Bool)_viewControllerTreeIsEligibleForJournalingConsideration:(id)arg1;	// IMP=0x00100000000d1bd0
- (_Bool)canManagePresentationStyle;	// IMP=0x00100000000d1bc8
- (_Bool)wantsManagement;	// IMP=0x00100000000d1bc0
- (void)viewDidLayoutSubviews;	// IMP=0x00100000000d1b63
- (void)viewWillLayoutSubviews;	// IMP=0x00100000000d1a13
- (_Bool)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;	// IMP=0x00100000000d19bf
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;	// IMP=0x00100000000d12da
- (void)doCrossfadeAnimationWithCurrentScreenContents;	// IMP=0x00100000000d1091
- (void)doCrossfadeAnimationWithNavigationViewContents;	// IMP=0x00100000000d1048
- (void)_showNowForMainViewControllerContainer:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000d0fa4
- (void)_selectTodayForMainViewControllerContainer:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000d0f32
- (void)selectTodayWithTrigger:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000d0d8e
- (id)_popToViewControllerSatisfying:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d0b52
- (void)_updateInteractivePopAllowed;	// IMP=0x00100000000d0a1c
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00100000000d09ee
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00100000000cff53
- (void)_selectPreviousEvent;	// IMP=0x00100000000cff16
- (void)_selectNextEvent;	// IMP=0x00100000000cfed9
- (void)_showPreviousDateComponentUnitAnimated:(_Bool)arg1;	// IMP=0x00100000000cfe8f
- (void)_showNextDateComponentUnitAnimated:(_Bool)arg1;	// IMP=0x00100000000cfe45
- (id)pushCalendarViewControllerWithViewType:(long long)arg1 andDate:(id)arg2;	// IMP=0x00100000000cf7fc
- (id)_ensureStackBaseCalendarViewControllerContainerIsPresent;	// IMP=0x00100000000cf604
- (Class)_classRepresentingViewType:(long long)arg1 forTraitCollection:(id)arg2;	// IMP=0x00100000000cf508
- (void)_restoreLastUsedCalendarViewType;	// IMP=0x00100000000cf251
- (_Bool)_isThisTheOnlyConnectedScene;	// IMP=0x00100000000cefc8
- (long long)currentViewType;	// IMP=0x00100000000cee8b
- (id)topMainViewControllerContainer;	// IMP=0x00100000000cec81
- (void)setAvatarViewVisible:(_Bool)arg1;	// IMP=0x00100000000cec64
- (void)_updatePaletteStateWithViewController:(id)arg1;	// IMP=0x00100000000ce898
- (void)presentationControllerDidAttemptToDismiss:(id)arg1;	// IMP=0x00100000000ce7f6
- (_Bool)presentationControllerShouldDismiss:(id)arg1;	// IMP=0x00100000000ce74a
- (void)searchResultsViewController:(id)arg1 didSelectEvent:(id)arg2;	// IMP=0x00100000000ce6d3
- (void)attemptDisplayReviewPrompt;	// IMP=0x00100000000ce633
- (id)calendarModel;	// IMP=0x00100000000ce61e
- (id)pasteboardManagerForEventEditViewController:(id)arg1;	// IMP=0x00100000000ce5ce
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000cdfeb
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;	// IMP=0x00100000000cdfd6
- (void)eventViewDelegateShowNextOccurrenceOfEvent:(id)arg1 forward:(_Bool)arg2;	// IMP=0x00100000000cdee9
- (_Bool)eventViewDelegateShouldShowNextOccurrenceOfEvent:(id)arg1 forward:(_Bool)arg2;	// IMP=0x00100000000cde32
- (_Bool)eventViewControllerShouldHideInlineEditButton;	// IMP=0x00100000000cddb5
- (void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2;	// IMP=0x00100000000cdd0e
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;	// IMP=0x00100000000cdc84
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;	// IMP=0x00100000000cdc79
- (void)_showSearchController:(id)arg1 withSearchBar:(id)arg2 animated:(_Bool)arg3 becomeFirstResponder:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000cda85
- (id)showSearchAnimated:(_Bool)arg1 becomeFirstResponder:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000cd2d5
- (void)continueSearchWithTerm:(id)arg1 animated:(_Bool)arg2 removeViewControllersIncapableOfSearchIfNeeded:(_Bool)arg3;	// IMP=0x00100000000ccf76
- (void)_presentAdaptiveModalViewController:(id)arg1 withPresentationStyleOverride:(long long)arg2 relativeToBarButtonItem:(id)arg3 withSourceView:(id)arg4 sourceRect:(struct CGRect)arg5 permittedArrowDirections:(unsigned long long)arg6 contentSize:(struct CGSize)arg7 passThroughViews:(id)arg8 animated:(_Bool)arg9 completion:(CDUnknownBlockType)arg10;	// IMP=0x00100000000cca9d
- (void)setupPresentationControllerIfStyleIsPopover:(long long)arg1 barButtonItem:(id)arg2 passThroughViews:(id)arg3 permittedArrowDirections:(unsigned long long)arg4 sourceRect:(struct CGRect)arg5 sourceView:(id)arg6 viewController:(id)arg7;	// IMP=0x00100000000cc90a
- (void)presentAdaptiveModalPopoverViewController:(id)arg1 relativeToSourceRect:(struct CGRect)arg2 withSourceView:(id)arg3 passThroughViews:(id)arg4 permittedArrowDirections:(unsigned long long)arg5 contentSize:(struct CGSize)arg6 animated:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00100000000cc8b3
- (void)_presentAdaptiveModalPopoverViewController:(id)arg1 relativeToBarButtonItem:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 contentSize:(struct CGSize)arg4 animated:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000cc7b9
- (void)presentAdaptiveModalViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000cc74f
- (void)presentAdaptiveModalViewController:(id)arg1;	// IMP=0x00100000000cc735
- (void)presentModalViewController:(id)arg1 withTransition:(int)arg2;	// IMP=0x00100000000cc717
- (CDUnknownBlockType)_doneBlockWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000cc40d
- (CDUnknownBlockType)_doneBlock;	// IMP=0x00100000000cc3f9
- (void)showNewEvent:(id)arg1;	// IMP=0x00100000000cc385
- (void)showAddEventAnimated:(_Bool)arg1 fromBarButtonItem:(id)arg2 withTitle:(id)arg3 startDate:(id)arg4 exactStartDate:(id)arg5 endDate:(id)arg6 location:(id)arg7 suggestionKey:(id)arg8 allDay:(_Bool)arg9 completion:(CDUnknownBlockType)arg10;	// IMP=0x00100000000cbe10
- (void)showAddEventAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cbd7a
- (void)showAddEventAnimated:(_Bool)arg1 fromBarButtonItem:(id)arg2;	// IMP=0x00100000000cbcdf
- (void)showAddEventAnimated:(_Bool)arg1;	// IMP=0x00100000000cbccb
- (id)delegatesMenu;	// IMP=0x00100000000cb4c7
- (void)showCalendar:(id)arg1;	// IMP=0x00100000000cb4a8
- (void)_showCalendarsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cb354
- (void)showCalendarsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cb295
- (void)inboxViewControllerWantsShowEvent:(id)arg1 animated:(_Bool)arg2 showMode:(unsigned long long)arg3;	// IMP=0x00100000000cb218
- (id)showInboxAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cb0cf
- (id)showInboxAnimated:(_Bool)arg1;	// IMP=0x00100000000cafbb
- (_Bool)_dismissPresentedViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cad06
- (id)_presentedEditor;	// IMP=0x00100000000cac67
- (void)dismissPresentedViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cac55
- (_Bool)dismissPresentedViewController;	// IMP=0x00100000000cac3c
- (void)openInboxLinkActionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000cab7a
- (void)inboxPressed;	// IMP=0x00100000000cab32
- (void)openCalendarsLinkActionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ca9d8
- (void)calendarsPressed;	// IMP=0x00100000000ca94a
- (void)todayPressed;	// IMP=0x00100000000ca828
- (void)updateDividedMonthBarButtonItem;	// IMP=0x00100000000ca816
- (void)updateDayViewModeContainer;	// IMP=0x00100000000ca554
- (long long)currentDayViewMode;	// IMP=0x00100000000ca483
- (id)imageForCurrentDayViewMode;	// IMP=0x00100000000ca452
- (id)imageForDayViewMode:(long long)arg1;	// IMP=0x00100000000ca40d
- (void)toggleDayViewMode:(long long)arg1;	// IMP=0x00100000000ca20e
- (void)performUIAction:(id)arg1 block:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c9e43
- (void)listTogglePressed;	// IMP=0x00100000000c9d99
- (void)addEventPressed;	// IMP=0x00100000000c9cb1
- (void)openSearchLinkActionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c9ba1
- (void)_searchPressed;	// IMP=0x00100000000c9b49
- (void)didBecomeActive;	// IMP=0x00100000000c9b37
- (void)_accountsInInitialSyncCountChanged;	// IMP=0x00100000000c9b25
- (void)_calendarErrorCountChanged:(id)arg1;	// IMP=0x00100000000c9b13
- (id)calendarsButtonTitle;	// IMP=0x00100000000c99e8
- (_Bool)_updateCalendarButtonError;	// IMP=0x00100000000c98e6
- (_Bool)_updateCalendarButtonSpinner;	// IMP=0x00100000000c9838
- (void)_updateCalendarButtonAccessory;	// IMP=0x00100000000c97e7
- (_Bool)_isCurrentlyDraggingEvent;	// IMP=0x00100000000c9698
- (id)_compactMonthDividedListSwitchBarButtonItem;	// IMP=0x00100000000c95b0
- (void)_monthWeekScaleChanged:(id)arg1;	// IMP=0x00100000000c955c
- (id)compactMonthMenu;	// IMP=0x00100000000c8a7d
- (void)updateCompactMonthMenu;	// IMP=0x00100000000c890d
- (id)generateCurrentListToggleBarButtonItemMenu;	// IMP=0x00100000000c836b
- (void)updateListToggleBarButtonItem;	// IMP=0x00100000000c8317
- (id)_listViewSwitchBarButtonItem;	// IMP=0x00100000000c8128
- (void)_addButtonsToNavigationBarForViewController:(id)arg1;	// IMP=0x00100000000c7ec3
@property(readonly, nonatomic) UIBarButtonItem *addEventBarButtonItem;
@property(readonly, nonatomic) UIBarButtonItem *searchBarButtonItem;
- (void)_updateInboxBarButtonItem;	// IMP=0x00100000000c7cc4
- (void)_updateFilterLabel;	// IMP=0x00100000000c7cb2
- (void)_updateFilterLabelAnimate:(_Bool)arg1;	// IMP=0x00100000000c7bb1
- (void)_updateAddEventButtonEnabledness;	// IMP=0x00100000000c79cc
- (void)addToolbarButtonItemsWithViewController:(id)arg1;	// IMP=0x00100000000c7684
- (void)_initializeCalendarsButton;	// IMP=0x00100000000c6e4c
- (id)_calendarsButtonConfiguration;	// IMP=0x00100000000c6973
- (_Bool)_calendarsButtonHasBackground;	// IMP=0x00100000000c6935
- (void)_forceInboxButtonCreationIfNeeded;	// IMP=0x00100000000c6819
- (void)_updateCalendarsButtonMenuProvider;	// IMP=0x00100000000c66e6
- (void)_updateCalendarsButtonColor;	// IMP=0x00100000000c66d4
- (void)_updateCalendarsButtonTitle;	// IMP=0x00100000000c663e
- (void)_updateCalendarsButtonConfiguration;	// IMP=0x00100000000c6597
- (void)updateCurrentIdentity;	// IMP=0x00100000000c6537
- (void)_meContactChangedNoticationReceived:(id)arg1;	// IMP=0x00100000000c647c
- (id)_meContact;	// IMP=0x00100000000c6386
- (id)_contactForCurrentIdentity;	// IMP=0x00100000000c62f9
- (MISSING_TYPE *)_createLeftFixedSpaceBarItemIfNeeded;	// IMP=0x00100000000c62a4
- (void)updateToolbarItemsWithViewController:(id)arg1;	// IMP=0x00100000000c610a
- (void)updateNavigationBarButtonItemsWithViewController:(id)arg1;	// IMP=0x00100000000c5e96
- (_Bool)shouldDonateTomorrowActivity;	// IMP=0x00100000000c5dc6
- (void)userActivityWillSave:(id)arg1;	// IMP=0x00100000000c5db4
- (void)_saveUserActivityInfo:(id)arg1;	// IMP=0x00100000000c5dae
- (void)_updateUserActivity;	// IMP=0x00100000000c5d9d
- (void)_updateAfterExtendedLaunch:(id)arg1;	// IMP=0x00100000000c5ab3
- (void)_setUpInitialUserActivityUpdate;	// IMP=0x00100000000c5a2a
- (void)_setNeedsUserActivityUpdate;	// IMP=0x00100000000c59b8
- (void)_delegatesChanged:(id)arg1;	// IMP=0x00100000000c5747
- (void)_identityChanged:(id)arg1;	// IMP=0x00100000000c56fd
- (void)_filterChanged:(id)arg1;	// IMP=0x00100000000c56eb
- (void)_selectedOccurrencesChanged:(id)arg1;	// IMP=0x00100000000c56d9
- (void)_selectedDateChanged:(id)arg1;	// IMP=0x00100000000c56ab
- (void)_focusModeConfigurationChanged:(id)arg1;	// IMP=0x00100000000c564d
- (void)_calendarsChanged:(id)arg1;	// IMP=0x00100000000c563b
- (void)_contentSizeCategoryChanged:(id)arg1;	// IMP=0x00100000000c5515
- (_Bool)extendedLaunchFinished;	// IMP=0x00100000000c5505
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00100000000c53b7
@property(readonly, nonatomic) long long activeWidthSizeClass;
- (id)traitCollection;	// IMP=0x00100000000c5270
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000000c5036
- (void)viewDidLoad;	// IMP=0x00100000000c4fe1
- (void)loadView;	// IMP=0x00100000000c4e05
- (void)dealloc;	// IMP=0x00100000000c4c16
- (id)initWithModel:(id)arg1 targetWindow:(id)arg2;	// IMP=0x00100000000c46b7
- (id)ekui_futureTraitCollection;	// IMP=0x001000000004e2e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

