//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CPLPrequeliteCloudCache
{
    NSString *_perTransactionOtherScopeIdentifier;	// 8 = 0x8
    long long _perTransactionOtherScopeIndex;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000019ea4c
- (_Bool)popCloudScopedIdentifiersToCheck:(id *)arg1 otherScopeIndex:(long long)arg2 maxCount:(long long)arg3 deletedCount:(long long *)arg4 error:(id *)arg5;	// IMP=0x001000000019e2c4
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x001000000019e1b8
- (id)_relatedIdentifierForRecordWithIdentifier:(id)arg1;	// IMP=0x001000000019e01d
- (id)statusPerScopeIndex;	// IMP=0x001000000019dfbb
- (id)additionalStatusForScopeWithIndex:(long long)arg1 baseRecordCount:(long long)arg2;	// IMP=0x001000000019ddf4
- (id)statusDictionary;	// IMP=0x001000000019dbd9
- (id)status;	// IMP=0x001000000019d962
@property(readonly, nonatomic) unsigned long long countOfUnacknowledgesRecords;
- (unsigned long long)_countOfUnconfirmedRecords;	// IMP=0x001000000019d6a7
- (void)transactionDidFinish;	// IMP=0x001000000019d654
- (void)writeTransactionDidFail;	// IMP=0x001000000019d625
- (void)writeTransactionDidSucceed;	// IMP=0x001000000019d5f6
- (id)allRecordsIsFinal:(_Bool)arg1;	// IMP=0x001000000019d1c9
- (id)recordsOfClass:(Class)arg1 isFinal:(_Bool)arg2;	// IMP=0x001000000019cd58
- (_Bool)remapAllRecordsWithPreviousScopedIdentifier:(id)arg1 newScopedIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000019c8f8
- (_Bool)discardStagedChangesWithScopeFilter:(id)arg1 error:(id *)arg2;	// IMP=0x001000000019c6b5
- (_Bool)discardStagedChangesForScopeWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000019c437
- (_Bool)commitStagedChangesForScopeWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000019c1b9
- (_Bool)confirmAllRecordsWithError:(id *)arg1;	// IMP=0x001000000019c029
- (_Bool)ackownledgeRecordWithScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000019becd
- (unsigned long long)countOfRecordsAcknowledgedByClientWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;	// IMP=0x001000000019bbb0
- (id)recordsAcknowledgedByClientWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;	// IMP=0x001000000019b4f4
- (_Bool)hasRecordAcknowledgedByClientWithScopedIdentifier:(id)arg1;	// IMP=0x001000000019b206
- (id)recordAcknowledgedByClientWithScopedIdentifier:(id)arg1;	// IMP=0x001000000019ad21
- (_Bool)hasAnyRecordWithRelatedScopedIdentifier:(id)arg1;	// IMP=0x001000000019ab74
- (_Bool)hasRecordWithScopedIdentifier:(id)arg1;	// IMP=0x001000000019aa4b
- (id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1 isFinal:(_Bool)arg2;	// IMP=0x001000000019a748
- (id)recordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 isFinal:(_Bool)arg3;	// IMP=0x001000000019a736
- (id)recordsWithRelatedScopedIdentifier:(id)arg1 isFinal:(_Bool)arg2;	// IMP=0x001000000019a71f
- (id)_recordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 isFinal:(_Bool)arg3;	// IMP=0x001000000019a13b
- (id)recordWithScopedIdentifier:(id)arg1 isConfirmed:(_Bool *)arg2 isStaged:(_Bool *)arg3;	// IMP=0x0010000000199d8a
- (id)recordWithScopedIdentifier:(id)arg1 isFinal:(_Bool)arg2 isConfirmed:(_Bool *)arg3;	// IMP=0x0010000000199a13
- (_Bool)deleteRecordWithScopedIdentifier:(id)arg1 isFinal:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000019993a
- (_Bool)updateStagedRecord:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000199718
- (_Bool)updateFinalRecord:(id)arg1 confirmed:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000001994fb
- (_Bool)addRecord:(id)arg1 isFinal:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000019918b
- (_Bool)_deleteRecordWithScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000198f38
- (_Bool)_insertStagedRecordWithScopedIdentifier:(id)arg1 className:(id)arg2 relatedIdentifier:(id)arg3 secondaryIdentifier:(id)arg4 otherScopeIndex:(long long)arg5 serializedRecord:(id)arg6 error:(id *)arg7;	// IMP=0x0010000000198c5e
- (_Bool)_insertFinalRecordWithScopedIdentifier:(id)arg1 className:(id)arg2 relatedIdentifier:(id)arg3 secondaryIdentifier:(id)arg4 otherScopeIndex:(long long)arg5 serializedRecord:(id)arg6 confirmed:(_Bool)arg7 error:(id *)arg8;	// IMP=0x00100000001987e3
- (_Bool)_updateStagedRecordWithScopedIdentifer:(id)arg1 relatedIdentifier:(id)arg2 secondaryIdentifier:(id)arg3 otherScopeIndex:(long long)arg4 serializedRecord:(id)arg5 error:(id *)arg6;	// IMP=0x0010000000198529
- (_Bool)_updateFinalRecordWithScopedIdentifer:(id)arg1 relatedIdentifier:(id)arg2 secondaryIdentifier:(id)arg3 otherScopeIndex:(long long)arg4 serializedRecord:(id)arg5 confirmed:(_Bool)arg6 error:(id *)arg7;	// IMP=0x00100000001980de
- (void)_updateOtherScopeIdentifierInRecord:(id)arg1 otherScopeIndex:(long long)arg2;	// IMP=0x0010000000198038
- (long long)_otherScopeIndexForRecord:(id)arg1;	// IMP=0x0010000000197f44
- (_Bool)_hasRecordWithScopedIdentifier:(id)arg1 isStaged:(_Bool *)arg2;	// IMP=0x0010000000197d59
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x0010000000197054
- (_Bool)initializeStorage;	// IMP=0x0010000000196e2f
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x0010000000196e00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool shouldIncludeInStatus;
@property(readonly) Class superclass;

@end
