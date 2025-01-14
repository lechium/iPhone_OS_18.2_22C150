//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DayNavigationViewController, EKCalendarDate, EKDayViewController, EKEventCreationGestureController, NSArray, NSMutableArray, NSString, UIView;

@interface DayViewController
{
    NSString *_scrollToEventIdentifier;	// 16 = 0x10
    EKCalendarDate *_day;	// 24 = 0x18
    DayNavigationViewController *_scrubberControllerNeue;	// 32 = 0x20
    EKDayViewController *_dayViewController;	// 40 = 0x28
    _Bool _viewHasDoneFirstAppearance;	// 48 = 0x30
    _Bool _hasSetUpDayViewInitialLayout;	// 49 = 0x31
    NSString *_previousNavigationTitle;	// 56 = 0x38
    _Bool _editorDismissedFromDelete;	// 64 = 0x40
    _Bool _hasReloadedWithData;	// 65 = 0x41
    _Bool _hasEndedExtendedLaunch;	// 66 = 0x42
    NSMutableArray *_selectedOccurrenceViews;	// 72 = 0x48
    EKEventCreationGestureController *_eventCreationGestureController;	// 80 = 0x50
    _Bool _visible;	// 88 = 0x58
    _Bool _shouldRespondToApplicationDidBecomeActiveStateChange;	// 89 = 0x59
}

