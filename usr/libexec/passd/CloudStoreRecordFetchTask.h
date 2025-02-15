//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CloudStoreRecordFetchTask
{
}

+ (id)_propertySettersForRecordFetchTask;	// IMP=0x00400000003b72d8
+ (id)_commonDictionaryForTask:(id)arg1;	// IMP=0x00100000003b6f91
+ (id)_tasksForQuery:(id)arg1;	// IMP=0x00100000003b6795
+ (void)deleteAllEntriesForCloudStoreZonePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003b66fc
+ (void)deleteAllEntriesForTransactionSourcePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003b6663
+ (void)removeRecordFetchTasks:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003b626d
+ (id)_predicateForPID:(id)arg1;	// IMP=0x00100000003b624a
+ (id)_predicateForCloudStoreZonePID:(long long)arg1;	// IMP=0x00100000003b61d9
+ (id)_predicateForTransactionSourcePID:(long long)arg1;	// IMP=0x00100000003b6168
+ (id)_recordFetchTaskWithCloudStoreZonePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003b60dc
+ (id)_recordFetchTaskWithTransactionSourcePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003b6050
+ (id)allRecordFetchTasksInDatabase:(id)arg1;	// IMP=0x00100000003b5f9c
+ (id)insertOrUpdateRecordFetchTask:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003b5b0f
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x00100000003b5a71
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000003b5a28
+ (id)databaseTable;	// IMP=0x00100000003b5a1b
- (void)updateRecordFetchTaskWithTask:(id)arg1;	// IMP=0x00400000003b5f22
- (id)initWithRecordFetchTaskWithTask:(id)arg1 transactionSourcePID:(long long)arg2 cloudStoreZonePID:(long long)arg3 inDatabase:(id)arg4;	// IMP=0x00100000003b5de7

@end

