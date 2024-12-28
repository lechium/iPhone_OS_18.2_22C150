//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CloudStoreRecord
{
}

+ (id)_predicateForCloudStoreZonePID:(long long)arg1 recordName:(id)arg2 recordType:(id)arg3;	// IMP=0x0040000000334b27
+ (id)_predicateForRecordType:(id)arg1;	// IMP=0x0010000000334b04
+ (id)_predicateForCloudStoreZonePID:(id)arg1;	// IMP=0x0010000000334ae1
+ (id)_predicateForRecordName:(id)arg1;	// IMP=0x0010000000334abe
+ (id)_predicateForRecord:(id)arg1 cloudStoreZonePID:(id)arg2;	// IMP=0x001000000033492a
+ (void)removeCloudStoreRecordsWithName:(id)arg1 recordType:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000033464c
+ (void)removeCloudStoreRecordID:(id)arg1 recordType:(id)arg2 cloudStoreZone:(id)arg3 inDatabase:(id)arg4;	// IMP=0x0010000000334509
+ (void)deleteEntitiesForCloudStoreZonePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000334448
+ (id)recordInDatabase:(id)arg1 withRecordName:(id)arg2 recordType:(id)arg3 cloudStoreZone:(id)arg4;	// IMP=0x0010000000334303
+ (id)anyInDatabase:(id)arg1 cloudStoreRecord:(id)arg2 cloudStoreZone:(id)arg3;	// IMP=0x00100000003341ef
+ (id)insertOrUpdateCloudStoreRecord:(id)arg1 forCloudStoreZone:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000333fc2
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0010000000333f93
+ (id)databaseTable;	// IMP=0x0010000000333f86
- (id)_commonDictionaryForCloudStoreRecord:(id)arg1;	// IMP=0x0040000000334ca4
- (id)record;	// IMP=0x0010000000334802
- (unsigned long long)hash;	// IMP=0x00100000003347b7
- (void)updateWithCloudStoreRecord:(id)arg1;	// IMP=0x00100000003341a3
- (id)initWithCloudStoreRecord:(id)arg1 forCloudStoreZone:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000033408c

@end
