//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC17PromotedContentUI14CarouselAdView
{
    MISSING_TYPE *style;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *$__lazy_storage_$_backgroundCollectionController;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_backgroundCollectionView;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_blurView;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_headlineLabel;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_advertiserContainerView;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_advertiserLabel;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_collectionView;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_logoImageView;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_actionButton;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$__adSize;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_adSizeWidth;	// 0 = 0x0
    MISSING_TYPE *elements;	// 0 = 0x0
    MISSING_TYPE *dataRepresentation;	// 809632 = 0xc5aa0
    MISSING_TYPE *prefetchingIndexPaths;	// 3860 = 0xf14
    MISSING_TYPE *topMargin;	// 0 = 0x0
    MISSING_TYPE *advertiserViewHorizontalMargin;	// 0 = 0x0
    MISSING_TYPE *headlineHorizontalMargin;	// 0 = 0x0
    MISSING_TYPE *logoImageViewHeight;	// 0 = 0x0
    MISSING_TYPE *logoImageViewMaxWidth;	// 0 = 0x0
    MISSING_TYPE *logoImageViewLeadingMargin;	// 0 = 0x0
    MISSING_TYPE *collectionViewTopMargin;	// 0 = 0x0
    MISSING_TYPE *actionButtonHeight;	// 0 = 0x0
    MISSING_TYPE *actionButtonHorizontalMargin;	// 0 = 0x0
    MISSING_TYPE *actionButtonMinimumWidth;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000000b38a0
- (void)didSelectActionButtonWithSender:(id)arg1;	// IMP=0x00000000000b2790
- (void)didMoveToWindow;	// IMP=0x00000000000b2190
@property(nonatomic) struct CGRect frame;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;	// IMP=0x000000000003e6b0
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x000000000003ddc0
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000000003dd50
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000003dcf0
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000003d970
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000003d6d0
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000003d6c0
- (void)collectionView:(id)arg1 cancelPrefetchingForItemsAtIndexPaths:(id)arg2;	// IMP=0x000000000003f6c0
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;	// IMP=0x000000000003f690
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000000005dea0
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000c25a0
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000000c1b90

@end
