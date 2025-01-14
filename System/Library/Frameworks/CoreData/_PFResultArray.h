//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSKnownKeysDictionary, _PFWeakReference;

__attribute__((visibility("hidden")))
@interface _PFResultArray : NSArray
{
    int _cd_rc;	// 8 = 0x8
    unsigned int _count;	// 12 = 0xc
    unsigned int _resultType;	// 16 = 0x10
    CDStruct_2b54fbaf *_resultSet;	// 24 = 0x18
    _PFWeakReference *_weakRequestStore;	// 32 = 0x20
    NSKnownKeysDictionary *_metadata;	// 40 = 0x28
}

+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x006000000002ba0b
+ (Class)classForKeyedUnarchiver;	// IMP=0x006000000002b9fa
+ (void)initialize;	// IMP=0x006000000002b9d8
- (unsigned long long)retainCount;	// IMP=0x000000000002c296
- (oneway void)release;	// IMP=0x000000000002c266
- (id)retain;	// IMP=0x000000000002c252
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002c24a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002c23f
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000002c09a
- (void)getObjects:(id *)arg1;	// IMP=0x000000000002bf8e
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000002bedc
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002bcff
- (_Bool)_setPurgeable:(_Bool)arg1;	// IMP=0x000000000002bce0
- (unsigned long long)count;	// IMP=0x000000000002bcba
- (void)dealloc;	// IMP=0x000000000002bc3a
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x000000000002bbb6
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;	// IMP=0x000000000002bb97
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x000000000002baf1
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x000000000002bad2
- (id)initWithObjects:(CDStruct_2b54fbaf *)arg1 count:(unsigned int)arg2 store:(id)arg3 metadata:(id)arg4;	// IMP=0x000000000002ba13
- (Class)classForCoder;	// IMP=0x000000000002b9e9

@end

