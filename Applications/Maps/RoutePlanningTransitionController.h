//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLayoutConstraint, NSString, RoutePlanningTransitionContext, UIScrollView;
@protocol ContaineeProtocol><RoutePlanningTransitionDelegate><GEOLogContextDelegate><UIScrollViewDelegate;

@interface RoutePlanningTransitionController : NSObject
{
    _Bool _isPanningTable;	// 8 = 0x8
    _Bool _isPinningScrollY;	// 9 = 0x9
    RoutePlanningTransitionContext *_context;	// 16 = 0x10
    double _scrollYForMediumHeight;	// 24 = 0x18
    double _scrollYForFullHeight;	// 32 = 0x20
    double _pinnedScrollY;	// 40 = 0x28
    double _heightOfRowToKeepVisible;	// 48 = 0x30
    double _scrollViewHeightForFullLayout;	// 56 = 0x38
    NSLayoutConstraint *_scrollViewMinimumHeightConstraint;	// 64 = 0x40
    double _scrollViewPanGestureTranslationBeforeCardDrag;	// 72 = 0x48
    _Bool _transitioning;	// 80 = 0x50
    _Bool _cardDragEnabled;	// 81 = 0x51
    _Bool _showMaximumContentWhenExpanding;	// 82 = 0x52
    UIScrollView *_scrollView;	// 88 = 0x58
    id <ContaineeProtocol><RoutePlanningTransitionDelegate><GEOLogContextDelegate><UIScrollViewDelegate> _delegate;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000005e6748
@property(nonatomic) __weak id <ContaineeProtocol><RoutePlanningTransitionDelegate><GEOLogContextDelegate><UIScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showMaximumContentWhenExpanding; // @synthesize showMaximumContentWhenExpanding=_showMaximumContentWhenExpanding;
@property(nonatomic, getter=isCardDragEnabled) _Bool cardDragEnabled; // @synthesize cardDragEnabled=_cardDragEnabled;
@property(readonly, nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
- (_Bool)_shouldDragCardForPanEvent;	// IMP=0x00100000005e6446
- (void)_terminateCardDragIfNeeded;	// IMP=0x00100000005e639a
- (void)_initiateCardDragIfNeededWithInitialVerticalTranslation:(double)arg1;	// IMP=0x00100000005e62f0
- (void)_panGestureRecognizerAction:(id)arg1;	// IMP=0x00100000005e620b
- (_Bool)_isClosestToFullHeight:(double)arg1;	// IMP=0x00100000005e61e4
- (void)_getScrollY:(double *)arg1 forTableHeight:(double)arg2;	// IMP=0x00100000005e5df0
- (void)_updateScrollYForFullHeightIfNeeded;	// IMP=0x00100000005e5da0
- (void)_resetValuesToStartTransitionFromTableHeight:(double)arg1;	// IMP=0x00100000005e5be2
- (void)scrollViewWillBeginDecelerating:(id)arg1;	// IMP=0x00100000005e5ad7
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00100000005e58fc
- (void)setForceMinimumScrollViewHeight:(_Bool)arg1;	// IMP=0x00100000005e58ca
- (void)updateTransitionWithHeight:(double)arg1;	// IMP=0x00100000005e54c2
- (void)_updateScrollYForMediumHeightIfNeeded:(_Bool)arg1;	// IMP=0x00100000005e530f
- (void)stopTransition;	// IMP=0x00100000005e4fc9
- (void)startTransition;	// IMP=0x00100000005e4da2
- (double)_pinnedScrollY;	// IMP=0x00100000005e4d1c
- (double)_scrollYForFullHeight;	// IMP=0x00100000005e4c96
- (double)_scrollYForMediumHeight;	// IMP=0x00100000005e4c10
- (double)_tableHeight;	// IMP=0x00100000005e4b27
@property(readonly, nonatomic) RoutePlanningTransitionContext *currentTransitionContext;
- (id)initWithScrollView:(id)arg1;	// IMP=0x00100000005e49e5
- (void)dealloc;	// IMP=0x00100000005e49a7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

