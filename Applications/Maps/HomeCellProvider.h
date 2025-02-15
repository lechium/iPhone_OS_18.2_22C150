//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AutocompleteContext, CollectionsDataProvider, FeatureDiscoveryDataProvider, HomePhotoLookupDataProvider, HomeResultDataProvider, HomeSection, MISSING_TYPE, MarkedLocationDataProvider, NSArray, NSHashTable, NSMutableDictionary, NSObject, NSString, NSTimer, RAPReportMenuProvider, RecentsDataFilter, RecentsDataProvider, SharedTripsDataProvider, SuggestionsDataProvider, SuggestionsItemSource, UITableViewDiffableDataSource;
@protocol DeleteDelegate><MapsSuggestionsDeleteActionDelegate, HomeActionDelegate, HomeUpdateDelegate, OS_dispatch_queue, OfflineMapsFeatureDiscoveryActionDelegate, ParkedCarActionDelegate, PlaceCardActionDelegate, ShareDelegate, TransitPayActionDelegate, UGCPOIEnrichmentActionDelegate;

@interface HomeCellProvider
{
    FeatureDiscoveryDataProvider *_featureDiscoveryDataProvider;	// 8 = 0x8
    SuggestionsDataProvider *_suggestionsDataProvider;	// 16 = 0x10
    SharedTripsDataProvider *_sharedTripsDataProvider;	// 24 = 0x18
    HomePhotoLookupDataProvider *_photoLookupDataProvider;	// 32 = 0x20
    HomeResultDataProvider *_resultDataProvider;	// 40 = 0x28
    CollectionsDataProvider *_collectionsDataProvider;	// 48 = 0x30
    MarkedLocationDataProvider *_markedLocationDataProvider;	// 56 = 0x38
    RecentsDataProvider *_recentsDataProvider;	// 64 = 0x40
    RecentsDataFilter *_recentsDataFilter;	// 72 = 0x48
    RAPReportMenuProvider *_rapReportMenuProvider;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_recentsDataFilterQueue;	// 88 = 0x58
    NSArray *_homeSections;	// 96 = 0x60
    HomeSection *_suggestionsSection;	// 104 = 0x68
    HomeSection *_shortcutsSection;	// 112 = 0x70
    HomeSection *_curatedCollectionsSection;	// 120 = 0x78
    HomeSection *_collectionsSection;	// 128 = 0x80
    HomeSection *_recentsSection;	// 136 = 0x88
    HomeSection *_featureDiscoverySection;	// 144 = 0x90
    NSArray *_filteredRecents;	// 152 = 0x98
    AutocompleteContext *_analyticsContext;	// 160 = 0xa0
    NSMutableDictionary *_pendingDeletions;	// 168 = 0xa8
    _Bool _needsResetFavoritesScrollOffset;	// 176 = 0xb0
    _Bool _needsResetCuratedCollectionsScrollOffset;	// 177 = 0xb1
    NSTimer *_initialSuggestionsTimer;	// 184 = 0xb8
    UITableViewDiffableDataSource *_diffableDataSource;	// 192 = 0xc0
    NSHashTable *_orthogonalSectionCells;	// 200 = 0xc8
    _Bool _appliedInitialUpdate;	// 208 = 0xd0
    _Bool _appliedActiveUpdate;	// 209 = 0xd1
    _Bool _needsUpdate;	// 210 = 0xd2
    _Bool _animateNextUpdate;	// 211 = 0xd3
    MISSING_TYPE *_keyCommands;	// 216 = 0xd8
    long long _viewMode;	// 224 = 0xe0
    id <HomeActionDelegate> _homeActionDelegate;	// 232 = 0xe8
    id <HomeUpdateDelegate> _homeUpdateDelegate;	// 240 = 0xf0
    id <ShareDelegate> _shareDelegate;	// 248 = 0xf8
    id <DeleteDelegate><MapsSuggestionsDeleteActionDelegate> _deleteDelegate;	// 256 = 0x100
    id <PlaceCardActionDelegate> _placeCardActionDelegate;	// 264 = 0x108
    id <ParkedCarActionDelegate> _parkedCarActionDelegate;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x00200000008a63ea
@property(nonatomic) __weak id <ParkedCarActionDelegate> parkedCarActionDelegate; // @synthesize parkedCarActionDelegate=_parkedCarActionDelegate;
@property(nonatomic) __weak id <PlaceCardActionDelegate> placeCardActionDelegate; // @synthesize placeCardActionDelegate=_placeCardActionDelegate;
@property(nonatomic) __weak id <DeleteDelegate><MapsSuggestionsDeleteActionDelegate> deleteDelegate; // @synthesize deleteDelegate=_deleteDelegate;
@property(nonatomic) __weak id <ShareDelegate> shareDelegate; // @synthesize shareDelegate=_shareDelegate;
@property(nonatomic) __weak id <HomeUpdateDelegate> homeUpdateDelegate; // @synthesize homeUpdateDelegate=_homeUpdateDelegate;
@property(nonatomic) __weak id <HomeActionDelegate> homeActionDelegate; // @synthesize homeActionDelegate=_homeActionDelegate;
@property(readonly, nonatomic) long long viewMode; // @synthesize viewMode=_viewMode;
@property(readonly, nonatomic) NSArray *keyCommands; // @synthesize keyCommands=_keyCommands;
- (void)handleHomeSectionKeyCommand:(id)arg1;	// IMP=0x00100000008a61fb
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00100000008a6100
- (void)exploreGuidesButtonTapped;	// IMP=0x00100000008a60e7
- (void)collectionsCarouselDidScrollBackward;	// IMP=0x00100000008a60ce
- (void)collectionsCarouselDidScrollForward;	// IMP=0x00100000008a60b5
- (void)collectionsCarouselDidRouteToCollectionId:(id)arg1 atIndex:(long long)arg2 isSaved:(_Bool)arg3;	// IMP=0x00100000008a609c
- (void)routeToGuidesHomeFromExploreGuides:(id)arg1;	// IMP=0x00100000008a6006
- (void)routeToCuratedCollection:(id)arg1;	// IMP=0x00100000008a5f9b
- (void)proactiveCallToActionButtonViewTapped:(id)arg1;	// IMP=0x00100000008a5bb9
- (void)removeFavoriteShortcut:(id)arg1;	// IMP=0x00100000008a5bb3
- (void)editFavoriteShortcut:(id)arg1;	// IMP=0x00100000008a5bad
- (void)shortcutsRowTableViewCell:(id)arg1 openFavorite:(id)arg2;	// IMP=0x00100000008a5b42
- (void)shortcutsRowTableViewCell:(id)arg1 openShortcut:(id)arg2;	// IMP=0x00100000008a5ad7
- (void)shortcutsRowTableViewCellAddNewShortcut:(id)arg1;	// IMP=0x00100000008a5a84
- (id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00100000008a59a8
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;	// IMP=0x00100000008a5446
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x00100000008a5348
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x00100000008a5276
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00100000008a50c3
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00100000008a5078
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00100000008a5066
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00100000008a4a21
- (_Bool)_isTableViewHidden:(id)arg1;	// IMP=0x00100000008a4946
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00100000008a4905
- (void)_processPendingDeletions;	// IMP=0x00100000008a434f
- (void)_endDeletion:(id)arg1;	// IMP=0x00100000008a41d6
- (void)_beginDeletion:(id)arg1;	// IMP=0x00100000008a3395
- (void)editLocationAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000008a314b
- (void)shareRowAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000008a2ab1
- (void)deleteRowAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000008a28f7
- (void)_deleteSharedTripWithSummary:(id)arg1 atIndexPath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000008a25d7
- (void)_deleteCollection:(id)arg1 atIndexPath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000008a222b
- (id)editLocationContextualActionAtIndexPath:(id)arg1;	// IMP=0x00100000008a2085
- (id)shareContextualActionAtIndexPath:(id)arg1;	// IMP=0x00100000008a1f53
- (id)deleteContextualActionAtIndexPath:(id)arg1;	// IMP=0x00100000008a1e16
- (id)homeActionFooterViewUIMenuForRAP:(id)arg1;	// IMP=0x00100000008a1d6d
- (void)homeActionFooterViewDidTapTermsAndConditions:(id)arg1;	// IMP=0x00100000008a1d30
- (void)homeActionFooterViewDidTapReportAProblem:(id)arg1;	// IMP=0x00100000008a1cd0
- (void)homeActionFooterViewDidTapMarkMyLocation:(id)arg1;	// IMP=0x00100000008a1c80
- (void)homeActionFooterViewDidTapShareMyLocation:(id)arg1;	// IMP=0x00100000008a1c30
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x00100000008a18c2
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x00100000008a17fc
- (void)_sectionHeaderButtonTappedWithHomeSection:(id)arg1;	// IMP=0x00100000008a1742
- (void)_configureHeaderView:(id)arg1 inSection:(long long)arg2;	// IMP=0x00100000008a1351
- (void)_configureVisibleHeaders;	// IMP=0x00100000008a1130
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00100000008a0fa2
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00100000008a0d73
- (void)_updateOrthogonalSectionCells;	// IMP=0x00100000008a0c44
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 itemIdentifier:(id)arg3;	// IMP=0x001000000089f7f9
- (id)_snapshotWithOldHomeSections:(id)arg1 outDifference:(id *)arg2;	// IMP=0x001000000089f180
- (void)_captureCuratedCollectionAction:(int)arg1 withCollectionHandler:(id)arg2 verticalIndex:(unsigned long long)arg3;	// IMP=0x001000000089f0d2
- (void)_captureHeaderActionWithHomeSection:(id)arg1;	// IMP=0x001000000089f094
- (void)_captureSuggestionDeleteActionWithEntry:(id)arg1 behaviour:(long long)arg2;	// IMP=0x001000000089ef32
- (void)_captureDeleteActionWithObject:(id)arg1 indexPath:(id)arg2;	// IMP=0x001000000089ede3
- (void)_captureShareActionWithObject:(id)arg1 indexPath:(id)arg2;	// IMP=0x001000000089ec87
- (void)_captureTapActionWithObject:(id)arg1 indexPath:(id)arg2;	// IMP=0x001000000089e429
- (int)targetForDragAnalytics;	// IMP=0x001000000089e41e
- (void)sendNoTypingACAnalyticsForSelectedAtIndexPath:(id)arg1;	// IMP=0x001000000089e26d
- (id)objectsForAnalytics;	// IMP=0x001000000089e029
- (void)_updateRestaurantReservationAnalytics;	// IMP=0x001000000089dcf9
- (void)_addAnalyticsInfo;	// IMP=0x001000000089da52
- (id)analyticsContext;	// IMP=0x001000000089da3d
- (void)_applySnapshotUpdateAndAnimateCells:(_Bool)arg1 animateTableView:(_Bool)arg2;	// IMP=0x001000000089d3e0
- (void)updateIfNeeded;	// IMP=0x001000000089d32c
- (_Bool)_needsSnapshotUpdate;	// IMP=0x001000000089d2d6
- (void)_setNeedsSnapshotUpdateAnimated:(_Bool)arg1;	// IMP=0x001000000089cfde
- (void)_resetSnapshotUpdateState;	// IMP=0x001000000089cfc2
- (void)_initialSuggestionsTimerDidFire;	// IMP=0x001000000089cf6d
- (void)_updateInitialSuggestionsTimer;	// IMP=0x001000000089ced1
- (_Bool)_isLoading;	// IMP=0x001000000089ce69
- (id)_loadingDataProviders;	// IMP=0x001000000089cdd7
- (_Bool)_shouldShowHeaderForSection:(id)arg1;	// IMP=0x001000000089cd8c
- (_Bool)_isEmptySection:(id)arg1;	// IMP=0x001000000089cd0a
- (id)_allObjects;	// IMP=0x001000000089cbe7
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x001000000089cb23
- (id)_objectsInSectionAtIndexPath:(id)arg1;	// IMP=0x001000000089ca5d
- (id)_homeSectionAtIndexPath:(id)arg1;	// IMP=0x001000000089ca29
- (id)_homeSectionWithType:(long long)arg1;	// IMP=0x001000000089c9a1
- (long long)_dynamicIndexOfHomeSection:(id)arg1;	// IMP=0x001000000089c7c3
- (id)_homeSectionAtDynamicIndex:(long long)arg1;	// IMP=0x001000000089c63d
- (id)_homeSectionAtStaticIndex:(long long)arg1;	// IMP=0x001000000089c5d2
- (_Bool)_shouldDisplayObject:(id)arg1;	// IMP=0x001000000089c4a5
- (void)_buildSections;	// IMP=0x001000000089b60a
- (void)_getRecentsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000089b1b7
- (void)homeDataProvidingObjectDidUpdate:(id)arg1;	// IMP=0x001000000089af0f
- (id)newTraits;	// IMP=0x001000000089ae6c
- (id)_suggestionCellModelForMapsSuggestionsEntry:(id)arg1;	// IMP=0x001000000089addf
- (_Bool)_shouldShowEntryOfTypeVehicleSetup:(id)arg1;	// IMP=0x001000000089a5c6
- (id)_allDataProviders;	// IMP=0x001000000089a475
- (void)_createDataProviders;	// IMP=0x001000000089a14a
@property(nonatomic) __weak id <OfflineMapsFeatureDiscoveryActionDelegate> offlineMapsDiscoveryActionDelegate;
@property(nonatomic) __weak id <TransitPayActionDelegate> transitPayActionDelegate;
@property(nonatomic) __weak id <UGCPOIEnrichmentActionDelegate> poiEnrichmentActionDelegate;
- (void)resetScrollOffset;	// IMP=0x0010000000899e9d
@property(readonly, nonatomic) SuggestionsItemSource *suggestionsItemSource;
- (void)_fetchMissingImages;	// IMP=0x0010000000899c69
- (void)setActive:(_Bool)arg1;	// IMP=0x00100000008998fe
- (id)initWithTableView:(id)arg1 viewMode:(long long)arg2;	// IMP=0x00100000008993aa
@property(readonly, nonatomic) double contentHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

