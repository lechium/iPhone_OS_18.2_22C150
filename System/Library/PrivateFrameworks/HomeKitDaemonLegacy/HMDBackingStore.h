//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class CKRecordID, HMDBackingStoreLocal, HMDHome, HMDHomeManager, HMDObjectLookup, NSString, NSUUID;
@protocol HMDBackingStoreDataSource, HMDBackingStoreObjectProtocol;

__attribute__((visibility("hidden")))
@interface HMDBackingStore : HMFObject
{
    _Bool _removedLegacyArchive;	// 8 = 0x8
    CKRecordID *_root;	// 16 = 0x10
    HMDBackingStoreLocal *_local;	// 24 = 0x18
    HMDHomeManager *_homeManager;	// 32 = 0x20
    HMDHome *_home;	// 40 = 0x28
    NSUUID *_uuid;	// 48 = 0x30
    HMDObjectLookup *_lookup;	// 56 = 0x38
    id <HMDBackingStoreObjectProtocol> _delegate;	// 64 = 0x40
    id <HMDBackingStoreDataSource> _dataSource;	// 72 = 0x48
}

+ (id)_saveToLocalStoreWithReason:(id)arg1 homeManager:(id)arg2 shouldIncrementGenerationCounter:(_Bool)arg3 backingStore:(id)arg4;	// IMP=0x0010000000a3fbbf
+ (void)saveToPersistentStoreWithReason:(id)arg1 homeManager:(id)arg2 shouldIncrementGenerationCounter:(_Bool)arg3 backingStore:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000a3faa1
+ (id)currentDevice;	// IMP=0x0010000000a3fa4a
+ (id)logCategory;	// IMP=0x0010000000a3fa1a
+ (id)resetBackingStore;	// IMP=0x0010000000a3f9c3
+ (id)flushBackingStore;	// IMP=0x0010000000a3f96c
+ (id)internalAllowedTypes;	// IMP=0x0010000000a3f93c
+ (id)deeplyProblematicObjectTypes;	// IMP=0x0010000000a3f90c
+ (id)allowedTypes;	// IMP=0x0010000000a3f8dc
+ (void)start;	// IMP=0x0010000000a3f8c3
- (void).cxx_destruct;	// IMP=0x0000000000a3bcec
@property(nonatomic) __weak id <HMDBackingStoreObjectProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HMDObjectLookup *lookup; // @synthesize lookup=_lookup;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) HMDBackingStoreLocal *local; // @synthesize local=_local;
@property(readonly, nonatomic) CKRecordID *root; // @synthesize root=_root;
@property(readonly) _Bool isAtomicSaveFeatureEnabled;
@property(readonly) NSString *activeControllerKeyUsername;
- (id)dataForPersistentStoreIncrementingGeneration:(_Bool)arg1 reason:(id)arg2;	// IMP=0x0000000000a3bad8
- (id)createHomeObjectLookupWithHome:(id)arg1;	// IMP=0x0000000000a3ba8b
- (id)backingStoreOperationQueue;	// IMP=0x0000000000a3ba34
- (id)localBackingStore;	// IMP=0x0000000000a3b9dd
- (id)createBackingStoreOperation;	// IMP=0x0000000000a3b9c4
- (id)createBackingStoreLogAddTransactionOperationWithTransaction:(id)arg1;	// IMP=0x0000000000a3b977
- (id)__fetchWithGroup:(id)arg1 uuids:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000a3b79a
- (void)submitBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a3b721
- (void)saveToPersistentStoreWithReason:(id)arg1 incrementGeneration:(_Bool)arg2;	// IMP=0x0000000000a3b29c
- (id)logIdentifier;	// IMP=0x0000000000a3b24c
@property(readonly, copy) NSString *description;
- (void)submit:(id)arg1;	// IMP=0x0000000000a3b198
- (void)deleteModelObjects:(id)arg1 destination:(unsigned long long)arg2;	// IMP=0x0000000000a3b189
- (void)updateModelObjects:(id)arg1 destination:(unsigned long long)arg2;	// IMP=0x0000000000a3b17a
- (void)commit:(id)arg1 run:(_Bool)arg2 save:(_Bool)arg3 archiveInline:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000a3ab6a
- (void)commit:(id)arg1 run:(_Bool)arg2 save:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000a3ab48
- (id)transaction:(id)arg1 options:(id)arg2;	// IMP=0x0000000000a3aac7
- (id)initWithUUID:(id)arg1;	// IMP=0x0000000000a3aaa4
- (id)initWithUUID:(id)arg1 home:(id)arg2;	// IMP=0x0000000000a3aa08
- (id)initWithUUID:(id)arg1 homeManager:(id)arg2;	// IMP=0x0000000000a3a9e7
- (id)initWithUUID:(id)arg1 homeManager:(id)arg2 home:(id)arg3 dataSource:(id)arg4;	// IMP=0x0000000000a3a7f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

