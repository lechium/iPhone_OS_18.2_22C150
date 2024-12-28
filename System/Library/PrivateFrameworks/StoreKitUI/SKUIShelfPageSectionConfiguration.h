//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKViewElementStyle, SKUIShelfLayoutData, SKUIStorePageSectionContext, SKUIViewElementLayoutContext, UICollectionView, UIColor;
@protocol SKUIShelfPageSectionConfigurationDataSource, UICollectionViewDataSource, UICollectionViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIShelfPageSectionConfiguration : NSObject
{
    long long _lockupType;	// 8 = 0x8
    UICollectionView *_shelfCollectionView;	// 16 = 0x10
    _Bool _needsShelfCollectionViewReload;	// 24 = 0x18
    _Bool _needsShelfCollectionViewLayout;	// 25 = 0x19
    _Bool _rendersWithParallax;	// 26 = 0x1a
    _Bool _rendersWithPerspective;	// 27 = 0x1b
    _Bool _topSection;	// 28 = 0x1c
    _Bool _wantsZoomingShelfLayout;	// 29 = 0x1d
    SKUIViewElementLayoutContext *_cellLayoutContext;	// 32 = 0x20
    id <SKUIShelfPageSectionConfigurationDataSource> _dataSource;	// 40 = 0x28
    SKUIStorePageSectionContext *_pageSectionContext;	// 48 = 0x30
    long long _sectionIndex;	// 56 = 0x38
    UIColor *_shelfCollectionViewBackgroundColor;	// 64 = 0x40
    id <UICollectionViewDataSource> _shelfCollectionViewDataSource;	// 72 = 0x48
    id <UICollectionViewDelegate> _shelfCollectionViewDelegate;	// 80 = 0x50
    SKUIShelfLayoutData *_shelfLayoutData;	// 88 = 0x58
    IKViewElementStyle *_shelfViewElementStyle;	// 96 = 0x60
    double _zoomingShelfLayoutFocusedItemHorizontalCenterOffset;	// 104 = 0x68
    double _zoomingShelfLayoutInterItemSpacing;	// 112 = 0x70
    double _zoomingShelfLayoutItemWidth;	// 120 = 0x78
    double _zoomingShelfLayoutScaledItemWidth;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000003ad18b
@property(readonly, nonatomic) double zoomingShelfLayoutScaledItemWidth; // @synthesize zoomingShelfLayoutScaledItemWidth=_zoomingShelfLayoutScaledItemWidth;
@property(readonly, nonatomic) double zoomingShelfLayoutItemWidth; // @synthesize zoomingShelfLayoutItemWidth=_zoomingShelfLayoutItemWidth;
@property(readonly, nonatomic) double zoomingShelfLayoutInterItemSpacing; // @synthesize zoomingShelfLayoutInterItemSpacing=_zoomingShelfLayoutInterItemSpacing;
@property(readonly, nonatomic) double zoomingShelfLayoutFocusedItemHorizontalCenterOffset; // @synthesize zoomingShelfLayoutFocusedItemHorizontalCenterOffset=_zoomingShelfLayoutFocusedItemHorizontalCenterOffset;
@property(readonly, nonatomic) _Bool wantsZoomingShelfLayout; // @synthesize wantsZoomingShelfLayout=_wantsZoomingShelfLayout;
@property(nonatomic, getter=isTopSection) _Bool topSection; // @synthesize topSection=_topSection;
@property(retain, nonatomic) IKViewElementStyle *shelfViewElementStyle; // @synthesize shelfViewElementStyle=_shelfViewElementStyle;
@property(readonly, nonatomic) SKUIShelfLayoutData *shelfLayoutData; // @synthesize shelfLayoutData=_shelfLayoutData;
@property(nonatomic) id <UICollectionViewDelegate> shelfCollectionViewDelegate; // @synthesize shelfCollectionViewDelegate=_shelfCollectionViewDelegate;
@property(nonatomic) id <UICollectionViewDataSource> shelfCollectionViewDataSource; // @synthesize shelfCollectionViewDataSource=_shelfCollectionViewDataSource;
@property(retain, nonatomic) UIColor *shelfCollectionViewBackgroundColor; // @synthesize shelfCollectionViewBackgroundColor=_shelfCollectionViewBackgroundColor;
@property(nonatomic) long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) _Bool rendersWithPerspective; // @synthesize rendersWithPerspective=_rendersWithPerspective;
@property(nonatomic) _Bool rendersWithParallax; // @synthesize rendersWithParallax=_rendersWithParallax;
@property(retain, nonatomic) SKUIStorePageSectionContext *pageSectionContext; // @synthesize pageSectionContext=_pageSectionContext;
@property(nonatomic) _Bool needsShelfCollectionViewLayout; // @synthesize needsShelfCollectionViewLayout=_needsShelfCollectionViewLayout;
@property(nonatomic) _Bool needsShelfCollectionViewReload; // @synthesize needsShelfCollectionViewReload=_needsShelfCollectionViewReload;
@property(nonatomic) __weak id <SKUIShelfPageSectionConfigurationDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) SKUIViewElementLayoutContext *cellLayoutContext; // @synthesize cellLayoutContext=_cellLayoutContext;
- (void)_updateShelfLayoutDataContentInset;	// IMP=0x00000000003acf3e
- (id)_styledShelfCollectionViewLayoutForExistingLayout:(id)arg1;	// IMP=0x00000000003ace0d
- (id)_shelfItemViewElementAtIndex:(long long)arg1;	// IMP=0x00000000003acdb5
- (id)_reloadShelfLayoutDataWithNumberOfShelfItems:(long long)arg1;	// IMP=0x00000000003acb2b
- (double)_perspectiveHeightForContentSize:(double)arg1;	// IMP=0x00000000003acacf
- (Class)_lockupCellClassWithLockup:(id)arg1;	// IMP=0x00000000003aca94
- (id)_dequeueCellForLockup:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;	// IMP=0x00000000003ac99c
- (double)_columnSpacingForShelfItemViewElements:(id)arg1;	// IMP=0x00000000003ac916
- (Class)_cellClassForEffectiveShelfItemViewElement:(id)arg1;	// IMP=0x00000000003ac85a
- (_Bool)supportsDuplicateShelfItems;	// IMP=0x00000000003ac7f0
- (void)shelfItemsCollectionView:(id)arg1 willApplyLayoutAttributes:(id)arg2 forViewElement:(id)arg3 withItemIndex:(long long)arg4;	// IMP=0x00000000003ac5eb
- (struct UIEdgeInsets)sectionContentInsetAdjustedFromValue:(struct UIEdgeInsets)arg1 forShelfViewElement:(id)arg2 withSectionIndex:(long long)arg3;	// IMP=0x00000000003ac4d7
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000003ac4d1
- (void)requestCellLayoutForViewElement:(id)arg1 withColumnWidth:(double)arg2;	// IMP=0x00000000003ac400
- (void)reloadShelfLayoutDataForShelfViewElement:(id)arg1 withShelfItemViewElements:(id)arg2 requestCellLayouts:(_Bool)arg3 numberOfShelfItems:(long long)arg4;	// IMP=0x00000000003ac059
- (void)reloadLockupTypeForShelfViewElement:(id)arg1;	// IMP=0x00000000003abfdf
- (void)registerReusableClassesForCollectionView:(id)arg1;	// IMP=0x00000000003abf54
- (_Bool)prefetchResourcesForShelfItemViewElement:(id)arg1 reason:(long long)arg2;	// IMP=0x00000000003abe80
- (long long)numberOfSectionCells;	// IMP=0x00000000003abe32
- (unsigned long long)numberOfCellsForNumberOfShelfItems:(unsigned long long)arg1;	// IMP=0x00000000003abdc9
- (id)normalizedShelfItemIndexPathFromActualIndexPath:(id)arg1 numberOfShelfItems:(unsigned long long)arg2;	// IMP=0x00000000003abcda
- (long long)lockupTypeForLockup:(id)arg1;	// IMP=0x00000000003abc53
- (id)effectiveViewElementForShelfItemViewElement:(id)arg1;	// IMP=0x00000000003abbf0
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;	// IMP=0x00000000003abbea
- (id)cellForShelfItemViewElement:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000003ab7f3
- (struct CGSize)cellSizeForShelfViewElement:(id)arg1 indexPath:(id)arg2 numberOfShelfItems:(long long)arg3;	// IMP=0x00000000003ab6ff
- (id)cellForShelfViewElement:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000003ab525
- (id)backgroundColorForShelfViewElement:(id)arg1;	// IMP=0x00000000003ab447
- (id)actualIndexPathOfShelfItemClosestToVisibleBoundsForNormalizedIndexPath:(id)arg1 numberOfShelfItems:(unsigned long long)arg2;	// IMP=0x00000000003aafe8
@property(readonly, nonatomic) UICollectionView *shelfCollectionView;
@property(readonly, nonatomic) unsigned long long numberOfIterations;
@property(readonly, nonatomic) UICollectionView *existingShelfCollectionView;

@end
