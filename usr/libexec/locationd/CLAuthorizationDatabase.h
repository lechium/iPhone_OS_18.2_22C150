//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

@interface CLAuthorizationDatabase
{
    NSMutableDictionary *_systemServicesMap;	// 8 = 0x8
    NSMutableDictionary *_alternateIdentitiesMap;	// 16 = 0x10
}

+ (_Bool)keyPath:(id)arg1 sharesAuthWithKeyPath:(id)arg2;	// IMP=0x0040000000cfa17c
+ (id)authorizationDatabaseWithFilename:(id)arg1 withDataProtectionClass:(int)arg2;	// IMP=0x0010000000cf9e86
@property(retain, nonatomic) NSMutableDictionary *alternateIdentitiesMap; // @synthesize alternateIdentitiesMap=_alternateIdentitiesMap;
@property(retain, nonatomic) NSMutableDictionary *systemServicesMap; // @synthesize systemServicesMap=_systemServicesMap;
- (id)getStateSummary;	// IMP=0x0010000000d0436f
- (void)_internalMigrationRegisterAllClients;	// IMP=0x0010000000d040fe
- (void)_internalMigrationClearUnknownKeys;	// IMP=0x0010000000d03ae3
- (void)_internalMigrationLegacyKeys;	// IMP=0x0010000000d02d0c
- (void)_cacheAlternativeIdentities;	// IMP=0x0010000000d029d4
- (void)_cacheSystemServicesMap;	// IMP=0x0010000000d025e2
- (_Bool)_isBundlePathReachable:(id)arg1;	// IMP=0x0010000000d025a9
- (_Bool)_CLCommonIsBundleSystemService:(id)arg1;	// IMP=0x0010000000d02596
- (id)_getDefaultDeniedSystemServices;	// IMP=0x0010000000d0258c
- (void)_setupSystemServiceDictionaries;	// IMP=0x0010000000d003a6
- (void)_setUpDefaultDeniedSystemServices;	// IMP=0x0010000000d00086
- (void)_deriveAndCacheSystemServicesMap;	// IMP=0x0010000000d0005f
- (void)performFullSystemServiceSetup;	// IMP=0x0010000000cffea9
- (_Bool)isKeyPathRegisteredSystemService:(id)arg1;	// IMP=0x0010000000cffd9c
- (_Bool)isBundlePathRegisteredSystemService:(id)arg1;	// IMP=0x0010000000cffd5e
- (void)removeUser:(id)arg1;	// IMP=0x0010000000cffa4e
- (id)allUsers;	// IMP=0x0010000000cff6e6
- (id)getUsersODUUIDs;	// IMP=0x0010000000cff6de
- (void)removeValueForKey:(id)arg1 atKeyPath:(id)arg2;	// IMP=0x0010000000cff681
- (void)_setValue:(id)arg1 forKey:(id)arg2 atKeyPath:(id)arg3;	// IMP=0x0010000000cff5d9
- (id)_dictionaryForKey:(id)arg1 atKeyPath:(id)arg2;	// IMP=0x0010000000cff518
- (id)_valueForKey:(id)arg1 atKeyPath:(id)arg2;	// IMP=0x0010000000cff42f
- (void)setData:(id)arg1 forKey:(id)arg2 atKeyPath:(id)arg3;	// IMP=0x0010000000cff3e3
- (void)setDictionary:(id)arg1 forKey:(id)arg2 atKeyPath:(id)arg3;	// IMP=0x0010000000cff397
- (void)setArray:(id)arg1 forKey:(id)arg2 atKeyPath:(id)arg3;	// IMP=0x0010000000cff34b
- (void)setString:(id)arg1 forKey:(id)arg2 atKeyPath:(id)arg3;	// IMP=0x0010000000cff339
- (void)setDouble:(double)arg1 forKey:(id)arg2 atKeyPath:(id)arg3;	// IMP=0x0010000000cff2ed
- (void)setFloat:(float)arg1 forKey:(id)arg2 atKeyPath:(id)arg3;	// IMP=0x0010000000cff2a1
- (void)setLong:(long long)arg1 forKey:(id)arg2 atKeyPath:(id)arg3;	// IMP=0x0010000000cff255
- (void)setInt:(int)arg1 forKey:(id)arg2 atKeyPath:(id)arg3;	// IMP=0x0010000000cff209
- (void)setShort:(short)arg1 forKey:(id)arg2 atKeyPath:(id)arg3;	// IMP=0x0010000000cff1bd
- (void)setBool:(_Bool)arg1 forKey:(id)arg2 atKeyPath:(id)arg3;	// IMP=0x0010000000cff171
- (id)dataForKey:(id)arg1 atKeyPath:(id)arg2 defaultValue:(id)arg3;	// IMP=0x0010000000cff11f
- (id)dictionaryForKey:(id)arg1 atKeyPath:(id)arg2 defaultValue:(id)arg3;	// IMP=0x0010000000cff0cd
- (id)arrayForKey:(id)arg1 atKeyPath:(id)arg2 defaultValue:(id)arg3;	// IMP=0x0010000000cff07b
- (id)stringForKey:(id)arg1 atKeyPath:(id)arg2 defaultValue:(id)arg3;	// IMP=0x0010000000cfefe8
- (double)doubleForKey:(id)arg1 atKeyPath:(id)arg2 defaultValue:(double)arg3;	// IMP=0x0010000000cfef90
- (float)floatForKey:(id)arg1 atKeyPath:(id)arg2 defaultValue:(float)arg3;	// IMP=0x0010000000cfef38
- (long long)longForKey:(id)arg1 atKeyPath:(id)arg2 defaultValue:(long long)arg3;	// IMP=0x0010000000cfeee1
- (int)intForKey:(id)arg1 atKeyPath:(id)arg2 defaultValue:(int)arg3;	// IMP=0x0010000000cfee8b
- (short)shortForKey:(id)arg1 atKeyPath:(id)arg2 defaultValue:(short)arg3;	// IMP=0x0010000000cfee34
- (_Bool)boolForKey:(id)arg1 atKeyPath:(id)arg2 defaultValue:(_Bool)arg3;	// IMP=0x0010000000cfedde
- (_Bool)hasValueForKey:(id)arg1 atKeyPath:(id)arg2;	// IMP=0x0010000000cfeda8
- (void)iterateIdentitiesRelatedToKeyPath:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000cfeb5e
- (void)iterateAllAnchorKeyPathsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000cfe8f8
- (id)readonlyStoreAtKeyPath:(id)arg1;	// IMP=0x0010000000cfdfd9
- (_Bool)migrateDictionaryAtKeyPath:(id)arg1 toKeyPath:(id)arg2 forceMigrationOnAuthCollision:(_Bool)arg3;	// IMP=0x0010000000cfd983
- (id)registeredKeyPathForClientIdentifier:(id)arg1;	// IMP=0x0010000000cfd5d6
- (id)registerSubIdentity:(id)arg1 withType:(BOOL)arg2 forAnchorKeyPath:(id)arg3;	// IMP=0x0010000000cfd48a
- (id)registerClient:(id)arg1 fromAuthSync:(_Bool)arg2;	// IMP=0x0010000000cfc6a2
- (void)cacheInfoPlistKeysForClient:(id)arg1;	// IMP=0x0010000000cfc4a4
- (_Bool)expensivelyGetIdentifyingInformation:(struct client_identifying_information *)arg1 forClient:(id)arg2;	// IMP=0x0010000000cfbd76
- (unsigned long long)clientCount;	// IMP=0x0010000000cfbd4a
- (_Bool)_removeDictionaryAtKeyPath:(id)arg1 shouldLog:(_Bool)arg2;	// IMP=0x0010000000cfb251
- (_Bool)removeDictionaryAtKeyPath:(id)arg1;	// IMP=0x0010000000cfb23a
- (_Bool)setupDictionary:(id)arg1 atKeyPath:(id)arg2;	// IMP=0x0010000000cfacb7
- (_Bool)dictionaryExistsAtKeyPath:(id)arg1;	// IMP=0x0010000000cfa99c
- (id)primaryKeyPathForAuthLimitedKeyPath:(id)arg1;	// IMP=0x0010000000cfa919
- (_Bool)_isValidAuthLimitedKeyPath:(id)arg1;	// IMP=0x0010000000cfa89d
- (id)_ckpToAccessGivenKey:(id)arg1 andInputKeyPath:(id)arg2;	// IMP=0x0010000000cfa5ad
- (void)clear;	// IMP=0x0010000000cfa391
- (void)completeMigration;	// IMP=0x0010000000cfa363
- (void)setMigrationVersionNumber;	// IMP=0x0010000000cfa2fd
- (void)setInternalKeyMigrationComplete;	// IMP=0x0010000000cfa2c1
- (float)migrationVersionNumber;	// IMP=0x0010000000cfa280
- (id)initWithFilename:(id)arg1 withDataProtectionClass:(int)arg2;	// IMP=0x0010000000cf9eb8

@end

