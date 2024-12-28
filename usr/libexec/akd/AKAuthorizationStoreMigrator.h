//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface AKAuthorizationStoreMigrator
{
}

- (void)_createV7Database;	// IMP=0x002000000002cf49
- (void)_createV6Database;	// IMP=0x001000000002cee7
- (void)_createV5Database;	// IMP=0x001000000002ce92
- (void)_createV4Database;	// IMP=0x001000000002ce4a
- (void)_createV3Database;	// IMP=0x001000000002ce0f
- (void)_createV2Database;	// IMP=0x001000000002cde1
- (void)_createV1Database;	// IMP=0x001000000002cdcf
- (void)_performInsertQueryIntoVersion:(unsigned long long)arg1;	// IMP=0x001000000002cd50
- (void)_upgradeToSchemaVersion8;	// IMP=0x001000000002cc35
- (void)_upgradeToSchemaVersion7;	// IMP=0x001000000002cb1a
- (void)_upgradeToSchemaVersion6;	// IMP=0x001000000002c9d0
- (void)_upgradeToSchemaVersion5;	// IMP=0x001000000002c8ae
- (void)_upgradeToSchemaVersion4;	// IMP=0x001000000002c78c
- (void)_upgradeToSchemaVersion3;	// IMP=0x001000000002c69b
- (void)_upgradeToSchemaVersion2;	// IMP=0x001000000002c578
- (void)_buildSchemaVersion1;	// IMP=0x001000000002c46c
- (void)migrateSchemaFromVersion:(unsigned long long)arg1;	// IMP=0x001000000002c2e8
- (unsigned long long)currentSchemaVersion;	// IMP=0x001000000002c2dd
- (id)storeName;	// IMP=0x001000000002c2d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
