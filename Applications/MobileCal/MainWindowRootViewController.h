//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CalendarsViewControllerPreservedState, InboxViewController, MainWindowContentContainerViewController, MainWindowControlHeaderView, MasterNavigationPaletteView, NSObject, NSString, RootNavigationController, UIButton, UINavigationController, UISearchBar, UISplitViewController, _UINavigationBarPalette;
@protocol OS_dispatch_queue;

@interface MainWindowRootViewController : UIViewController
{
    RootNavigationController *_rootNavigationController;	// 8 = 0x8
    UISplitViewController *_splitViewController;	// 16 = 0x10
    UINavigationController *_primaryVC;	// 24 = 0x18
    MainWindowContentContainerViewController *_secondaryContainerVC;	// 32 = 0x20
    MainWindowControlHeaderView *_headerView;	// 40 = 0x28
    MasterNavigationPaletteView *_paletteView;	// 48 = 0x30
    _UINavigationBarPalette *_palette;	// 56 = 0x38
    UISearchBar *_searchBar;	// 64 = 0x40
    UIButton *_searchButton;	// 72 = 0x48
    _Bool _isSearching;	// 80 = 0x50
    _Bool _isEndingSearch;	// 81 = 0x51
    _Bool _didAppear;	// 82 = 0x52
    _Bool _needsSidebarSetup;	// 83 = 0x53
    unsigned long long _pendingState;	// 88 = 0x58
    _Bool _isRotating;	// 96 = 0x60
    _Bool _animatingSidebar;	// 97 = 0x61
    InboxViewController *_presentedInboxVC;	// 104 = 0x68
    CalendarsViewControllerPreservedState *_calendarsPreservedState;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_buttonQ;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_notificationQ;	// 128 = 0x80
    unsigned long long _currentSidebarState;	// 136 = 0x88
}

