//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSManagedObjectContext, NSPersistentStoreCoordinator, NSURL;

__attribute__((visibility("hidden")))
@interface ACDDatabaseMigrator : NSObject
{
    NSManagedObjectContext *_migrationContext;	// 8 = 0x8
    NSPersistentStoreCoordinator *_privateCoordinator;	// 16 = 0x10
    NSURL *_databaseURL;	// 24 = 0x18
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 32 = 0x20
    NSDictionary *_storeOptions;	// 40 = 0x28
}

+ (id)new;	// IMP=0x0000000000063264
- (void).cxx_destruct;	// IMP=0x00000000000658da
@property(readonly, copy, nonatomic) NSDictionary *storeOptions; // @synthesize storeOptions=_storeOptions;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(readonly, nonatomic) NSURL *databaseURL; // @synthesize databaseURL=_databaseURL;
- (void)_postProcessMigrationFromVersion:(long long)arg1 migrationData:(id)arg2;	// IMP=0x0000000000065310
- (long long)_versionForModel:(id)arg1;	// IMP=0x000000000006529f
- (id)_compatibleModelForStoreAtURL:(id)arg1;	// IMP=0x0000000000064dc0
- (id)_setUpContextForMigration;	// IMP=0x0000000000064ad2
- (id)_fetchAllAuthorizationEntitiesForModelVersion:(long long)arg1;	// IMP=0x00000000000648af
- (id)_fetchAllDataclassEntitles;	// IMP=0x00000000000646ac
- (void)_migrateNameAttributeOfDataclassEntities;	// IMP=0x0000000000064520
- (void)_migrateOptionsAttributeOfAuthorizatinEntitiesFromModelVersion:(long long)arg1;	// IMP=0x0000000000064182
- (void)_migrateAccessAuthorizationsToTCCFromModelVersion:(long long)arg1;	// IMP=0x0000000000063d68
- (_Bool)runReturningError:(id *)arg1;	// IMP=0x0000000000063371
- (id)initForDatabaseAtURL:(id)arg1 persistentStoreCoordinator:(id)arg2 storeOptions:(id)arg3;	// IMP=0x00000000000632a7
- (id)init;	// IMP=0x000000000006327c

@end

