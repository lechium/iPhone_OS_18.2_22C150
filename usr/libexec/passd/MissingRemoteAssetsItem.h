//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MissingRemoteAssetsItem
{
}

+ (id)_propertySettersForItem;	// IMP=0x0040000000078b9c
+ (id)_predicateForUniqueID:(id)arg1;	// IMP=0x0010000000078b79
+ (id)_predicateForMaximumRetriesCount:(unsigned long long)arg1;	// IMP=0x0010000000078b08
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0010000000078ad9
+ (id)databaseTable;	// IMP=0x0010000000078acc
+ (void)removeMissingRemoteAssetsItemForUniqueID:(id)arg1 inDataBase:(id)arg2;	// IMP=0x0010000000078956
+ (void)incrementDownloadRetriesCountForUniqueID:(id)arg1 inDataBase:(id)arg2;	// IMP=0x001000000007888c
+ (id)itemsInDataBase:(id)arg1 withMaximumDownloadRetriesCount:(unsigned long long)arg2;	// IMP=0x001000000007866b
+ (unsigned long long)itemsCountInDataBase:(id)arg1 withMaximumDownloadRetriesCount:(unsigned long long)arg2;	// IMP=0x00100000000785e7
+ (id)insertOrReplaceMissingRemoteAssetsItemForUniqueID:(id)arg1 inDataBase:(id)arg2;	// IMP=0x0010000000078571
- (id)initMissingRemoteAssetsItemWithUniqueID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00400000000789ef

@end
