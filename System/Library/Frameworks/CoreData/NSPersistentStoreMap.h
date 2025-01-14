//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMappedObjectStore, NSString;

__attribute__((visibility("hidden")))
@interface NSPersistentStoreMap : NSObject
{
    NSMappedObjectStore *_store;	// 8 = 0x8
    NSString *_databaseUUID;	// 16 = 0x10
    NSDictionary *_storeMetadata;	// 24 = 0x18
    unsigned long long _nextPK64;	// 32 = 0x20
    NSDictionary *_mappings;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x0060000000155fef
- (unsigned long long)nextPK64;	// IMP=0x00000000001562f7
- (id)retainedObjectIDsForRelationship:(id)arg1 forObjectID:(id)arg2;	// IMP=0x00000000001562c9
- (id)handleFetchRequest:(id)arg1;	// IMP=0x000000000015629b
- (void)updateObject:(id)arg1 objectIDMap:(id)arg2;	// IMP=0x0000000000156270
- (void)removeObject:(id)arg1 objectIDMap:(id)arg2;	// IMP=0x0000000000156245
- (void)addObject:(id)arg1 objectIDMap:(id)arg2;	// IMP=0x000000000015621a
- (id)dataForKey:(id)arg1;	// IMP=0x00000000001561ec
- (id)configurationName;	// IMP=0x00000000001561d6
- (void)dealloc;	// IMP=0x000000000015616e
- (id)initWithStore:(id)arg1;	// IMP=0x0000000000156000

@end

