//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SharedAccountCloudStoreZone
{
}

+ (id)_propertySettersForSharedAccountCloudStoreZone;	// IMP=0x00400000000e6187
+ (id)_sharedAccountCloudStoreZonesWithQuery:(id)arg1;	// IMP=0x00100000000e5daf
+ (id)_sharedAccountCloudStoreZoneWithAccountIdentifier:(id)arg1 zoneName:(id)arg2 access:(unsigned long long)arg3 sharedAccountCloudStorePID:(long long)arg4 inDatabase:(id)arg5;	// IMP=0x00100000000e5b9d
+ (id)sharedAccountCloudStoreZonesForSharedAccountCloudStorePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000e5aea
+ (void)deleteEntitiesForSharedAccountCloudStore:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000e5a44
+ (id)_predicateForSharedAccountCloudStorePID:(long long)arg1;	// IMP=0x00100000000e594b
+ (id)_predicateForSharedAccountCloudStoreZoneWithAccountIdentifier:(id)arg1 zoneName:(id)arg2 access:(unsigned long long)arg3 sharedAccountCloudStorePID:(long long)arg4;	// IMP=0x00100000000e5783
+ (id)insertOrUpdateSharedAccountCloudStoreZones:(id)arg1 forSharedAccountCloudStorePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000e5383
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000000e5354
+ (id)databaseTable;	// IMP=0x00100000000e5347
- (id)_commonDictionaryForSharedAccountCloudStoreZone:(id)arg1 forSharedAccountCloudStorePID:(long long)arg2;	// IMP=0x00400000000e5f5d
- (id)sharedAccountCloudStoreZone;	// IMP=0x00100000000e5c40
- (void)updateSharedAccountCloudStoreZone:(id)arg1 forSharedAccountCloudStorePID:(long long)arg2;	// IMP=0x00100000000e5737
- (id)initWithSharedAccountCloudStoreZone:(id)arg1 forSharedAccountCloudStorePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000e56b4

@end
