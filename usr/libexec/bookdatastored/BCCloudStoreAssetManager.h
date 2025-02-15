//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BCCloudDataManager, BCCloudDataSource, BCCloudDataSyncManager, BCCloudKitController, NSString;

@interface BCCloudStoreAssetManager : NSObject
{
    _Bool _enableCloudSync;	// 8 = 0x8
    BCCloudKitController *_cloudKitController;	// 16 = 0x10
    BCCloudDataSource *_storeAssetDataSource;	// 24 = 0x18
    BCCloudDataSyncManager *_syncManager;	// 32 = 0x20
    BCCloudDataManager *_dataManager;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000007a5c3
@property(retain, nonatomic) BCCloudDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) BCCloudDataSyncManager *syncManager; // @synthesize syncManager=_syncManager;
@property(retain, nonatomic) BCCloudDataSource *storeAssetDataSource; // @synthesize storeAssetDataSource=_storeAssetDataSource;
@property(nonatomic) __weak BCCloudKitController *cloudKitController; // @synthesize cloudKitController=_cloudKitController;
@property(nonatomic) _Bool enableCloudSync; // @synthesize enableCloudSync=_enableCloudSync;
- (void)getStoreItemChangesSince:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007a4a8
- (void)fetchStoreItemsIncludingDeleted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007a433
- (void)storeItemForStoreID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007a289
- (void)deleteStoreItemsWithStoreIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007a1cd
- (void)deleteStoreItemWithStoreID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007a111
- (void)updateSyncGenerationFromCloudData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007a021
- (void)removeStoreItemWithSaltedHashedRecordIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000079f1a
- (void)addStoreItems:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000079e2a
- (void)addStoreItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000079d41
- (void)dissociateCloudDataFromSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000079cd8
- (void)hasSaltChangedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000079c6f
- (id)entityName;	// IMP=0x0010000000079a14
- (void)syncManager:(id)arg1 failedRecordIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000798a4
- (void)syncManager:(id)arg1 resolveConflictsForRecords:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000079734
- (void)syncManager:(id)arg1 updateSyncGenerationFromCloudData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000794c1
- (void)syncManager:(id)arg1 removeCloudDataForIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000007925d
- (void)signalSyncToCKForSyncManager:(id)arg1;	// IMP=0x001000000007917f
- (void)syncManager:(id)arg1 startSyncToCKWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000790d3
- (id)initWithCloudDataSource:(id)arg1 cloudKitController:(id)arg2;	// IMP=0x0010000000078f3b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

