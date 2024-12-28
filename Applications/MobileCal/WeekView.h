//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CUIKOccurrencesCollection, EKDayViewContent, NSArray, NSCalendar, NSDate, NSDateComponents, NSObject, NSString, NSTimeZone, UIImage, UIImageView, UIScrollView, UIWindow, WeekAllDayView;
@protocol OS_dispatch_queue, WeekViewDataSource, WeekViewDelegate;

@interface WeekView : UIView
{
    UIWindow *_targetWindow;	// 8 = 0x8
    WeekAllDayView *_allDayView;	// 16 = 0x10
    EKDayViewContent *_content;	// 24 = 0x18
    UIScrollView *_scrollView;	// 32 = 0x20
    UIImageView *_gridExtensionView;	// 40 = 0x28
    long long _daysToDisplay;	// 48 = 0x30
    UIImage *_verticalGridExtensionImage;	// 56 = 0x38
    CUIKOccurrencesCollection *_events;	// 64 = 0x40
    NSDateComponents *_highlightedDateComponents;	// 72 = 0x48
    long long _selectedSecond;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_reloadQueue;	// 88 = 0x58
    id <WeekViewDataSource> _dataSource;	// 96 = 0x60
    id <WeekViewDelegate> _delegate;	// 104 = 0x68
    NSDateComponents *_weekStartDate;	// 112 = 0x70
    NSCalendar *_calendar;	// 120 = 0x78
    long long _orientation;	// 128 = 0x80
    double _hourHeightScale;	// 136 = 0x88
}

