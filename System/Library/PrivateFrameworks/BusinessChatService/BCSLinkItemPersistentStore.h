//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface BCSLinkItemPersistentStore
{
    long long _schemaVersion;	// 8 = 0x8
}

+ (const char *)debugQueueName;	// IMP=0x00100000000124d6
- (void)deleteLinkItemsWithBundleID:(id)arg1;	// IMP=0x0000000000013a2f
- (void)deleteExpiredItemsOfType:(long long)arg1;	// IMP=0x00000000000138e7
- (void)deleteItemsOfType:(long long)arg1;	// IMP=0x00000000000138ad
- (void)deleteItemMatching:(id)arg1;	// IMP=0x00000000000137d4
- (void)updateItem:(id)arg1 withItemIdentifier:(id)arg2;	// IMP=0x0000000000012e4e
- (id)itemMatching:(id)arg1;	// IMP=0x0000000000012739
- (const char *)schema;	// IMP=0x000000000001272c
- (void)schemaVersionWillChangeForDatabase:(struct sqlite3 *)arg1 fromSchemaVersion:(long long)arg2 toSchemaVersion:(long long)arg3;	// IMP=0x00000000000125d2
- (long long)schemaVersion;	// IMP=0x00000000000125c1
- (id)databasePath;	// IMP=0x00000000000124e3
- (id)init;	// IMP=0x0000000000012487

@end
