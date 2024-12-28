//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKCalendarDate, NSMutableArray, NSString, UIScrollView;

@interface InfiniteScrollViewController
{
    NSMutableArray *_views;	// 16 = 0x10
    EKCalendarDate *_startingDate;	// 24 = 0x18
    NSMutableArray *_reusableViews;	// 32 = 0x20
    EKCalendarDate *_lastKnownShownDate;	// 40 = 0x28
    _Bool _viewCullingDisabledForScrollAnimation;	// 48 = 0x30
    _Bool _reinitializingViewsForNewDate;	// 49 = 0x31
    struct CGSize _futureSize;	// 56 = 0x38
    _Bool _useFutureSize;	// 72 = 0x48
    _Bool _isUserFingerDown;	// 73 = 0x49
    _Bool _viewIsVisible;	// 74 = 0x4a
    _Bool _isRelayingOut;	// 75 = 0x4b
    _Bool _suppressViewAdjustments;	// 76 = 0x4c
    UIScrollView *;	// 80 = 0x50
}

+ (_Bool)_view:(id)arg1 containsCalendarDate:(id)arg2;	// IMP=0x002000000004a15c
+ (_Bool)_shouldForwardViewWillTransitionToSize;	// IMP=0x0010000000046ed0
- (void).cxx_destruct;	// IMP=0x002000000004c9dd
@property(nonatomic) _Bool suppressViewAdjustments; // @synthesize suppressViewAdjustments=_suppressViewAdjustments;
@property(readonly, nonatomic) _Bool isRelayingOut; // @synthesize isRelayingOut=_isRelayingOut;
@property(readonly, nonatomic) _Bool viewIsVisible; // @synthesize viewIsVisible=_viewIsVisible;
@property(nonatomic) _Bool isUserFingerDown; // @synthesize isUserFingerDown=_isUserFingerDown;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (double)unobstructedScrollViewHeight;	// IMP=0x001000000004c88c
- (double)subviewBufferExtensionMultiplier;	// IMP=0x001000000004c883
- (double)showDateVerticalOffsetForDate:(id)arg1;	// IMP=0x001000000004c87a
- (double)topInsetForSubviewWithCalendarDate:(id)arg1;	// IMP=0x001000000019cb0a
- (double)heightForSubviewWithCalendarDate:(id)arg1;	// IMP=0x001000000019cae2
- (id)calendarDateForSubviewBelowSubviewWithCalendarDate:(id)arg1;	// IMP=0x001000000019cabb
- (id)calendarDateForSubviewAboveSubviewWithCalendarDate:(id)arg1;	// IMP=0x001000000019ca94
- (id)newBottomViewBelowViewWithCalendarDate:(id)arg1;	// IMP=0x001000000019ca6d
- (id)newTopViewAboveViewWithCalendarDate:(id)arg1;	// IMP=0x001000000019ca46
- (id)createInitialViewForDate:(id)arg1;	// IMP=0x001000000019ca1f
- (id)futureMajorBoundaryCalendarDateForCalendarDate:(id)arg1;	// IMP=0x001000000019c9f8
- (id)pastMajorBoundaryCalendarDateForCalendarDate:(id)arg1;	// IMP=0x001000000019c9d1
- (_Bool)shouldAnimateScrollToDate:(id)arg1 fromClosestDate:(id)arg2;	// IMP=0x001000000004c872
- (struct CGPoint)nearestMajorBoundaryForPoint:(struct CGPoint)arg1 date:(id *)arg2;	// IMP=0x001000000004bf54
- (struct CGPoint)nearestMajorBoundaryForPoint:(struct CGPoint)arg1;	// IMP=0x001000000004bf40
- (void)showSelectedDateIfNeeded;	// IMP=0x001000000004be31
- (id)dequeueReusableView;	// IMP=0x001000000004bda0
- (unsigned long long)maximumCachedReusableViews;	// IMP=0x001000000004bd98
- (void)enumerateScrollViewSubviews:(CDUnknownBlockType)arg1;	// IMP=0x001000000004bc4d
- (id)dateOfViewInBufferIndexRelativeToCenter:(long long)arg1;	// IMP=0x001000000004bbbc
- (id)dateOfCenterViewInBuffer;	// IMP=0x001000000004bb78
- (id)dateOfCenterViewOnScreen;	// IMP=0x001000000004babe
- (id)firstView;	// IMP=0x001000000004baa1
- (id)_lastViewOnScreen;	// IMP=0x001000000004b998
- (id)firstViewOnScreen;	// IMP=0x001000000004b900
- (id)centerViewOnScreen;	// IMP=0x001000000004b865
- (id)subviewForDate:(id)arg1;	// IMP=0x001000000004b6a2
- (id)subviewForPoint:(struct CGPoint)arg1;	// IMP=0x001000000004b474
- (void)showDate:(id)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000004a67a
- (void)showDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000004a665
@property(readonly, nonatomic) long long subviewCount;
- (void)currentlyVisibleDateRangeFromStartDate:(id *)arg1 toEndDate:(id *)arg2;	// IMP=0x001000000004a51f
- (_Bool)isDateVisible:(id)arg1;	// IMP=0x001000000004a2f0
- (void)_removeBottomView;	// IMP=0x001000000004a22a
- (void)_removeTopView;	// IMP=0x001000000004a094
- (id)_addNewBottomView;	// IMP=0x0010000000049e18
- (id)_addNewTopView;	// IMP=0x0010000000049b9a
- (void)insertViews:(id)arg1;	// IMP=0x00100000000499ba
- (struct CGSize)_visibleSize;	// IMP=0x0010000000049928
- (void)viewWillLayoutSubviews;	// IMP=0x00100000000498a8
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x0010000000049866
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0010000000049854
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x001000000004983f
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x00100000000497e2
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00100000000497af
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0010000000049778
- (void)didLoadInitialViews;	// IMP=0x0010000000049772
- (_Bool)shouldUpdateSelectedDateWithCentralView;	// IMP=0x001000000004976a
- (void)_updateSelectedDateWithTopView;	// IMP=0x00100000000496b7
- (void)didEndScrolling;	// IMP=0x0010000000049663
- (void)didEndDraggingWillDecelerate:(_Bool)arg1;	// IMP=0x001000000004965d
- (void)willEndDraggingWithVelocity:(struct CGPoint)arg1 targetContentOffset:(inout struct CGPoint *)arg2;	// IMP=0x0010000000049657
- (void)willBeginDragging;	// IMP=0x0010000000049651
- (void)didScroll;	// IMP=0x001000000004964b
- (void)infiniteScrollViewSafeAreasDidChange;	// IMP=0x0010000000049645
- (void)scrollViewSafeAreasDidChange;	// IMP=0x0010000000049633
- (void)scrollViewDidLayoutSubviews;	// IMP=0x0010000000049621
- (void)viewDidLayoutSubviews;	// IMP=0x001000000004952e
- (void)reloadDataForViews:(id)arg1;	// IMP=0x00100000000493f9
- (void)reloadDataForAllViews;	// IMP=0x00100000000493dc
- (_Bool)shouldUpdatePreferredReloadDates;	// IMP=0x00100000000493d4
- (void)adjustLoadedViewRange;	// IMP=0x001000000004847b
- (void)_recenterContentIfNeededWithForce:(_Bool)arg1;	// IMP=0x001000000004815b
- (void)_recenterContentIfNeeded;	// IMP=0x0010000000048147
- (void)reinitializeAllViewsWithCalendarDate:(id)arg1;	// IMP=0x0010000000047fc0
- (void)resizeAllViews;	// IMP=0x0010000000047e7b
- (void)_layoutInitialSubviews;	// IMP=0x0010000000047939
- (void)_setUpInitialViewWithDate:(id)arg1;	// IMP=0x00100000000471cb
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000046ed8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000046e94
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000046e5a
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000046d9f
- (void)viewDidLoad;	// IMP=0x0010000000046bc5
- (void)loadView;	// IMP=0x0010000000046a63
- (id)allViews;	// IMP=0x0010000000046a4e
@property(readonly, copy) NSString *description;
- (id)initWithCalendarDate:(id)arg1 model:(id)arg2 window:(id)arg3;	// IMP=0x001000000004684c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
