//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, NSDictionary;

@interface PDCloudStoreContainerManager : NSObject
{
    NSDictionary *_databaseByScope;	// 8 = 0x8
    NSDictionary *_databaseByIdentifier;	// 16 = 0x10
    CKContainer *_container;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000534437
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
- (id)description;	// IMP=0x0000000000534375
- (void)createContainerCacheIfNecessary;	// IMP=0x0010000000534343
- (void)clearCacheInContainerForZoneName:(id)arg1;	// IMP=0x0010000000534293
- (void)clearCacheInContainer;	// IMP=0x0010000000534261
- (void)containerDatabaseIdentifier:(id)arg1 didUpdateShare:(id)arg2 forZoneID:(id)arg3;	// IMP=0x00100000005341d3
- (void)containerDatabaseIdentifier:(id)arg1 didFinishInitialSync:(_Bool)arg2 forZoneID:(id)arg3;	// IMP=0x001000000053415b
- (void)containerDatabaseIdentifier:(id)arg1 didUpdateChangeToken:(id)arg2 fetchTimestamp:(id)arg3 forZoneID:(id)arg4;	// IMP=0x001000000053409d
- (void)containerDatabaseIdentifier:(id)arg1 didRemoveSubscriptionIdentifiers:(id)arg2;	// IMP=0x0010000000534025
- (void)containerDatabaseIdentifier:(id)arg1 didRemoveZoneIDs:(id)arg2;	// IMP=0x0010000000533fad
- (void)containerDatabaseIdentifier:(id)arg1 didCreateZones:(id)arg2;	// IMP=0x0010000000533f35
- (void)containerDatabaseIdentifier:(id)arg1 didCreateSubscriptions:(id)arg2;	// IMP=0x0010000000533ebd
- (id)fetchTimestampForCloudStoreStore:(id)arg1;	// IMP=0x0010000000533e37
- (_Bool)didFinishInitialSyncForCloudStoreZone:(id)arg1;	// IMP=0x0010000000533dbe
- (id)changeTokenForCloudStoreStore:(id)arg1;	// IMP=0x0010000000533d38
- (id)allPossibleZoneIDsInContainerDatabase:(id)arg1;	// IMP=0x0010000000533d23
- (id)cloudStoreZoneForZoneName:(id)arg1 inContainerDatabase:(id)arg2;	// IMP=0x0010000000533c79
- (id)cloudStoreZoneForZoneID:(id)arg1 inContainerDatabase:(id)arg2;	// IMP=0x0010000000533c64
- (id)subscriptionIdentifiersForDatabaseZoneIDs:(id)arg1;	// IMP=0x0010000000533ac8
- (id)subscriptionsForDatabaseZones:(id)arg1;	// IMP=0x001000000053392c
- (id)allPossibleSubscriptionIdentifiersByDatabaseIdentifier;	// IMP=0x00100000005337f7
- (id)allPossibleZoneIDsByDatabaseIdentifier;	// IMP=0x00100000005336c2
- (id)subscriptionsThatNeedToBeCreated;	// IMP=0x001000000053358d
- (id)zonesThatNeedToBeCreated;	// IMP=0x0010000000533458
- (id)validDatabases;	// IMP=0x00100000005333f1
- (id)validDatabaseIdentifiers;	// IMP=0x001000000053338a
- (id)cloudStoreZonesInContainerDatabase:(id)arg1;	// IMP=0x0010000000533375
- (_Bool)cloudStoreZoneExistsForZoneName:(id)arg1;	// IMP=0x0010000000533232
- (id)cloudStoreZonesFromZoneNames:(id)arg1 inContainerDatabase:(id)arg2;	// IMP=0x0010000000532fbb
- (id)cloudStoreZonesByDatabaseIdentifierForItemType:(unsigned long long)arg1 configuration:(id)arg2 action:(unsigned long long)arg3;	// IMP=0x0010000000532e43
- (id)cloudStoreZonesByDatabaseIdentifierForItemType:(unsigned long long)arg1 action:(unsigned long long)arg2;	// IMP=0x0010000000532cf8
- (id)cloudStoreZonesByDatabaseIdentifierForItem:(id)arg1 action:(unsigned long long)arg2;	// IMP=0x0010000000532b8e
- (id)databaseForCloudStoreZone:(id)arg1;	// IMP=0x0010000000532b5a
- (id)databaseForIdentifier:(id)arg1;	// IMP=0x0010000000532b44
- (id)databaseIdentifierForScope:(long long)arg1;	// IMP=0x0010000000532af4
- (id)databaseForScope:(long long)arg1;	// IMP=0x0010000000532a8d
- (id)containerName;	// IMP=0x0010000000532a77
- (id)initWithContainer:(id)arg1 validScopes:(id)arg2 cacheDataSource:(id)arg3 databaseContainerDataSource:(id)arg4;	// IMP=0x0010000000532612

@end
