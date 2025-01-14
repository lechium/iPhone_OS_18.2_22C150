//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOGuidesHomeResult, GuidesHomeAPIController, GuidesHomeHeaderCell, GuidesHomeLogicController, MISSING_TYPE, NSDiffableDataSourceSnapshot, NSString, UICollectionViewDiffableDataSource;
@protocol GuidesHomeAnalytics, GuidesHomeRoutingDelegate><GuideHomeHeaderViewActionDelegate;

@interface GuidesHomeDataSource
{
    long long _currentState;	// 8 = 0x8
    MISSING_TYPE *_logicController;	// 16 = 0x10
    GEOGuidesHomeResult *_result;	// 24 = 0x18
    UICollectionViewDiffableDataSource *_dataSource;	// 32 = 0x20
    NSDiffableDataSourceSnapshot *_snapshot;	// 40 = 0x28
    id <GuidesHomeRoutingDelegate><GuideHomeHeaderViewActionDelegate> _routingDelegate;	// 48 = 0x30
    GuidesHomeAPIController *_apiController;	// 56 = 0x38
    id <GuidesHomeAnalytics> _analyticsManager;	// 64 = 0x40
    GuidesHomeHeaderCell *_headerCell;	// 72 = 0x48
    struct UIEdgeInsets _actualContentInsets;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000004e96df
@property(nonatomic) struct UIEdgeInsets actualContentInsets; // @synthesize actualContentInsets=_actualContentInsets;
@property(retain, nonatomic) GuidesHomeHeaderCell *headerCell; // @synthesize headerCell=_headerCell;
@property(nonatomic) __weak id <GuidesHomeAnalytics> analyticsManager; // @synthesize analyticsManager=_analyticsManager;
@property(retain, nonatomic) GuidesHomeAPIController *apiController; // @synthesize apiController=_apiController;
@property(nonatomic) __weak id <GuidesHomeRoutingDelegate><GuideHomeHeaderViewActionDelegate> routingDelegate; // @synthesize routingDelegate=_routingDelegate;
@property(retain, nonatomic) NSDiffableDataSourceSnapshot *snapshot; // @synthesize snapshot=_snapshot;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) GEOGuidesHomeResult *result; // @synthesize result=_result;
@property(retain, nonatomic) GuidesHomeLogicController *logicController; // @synthesize logicController=_logicController;
@property(readonly, nonatomic) long long currentState; // @synthesize currentState=_currentState;
- (void)didStartFetchingBatch;	// IMP=0x00100000004e9552
- (void)shouldConsumeBatch:(_Bool)arg1 fetchedBatch:(id)arg2;	// IMP=0x00100000004e9200
- (void)curatedCollectionSyncManagerDidUpdateCachedCollections:(id)arg1;	// IMP=0x00100000004e91fa
- (void)curatedCollectionSyncManagerDidUpdateSyncedCollections:(id)arg1;	// IMP=0x00100000004e8fc9
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00100000004e8f60
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00100000004e8a78
- (void)didRouteToConceptFilter:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00100000004e881e
- (unsigned long long)publishersListCountAtIndex:(unsigned long long)arg1;	// IMP=0x00100000004e87aa
- (unsigned long long)guidesListCountAtIndex:(unsigned long long)arg1;	// IMP=0x00100000004e8736
- (id)featuredGuideViewModel;	// IMP=0x00100000004e86ba
- (id)filterViewModels;	// IMP=0x00100000004e848b
- (id)sectionAtIndex:(unsigned long long)arg1;	// IMP=0x00100000004e842c
- (void)cleanupGuidesHomeData;	// IMP=0x00100000004e836e
- (void)routeToCuratedCollectionAtIndex:(id)arg1 inSection:(id)arg2;	// IMP=0x00100000004e7e3f
- (long long)filterSectionIndex;	// IMP=0x00100000004e7cb8
- (void)updateContentInset;	// IMP=0x00100000004e790c
- (void)filterDataFetchFinished;	// IMP=0x00100000004e7696
- (void)filterDataFetchStarted;	// IMP=0x00100000004e765b
- (_Bool)isFetchingData;	// IMP=0x00100000004e7612
- (void)prepareSnapshot;	// IMP=0x00100000004e746f
- (void)initializeSupplementaryViewProvider;	// IMP=0x00100000004e6e20
- (void)initializeDataSource;	// IMP=0x00100000004e6625
- (void)didChangeContentYOffset:(double)arg1;	// IMP=0x00100000004e659f
- (void)displayGuidesHomeData;	// IMP=0x00100000004e64a4
- (void)refreshedGuideLocation;	// IMP=0x00100000004e6492
- (void)displayGuidesHomeByReloadingData;	// IMP=0x00100000004e6344
- (void)dealloc;	// IMP=0x00100000004e6306
- (id)initWithCollectionView:(id)arg1 result:(id)arg2 routingDelegate:(id)arg3 apiController:(id)arg4 analyticsManager:(id)arg5;	// IMP=0x00100000004e5d00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

