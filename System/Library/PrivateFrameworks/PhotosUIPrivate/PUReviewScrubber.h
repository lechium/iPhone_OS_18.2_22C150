//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIToolbar.h>

@class NSIndexPath, NSNumber, NSString, PUHorizontalCollectionViewLayout, UICollectionView, UIImageView, UIImpactFeedbackGenerator, UITapGestureRecognizer, _UIBackdropView;
@protocol PUReviewScrubberDataSource, PUReviewScrubberDelegate;

__attribute__((visibility("hidden")))
@interface PUReviewScrubber : UIToolbar
{
    _Bool __ignoreScrollViewDidScrollUpdate;	// 8 = 0x8
    _Bool __performingInteractiveUpdate;	// 9 = 0x9
    NSNumber *_cellAspectRatio;	// 16 = 0x10
    id <PUReviewScrubberDataSource> _dataSource;	// 24 = 0x18
    id <PUReviewScrubberDelegate> _scrubberDelegate;	// 32 = 0x20
    NSIndexPath *_selectedIndexPath;	// 40 = 0x28
    Class _scrubberCellClass;	// 48 = 0x30
    _UIBackdropView *__backdropView;	// 56 = 0x38
    UIImageView *__shadowView;	// 64 = 0x40
    UIImageView *__arrowImageView;	// 72 = 0x48
    PUHorizontalCollectionViewLayout *__collectionViewLayout;	// 80 = 0x50
    UICollectionView *__collectionView;	// 88 = 0x58
    NSString *_cellReuseIdentifier;	// 96 = 0x60
    UITapGestureRecognizer *__tapGestureRecognizer;	// 104 = 0x68
    UIImpactFeedbackGenerator *__impactFeedbackBehavior;	// 112 = 0x70
    NSIndexPath *__indexPathForPreviousFeedbackQuery;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000005642d0
@property(retain, nonatomic, setter=_setIndexPathForPreviousFeedbackQuery:) NSIndexPath *_indexPathForPreviousFeedbackQuery; // @synthesize _indexPathForPreviousFeedbackQuery=__indexPathForPreviousFeedbackQuery;
@property(readonly, nonatomic) UIImpactFeedbackGenerator *_impactFeedbackBehavior; // @synthesize _impactFeedbackBehavior=__impactFeedbackBehavior;
@property(readonly, nonatomic) UITapGestureRecognizer *_tapGestureRecognizer; // @synthesize _tapGestureRecognizer=__tapGestureRecognizer;
@property(readonly, nonatomic) _Bool _performingInteractiveUpdate; // @synthesize _performingInteractiveUpdate=__performingInteractiveUpdate;
@property(readonly, nonatomic) _Bool _ignoreScrollViewDidScrollUpdate; // @synthesize _ignoreScrollViewDidScrollUpdate=__ignoreScrollViewDidScrollUpdate;
@property(retain, nonatomic) NSString *cellReuseIdentifier; // @synthesize cellReuseIdentifier=_cellReuseIdentifier;
@property(readonly, nonatomic) UICollectionView *_collectionView; // @synthesize _collectionView=__collectionView;
@property(readonly, nonatomic) PUHorizontalCollectionViewLayout *_collectionViewLayout; // @synthesize _collectionViewLayout=__collectionViewLayout;
@property(readonly, nonatomic) UIImageView *_arrowImageView; // @synthesize _arrowImageView=__arrowImageView;
@property(readonly, nonatomic) UIImageView *_shadowView; // @synthesize _shadowView=__shadowView;
@property(readonly, nonatomic) _UIBackdropView *_backdropView; // @synthesize _backdropView=__backdropView;
@property(retain, nonatomic) Class scrubberCellClass; // @synthesize scrubberCellClass=_scrubberCellClass;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic) __weak id <PUReviewScrubberDelegate> scrubberDelegate; // @synthesize scrubberDelegate=_scrubberDelegate;
@property(nonatomic) __weak id <PUReviewScrubberDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSNumber *cellAspectRatio; // @synthesize cellAspectRatio=_cellAspectRatio;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000564093
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000056407b
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000563f7b
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000563ec9
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000000563e26
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0000000000563ccd
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000000563cbb
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x0000000000563ca3
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000563bc3
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0000000000563bb1
- (struct CGSize)itemSize;	// IMP=0x0000000000563b3c
- (void)_notifyDelegateOfSelection;	// IMP=0x0000000000563ab6
- (void)_notifyDelegateOfScrub;	// IMP=0x0000000000563a54
- (void)_updateToSelectedIndexPath:(id)arg1;	// IMP=0x00000000005639f3
- (struct CGPoint)contentOffsetForItemAtIndex:(long long)arg1 ofScrollView:(id)arg2;	// IMP=0x000000000056393f
- (struct CGPoint)contentOffsetForIndexPath:(id)arg1 inCollectionView:(id)arg2;	// IMP=0x000000000056379a
- (id)indexPathUnderTickMarkInCollectionView:(id)arg1 atContentOffset:(struct CGPoint)arg2;	// IMP=0x0000000000563585
- (void)_updateContentOffsetForSelectedIndexPathAnimated:(_Bool)arg1;	// IMP=0x000000000056351e
- (void)_handleTapOnReviewScrubber:(id)arg1;	// IMP=0x00000000005633b7
- (void)_handleTapAtIndexPath:(id)arg1;	// IMP=0x0000000000563377
- (id)_indexPathInCollectionView:(id)arg1 closestToPoint:(struct CGPoint)arg2 excludingIndexPath:(id)arg3;	// IMP=0x00000000005630a3
- (void)_endFeedbackInteraction;	// IMP=0x000000000056300e
- (void)_playFeedbackIfNeeded;	// IMP=0x0000000000562ecc
- (void)_beginFeedbackInteraction;	// IMP=0x0000000000562e34
- (void)finishInteractiveUpdate;	// IMP=0x0000000000562d88
- (void)updateWithAbsoluteProgress:(double)arg1;	// IMP=0x0000000000562c65
- (void)beginInteractiveUpdate;	// IMP=0x0000000000562c09
- (void)reloadSelectedIndexPathAnimated:(_Bool)arg1;	// IMP=0x0000000000562b05
- (void)reloadIndexPath:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000562a29
- (void)toggleSelectedIndexPathAnimated:(_Bool)arg1;	// IMP=0x0000000000562a0a
- (void)toggleIndexPath:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000056295d
- (void)reloadData;	// IMP=0x0000000000562920
- (void)setSelectedIndexPath:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000005628af
- (_Bool)isMinibar;	// IMP=0x00000000005627e4
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000562720
- (void)layoutSubviews;	// IMP=0x0000000000562354
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000056226a
- (void)dealloc;	// IMP=0x00000000005621e8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000056218a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000056211b
- (void)_commonPUReviewScrubberInitialization;	// IMP=0x0000000000561de9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
