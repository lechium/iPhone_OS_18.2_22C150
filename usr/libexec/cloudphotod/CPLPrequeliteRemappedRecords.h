//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CPLPrequeliteRemappedRecords
{
}

- (id)remappedRecordEnumeratorInScope:(id)arg1;	// IMP=0x00200000001c848b
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x00100000001c837f
- (_Bool)isRecordWithScopedIdentifierRemapped:(id)arg1;	// IMP=0x00100000001c8256
- (id)scopedIdentifiersRemappedToScopedIdentifier:(id)arg1;	// IMP=0x00100000001c7ffb
- (id)realScopedIdentifierForRemappedScopedIdentifier:(id)arg1;	// IMP=0x00100000001c7e8b
- (_Bool)removeRemappedRecordWithScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001c7c4d
- (_Bool)addRemappedRecordWithScopedIdentifier:(id)arg1 realScopedIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001c7a69
- (_Bool)fixStorageAfterAnyVersionChange;	// IMP=0x00100000001c78c0
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x00100000001c777e
- (_Bool)initializeStorage;	// IMP=0x00100000001c76c5

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

