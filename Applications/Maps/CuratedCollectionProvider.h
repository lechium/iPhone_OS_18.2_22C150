//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CuratedCollectionActionCellModel, CuratedCollectionDescriptionCellModel, CuratedCollectionMediaIntegrationViewModel, CuratedCollectionResolver, CuratedCollectionResolverInfo, CuratedCollectionRichTextParser, CuratedCollectionViewAnalyticsController, GEOPlaceCollection, NSArray, NSString, UITableViewDiffableDataSource, _TtC8MapsSync13MapsSyncStore;
@protocol CuratedCollectionDataSourceDelegate, TwoLinesContentViewModel;

@interface CuratedCollectionProvider
{
    _Bool _isApplyingSnapshot;	// 8 = 0x8
    NSArray *_keyCommands;	// 16 = 0x10
    NSArray *_storeSubscriptionTypes;	// 24 = 0x18
    GEOPlaceCollection *_curatedCollection;	// 32 = 0x20
    NSArray *_collectionItems;	// 40 = 0x28
    CuratedCollectionViewAnalyticsController *_analyticsController;	// 48 = 0x30
    double _subheaderTransitionFraction;	// 56 = 0x38
    CuratedCollectionActionCellModel *_actionModel;	// 64 = 0x40
    CuratedCollectionDescriptionCellModel *_descriptionModel;	// 72 = 0x48
    CuratedCollectionMediaIntegrationViewModel *_mediaIntegrationModel;	// 80 = 0x50
    CuratedCollectionResolverInfo *_resolverInfo;	// 88 = 0x58
    NSArray *_models;	// 96 = 0x60
    NSArray<TwoLinesContentViewModel> *_publisherModel;	// 104 = 0x68
    NSArray *_footerActionItems;	// 112 = 0x70
    CuratedCollectionResolver *_resolver;	// 120 = 0x78
    CuratedCollectionRichTextParser *_parser;	// 128 = 0x80
    UITableViewDiffableDataSource *_dataSource;	// 136 = 0x88
    _TtC8MapsSync13MapsSyncStore *_mapsSyncStore;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0020000000cbe4f5
@property(retain, nonatomic) _TtC8MapsSync13MapsSyncStore *mapsSyncStore; // @synthesize mapsSyncStore=_mapsSyncStore;
@property(retain, nonatomic) UITableViewDiffableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) CuratedCollectionRichTextParser *parser; // @synthesize parser=_parser;
@property(retain, nonatomic) CuratedCollectionResolver *resolver; // @synthesize resolver=_resolver;
@property(retain, nonatomic) NSArray *footerActionItems; // @synthesize footerActionItems=_footerActionItems;
@property(retain, nonatomic) NSArray<TwoLinesContentViewModel> *publisherModel; // @synthesize publisherModel=_publisherModel;
@property(retain, nonatomic) NSArray *models; // @synthesize models=_models;
@property(retain, nonatomic) CuratedCollectionResolverInfo *resolverInfo; // @synthesize resolverInfo=_resolverInfo;
@property(retain, nonatomic) CuratedCollectionMediaIntegrationViewModel *mediaIntegrationModel; // @synthesize mediaIntegrationModel=_mediaIntegrationModel;
@property(retain, nonatomic) CuratedCollectionDescriptionCellModel *descriptionModel; // @synthesize descriptionModel=_descriptionModel;
@property(retain, nonatomic) CuratedCollectionActionCellModel *actionModel; // @synthesize actionModel=_actionModel;
@property(nonatomic) double subheaderTransitionFraction; // @synthesize subheaderTransitionFraction=_subheaderTransitionFraction;
@property(readonly, nonatomic) _Bool isApplyingSnapshot; // @synthesize isApplyingSnapshot=_isApplyingSnapshot;
@property(retain, nonatomic) CuratedCollectionViewAnalyticsController *analyticsController; // @synthesize analyticsController=_analyticsController;
@property(retain, nonatomic) NSArray *collectionItems; // @synthesize collectionItems=_collectionItems;
@property(retain, nonatomic) GEOPlaceCollection *curatedCollection; // @synthesize curatedCollection=_curatedCollection;
@property(copy, nonatomic) NSArray *storeSubscriptionTypes; // @synthesize storeSubscriptionTypes=_storeSubscriptionTypes;
- (id)keyCommands;	// IMP=0x0010000000cbe29a
- (void)storeDidChangeWithTypes:(id)arg1;	// IMP=0x0010000000cbe239
- (void)_punchoutToViewModel:(id)arg1;	// IMP=0x0010000000cbe128
- (void)mediaIntegrationCell:(id)arg1 didSelectChildLink:(id)arg2;	// IMP=0x0010000000cbe085
- (void)mediaIntegrationCellDidDisplayChildLinks:(id)arg1;	// IMP=0x0010000000cbdf4a
- (void)_reconfigureSnapshot:(id)arg1 updatedModels:(id)arg2;	// IMP=0x0010000000cbde8b
- (void)collectionManager:(id)arg1 contentDidChange:(id)arg2;	// IMP=0x0010000000cbda3e
- (void)_updateLibraryStatusForModels;	// IMP=0x0010000000cbd76c
- (void)refresh;	// IMP=0x0010000000cbd6d8
- (void)cellExpansionOccured:(id)arg1;	// IMP=0x0010000000cbd564
- (void)cellPublisherLogoTapped:(id)arg1;	// IMP=0x0010000000cbd4d7
- (void)openAppClip:(id)arg1;	// IMP=0x0010000000cbd46c
- (void)willPunchOutToPublisherWebpageForPlaceCollectionItem:(id)arg1;	// IMP=0x0010000000cbd401
- (void)didSelectAddToUserCollection:(id)arg1 forMapItem:(id)arg2 sourceView:(id)arg3 onSaveCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000cbd337
- (void)didSelectAddOrRemoveFromLibrary:(_Bool)arg1 forModel:(id)arg2;	// IMP=0x0010000000cbd28c
- (void)_openURL:(id)arg1;	// IMP=0x0010000000cbd21a
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000cbcdbf
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0010000000cbcadf
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0010000000cbc928
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000cbc7f1
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000cbc7e0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 itemIdentifier:(id)arg3;	// IMP=0x0010000000cbbf7d
- (void)didFailToResolveCollectionWithError:(id)arg1 withFetchedCollection:(id)arg2;	// IMP=0x0010000000cbbd35
- (void)_updateSnapshotWithCollection:(id)arg1 resolverInfo:(id)arg2;	// IMP=0x0010000000cba9de
- (void)didResolveCollection:(id)arg1 resolverInfo:(id)arg2;	// IMP=0x0010000000cba7ea
- (void)_updateActionColorsInCell:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000cba7d0
- (void)_updateDescriptionColorsInCell:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000cba7b6
- (void)_updateSubheaderColors;	// IMP=0x0010000000cba5b7
@property(readonly, nonatomic) struct CGRect subheaderFrame;
- (void)_updateKeyCommandsAtIndexPath:(id)arg1;	// IMP=0x0010000000cba366
- (void)addToUserCollection:(id)arg1;	// IMP=0x0010000000cba297
- (void)startResolvingCollection;	// IMP=0x0010000000cba24c
- (void)_commonInitWithTableView:(id)arg1;	// IMP=0x0010000000cb9de8
- (void)dealloc;	// IMP=0x0010000000cb9d5f
- (id)initWithTableView:(id)arg1 fullyClientizedCuratedCollection:(id)arg2;	// IMP=0x0010000000cb9c95
- (id)initWithTableView:(id)arg1 curatedCollectionIdentifier:(id)arg2;	// IMP=0x0010000000cb9bcb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <CuratedCollectionDataSourceDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
