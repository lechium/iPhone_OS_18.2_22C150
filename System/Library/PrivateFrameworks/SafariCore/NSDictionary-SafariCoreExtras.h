//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@class NSString;

@interface NSDictionary (SafariCoreExtras)
+ (id)safari_dictionaryWithObjectsInFastEnumerationCollection:(id)arg1 groupedUsingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0020000000043627
+ (id)safari_dictionaryWithJSONOrPropertyListData:(id)arg1;	// IMP=0x00200000000435b0
+ (id)safari_dictionaryWithJSONData:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0020000000043540
+ (id)safari_dictionaryWithPropertyListData:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00200000000434cd
+ (id)safari_dictionaryWithPropertyListData:(id)arg1;	// IMP=0x00200000000434b9
- (id)safari_valuesOfEntriesPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000043a45
- (id)safari_valueOfEntryPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000004393c
- (id)safari_mutableDeepCopy;	// IMP=0x00100000000438d0
- (_Bool)safari_containsEntryPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00100000000433db
- (_Bool)safari_containsObject:(id)arg1;	// IMP=0x00100000000432e0
@property(readonly, copy, nonatomic) NSDictionary *safari_dictionaryByRemovingNullObjects;
- (id)safari_diffWithDictionary:(id)arg1;	// IMP=0x0010000000043086
- (id)_safari_sortedTupleArray;	// IMP=0x0010000000042e19
- (id)safari_mapAndFilterKeysUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000042c8a
- (id)safari_mapAndFilterKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000042af8
- (id)safari_mapTableForKey:(id)arg1;	// IMP=0x0010000000042aa1
@property(readonly, copy, nonatomic) NSString *safari_jsonRepresentation;
@property(readonly, copy, nonatomic) NSDictionary *safari_dictionaryWithLowercaseKeys;
- (id)safari_setValuesFromDictionary:(id)arg1;	// IMP=0x00100000000425a0
- (id)safari_dictionaryByMergingWithDictionary:(id)arg1;	// IMP=0x0010000000042340
- (id)safari_userActivityForKey:(id)arg1;	// IMP=0x00100000000422e9
- (id)safari_setForKey:(id)arg1;	// IMP=0x0010000000042292
- (id)safari_UUIDForKey:(id)arg1;	// IMP=0x001000000004223b
- (id)safari_URLForKey:(id)arg1;	// IMP=0x00100000000421e4
- (id)safari_dictionaryForKey:(id)arg1;	// IMP=0x001000000004218d
- (id)safari_arrayContainingObjectsOfClass:(Class)arg1 forKey:(id)arg2;	// IMP=0x00100000000420c8
- (id)safari_mutableArrayForKey:(id)arg1;	// IMP=0x0010000000042071
- (id)safari_arrayForKey:(id)arg1;	// IMP=0x001000000004201a
- (id)safari_dateForKey:(id)arg1;	// IMP=0x0010000000041fc3
- (id)safari_dataForKey:(id)arg1;	// IMP=0x0010000000041f6c
- (id)safari_stringForKey:(id)arg1 returningNilIfEmpty:(_Bool)arg2;	// IMP=0x0010000000041f10
- (id)safari_numberForKey:(id)arg1;	// IMP=0x0010000000041eb9
- (id)safari_stringForKey:(id)arg1;	// IMP=0x0010000000041e62
- (_Bool)safari_boolForKey:(id)arg1;	// IMP=0x0010000000041e1e
@end
