//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MUPagingScrollContainerView, NSArray, NSString, UICollectionView, UICollectionViewDiffableDataSource;
@protocol MUPlacePhotoSliderDataSource, MUPlacePhotoSliderDelegate, MUScrollAnalyticActionObserving;

__attribute__((visibility("hidden")))
@interface MUPlacePhotoSliderView : UIView
{
    UICollectionView *_contentCollectionView;	// 8 = 0x8
    MUPagingScrollContainerView *_pagingScrollView;	// 16 = 0x10
    id <MUPlacePhotoSliderDataSource> _dataSource;	// 24 = 0x18
    UICollectionViewDiffableDataSource *_diffableDataSource;	// 32 = 0x20
    struct CGSize _photoTileSize;	// 40 = 0x28
    struct CGPoint _beginAnalyticsScrollingPoint;	// 56 = 0x38
    _Bool _hasHeaderView;	// 72 = 0x48
    NSArray *_photoModels;	// 80 = 0x50
    id <MUScrollAnalyticActionObserving> _analyticsDelegate;	// 88 = 0x58
    id <MUPlacePhotoSliderDelegate> _delegate;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000137f47
@property(nonatomic) __weak id <MUPlacePhotoSliderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MUScrollAnalyticActionObserving> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
- (void)layoutSubviews;	// IMP=0x0000000000137e45
- (struct CGSize)_sizeForAttribution;	// IMP=0x0000000000137dc5
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0000000000137d50
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0000000000137d1d
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000137a50
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000137926
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 itemIdentifier:(id)arg3;	// IMP=0x00000000001375f4
- (void)enumerateImageViewsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000013744e
- (void)scrollToViewAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001373b8
- (id)attributionViewForAttribution:(id)arg1;	// IMP=0x0000000000137346
- (void)updatePhotoSliderViews:(_Bool)arg1;	// IMP=0x0000000000137334
- (void)updateViewsWithAlpha:(double)arg1;	// IMP=0x00000000001371ea
- (void)displayPhotos:(_Bool)arg1;	// IMP=0x0000000000136e2f
- (void)displayPhotos;	// IMP=0x0000000000136e1b
- (id)imageViewForIndex:(unsigned long long)arg1;	// IMP=0x0000000000136d5d
- (void)_setupConstraints;	// IMP=0x0000000000136c1a
- (void)_setupSubviews;	// IMP=0x000000000013690b
- (id)initWithDataSource:(id)arg1 photoTileSize:(struct CGSize)arg2;	// IMP=0x000000000013682c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

