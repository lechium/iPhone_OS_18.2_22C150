//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIScrollView.h"

@class NSArray, NSMutableArray, UIView;
@protocol _UIQueuingScrollViewDataSource, _UIQueuingScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIQueuingScrollView : UIScrollView
{
    id <_UIQueuingScrollViewDelegate> _qDelegate;	// 168 = 0xa8
    id <_UIQueuingScrollViewDataSource> _qDataSource;	// 176 = 0xb0
    long long _navigationOrientation;	// 184 = 0xb8
    NSArray *_views;	// 192 = 0xc0
    NSArray *_wrapperViews;	// 200 = 0xc8
    UIView *_pendingVisibleView;	// 208 = 0xd0
    double _pageSpacing;	// 216 = 0xd8
    NSMutableArray *_viewStateQueue;	// 224 = 0xe0
    NSMutableArray *_completionStateQueue;	// 232 = 0xe8
    _Bool _manualScrollInProgress;	// 240 = 0xf0
    struct {
        unsigned int delegateInterestedInPendingScrolls:1;
        unsigned int delegateInterestedInCommittedScrolls:1;
        unsigned int delegateInterestedInCompletedScrolls:1;
        unsigned int delegateInterestedInBailedOutScrolls:1;
        unsigned int delegateInterestedFinishedScrolling:1;
        unsigned int delegateCanVetoSubviewLayout:1;
        unsigned int dataSourceSuppliesBeforeView:1;
        unsigned int dataSourceSuppliesAfterView:1;
        unsigned int dataSourceInterestedInFlushedViews:1;
    } _delegateFlags;	// 244 = 0xf4
    struct CGRect _disabledScrollingRegion;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x0000000000822804
@property(nonatomic) struct CGRect disabledScrollingRegion; // @synthesize disabledScrollingRegion=_disabledScrollingRegion;
@property(nonatomic) double pageSpacing; // @synthesize pageSpacing=_pageSpacing;
@property(nonatomic) __weak id <_UIQueuingScrollViewDataSource> qDataSource; // @synthesize qDataSource=_qDataSource;
@property(nonatomic) __weak id <_UIQueuingScrollViewDelegate> qDelegate; // @synthesize qDelegate=_qDelegate;
- (_Bool)canBecomeFocused;	// IMP=0x000000000082277a
- (void)_didEndProgrammaticScroll;	// IMP=0x0000000000822766
- (void)_didEndManualScroll;	// IMP=0x000000000082271d
- (void)_didEndScroll:(_Bool)arg1;	// IMP=0x000000000082233e
- (void)_didEndDraggingManualScroll;	// IMP=0x0000000000821f2e
- (void)_didScrollWithAnimation:(_Bool)arg1 force:(_Bool)arg2;	// IMP=0x00000000008210e0
- (_Bool)_isScrollInProgress:(_Bool)arg1;	// IMP=0x00000000008210a8
- (_Bool)_isDeceleratingInOppositionToNavigationDirection:(long long)arg1;	// IMP=0x0000000000820f9b
- (void)_commitGestureDrivenScrollRevealingView:(id)arg1 concealingView:(id)arg2 inDirection:(long long)arg3 canComplete:(_Bool)arg4;	// IMP=0x0000000000820bd1
- (void)_boundsDidChangeToSize:(struct CGSize)arg1;	// IMP=0x00000000008208f6
- (void)_adjustContentInsets;	// IMP=0x0000000000820755
- (void)setView:(id)arg1 direction:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000820473
- (void)_notifyDelegateDidFinishScrolling;	// IMP=0x0000000000820425
- (void)_notifyDelegateDidBailoutOfScrollAndRevealedView:(id)arg1;	// IMP=0x00000000008203ab
- (void)_notifyDelegateDidEndManualScroll:(_Bool)arg1 toRevealView:(id)arg2 direction:(long long)arg3 animated:(_Bool)arg4 didFinish:(_Bool)arg5 didComplete:(_Bool)arg6;	// IMP=0x00000000008202fb
- (void)_notifyDelegateDidCommitManualScroll:(_Bool)arg1 toRevealView:(id)arg2 concealView:(id)arg3 direction:(long long)arg4 animated:(_Bool)arg5 canComplete:(_Bool)arg6;	// IMP=0x0000000000820236
- (void)_notifyDelegateWillManuallyScroll:(_Bool)arg1 toRevealView:(id)arg2 concealingView:(id)arg3 animated:(_Bool)arg4;	// IMP=0x000000000082018b
- (void)_enqueueAnimatedScrollInDirection:(long long)arg1 withView:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000081f07b
- (void)_cleanUpCompletionState:(id)arg1 didFinish:(_Bool)arg2 didComplete:(_Bool)arg3;	// IMP=0x000000000081effa
- (void)_enqueueCompletionState:(id)arg1;	// IMP=0x000000000081eda2
- (long long)_navigationDirectionFromCurrentOffset;	// IMP=0x000000000081ec88
- (long long)_navigationDirectionForActiveScroll:(_Bool)arg1;	// IMP=0x000000000081e956
- (_Bool)isManualScrollInProgress;	// IMP=0x000000000081e8f6
- (_Bool)isPreviousScrollCompatibleWithScrollInDirection:(long long)arg1;	// IMP=0x000000000081e898
- (void)_invalidateOffscreenViews;	// IMP=0x000000000081e7fb
- (id)_viewAtIndex:(long long)arg1 loadingIfNecessary:(_Bool)arg2 updatingContents:(_Bool)arg3 animated:(_Bool)arg4;	// IMP=0x000000000081e58d
- (id)_dequeueViewForIndex:(long long)arg1;	// IMP=0x000000000081e3f9
- (id)_requestViewForIndex:(long long)arg1;	// IMP=0x000000000081e310
- (void)_replaceViews:(id)arg1 updatingContents:(_Bool)arg2 adjustContentInsets:(_Bool)arg3 animated:(_Bool)arg4;	// IMP=0x000000000081df98
- (void)_flushView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000081df08
- (id)_visibleView;	// IMP=0x000000000081de14
- (id)_viewAfterView:(id)arg1;	// IMP=0x000000000081ddfd
- (id)_viewBeforeView:(id)arg1;	// IMP=0x000000000081dde3
- (id)_viewBefore:(_Bool)arg1 view:(id)arg2;	// IMP=0x000000000081dd47
- (_Bool)_dataSourceProvidesViews;	// IMP=0x000000000081dcff
- (void)_setWrappedViewAtIndex:(long long)arg1 withView:(id)arg2;	// IMP=0x000000000081daf8
- (void)_handleDirectionalPageWithHorizontalVelocity:(double)arg1 verticalVelocity:(double)arg2;	// IMP=0x000000000081da5c
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;	// IMP=0x000000000081da56
- (unsigned long long)_abuttedPagingEdges;	// IMP=0x000000000081d6cc
- (_Bool)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000000081d570
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(_Bool)arg2;	// IMP=0x000000000081d4fd
- (void)_scrollViewDidEndDecelerating;	// IMP=0x000000000081d495
- (void)_scrollViewDidEndDraggingWithDeceleration:(_Bool)arg1;	// IMP=0x000000000081d411
- (void)layoutSubviews;	// IMP=0x000000000081d33b
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000081d261
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000081d181
- (void)_setFrameAndApplyPageSpacing:(struct CGRect)arg1;	// IMP=0x000000000081cfdd
@property(readonly, nonatomic) UIView *visibleView;
- (id)initWithFrame:(struct CGRect)arg1 navigationOrientation:(long long)arg2;	// IMP=0x000000000081cb39

@end

