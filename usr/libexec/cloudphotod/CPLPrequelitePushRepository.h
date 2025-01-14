//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLExtractedBatch, CPLPrequeliteVariable, NSMutableDictionary, NSString;

@interface CPLPrequelitePushRepository
{
    NSMutableDictionary *_injectionPerChangeType;	// 8 = 0x8
    CPLPrequeliteVariable *_extractedBatchVar;	// 16 = 0x10
    _Bool _hasCachedExtractedBatch;	// 24 = 0x18
    CPLExtractedBatch *_cachedExtractedBatch;	// 32 = 0x20
    _Bool _shouldNotifyFlagsCountChanges;	// 40 = 0x28
    NSMutableDictionary *_batchStoragesPerPriority;	// 48 = 0x30
    _Bool _createIndexWithPriority;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000001c5631
- (void)writeTransactionDidFail;	// IMP=0x00100000001c55ca
- (void)writeTransactionDidSucceed;	// IMP=0x00100000001c54f8
- (_Bool)checkInBatchStorage:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001c543e
- (id)checkOutBatchStorageWithPriority:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00100000001c52fa
- (_Bool)acknowledgeContributorsUpdates:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001c4a97
- (id)contributorsUpdatesForScopeWithIdentifier:(id)arg1 maxCount:(unsigned long long)arg2;	// IMP=0x00100000001c46e6
- (_Bool)deleteSharingFlagsWithMaxCount:(unsigned long long)arg1 deletedCount:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x00100000001c45d6
- (id)scopedIdentifiersForChangesWithFlag:(long long)arg1 forScopeWithIdentifier:(id)arg2;	// IMP=0x00100000001c4387
- (id)countPerFlagsForScopeWithIdentifier:(id)arg1;	// IMP=0x00100000001c3d65
- (_Bool)getRelatedScopedIdentifier:(id *)arg1 forRecordWithScopedIdentifier:(id)arg2;	// IMP=0x00100000001c3a56
@property(readonly, nonatomic) _Bool isEmpty;
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 discardedUploadIdentifiers:(id *)arg4 error:(id *)arg5;	// IMP=0x00100000001c3640
- (id)statusPerScopeIndex;	// IMP=0x00100000001c2a43
- (id)statusDictionary;	// IMP=0x00100000001c25c1
- (id)status;	// IMP=0x00100000001c1f59
- (_Bool)hasAnyChangeWithRelatedScopedIdentifier:(id)arg1;	// IMP=0x00100000001c1d82
- (_Bool)hasChangesWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;	// IMP=0x00100000001c1c18
- (id)allChangesWithScopeIdentifier:(id)arg1;	// IMP=0x00100000001c1b9b
- (id)allChangesWithScopeIdentifier:(id)arg1 table:(id)arg2;	// IMP=0x00100000001c1985
- (id)allChangesWithClass:(Class)arg1 secondaryScopedIdentifier:(id)arg2 table:(id)arg3;	// IMP=0x00100000001c17f4
- (id)allChangesWithClass:(Class)arg1 relatedScopedIdentifier:(id)arg2;	// IMP=0x00100000001c1768
- (id)allChangesWithClass:(Class)arg1 relatedScopedIdentifier:(id)arg2 table:(id)arg3;	// IMP=0x00100000001c15d7
- (id)allNonDeletedChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 table:(id)arg3;	// IMP=0x00100000001c14f2
- (id)allChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 changeType:(unsigned long long)arg3 table:(id)arg4;	// IMP=0x00100000001c13d2
- (id)_injectionForChangeType:(unsigned long long)arg1;	// IMP=0x00100000001c12ad
- (id)allChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 trashed:(_Bool)arg3 table:(id)arg4;	// IMP=0x00100000001c11c8
- (id)_allChangesWithScopeIdentifier:(id)arg1 scopeIndex:(long long)arg2 ordered:(_Bool)arg3 table:(id)arg4 query:(id)arg5;	// IMP=0x00100000001c0f65
- (id)changeWithScopedIdentifier:(id)arg1;	// IMP=0x00100000001c0f18
- (_Bool)resetPriorityForScopeWithIdentifier:(id)arg1 maxCount:(unsigned long long)arg2 hasMore:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x00100000001c0d14
- (id)storedExtractedBatch;	// IMP=0x00100000001c0b6a
- (_Bool)storeExtractedBatch:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001c0a09
- (_Bool)deleteAllChangesWithError:(id *)arg1;	// IMP=0x00100000001c092f
- (_Bool)hasSomeChangeWithScopedIdentifier:(id)arg1;	// IMP=0x00100000001c07f4
- (_Bool)deleteChangeWithScopedIdentifier:(id)arg1 discardedUploadIdentifier:(id *)arg2 error:(id *)arg3;	// IMP=0x00100000001c0608
- (_Bool)deleteChangeWithScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001c0474
- (_Bool)reinjectChange:(id)arg1 dequeueOrder:(long long)arg2 discardedUploadIdentifier:(id *)arg3 overwrittenRecord:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x00100000001c02b7
- (_Bool)_overwriteChange:(id)arg1 pushContext:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001c01a0
- (_Bool)storeChange:(id)arg1 pushContext:(id)arg2 discardedUploadIdentifier:(id *)arg3 error:(id *)arg4;	// IMP=0x00100000001c0016
- (_Bool)_mergeChange:(id)arg1 overChange:(id)arg2 discardedUploadIdentifier:(id *)arg3 error:(id *)arg4;	// IMP=0x00100000001bf9a6
- (_Bool)_storeChange:(id)arg1 update:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000001bf400
- (id)_pqlChangeWithScopedIdentifier:(id)arg1;	// IMP=0x00100000001bf2a4
- (_Bool)hasChangesWithScopeFilter:(id)arg1;	// IMP=0x00100000001bf0c5
- (_Bool)hasChangesWithPriorityGreaterThanPriority:(unsigned long long)arg1 inScopeWithIdentifier:(id)arg2;	// IMP=0x00100000001befe5
- (_Bool)hasChangesWithPriorityLowerThanPriority:(unsigned long long)arg1 inScopeWithIdentifier:(id)arg2;	// IMP=0x00100000001bef05
- (unsigned long long)minimumPriorityForChangesInScopeWithIdentifier:(id)arg1;	// IMP=0x00100000001bedf7
- (_Bool)hasChangesInScopeWithIdentifier:(id)arg1;	// IMP=0x00100000001bed88
- (_Bool)hasChangesInScopeWithIdentifier:(id)arg1 table:(id)arg2;	// IMP=0x00100000001becb3
- (unsigned long long)countOfChangesInScopeWithIdentifier:(id)arg1;	// IMP=0x00100000001bebdc
- (long long)_scopeIndexForScopedIdentifier:(id)arg1;	// IMP=0x00100000001beb04
- (long long)_scopeIndexForScopeIdentifier:(id)arg1;	// IMP=0x00100000001bea2c
- (id)_scopedIdentifierForIdentifier:(id)arg1 scopeIndex:(long long)arg2;	// IMP=0x00100000001be93c
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x00100000001bdb86
- (_Bool)fixStorageAfterAnyVersionChange;	// IMP=0x00100000001bdb3d
- (_Bool)initializeStorage;	// IMP=0x00100000001bda64
- (_Bool)_createIndexesWithPriority:(_Bool)arg1;	// IMP=0x00100000001bd8f2
- (_Bool)createIndexWithName:(id)arg1 withDefinition:(id)arg2 unique:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00100000001bd7cc
- (_Bool)_createFlagsIndexes;	// IMP=0x00100000001bd759
- (_Bool)_createIndexForFlags:(long long)arg1;	// IMP=0x00100000001bd588
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x00100000001bd4a6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool shouldIncludeInStatus;
@property(readonly) Class superclass;

@end

