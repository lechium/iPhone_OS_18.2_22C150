//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKSQLiteCacheTable.h>

@interface CKDRecordCacheTable : CKSQLiteCacheTable
{
}

+ (Class)entryClass;	// IMP=0x0010000000035622
+ (id)dbProperties;	// IMP=0x0010000000035615
- (void)clearAssetAuthTokensForRecord:(id)arg1 container:(id)arg2 scope:(long long)arg3;	// IMP=0x0000000000039e9b
- (void)clearAssetAuthTokensForRecordWithID:(id)arg1 container:(id)arg2 scope:(long long)arg3;	// IMP=0x0000000000039c9d
- (void)clearAllRecordsForZoneWithID:(id)arg1;	// IMP=0x0000000000039b49
- (void)clearAllRecordsInScope:(long long)arg1;	// IMP=0x0000000000039983
- (void)clearAllRecords;	// IMP=0x000000000003990e
- (void)deleteRecordWithID:(id)arg1 scope:(long long)arg2;	// IMP=0x00000000000395f5
- (id)etagForRecordID:(id)arg1 container:(id)arg2 requiredKeys:(id)arg3 scope:(long long)arg4;	// IMP=0x0000000000038d7e
- (void)addRecord:(id)arg1 container:(id)arg2 knownUserKeys:(id)arg3 scope:(long long)arg4;	// IMP=0x000000000003804a
- (unsigned long long)numberOfRecordsWithID:(id)arg1 container:(id)arg2;	// IMP=0x0000000000037de1
- (id)recordsWithIDs:(id)arg1 container:(id)arg2 requiredKeys:(id)arg3 scope:(long long)arg4;	// IMP=0x0000000000036e4b
- (id)recordWithID:(id)arg1 container:(id)arg2 requiredKeys:(id)arg3 scope:(long long)arg4;	// IMP=0x0000000000036cc2
- (id)_trimRecord:(id)arg1 toRequiredKeys:(id)arg2;	// IMP=0x0000000000036928
- (id)_recordWithID:(id)arg1 container:(id)arg2 requiredKeys:(id)arg3 scope:(long long)arg4;	// IMP=0x0000000000035f12
- (id)fetchCacheEntryRecordData:(id)arg1;	// IMP=0x0000000000035e87
- (_Bool)_cachedRecordHasValidAssets:(id)arg1 forRequiredKeys:(id)arg2;	// IMP=0x000000000003593f
- (_Bool)_cachedRecordKnownUserKeyData:(id)arg1 satisfiesRequiredKeys:(id)arg2;	// IMP=0x000000000003576c
- (id)_dsidForAccount:(id)arg1;	// IMP=0x00000000000356ff
- (id)init;	// IMP=0x0000000000035633

@end

