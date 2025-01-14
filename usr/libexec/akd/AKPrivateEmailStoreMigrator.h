//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AKSQLiteExecutor, NSString;

@interface AKPrivateEmailStoreMigrator
{
    AKSQLiteExecutor *_executor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000041c3b
- (void)_migrateToSchemaVersion5;	// IMP=0x0010000000041ab1
- (void)_migrateToSchemaVersion4;	// IMP=0x0010000000041917
- (void)_migrateToSchemaVersion3;	// IMP=0x0010000000041328
- (void);	// IMP=0x00100000000411c6
- (void)_buildSchemaVersion1;	// IMP=0x001000000004102c
- (void)migrateSchemaFromVersion:(unsigned long long)arg1;	// IMP=0x0010000000040ee8
- (unsigned long long)currentSchemaVersion;	// IMP=0x0010000000040edd
- (id)storeName;	// IMP=0x0010000000040ed0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

