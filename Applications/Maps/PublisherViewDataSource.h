//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CollectionsFilterMenu, MKPlaceCollectionsLogicController, MKPlaceCollectionsSizeController, NSArray, NSIndexPath, NSString, PublisherAPIController, PublisherHeaderViewActionManager, UICollectionViewDiffableDataSource;
@protocol FilterAnalyticsProvider, MKCollectionCarouselRoutingDelegate, PublisherAnalytics;

@interface PublisherViewDataSource
{
    id <FilterAnalyticsProvider> _filterAnalyticsProvider;	// 8 = 0x8
    NSArray *_placeCollections;	// 16 = 0x10
    NSArray *_placeCollectionViewModels;	// 24 = 0x18
    NSArray *_resultFilters;	// 32 = 0x20
    NSIndexPath *_selectedFilterIndexPath;	// 40 = 0x28
    UICollectionViewDiffableDataSource *_dataSource;	// 48 = 0x30
    CollectionsFilterMenu *_filterMenu;	// 56 = 0x38
    PublisherAPIController *_apiController;	// 64 = 0x40
    MKPlaceCollectionsLogicController *_logicController;	// 72 = 0x48
    MKPlaceCollectionsSizeController *_sizeController;	// 80 = 0x50
    id <MKCollectionCarouselRoutingDelegate> _routingDelegate;	// 88 = 0x58
    id <PublisherAnalytics> _analyticsManager;	// 96 = 0x60
    PublisherHeaderViewActionManager *_actionsManager;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0020000000ecfd44
@property(retain, nonatomic) PublisherHeaderViewActionManager *actionsManager; // @synthesize actionsManager=_actionsManager;
@property(retain, nonatomic) id <PublisherAnalytics> analyticsManager; // @synthesize analyticsManager=_analyticsManager;
@property(nonatomic) __weak id <MKCollectionCarouselRoutingDelegate> routingDelegate; // @synthesize routingDelegate=_routingDelegate;
@property(retain, nonatomic) MKPlaceCollectionsSizeController *sizeController; // @synthesize sizeController=_sizeController;
@property(retain, nonatomic) MKPlaceCollectionsLogicController *logicController; // @synthesize logicController=_logicController;
@property(retain, nonatomic) PublisherAPIController *apiController; // @synthesize apiController=_apiController;
@property(retain, nonatomic) CollectionsFilterMenu *filterMenu; // @synthesize filterMenu=_filterMenu;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSIndexPath *selectedFilterIndexPath; // @synthesize selectedFilterIndexPath=_selectedFilterIndexPath;
@property(retain, nonatomic) NSArray *resultFilters; // @synthesize resultFilters=_resultFilters;
@property(retain, nonatomic) NSArray *placeCollectionViewModels; // @synthesize placeCollectionViewModels=_placeCollectionViewModels;
@property(retain, nonatomic) NSArray *placeCollections; // @synthesize placeCollections=_placeCollections;
- (void)curatedCollectionSyncManagerDidUpdateCachedCollections:(id)arg1;	// IMP=0x0010000000ecfb7a
- (void)curatedCollectionSyncManagerDidUpdateSyncedCollections:(id)arg1;	// IMP=0x0010000000ecfb3d
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0010000000ecfa8a
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000ecf8aa
- (void)dismissedCollections;	// IMP=0x0010000000ecf86d
- (void)updateCollections:(id)arg1 usingBatchIdentifiers:(id)arg2;	// IMP=0x0010000000ecf782
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x0010000000ecf6e5
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x0010000000ecf648
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x0010000000ecf580
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0010000000ecf39a
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x0010000000ecf0b0
- (void)didRouteToAddressFilter:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0010000000eced34
- (void)didRouteToKeywordFilter:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0010000000ece9b8
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0010000000ece611
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 itemIdentifier:(id)arg3;	// IMP=0x0010000000ece463
- (void)filterDataFetchStarted;	// IMP=0x0010000000ece338
- (void)didTapTryAgainOnErrorView;	// IMP=0x0010000000ece1f4
- (void)clearPublisherData;	// IMP=0x0010000000ece1b7
- (void)displayCollections:(CDUnknownBlockType)arg1;	// IMP=0x0010000000ece01d
- (long long)presentationStyle;	// IMP=0x0010000000ece012
- (void)dealloc;	// IMP=0x0010000000ecdf9d
- (id)initWithCollectionView:(id)arg1 usingCuratedCollections:(id)arg2 usingPlaceCollectionIds:(id)arg3 withResultFilters:(id)arg4 withAPIController:(id)arg5 withCollectionRoutingDelegate:(id)arg6 usingAnalyticsManager:(id)arg7 usingPublisherActionsManager:(id)arg8;	// IMP=0x0010000000ecda4b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

