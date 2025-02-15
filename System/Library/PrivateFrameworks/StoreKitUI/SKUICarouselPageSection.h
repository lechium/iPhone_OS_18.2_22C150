//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIStorePageSection.h"

@class NSArray, NSIndexPath, NSObject, NSString, SKUICarouselPageComponent, SKUIMissingItemLoader, SKUIProgressIndicatorViewElement, SKUIViewElementLayoutContext, UICollectionView;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SKUICarouselPageSection : SKUIStorePageSection
{
    UICollectionView *_carouselCollectionView;	// 8 = 0x8
    long long _cellCount;	// 16 = 0x10
    SKUIViewElementLayoutContext *_cellLayoutContext;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_cycleTimer;	// 32 = 0x20
    struct CGSize _itemSize;	// 40 = 0x28
    double _itemSpacing;	// 56 = 0x38
    SKUIMissingItemLoader *_missingItemLoader;	// 64 = 0x40
    NSArray *_modelObjects;	// 72 = 0x48
    _Bool _needsHeightCalculation;	// 80 = 0x50
    _Bool _needsReload;	// 81 = 0x51
    double _itemWidth;	// 88 = 0x58
    long long _progressIndicatorCellIndex;	// 96 = 0x60
    SKUIProgressIndicatorViewElement *_progressIndicatorElement;	// 104 = 0x68
    NSIndexPath *_reloadIndexPath;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000000fc4ef
- (void)_scrollToItemAtIndexPath:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000fc431
- (void)_startCycleTimerIfNecessary;	// IMP=0x00000000000fc23c
- (void)_reloadViewElementProperties;	// IMP=0x00000000000fc086
- (void)_reloadLegacySizing;	// IMP=0x00000000000fbfa7
- (id)_missingItemLoader;	// IMP=0x00000000000fbee0
- (void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2;	// IMP=0x00000000000fbe4e
- (double)_legacyItemSpacing;	// IMP=0x00000000000fbd35
- (struct CGSize)_legacyItemSize;	// IMP=0x00000000000fbb9a
- (_Bool)_isItemEnabledAtIndexPath:(id)arg1;	// IMP=0x00000000000fbaa5
- (_Bool)_indexPathIsProgressIndicator:(id)arg1;	// IMP=0x00000000000fba65
- (void)_fireCycleTimer;	// IMP=0x00000000000fb94b
- (id)_dequeueCellForViewElement:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;	// IMP=0x00000000000fb7d4
- (id)_dequeueCellForLockup:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;	// IMP=0x00000000000fb740
- (long long)_currentPageIndex;	// IMP=0x00000000000fb641
- (Class)_cellClassForViewElement:(id)arg1;	// IMP=0x00000000000fb59b
- (Class)_cellClassForLockup:(id)arg1;	// IMP=0x00000000000fb55d
- (id)_carouselCollectionView;	// IMP=0x00000000000fb293
- (void)_cancelCycleTimer;	// IMP=0x00000000000fb259
- (void)_addImpressionForIndex:(long long)arg1 toSession:(id)arg2;	// IMP=0x00000000000fb1cc
- (double)_actualContentWidth;	// IMP=0x00000000000fb171
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000000000fb137
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x00000000000fb026
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000000000faf11
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000000000fadeb
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000000000facf9
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000face4
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x00000000000faccf
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000faac5
- (void)collectionView:(id)arg1 carouselLayout:(id)arg2 willApplyLayoutAttributes:(id)arg3;	// IMP=0x00000000000fa8f5
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000000fa8e4
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000fa675
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;	// IMP=0x00000000000fa5fc
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;	// IMP=0x00000000000fa3d4
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000000f9df4
- (void)willAppearInContext:(id)arg1;	// IMP=0x00000000000f9506
- (struct UIEdgeInsets)sectionContentInset;	// IMP=0x00000000000f938b
- (void)prefetchResourcesWithReason:(long long)arg1;	// IMP=0x00000000000f90cd
- (long long)numberOfCells;	// IMP=0x00000000000f9088
- (void)invalidateCachedLayoutInformation;	// IMP=0x00000000000f8ff4
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;	// IMP=0x00000000000f8de7
- (long long)defaultItemPinningStyle;	// IMP=0x00000000000f8d9e
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000000f8c7f
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000000f8b70
- (struct CGSize)cellSizeForIndexPath:(id)arg1;	// IMP=0x00000000000f87e3
- (id)cellForIndexPath:(id)arg1;	// IMP=0x00000000000f8430
- (id)backgroundColorForIndexPath:(id)arg1;	// IMP=0x00000000000f8306
- (long long)applyUpdateType:(long long)arg1;	// IMP=0x00000000000f8168
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;	// IMP=0x00000000000f7ee5
- (void)dealloc;	// IMP=0x00000000000f7e53
- (id)initWithPageComponent:(id)arg1;	// IMP=0x00000000000f7da8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SKUICarouselPageComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end

