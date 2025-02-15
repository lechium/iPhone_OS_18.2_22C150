//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSManagedObjectID.h"

__attribute__((visibility("hidden")))
@interface _NSCoreManagedObjectID : NSManagedObjectID
{
}

+ (void)_storeDeallocated;	// IMP=0x008000000008a721
+ (id)_storeInfo1;	// IMP=0x008000000008a709
+ (void)_setStoreInfo1:(id)arg1;	// IMP=0x008000000008a6f0
+ (void)setObjectStoreIdentifier:(id)arg1;	// IMP=0x008000000008a69d
+ (id)managedObjectIDFromURIRepresentation:(id)arg1;	// IMP=0x008000000008a4c4
+ (id)managedObjectIDFromUTF8String:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x008000000008a375
+ (void)_release_1;	// IMP=0x008000000008a36b
+ (void)release;	// IMP=0x008000000008a365
+ (id)_retain_1;	// IMP=0x008000000008a34a
+ (id)retain;	// IMP=0x008000000008a341
+ (long long)version;	// IMP=0x008000000008a336
+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x008000000008a32e
+ (id)alloc;	// IMP=0x008000000008a322
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x008000000008a316
+ (unsigned int)allocateBatch:(id *)arg1 count:(unsigned int)arg2;	// IMP=0x008000000008a2e9
+ (_Bool)_usesTaggedPointers;	// IMP=0x008000000008a2e1
+ (Class)classWithStore:(id)arg1 andEntity:(id)arg2;	// IMP=0x0080000000089ddb
+ (void)initialize;	// IMP=0x0080000000089d63
+ (char *)generatedNameSuffix;	// IMP=0x0080000000089b20
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0080000000089b18
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008accd
- (unsigned long long)hash;	// IMP=0x000000000008acc3
- (id)URIRepresentation;	// IMP=0x000000000008a89b
- (unsigned long long)retainCount;	// IMP=0x000000000008a887
- (_Bool)_isPersistentStoreAlive;	// IMP=0x000000000008a85b
- (id)_storeInfo1;	// IMP=0x000000000008a83b
- (id)_storeIdentifier;	// IMP=0x000000000008a7cb
- (_Bool)isTemporaryID;	// IMP=0x000000000008a7c3
- (id)persistentStore;	// IMP=0x000000000008a7a3
- (id)entityName;	// IMP=0x000000000008a778
- (id)entity;	// IMP=0x000000000008a758
- (oneway void)release;	// IMP=0x000000000008a74b
- (id)retain;	// IMP=0x000000000008a73e

@end

