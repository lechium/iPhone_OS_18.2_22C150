//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIStorePageSection.h"

@class NSArray, NSString, SUUIShelfPageComponent, SUUIShelfPageSectionConfiguration, SUUIShelfViewElement, SUUIViewElementLayoutContext, SUUIViewElementSlideshowController;
@protocol SUUIScrollViewDelegateObserver;

__attribute__((visibility("hidden")))
@interface SUUIShelfPageSection : SUUIStorePageSection
{
    SUUIViewElementLayoutContext *_cellLayoutContext;	// 8 = 0x8
    SUUIShelfPageSectionConfiguration *_configuration;	// 16 = 0x10
    long long _lastNeedsMoreCount;	// 24 = 0x18
    SUUIShelfViewElement *_shelfViewElement;	// 32 = 0x20
    SUUIViewElementSlideshowController *_slideshowController;	// 40 = 0x28
    NSArray *_viewElements;	// 48 = 0x30
    id <SUUIScrollViewDelegateObserver> _scrollViewDelegateObserver;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000002238c5
@property(nonatomic) __weak id <SUUIScrollViewDelegateObserver> scrollViewDelegateObserver; // @synthesize scrollViewDelegateObserver=_scrollViewDelegateObserver;
@property(readonly, nonatomic) SUUIShelfPageSectionConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)_reloadViewElementProperties;	// IMP=0x00000000002236cd
- (void)_performDefaultSelectActionForEffectiveViewElement:(id)arg1;	// IMP=0x000000000022352e
- (id)_normalizedShelfItemIndexPathFromActualIndexPath:(id)arg1;	// IMP=0x00000000002234aa
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0000000000223412
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000000002233a3
- (void)scrollViewWillBeginDecelerating:(id)arg1;	// IMP=0x0000000000223334
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000223267
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000000002231f8
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000223131
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000223086
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x0000000000222fc5
- (void)collectionView:(id)arg1 layout:(id)arg2 willApplyLayoutAttributes:(id)arg3;	// IMP=0x0000000000222ebb
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000222b7e
- (void)collectionView:(id)arg1 didConfirmButtonElement:(id)arg2 withClickInfo:(id)arg3 forItemAtIndexPath:(id)arg4;	// IMP=0x0000000000222a97
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000222a53
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000222924
- (void)viewElementSlideshowWillDismiss:(id)arg1;	// IMP=0x00000000002228bd
- (id)shelfPageSectionConfiguration:(id)arg1 viewElementAtIndex:(long long)arg2;	// IMP=0x000000000022289d
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;	// IMP=0x000000000022262e
- (void)_setContext:(id)arg1;	// IMP=0x00000000002225b8
- (void)willAppearInContext:(id)arg1;	// IMP=0x0000000000222386
- (_Bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000022207c
- (void)setTopSection:(_Bool)arg1;	// IMP=0x0000000000222028
- (struct UIEdgeInsets)sectionContentInset;	// IMP=0x0000000000221f81
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;	// IMP=0x0000000000221e07
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;	// IMP=0x0000000000221c96
- (void)prefetchResourcesWithReason:(long long)arg1;	// IMP=0x0000000000221b6f
- (long long)numberOfCells;	// IMP=0x0000000000221b52
- (void)invalidateCachedLayoutInformation;	// IMP=0x0000000000221ac9
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000221770
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;	// IMP=0x00000000002216a1
- (void)deselectItemsAnimated:(_Bool)arg1;	// IMP=0x00000000002214fe
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;	// IMP=0x0000000000221407
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;	// IMP=0x0000000000221310
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;	// IMP=0x000000000022129e
- (struct CGSize)cellSizeForIndexPath:(id)arg1;	// IMP=0x000000000022120a
- (id)cellForIndexPath:(id)arg1;	// IMP=0x00000000002211dc
- (id)backgroundColorForIndexPath:(id)arg1;	// IMP=0x0000000000221146
- (long long)applyUpdateType:(long long)arg1;	// IMP=0x00000000002210ab
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;	// IMP=0x0000000000220e3e
- (void)dealloc;	// IMP=0x0000000000220da9
- (id)initWithPageComponent:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000000220cc7
- (id)initWithPageComponent:(id)arg1;	// IMP=0x0000000000220cb3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SUUIShelfPageComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end
