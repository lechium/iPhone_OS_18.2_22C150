//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOMapDataSubscriptionManager, NSArray, NSString, UICollectionViewDiffableDataSource;
@protocol OfflineMapsManagementExpiredDataSourceDelegate;

@interface OfflineMapsManagementExpiredDataSource
{
    NSArray *_expiredSubscriptions;	// 8 = 0x8
    id <OfflineMapsManagementExpiredDataSourceDelegate> _offlineDelegate;	// 16 = 0x10
    GEOMapDataSubscriptionManager *_subscriptionManager;	// 24 = 0x18
    UICollectionViewDiffableDataSource *_diffableDataSource;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000006c8544
@property(retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(retain, nonatomic) GEOMapDataSubscriptionManager *subscriptionManager; // @synthesize subscriptionManager=_subscriptionManager;
@property(nonatomic) __weak id <OfflineMapsManagementExpiredDataSourceDelegate> offlineDelegate; // @synthesize offlineDelegate=_offlineDelegate;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x00100000006c8412
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00100000006c82e1
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x00100000006c8248
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x00100000006c81af
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00100000006c7ef6
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 itemIdentifier:(id)arg3;	// IMP=0x00100000006c7a50
- (void)subscriptionInfosDidChange:(id)arg1;	// IMP=0x00100000006c7a39
- (void)_updateContentAnimated:(_Bool)arg1;	// IMP=0x00100000006c7910
- (void)_fetchExpiredSubscriptionsAnimated:(_Bool)arg1;	// IMP=0x00100000006c75ef
- (_Bool)_canItemIdentifierBeSelected:(id)arg1;	// IMP=0x00100000006c7512
- (void)_restoreSubscription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000006c71d1
- (id)swipeActionsConfigurationForIndexPath:(id)arg1;	// IMP=0x00100000006c6932
- (void)_deleteSelectedMapsAndPerformBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000006c65d3
- (_Bool)canRestoreSelectedMaps;	// IMP=0x00100000006c6318
- (_Bool)canRestoreAnyMaps;	// IMP=0x00100000006c60aa
- (void)restoreSelectedMaps;	// IMP=0x00100000006c5baf
- (void)clearSelectedMaps;	// IMP=0x00100000006c58cb
- (void)setActive:(_Bool)arg1;	// IMP=0x00100000006c583e
- (void)commonInit;	// IMP=0x00100000006c55da
- (id)initWithCollectionView:(id)arg1 updateLocation:(_Bool)arg2;	// IMP=0x00100000006c558e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