+ (_Bool)shouldHideInlineFocusBannerForSidebarState:(unsigned long long)arg1;	// IMP=0x002000000012bad4
+ (id)sanitizeCalSubCal:(id)arg1;	// IMP=0x00100000001285be
+ (double)minimumStandardWindowWidth;	// IMP=0x00100000001256f4
+ (double)sidebarWidthForViewHierarchy:(id)arg1;	// IMP=0x00100000001256d0
- (void).cxx_destruct;	// IMP=0x002000000012cc75
@property(nonatomic) unsigned long long currentSidebarState; // @synthesize currentSidebarState=_currentSidebarState;
- (id)undoManager;	// IMP=0x001000000012cc47
- (void)dismissPresentedViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000012cb2f
- (void)showInspectorForCalendar:(id)arg1 enableDoneInitially:(_Bool)arg2;	// IMP=0x001000000012ca7b
- (void)showYearView;	// IMP=0x001000000012ca55
- (void)showMonthView;	// IMP=0x000000000012ca2d
- (void)showWeekView;	// IMP=0x001000000012ca07
- (void)showDayView;	// IMP=0x001000000012c9a1
- (void)showSplitMonthView;	// IMP=0x001000000012c90c
- (void)showSearchView;	// IMP=0x001000000012c8a8
- (void)showListView;	// IMP=0x001000000012c820
- (void)showInboxView;	// IMP=0x001000000012c7c2
- (void)showCalendarsViewWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000012c74a
- (void)showCalendarsView;	// IMP=0x001000000012c736
- (_Bool)_shouldUseSideBar;	// IMP=0x001000000012c6ed
- (void)handleDuplicateKeyCommand;	// IMP=0x001000000012c6d0
- (void)handleDeleteKeyCommand;	// IMP=0x001000000012c6b3
- (void)cut:(id)arg1;	// IMP=0x001000000012c696
- (void)copy:(id)arg1;	// IMP=0x001000000012c679
- (void)paste:(id)arg1;	// IMP=0x001000000012c65c
- (void)handleViewAvailabilityCommand;	// IMP=0x001000000012c63f
- (void)handleDismissSplashScreenKeyCommand;	// IMP=0x001000000012c622
- (void)handleCloseKeyCommand;	// IMP=0x001000000012c605
- (void)handleYearKeyCommand;	// IMP=0x001000000012c5e8
- (void)handleMonthKeyCommand;	// IMP=0x001000000012c5cb
- (void)handleWeekKeyCommand;	// IMP=0x001000000012c5ae
- (void)handleDayKeyCommand;	// IMP=0x001000000012c591
- (void)handleSelectPreviousOccurrenceCommand;	// IMP=0x001000000012c574
- (void)handleSelectNextOccurrenceCommand;	// IMP=0x001000000012c557
- (void)handleSelectPreviousEventCommand;	// IMP=0x001000000012c53a
- (void)handleSelectNextEventCommand;	// IMP=0x001000000012c51d
- (void)handleGoToPreviousDateComponentUnitCommand;	// IMP=0x001000000012c500
- (void)handleGoToNextDateComponentUnitCommand;	// IMP=0x001000000012c4e3
- (void)handleRefreshKeyCommand;	// IMP=0x001000000012c4c6
- (void)handleTodayKeyCommand;	// IMP=0x001000000012c4a9
- (void)routeSearchKeyCommand;	// IMP=0x001000000012c3a8
- (void)routeNewEventKeyCommand;	// IMP=0x001000000012c27d
- (_Bool)canBecomeFirstResponder;	// IMP=0x001000000012c275
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x001000000012c1cb
- (void)_updateAfterExtendedLaunch:(id)arg1;	// IMP=0x001000000012c081
- (void)_calendarErrorCountChanged:(id)arg1;	// IMP=0x001000000012c06f
- (void)_calendarsChanged:(id)arg1;	// IMP=0x001000000012c05d
- (void)_delegatesChanged:(id)arg1;	// IMP=0x001000000012bf94
- (void)_identityChanged:(id)arg1;	// IMP=0x001000000012bedf
- (void)_notificationCountChanged:(id)arg1;	// IMP=0x001000000012becd
- (void)updateErrorState;	// IMP=0x001000000012bdf3
- (void)updateInboxCount;	// IMP=0x001000000012bcad
- (void)updateNewEventButtonEnabledness;	// IMP=0x001000000012bae4
@property(nonatomic) unsigned long long focusFilterMode;
- (void)palette:(id)arg1 identitySwitcherTapped:(id)arg2;	// IMP=0x001000000012ba19
- (_Bool)paletteShouldShowAvatarView;	// IMP=0x001000000012b9a5
- (void)paletteAvatarViewTapped:(id)arg1;	// IMP=0x001000000012b956
- (void)paletteTodayButtonTapped:(id)arg1;	// IMP=0x001000000012b8bf
- (void)showIdentitySwitcherFromSourceView:(id)arg1;	// IMP=0x001000000012b769
- (void)attemptDisplayReviewPrompt;	// IMP=0x001000000012b69e
- (id)inboxSwitcherViewControllerRightBarButtonItem:(id)arg1;	// IMP=0x001000000012b696
- (void)inboxSwitcherViewController:(id)arg1 viewProposedTimeForAttendee:(id)arg2 onEvent:(id)arg3;	// IMP=0x001000000012b676
- (void)inboxSwitcherViewController:(id)arg1 viewCommentsForEvent:(id)arg2;	// IMP=0x001000000012b656
- (void)inboxSwitcherViewController:(id)arg1 inspectEvent:(id)arg2;	// IMP=0x001000000012b636
- (void)inboxSwitcherViewController:(id)arg1 shouldCloseAnimated:(_Bool)arg2;	// IMP=0x001000000012b630
- (void)inboxWillDismiss;	// IMP=0x001000000012b5aa
- (_Bool)listViewControllerShouldShowEvent:(id)arg1 showMode:(unsigned long long)arg2;	// IMP=0x001000000012b58d
- (_Bool)listViewControllerContainerHandlesShowEvent;	// IMP=0x001000000012b585
- (_Bool)wantsScrollingMessagesOnEveryFrameFromListViewController:(id)arg1;	// IMP=0x001000000012b57d
- (void)listViewController:(id)arg1 didScrollToDate:(id)arg2;	// IMP=0x001000000012b577
- (void)showEventAndCloseSidebarIfNeeded:(id)arg1 animated:(_Bool)arg2 showMode:(unsigned long long)arg3;	// IMP=0x001000000012b405
- (void)searchEnded;	// IMP=0x001000000012b35f
- (void)searchEnding;	// IMP=0x001000000012b080
- (void)searchBegan;	// IMP=0x001000000012b047
- (void)searchTapped;	// IMP=0x001000000012afdf
- (void)showSearchSideBar;	// IMP=0x001000000012afcd
- (void)todayToolbarItemPressed;	// IMP=0x001000000012af58
- (void)newEventButtonTapped:(id)arg1;	// IMP=0x001000000012aeef
- (void)listButtonTapped;	// IMP=0x001000000012aed8
- (void)showListSideBarWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000012ad96
- (void)inboxButtonTapped;	// IMP=0x001000000012ad7f
- (void)showInboxSideBarWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000012ac3d
- (void)calendarButtonTapped;	// IMP=0x001000000012ac26
- (void)showCalendarsSideBarWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000012aae4
- (void)setCurrentSidebarState:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000012a1e6
- (void)hideSearchSideBar;	// IMP=0x001000000012a1b5
- (void)hideMainSideBar;	// IMP=0x001000000012a19f
- (id)viewControllerForSidebarState:(unsigned long long)arg1;	// IMP=0x0010000000129c38
- (_Bool)canShowAvatarViewWithTraitCollection:(id)arg1;	// IMP=0x0010000000129baa
- (void)updatePrimaryViewControllerToolbar;	// IMP=0x0010000000129ac6
- (void)updatePrimaryViewControllerNavBar;	// IMP=0x001000000012997c
- (void)searchButtonTappedCreateAndAddSearchBar:(_Bool)arg1;	// IMP=0x00100000001296dd
- (void)searchButtonTapped:(id)arg1;	// IMP=0x00100000001296c6
- (void)layoutSearchControl;	// IMP=0x00100000001290f0
- (double)searchFieldWidth;	// IMP=0x0010000000129073
- (void)setupSearchControlForTraitCollection:(id)arg1;	// IMP=0x0010000000128dc0
- (void)createSearchBarIfNeeded;	// IMP=0x0010000000128c42
- (_Bool)showsSearchBarForTraitCollection:(id)arg1;	// IMP=0x0010000000128bab
- (void)handleURL:(id)arg1 context:(id)arg2;	// IMP=0x00100000001286b4
- (void)showAddEventWithTitle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 location:(id)arg4 suggestionsKey:(id)arg5 allDay:(_Bool)arg6;	// IMP=0x001000000012847b
- (void)showAddEvent;	// IMP=0x0010000000128422
- (void)continueSearchWithTerm:(id)arg1;	// IMP=0x0010000000128373
- (struct CGSize)mainContentSize;	// IMP=0x00100000001282de
- (id)ekui_futureTraitCollection;	// IMP=0x00100000001282c1
- (void)setEkui_futureTraitCollection:(id)arg1;	// IMP=0x00100000001282a4
- (void)splitViewController:(id)arg1 willHideColumn:(long long)arg2;	// IMP=0x0010000000127fe1
- (void)splitViewController:(id)arg1 willExpandToProposedDisplayMode:(long long *)arg2;	// IMP=0x0010000000127f73
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x001000000012799b
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000126cf8
- (id)traitCollectionToUseWhileLoadingViewsDuringTransitioningToTraitCollection:(id)arg1;	// IMP=0x0010000000126c63
- (void)viewWillLayoutSubviews;	// IMP=0x00100000001268a1
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0010000000126754
- (_Bool)_viewControllerExistsInPresentationChainThatShouldNotRotate;	// IMP=0x0010000000126663
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000126511
- (void)willEnterForeground;	// IMP=0x00100000001264ae
- (void)viewDidLoad;	// IMP=0x0010000000125a27
- (void)dealloc;	// IMP=0x00100000001259b2
- (id)initWithRootNavigationController:(id)arg1;	// IMP=0x0010000000125702

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
