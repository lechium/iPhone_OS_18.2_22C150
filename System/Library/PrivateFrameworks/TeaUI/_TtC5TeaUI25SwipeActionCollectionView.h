//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionView.h>

@class MISSING_TYPE, UIPanGestureRecognizer;

@interface _TtC5TeaUI25SwipeActionCollectionView : UICollectionView
{
    MISSING_TYPE *swipeActionManager;	// 8 = 0x8
    MISSING_TYPE *dependencyCleanupBlocks;	// 16 = 0x10
    MISSING_TYPE *coordinatingResetBlocks;	// 24 = 0x18
    MISSING_TYPE *coordinatingCancelBlocks;	// 32 = 0x20
    MISSING_TYPE *updateGroup;	// 40 = 0x28
    MISSING_TYPE *swipeActionRestoreState;	// 0 = 0x0
    MISSING_TYPE *isBottomRubberBanding;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000021ddf7
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;	// IMP=0x000000000021eeb1
- (void)handleFromCoordinatingGestureWithGestureRecognizer:(id)arg1;	// IMP=0x000000000021edb7
- (void)handlePanGestureWithGestureRecognizer:(id)arg1;	// IMP=0x000000000021ecdd
- (void)layoutSubviews;	// IMP=0x000000000021e2f1
- (void)didMoveToWindow;	// IMP=0x000000000021dfa1
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000021df41
- (void)dealloc;	// IMP=0x000000000021ddda
@property(nonatomic) struct CGPoint contentOffset;
@property(nonatomic) _Bool allowsSelection;
- (void)coordinatingResetSwipeAction;	// IMP=0x000000000021ef77
@property(nonatomic, readonly) _Bool coordinatingSwipeActionShouldCancel;
@property(nonatomic, readonly) UIPanGestureRecognizer *coordinatingSwipeActionPanGestureRecognizer;
- (void)deleteItemsAtIndexPaths:(id)arg1;	// IMP=0x0000000000220ec3
- (void)deleteSections:(id)arg1;	// IMP=0x0000000000220d1f
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;	// IMP=0x0000000000220b5b
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;	// IMP=0x00000000002209ff
- (void)insertItemsAtIndexPaths:(id)arg1;	// IMP=0x000000000022090a
- (void)insertSections:(id)arg1;	// IMP=0x00000000002208dc
- (void)reloadItemsAtIndexPaths:(id)arg1;	// IMP=0x00000000002208ae
- (void)reloadSections:(id)arg1;	// IMP=0x000000000022074b
- (void)reloadData;	// IMP=0x00000000002205d7
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002203e4

@end

