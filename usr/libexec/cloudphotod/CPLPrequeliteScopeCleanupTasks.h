//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CPLPrequeliteScopeCleanupTasks
{
}

- (id)statusDictionary;	// IMP=0x00200000001cd27e
- (id)status;	// IMP=0x00100000001cd1d5
- (_Bool)hasCleanupTasks;	// IMP=0x00100000001cd161
- (_Bool)deleteCleanupTaskForScopeWithIndex:(long long)arg1 error:(id *)arg2;	// IMP=0x00100000001cd07b
- (long long)nextCleanupTaskScopeIndexOfType:(unsigned long long *)arg1;	// IMP=0x00100000001ccf6c
- (_Bool)addCleanupTaskForScopeWithIndex:(long long)arg1 scopeIdentifier:(id)arg2 scopeType:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x00100000001cce5a
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x00100000001cce3e
- (_Bool)initializeStorage;	// IMP=0x00100000001ccdec

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