- (void).cxx_destruct;	// IMP=0x002000000018bc7b
@property(nonatomic) _Bool shouldRespondToApplicationDidBecomeActiveStateChange; // @synthesize shouldRespondToApplicationDidBecomeActiveStateChange=_shouldRespondToApplicationDidBecomeActiveStateChange;
@property(readonly, nonatomic) EKCalendarDate *day; // @synthesize day=_day;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
- (_Bool)allEventsIndividuallyRepresented:(id)arg1;	// IMP=0x001000000018ba30
- (void)_selectedOccurrencesChanged:(id)arg1;	// IMP=0x001000000018b677
- (void)_recursiveRemoveSelectedClonedViewsFromViewTree:(id)arg1 skipSet:(id)arg2;	// IMP=0x001000000018b3b8
- (void)_cleanupSelectedOccurrenceCloneViewsSkipSet:(id)arg1;	// IMP=0x001000000018b238
- (void)_cleanupSelectedOccurrenceCloneViewsRespectingModelSelected;	// IMP=0x001000000018b198
- (void)_cleanupSelectedOccurrenceCloneViews;	// IMP=0x001000000018b145
- (id)_selectedOccurrenceFrontmostClonedViews;	// IMP=0x001000000018aee6
- (void)_setUpSelectedOccurrenceViewsWithEvents:(id)arg1 animated:(_Bool)arg2 autoScroll:(_Bool)arg3 resetSelection:(_Bool)arg4;	// IMP=0x001000000018a6d0
- (id)_selectedOccurrenceViews;	// IMP=0x001000000018a6bb
- (void)creationGestureControllerDidCancel:(id)arg1;	// IMP=0x001000000018a67e
- (void)creationGestureController:(id)arg1 didCreateNewEvent:(id)arg2;	// IMP=0x001000000018a525
- (id)creationGestureControllerRequestsNewEvent:(id)arg1;	// IMP=0x001000000018a414
- (id)creationGestureController:(id)arg1 dateForPoint:(struct CGPoint)arg2;	// IMP=0x001000000018a372
- (void)creationGestureController:(id)arg1 didResizeToDate:(id)arg2;	// IMP=0x001000000018a309
- (struct CGPoint)creationGestureController:(id)arg1 requestsPointForDate:(id)arg2;	// IMP=0x001000000018a26f
- (double)creationGestureController:(id)arg1 requestedXCoordinateForEventPreviewAtPoint:(struct CGPoint)arg2;	// IMP=0x001000000018a18d
- (double)creationGestureController:(id)arg1 requestedWidthForEventPreview:(id)arg2 atPoint:(struct CGPoint)arg3;	// IMP=0x001000000018a087
- (id)creationGestureController:(id)arg1 requestedPreviewForEvent:(id)arg2;	// IMP=0x0010000000189fe9
- (id)creationGestureControllerRequestedContainerView:(id)arg1;	// IMP=0x0010000000189fd7
- (id)_parentViewForCreationGesture;	// IMP=0x0010000000189f87
- (_Bool)creationGestureController:(id)arg1 canActivateAtPoint:(struct CGPoint)arg2;	// IMP=0x0010000000189dd7
- (void)saveFirstVisibleSecond:(int)arg1;	// IMP=0x0010000000189d05
- (void)dayViewController:(id)arg1 requestsSaveFirstVisibleSecondPreference:(int)arg2;	// IMP=0x0010000000189c67
- (int)savedFirstVisibleSecond;	// IMP=0x0010000000189af4
- (void)_sceneEnteredForeground:(id)arg1;	// IMP=0x00100000001899ae
- (id)cellFactory;	// IMP=0x001000000019cfb4
- (id)selectedCopyViewForOccurrenceView:(id)arg1;	// IMP=0x00100000001899a6
- (_Bool)shouldAllowLongPress;	// IMP=0x0010000000189986
- (void)endedHorizontalDeceleration;	// IMP=0x0010000000189980
- (void)beganHorizontalDeceleration;	// IMP=0x001000000018997a
- (void)finishedPinchingDayView;	// IMP=0x00100000001898fe
- (void)isPinchingDayView;	// IMP=0x00100000001898f8
- (void)didBeginMovingOccurrenceWithGesture;	// IMP=0x00100000001898f2
- (_Bool)showDetachAlertOnDraggingGestureEnd;	// IMP=0x00100000001898ea
- (int)editorHideTransition;	// IMP=0x00100000001898df
- (int)editorShowTransition;	// IMP=0x00100000001898d4
- (void)dayNavigationViewCellWidthDidChange;	// IMP=0x00100000001898ce
- (void)wasBlockedFromChangingDate:(CDUnknownBlockType)arg1;	// IMP=0x00100000001898c8
- (void)wasAllowedToChangeDate;	// IMP=0x00100000001898c2
- (_Bool)allowChangingDate;	// IMP=0x00100000001898ba
- (_Bool)showWeekdayLabel;	// IMP=0x00100000001898b2
- (void)handleGestureCommittingOccurrence:(id)arg1;	// IMP=0x00100000001898ac
- (_Bool)shouldHandleGestureCommits;	// IMP=0x00100000001898a4
- (void)asyncLoadAndLayoutCompleted;	// IMP=0x001000000018989e
- (void)displayedOccurrencesChangedWithTrigger:(int)arg1;	// IMP=0x0010000000189898
- (void)dataReloadedWithTrigger:(int)arg1;	// IMP=0x00100000001897ae
- (void)showEditViewController:(id)arg1;	// IMP=0x0010000000189740
- (void)showReminderDetail:(id)arg1;	// IMP=0x0010000000189660
- (id)showDetailViewControllerForEvents:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000018952f
- (id)showDetailViewControllerForEvent:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00100000001893c7
- (void)dayViewDidChangeSelectedDate:(id)arg1;	// IMP=0x00100000001892f8
- (void)scrubberDidChangeSelectedDate:(id)arg1;	// IMP=0x0010000000189229
- (void)didShowEventWithoutShowingDetails:(id)arg1;	// IMP=0x0010000000189223
- (_Bool)didSelectEvents:(id)arg1 userInitiated:(_Bool)arg2;	// IMP=0x00100000001890b1
- (_Bool)didSelectEvent:(id)arg1 userInitiated:(_Bool)arg2;	// IMP=0x0010000000188f5b
- (id)gestureController;	// IMP=0x0010000000188f3e
- (id)dayView;	// IMP=0x0010000000188f29
- (id)dayScrubberController;	// IMP=0x0010000000188f14
- (void)_scrollToEvent:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000188de0
- (id)calendarForNewIntegrationReminders;	// IMP=0x0010000000188dc0
- (id)defaultCalendarForNewEvents;	// IMP=0x0010000000188da0
- (id)pasteboardManagerForDayViewController:(id)arg1;	// IMP=0x0010000000188d80
- (_Bool)dayViewControllerShouldRespondToApplicationDidBecomeActiveStateChange:(id)arg1;	// IMP=0x0010000000188d6e
- (id)dayViewController:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3;	// IMP=0x0010000000188d2d
- (void)eventViewController:(id)arg1 requestsShowEvent:(id)arg2;	// IMP=0x0010000000188c82
- (void)eventViewControllerPreviousButtonWasTapped:(id)arg1;	// IMP=0x0010000000188b6f
- (void)eventViewControllerNextButtonWasTapped:(id)arg1;	// IMP=0x0010000000188a5c
- (_Bool);	// IMP=0x0010000000188a54
- (void)eventViewDelegateShowNextOccurrenceOfEvent:(id)arg1 forward:(_Bool)arg2;	// IMP=0x0010000000188988
- (_Bool)eventViewDelegateShouldShowNextOccurrenceOfEvent:(id)arg1 forward:(_Bool)arg2;	// IMP=0x0010000000188923
- (id)pasteboardManager;	// IMP=0x00100000001888d3
- (id)calendarModel;	// IMP=0x00100000001888bb
- (id)pasteboardManagerForEventEditViewController:(id)arg1;	// IMP=0x001000000018886b
- (id)eventEditViewControllerDefaultCalendarForNewEvents:(id)arg1;	// IMP=0x001000000018884b
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2 dismissController:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000018854d
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2 dismissController:(_Bool)arg3;	// IMP=0x0010000000188538
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000018851d
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;	// IMP=0x0010000000188505
- (void)dayViewController:(id)arg1 beginEditingOccurrence:(id)arg2 creationMethod:(unsigned long long)arg3;	// IMP=0x00100000001884ed
- (void)_receivedSelectedDateChangeNotification:(id)arg1;	// IMP=0x00100000001883d2
- (void)_timeZoneChanged:(id)arg1;	// IMP=0x00100000001881ee
- (void)_significantTimeChanged:(id)arg1;	// IMP=0x0010000000188191
- (void)_occurrencesChanged:(id)arg1;	// IMP=0x0010000000187ed7
- (void)dayOccurrenceViewSelected:(id)arg1 source:(unsigned long long)arg2;	// IMP=0x0010000000187de9
- (id)selectedEventsForEditMenu;	// IMP=0x0010000000187dc9
- (id)selectedOccurrencesForDayViewController:(id)arg1;	// IMP=0x0010000000187da9
- (_Bool)dayViewControllerShouldDrawSynchronously:(id)arg1;	// IMP=0x0010000000187d95
- (id)dayViewController:(id)arg1 selectedCopyViewForView:(id)arg2;	// IMP=0x0010000000187d80
- (void)dayViewController:(id)arg1 requestsSaveHourScalePreference:(double)arg2;	// IMP=0x0010000000187d23
- (double)dayViewControllerPersistedHourScalePreference:(id)arg1;	// IMP=0x0010000000187c87
- (void)dayViewControllerCurrentDayDidCompleteAsyncLoadAndLayout:(id)arg1;	// IMP=0x0010000000187c75
- (void)dayViewController:(id)arg1 requestsShowEvent:(id)arg2 showDetails:(_Bool)arg3;	// IMP=0x0010000000187c55
- (void)dayViewController:(id)arg1 requestsPresentationOfViewControllerForGestures:(id)arg2;	// IMP=0x0010000000187ba4
- (void)dayViewControllerDidRespondToApplicationDidBecomeActiveStateChange:(id)arg1;	// IMP=0x0010000000187b90
- (void)dayViewControllerIsPinchingDayView:(id)arg1;	// IMP=0x0010000000187b7e
- (void)dayViewControllerDidFinishPinchingDayView:(id)arg1;	// IMP=0x0010000000187b6c
- (void)dayViewControllerDidBeginMovingEventWithGesture:(id)arg1;	// IMP=0x0010000000187acb
- (_Bool)dayViewControllerShouldShowDetachDialogOnGestureDraggingEnd:(id)arg1;	// IMP=0x0010000000187ab9
- (_Bool)dayviewControllerShouldAllowSwipeToChangeDays:(id)arg1;	// IMP=0x0010000000187aa7
- (void)dayViewController:(id)arg1 handleGestureCommittingOccurrence:(id)arg2;	// IMP=0x0010000000187a92
- (_Bool)dayViewController:(id)arg1 willDuplicateOccurrence:(id)arg2;	// IMP=0x00100000001877ef
- (_Bool)delegateWantsToHandleDayViewController:(id)arg1 gestureCommittingOccurrence:(id)arg2;	// IMP=0x00100000001877dd
- (void)dayViewController:(id)arg1 didChangeDisplayedOccurrencesDueToTrigger:(int)arg2;	// IMP=0x0010000000187785
- (void)dayViewController:(id)arg1 didReloadDataDueToTrigger:(int)arg2;	// IMP=0x0010000000187771
- (void)dayViewControllerDidTapEmptySpace:(id)arg1 onDate:(id)arg2;	// IMP=0x001000000018769f
- (_Bool)dayViewControllerShouldAllowLongPress:(id)arg1;	// IMP=0x0010000000187646
- (void)dayViewController:(id)arg1 awaitsDeletingOccurrence:(id)arg2;	// IMP=0x0010000000187623
- (void)dayViewController:(id)arg1 awaitsRefreshingOccurrence:(id)arg2;	// IMP=0x0010000000187600
- (id)dayViewController:(id)arg1 createReminderAtDate:(id)arg2 allDay:(_Bool)arg3;	// IMP=0x00100000001874f5
- (id)dayViewController:(id)arg1 createEventAtDate:(id)arg2 allDay:(_Bool)arg3;	// IMP=0x0010000000187349
- (void)dayViewControllerDidEndDecelerating:(id)arg1;	// IMP=0x0010000000187337
- (void)dayViewController:(id)arg1 didStartDeceleratingTargettingDate:(id)arg2;	// IMP=0x001000000018717f
- (void)dayViewControllerDidEndScrolling:(id)arg1;	// IMP=0x0010000000187056
- (void)dayViewController:(id)arg1 didChangeDisplayDate:(id)arg2;	// IMP=0x0010000000186f46
- (void)dayViewController:(id)arg1 modifySelection:(id)arg2;	// IMP=0x0010000000186e87
- (void)dayViewController:(id)arg1 didSelectEvents:(id)arg2 animated:(_Bool)arg3 userInitiated:(_Bool)arg4;	// IMP=0x0010000000186d8d
- (void)dayViewController:(id)arg1 didSelectEvent:(id)arg2 animated:(_Bool)arg3 userInitiated:(_Bool)arg4;	// IMP=0x0010000000186cb5
- (void)eventViewControllerWillDisappear:(id)arg1;	// IMP=0x0010000000186bea
- (void)eventViewController:(id)arg1 willDismissEditViewController:(id)arg2 deleted:(_Bool)arg3;	// IMP=0x0010000000186bd9
- (void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2;	// IMP=0x001000000018694a
- (void)_showDetailForEvents:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000001868e1
- (void)_showDetailForEvent:(id)arg1 animated:(_Bool)arg2 showComments:(_Bool)arg3 context:(id)arg4;	// IMP=0x00100000001867f2
- (void)_showDetailForEvent:(id)arg1 animated:(_Bool)arg2 context:(id)arg3;	// IMP=0x00100000001867da
- (void)dayNavigationViewController:(id)arg1 didChangeCellWidth:(double)arg2;	// IMP=0x00100000001867c8
- (void)dayNavigationViewControllerFailedToChangeDate:(CDUnknownBlockType)arg1;	// IMP=0x00100000001867b6
- (_Bool)dayNavigationViewControllerAllowedToChangeSelectedDate;	// IMP=0x00100000001867a4
- (void)dayNavigationViewController:(id)arg1 didSelectDate:(id)arg2;	// IMP=0x001000000018656e
- (void)_showDetailForEvents:(id)arg1 animated:(_Bool)arg2 userInitiated:(_Bool)arg3;	// IMP=0x00100000001863c3
- (void)_showDetailForEvent:(id)arg1 animated:(_Bool)arg2 userInitiated:(_Bool)arg3;	// IMP=0x0010000000186215
- (void)beginEditingOccurrence:(id)arg1 creationMethod:(unsigned long long)arg2;	// IMP=0x00100000001861ae
- (void)presentDetailsForEvents:(id)arg1 animated:(_Bool)arg2 showComments:(_Bool)arg3 context:(id)arg4;	// IMP=0x0010000000186096
- (void)reloadData;	// IMP=0x001000000018606e
@property(readonly, nonatomic) NSArray *timedDayViewContentGridSubviews;
@property(readonly, nonatomic) UIView *topLabelsContainer;
@property(readonly, nonatomic) UIView *allDayView;
@property(readonly, nonatomic) long long scrubberFirstVisibleDayOffsetFromSelectedDay;
- (struct CGRect)scrubberFrameWithPaletteView:(id)arg1;	// IMP=0x0010000000185edb
@property(readonly, nonatomic) struct CGSize cellSize;
@property(readonly, nonatomic) double firstCellInset;
- (id)sceneTitle;	// IMP=0x0010000000185c2d
- (id)testingRotationDidEndNotificationName;	// IMP=0x0010000000185c20
- (id)testingRotationWillStartNotificationName;	// IMP=0x0010000000185c13
- (long long)intendedSizeClass;	// IMP=0x001000000019cf8d
- (void)extendedLaunchCompletedByViewType:(int)arg1;	// IMP=0x0010000000185b20
- (_Bool)handlesNotifyOnExtendedLaunchCompletion;	// IMP=0x0010000000185b18
- (_Bool)currentlyEditingEventsWithGestures;	// IMP=0x0010000000185ac9
- (id)bestDateForNewEvent;	// IMP=0x0010000000185aa9
- (void)clearSelection;	// IMP=0x0010000000185a87
- (void)removeEventFromSelection:(id)arg1;	// IMP=0x0010000000185700
- (void)addEventToSelection:(id)arg1;	// IMP=0x0010000000185632
- (void)showEvent:(id)arg1 animated:(_Bool)arg2 showMode:(unsigned long long)arg3 context:(id)arg4;	// IMP=0x00100000001854f2
- (void)showNowAnimated:(_Bool)arg1;	// IMP=0x00100000001854a8
- (void)_showNowWhenSameDaySelected;	// IMP=0x0010000000185441
- (void)currentlyVisibleDateRangeFromStartDate:(id *)arg1 toEndDate:(id *)arg2;	// IMP=0x0010000000185253
- (_Bool)isDateVisible:(id)arg1;	// IMP=0x0010000000185108
- (void)selectDate:(id)arg1 andTime:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000184aac
- (void)selectDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000184a95
- (_Bool)isTodayVisible;	// IMP=0x0010000000184a8d
- (_Bool)shouldPushNextLevelViewControllerWhenTodayIsVisible;	// IMP=0x0010000000184a85
- (void)updatePalette:(id)arg1;	// IMP=0x0010000000184935
- (_Bool)allowsOverriddenToolbarItems;	// IMP=0x001000000018492d
- (_Bool)allowsOverriddenRightNavigationBarItems;	// IMP=0x0010000000184925
- (void)virtualConferenceAppChanged:(id)arg1;	// IMP=0x0010000000184913
- (void)_contentSizeCategoryChanged:(id)arg1;	// IMP=0x00100000001848fa
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000001847a9
- (void)viewWillLayoutSubviews;	// IMP=0x00100000001845bc
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000184519
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000018444c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000184000
- (void)viewDidLoad;	// IMP=0x0010000000183dfa
- (void)loadView;	// IMP=0x0010000000183b5f
- (void)dealloc;	// IMP=0x0010000000183a79
- (id)initWithDay:(id)arg1 model:(id)arg2 window:(id)arg3;	// IMP=0x00100000001837f7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

