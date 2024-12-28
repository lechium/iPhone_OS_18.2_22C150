//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CPLPrequeliteRecordComputeStatePushQueue
{
}

- (unsigned long long)countOfComputeStates;	// IMP=0x00200000001ba0f3
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 discardedFileStorageIdentifiers:(id *)arg2 maxCount:(long long)arg3 deletedCount:(long long *)arg4 error:(id *)arg5;	// IMP=0x00100000001b9d42
- (id)status;	// IMP=0x00100000001b9cdf
- (_Bool)hasSomeComputeStateWithFileStorageIdentifier:(id)arg1;	// IMP=0x00100000001b9c00
- (_Bool)hasChangesInScopeWithIdentifier:(id)arg1;	// IMP=0x00100000001b9b91
- (_Bool)hasChangesInScopeWithIdentifier:(id)arg1 table:(id)arg2;	// IMP=0x00100000001b9abc
- (id)computeStatesToUploadWithScopeIdentifier:(id)arg1 localState:(unsigned long long)arg2 maximumCount:(unsigned long long)arg3;	// IMP=0x00100000001b9793
- (_Bool)removeComputeStateWithLocalScopedIdentifier:(id)arg1 version:(id)arg2 adjustmentFingerprint:(id)arg3 discardedFileStorageIdentifier:(id *)arg4 error:(id *)arg5;	// IMP=0x00100000001b93cc
- (_Bool)updateFileURLForComputeState:(id)arg1 discardedFileStorageIdentifier:(id *)arg2 hasUpdated:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x00100000001b8fe4
- (_Bool)updateLocalStateForComputeState:(id)arg1 newLocalState:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000001b8e4a
- (_Bool)addComputeState:(id)arg1 discardedFileStorageIdentifier:(id *)arg2 error:(id *)arg3;	// IMP=0x00100000001b8881
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x00100000001b85e6
- (_Bool)initializeStorage;	// IMP=0x00100000001b84e2

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
