//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLPrequeliteSynthesizedVariable, NSString;

@interface CPLPrequeliteRevertRecords
{
    CPLPrequeliteSynthesizedVariable *_isEmptyVar;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001c9951
- (void)writeTransactionDidFail;	// IMP=0x00100000001c9908
- (id)status;	// IMP=0x00100000001c985f
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x00100000001c973b
- (_Bool)shouldRevertRecordWithLocalScopedIdentifier:(id)arg1;	// IMP=0x00100000001c95f3
- (_Bool)deleteRecordsToRevertWithLocalScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001c93ff
- (id)revertedPlaceholderRecordsEnumerator;	// IMP=0x00100000001c8eb3
- (_Bool)addRecordsToRevertWithLocalScopedIdentifier:(id)arg1 class:(Class)arg2 error:(id *)arg3;	// IMP=0x00100000001c8bbd
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x00100000001c8b6b
- (_Bool)initializeStorage;	// IMP=0x00100000001c8ac0
- (_Bool)_isEmpty;	// IMP=0x00100000001c8997
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x00100000001c88e7

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

