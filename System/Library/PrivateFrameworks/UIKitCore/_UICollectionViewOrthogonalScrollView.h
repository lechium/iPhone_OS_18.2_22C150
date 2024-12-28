//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIScrollView.h"

@class NSString, UICollectionView, _UICollectionLayoutSectionDescriptor, _UICollectionViewSubviewRouter;

__attribute__((visibility("hidden")))
@interface _UICollectionViewOrthogonalScrollView : UIScrollView
{
    _Bool _isConfiguring;	// 168 = 0xa8
    UICollectionView *_collectionView;	// 176 = 0xb0
    long long _section;	// 184 = 0xb8
    _UICollectionViewSubviewRouter *_subviewRouter;	// 192 = 0xc0
    _UICollectionLayoutSectionDescriptor *_descriptor;	// 200 = 0xc8
    struct UIEdgeInsets _baseContentInsets;	// 208 = 0xd0
}

+ (_Bool)_supportsInvalidatingFocusCache;	// IMP=0x001000000183c5e3
- (void).cxx_destruct;	// IMP=0x000000000183cef0
- (void)dealloc;	// IMP=0x000000000183cead
- (void)_willRemoveSubview:(id)arg1;	// IMP=0x000000000183ce51
- (void)exchangeSubviewAtIndex:(long long)arg1 withSubviewAtIndex:(long long)arg2;	// IMP=0x000000000183cde1
- (void)sendSubviewToBack:(id)arg1;	// IMP=0x000000000183cd7e
- (void)bringSubviewToFront:(id)arg1;	// IMP=0x000000000183cd1b
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;	// IMP=0x000000000183cc9f
- (unsigned long long)_edgesPropagatingSafeAreaInsetsToSubviews;	// IMP=0x000000000183cc21
- (struct UIEdgeInsets)_focusScrollableAreaInsets;	// IMP=0x000000000183cb9d
- (unsigned long long)_focusPrimaryScrollableAxis;	// IMP=0x000000000183cb39
- (id)_focusScrollBoundaryMetricsForItem:(id)arg1;	// IMP=0x000000000183ca28
- (id)_childFocusRegionsInRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x000000000183c7a8
- (id)_extantFocusItemsInRect:(struct CGRect)arg1;	// IMP=0x000000000183c759
- (id)focusItemsInRect:(struct CGRect)arg1;	// IMP=0x000000000183c5eb
- (struct CGPoint)_panGestureVelocityInView:(id)arg1;	// IMP=0x000000000183c57f
- (struct CGPoint)_panGestureLocationInView:(id)arg1;	// IMP=0x000000000183c51b
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000183c4a7
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000183c433
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000183c3bf
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000183c34b
- (struct CGPoint)_pointByRemovingBaseContentInsetsFromPoint:(struct CGPoint)arg1;	// IMP=0x000000000183c31e
- (struct CGPoint)_pointByApplyingBaseContentInsetsToPoint:(struct CGPoint)arg1;	// IMP=0x000000000183c2f1
- (struct CGPoint)_contentOffsetForScrollingToTop;	// IMP=0x000000000183c2b7
- (void)_autoScrollAssistantUpdateContentOffset:(struct CGPoint)arg1;	// IMP=0x000000000183c26a
- (struct CGPoint)_contentOffsetForScrollingToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 additionalInsets:(struct NSDirectionalEdgeInsets)arg3 itemFrame:(struct CGRect)arg4;	// IMP=0x000000000183c029
- (void)_notifyDidScroll;	// IMP=0x000000000183bbd3

// Remaining properties
@property(readonly, nonatomic) struct CGPoint contentOffset;
@property(readonly, nonatomic) struct CGSize contentSize;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, nonatomic, getter=isDecelerating) _Bool decelerating;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isDragging) _Bool dragging;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isTracking) _Bool tracking;

@end