+ (long long)numMultiDays;	// IMP=0x0020000000069299
+ (id)weekSeparatorColor;	// IMP=0x00100000000687c2
+ (double)dayWidthForOrientation:(long long)arg1 withViewInViewHierarchy:(id)arg2;	// IMP=0x001000000006868e
+ (unsigned long long)displayedDaysForOrientation:(long long)arg1 withViewInViewHierarchy:(id)arg2;	// IMP=0x00100000000684d2
+ (double)windowSpaceForOrientation:(long long)arg1 withViewInViewHierarchy:(id)arg2;	// IMP=0x0010000000068323
+ (double)standardWidthForOrientation:(long long)arg1 withViewInViewHierarchy:(id)arg2;	// IMP=0x0010000000068308
+ (_Bool)showsAllDayDividerLine;	// IMP=0x0010000000068300
+ (_Bool)usesSmallTextForIsCompact:(_Bool)arg1;	// IMP=0x00100000000682f8
- (void).cxx_destruct;	// IMP=0x002000000006d847
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) EKDayViewContent *content; // @synthesize content=_content;
@property(readonly, nonatomic) WeekAllDayView *allDayView; // @synthesize allDayView=_allDayView;
@property(nonatomic) double hourHeightScale; // @synthesize hourHeightScale=_hourHeightScale;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(copy, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(copy, nonatomic) NSDateComponents *weekStartDate; // @synthesize weekStartDate=_weekStartDate;
@property(nonatomic) __weak id <WeekViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WeekViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)dayViewContent:(id)arg1 didTapPinnedOccurrence:(id)arg2;	// IMP=0x001000000006d681
- (void)dayViewContent:(id)arg1 didTapInEmptySpaceOnDay:(double)arg2;	// IMP=0x001000000006d590
- (double)yPositionPerhapsMatchingAllDayOccurrence:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x001000000006d408
- (id)occurrenceViewForEvent:(id)arg1 occurrenceDate:(id)arg2;	// IMP=0x001000000006d34d
- (void)setScrollerContentOffset:(struct CGPoint)arg1;	// IMP=0x001000000006d321
- (_Bool)scrollerIsParentOfView:(id)arg1 isAllDay:(_Bool)arg2;	// IMP=0x001000000006d2be
- (void)addViewToScroller:(id)arg1 isAllDay:(_Bool)arg2;	// IMP=0x001000000006d15b
- (_Bool)isAnimatingScroll;	// IMP=0x001000000006d146
- (struct CGPoint)pointAtDate:(id)arg1 isAllDay:(_Bool)arg2;	// IMP=0x001000000006ce19
- (_Bool)containsDate:(id)arg1;	// IMP=0x001000000006cd2b
- (void)showOverlayMonthInCellAtOffset:(double)arg1 animated:(_Bool)arg2;	// IMP=0x001000000006cca3
- (_Bool)weekAllDayViewShouldAnnotateAppEntities:(id)arg1 onDayStarting:(id)arg2;	// IMP=0x001000000006cc03
- (void)shouldAnnotateAppEntitiesChanged;	// IMP=0x001000000006cbba
- (id)weekAllDayViewForTimeframeAfter:(id)arg1;	// IMP=0x001000000006cadd
- (id)weekAllDayViewForTimeframeBefore:(id)arg1;	// IMP=0x001000000006ca00
- (void)weekAllDayViewDidScroll:(id)arg1;	// IMP=0x001000000006c976
- (void)weekAllDayViewEmptySpaceClick:(id)arg1 onDay:(double)arg2;	// IMP=0x001000000006c864
- (void)weekAllDayView:(id)arg1 didSelectEvent:(id)arg2 userInitiated:(_Bool)arg3 dateSelected:(id)arg4;	// IMP=0x001000000006c7a5
- (void)attemptDisplayReviewPrompt;	// IMP=0x001000000006c730
- (id)selectedEventsForEditMenu;	// IMP=0x001000000006c6ea
- (id)presentationControllerForEditMenu;	// IMP=0x001000000006c6a4
- (_Bool)dayViewContentShouldAnnotateAppEntities:(id)arg1 onDayStarting:(id)arg2;	// IMP=0x001000000006c604
- (void)dayViewContentDidLayout:(id)arg1;	// IMP=0x001000000006c57a
- (void)dayViewContent:(id)arg1 didSelectEvents:(id)arg2 userInitiated:(_Bool)arg3;	// IMP=0x001000000006c4dd
- (void)dayViewContent:(id)arg1 didSelectEvent:(id)arg2 userInitiated:(_Bool)arg3 dateSelected:(id)arg4;	// IMP=0x001000000006c41e
- (void)updateMarkerPosition;	// IMP=0x001000000006c3d6
- (id)_verticalGridExtensionImage;	// IMP=0x001000000006c04f
- (void)firstVisibleSecondChanged;	// IMP=0x001000000006bf9a
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x001000000006bf88
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x001000000006bef1
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x001000000006be53
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x001000000006bb31
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x001000000006ba98
@property(readonly, nonatomic) NSArray *occurrenceViews;
- (void)scrollToEvent:(id)arg1 animateWithDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006b5fd
- (void)scrollToEvent:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006b5e0
- (_Bool)isEventFullyVisible:(id)arg1;	// IMP=0x001000000006b239
- (_Bool)scrollTowardPoint:(struct CGPoint)arg1;	// IMP=0x001000000006aed2
- (void)scrollToSecond:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006ac00
@property(nonatomic) long long firstVisibleSecond;
- (int)_secondAtPosition:(double)arg1;	// IMP=0x001000000006aae7
- (double)_positionOfSecond:(long long)arg1;	// IMP=0x001000000006aa85
- (void)reloadData;	// IMP=0x001000000006a8d2
- (void)loadDataAsyncWithCompletion:(CDUnknownBlockType)arg1 reverse:(_Bool)arg2;	// IMP=0x001000000006a546
@property(readonly, nonatomic) _Bool hasAllDayEvents;
@property(nonatomic) _Bool showsTimeMarker;
- (void)_updateHighlightedDay;	// IMP=0x001000000006a254
- (void)_updateTimeMarkerTodayDay;	// IMP=0x001000000006a013
- (void)updateTimeMarkerForDayChange;	// IMP=0x001000000006a001
- (id)dateForXOffset:(double)arg1;	// IMP=0x0010000000069e76
- (void)adjustForVisibleRect:(struct CGRect)arg1;	// IMP=0x0010000000069c02
@property(readonly, nonatomic) NSDate *lastSecondOfWeek;
@property(readonly, nonatomic) NSDateComponents *lastDateOfWeek;
@property(retain, nonatomic) NSDateComponents *highlightedDateComponents;
@property(copy, nonatomic) NSTimeZone *timeZone;
- (void)hideNowDot:(_Bool)arg1;	// IMP=0x0010000000069831
- (void)updateDayWidth;	// IMP=0x00100000000696fb
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00100000000696a5
- (void)layoutSubviews;	// IMP=0x001000000006942e
- (long long)daysToDisplay;	// IMP=0x00100000000692a4
- (id)initWithFrame:(struct CGRect)arg1 sizeClass:(long long)arg2 targetWindow:(id)arg3 rightClickDelegate:(id)arg4;	// IMP=0x00100000000687db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
