//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKSQLiteTable.h"

@interface CKSQLiteKeyValueStore : CKSQLiteTable
{
}

+ (Class)entryClass;	// IMP=0x001000000012a2aa
+ (id)dbProperties;	// IMP=0x001000000012a29d
- (id)setUUIDValue:(id)arg1 forKey:(id)arg2 scope:(unsigned long long)arg3 scopeIdentifier:(id)arg4;	// IMP=0x000000000012bdae
- (id)UUIDValueForKey:(id)arg1 scope:(unsigned long long)arg2 scopeIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x000000000012bb96
- (id)setDateValue:(id)arg1 forKey:(id)arg2 scope:(unsigned long long)arg3 scopeIdentifier:(id)arg4;	// IMP=0x000000000012b948
- (id)dateValueForKey:(id)arg1 scope:(unsigned long long)arg2 scopeIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x000000000012b730
- (id)setDataValue:(id)arg1 forKey:(id)arg2 scope:(unsigned long long)arg3 scopeIdentifier:(id)arg4;	// IMP=0x000000000012b4e2
- (id)dataValueForKey:(id)arg1 scope:(unsigned long long)arg2 scopeIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x000000000012b2ca
- (id)setStringValue:(id)arg1 forKey:(id)arg2 scope:(unsigned long long)arg3 scopeIdentifier:(id)arg4;	// IMP=0x000000000012b07c
- (id)stringValueForKey:(id)arg1 scope:(unsigned long long)arg2 scopeIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x000000000012ae64
- (id)setNumberValue:(id)arg1 forKey:(id)arg2 scope:(unsigned long long)arg3 scopeIdentifier:(id)arg4;	// IMP=0x000000000012ac16
- (id)numberValueForKey:(id)arg1 scope:(unsigned long long)arg2 scopeIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x000000000012a9fe
- (id)wakeFromDatabase;	// IMP=0x000000000012a966
- (void)purgeOrphanedKeys;	// IMP=0x000000000012a8ce
- (void)purgeOrphanedTableKeys;	// IMP=0x000000000012a763
- (void)purgeOrphanedTableGroupKeys;	// IMP=0x000000000012a545
- (void)purgeKeyValuePropertiesForGroupName:(id)arg1 tableNames:(id)arg2;	// IMP=0x000000000012a451
- (void)purgeOrphanedKeyValuePropertiesWithScope:(unsigned long long)arg1 identifiersToKeep:(id)arg2;	// IMP=0x000000000012a386
- (void)deleteKeyValuePropertiesWithScope:(unsigned long long)arg1 identifiers:(id)arg2;	// IMP=0x000000000012a2bb

@end

