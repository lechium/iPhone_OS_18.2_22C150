//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DayNavigationViewController, MISSING_TYPE, NSString, PaletteView;

@interface MultiDayWeekViewController
{
    PaletteView *_palette;	// 16 = 0x10
    DayNavigationViewController *_scrubberControllerNeue;	// 24 = 0x18
    long long _numMultiDays;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000077db2
@property(nonatomic) long long numMultiDays; // @synthesize numMultiDays=_numMultiDays;
- (_Bool)eventViewControllerShouldHideInlineEditButton;	// IMP=0x0010000000077d88
- (void)showReminderDetail:(id)arg1;	// IMP=0x0010000000077ca8
- (_Bool)shouldShowCompactLayout;	// IMP=0x0010000000077ca0
- (id)interactionControllerForPresentation:(id)arg1;	// IMP=0x0010000000077c4c
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x0010000000077bf8
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x0010000000077ba4
- (_Bool)eventGestureControllerShouldSplitMultiDayAllDayEvents:(id)arg1;	// IMP=0x0010000000077b92
- (void)dayNavigationViewController:(id)arg1 didSelectDate:(id)arg2;	// IMP=0x0010000000077ab1
- (id)dayHeaderFrames;	// IMP=0x0010000000077995
- (void)_updateWeekDayHeaderDayFrames;	// IMP=0x0010000000077941
- (void)updatePalette:(id)arg1;	// IMP=0x001000000007778c
- (id)dayScrubberController;	// IMP=0x0010000000077777
- (struct CGSize)cellSize;	// IMP=0x0010000000077712
- (id)cellFactory;	// IMP=0x00100000000776f9
- (void)selectDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000775dc
- (void)setDisplayedDate:(id)arg1 forceScroll:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000077516
- (void)displayedDateChanged:(id)arg1 userInitiated:(_Bool)arg2;	// IMP=0x0010000000077457
- (MISSING_TYPE *)showViewController:sender:animated:completion: /* Error: Ran out of types for this method. */;	// IMP=0x001000000007729e
- (void)showEvents:(id)arg1 animated:(_Bool)arg2 showMode:(unsigned long long)arg3 context:(id)arg4;	// IMP=0x00100000000771d9
- (void)showEvent:(id)arg1 animated:(_Bool)arg2 showMode:(unsigned long long)arg3 context:(id)arg4;	// IMP=0x001000000007703d
- (id)pushedDayViewControllerWithDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000076f72
- (double)headerVerticalOffset;	// IMP=0x0010000000076f69
- (long long)intendedSizeClass;	// IMP=0x0010000000076f5e
- (int)supportedToggleMode;	// IMP=0x0010000000076f53
- (id)dateForWeek:(long long)arg1;	// IMP=0x0010000000076ec1
- (unsigned long long)daysInWeek;	// IMP=0x0010000000076eb0
- (Class)weekViewClass;	// IMP=0x0010000000076e9f
- (_Bool)usesMultiDayWeekView;	// IMP=0x0010000000076e97
- (void)_sceneEnteredForeground:(id)arg1;	// IMP=0x0010000000076e7a
- (void)_calendarModelTimeZoneChanged:(id)arg1;	// IMP=0x0010000000076e31
- (void)_significantTimeChanged:(id)arg1;	// IMP=0x0010000000076d4d
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000076c83
- (void)viewIsAppearing:(_Bool)arg1;	// IMP=0x0010000000076c42
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000076c01
- (id)initWithModel:(id)arg1 window:(id)arg2;	// IMP=0x0010000000076ad9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
