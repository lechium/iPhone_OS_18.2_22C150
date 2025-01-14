//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMutableSet.h"

__attribute__((visibility("hidden")))
@interface __NSCFSet : NSMutableSet
{
    unsigned char _cfinfo[4];	// 8 = 0x8
    unsigned int _rc;	// 12 = 0xc
    unsigned int _bits[4];	// 16 = 0x10
    void *_callbacks;	// 32 = 0x20
    id *_values;	// 40 = 0x28
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00600000001abb2f
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00600000001ab988
- (void)getObjects:(id *)arg1;	// IMP=0x00000000001abeb4
- (void)removeAllObjects;	// IMP=0x00000000001abe5e
- (void)removeObject:(id)arg1;	// IMP=0x00000000001abde4
- (void)addObject:(id)arg1;	// IMP=0x00000000001abd6a
- (id)objectEnumerator;	// IMP=0x00000000001abd10
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000001abcbc
- (unsigned long long)_trueCount;	// IMP=0x00000000001abcb7
- (id)member:(id)arg1;	// IMP=0x00000000001abc2a
- (unsigned long long)count;	// IMP=0x00000000001abbef
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001abbb0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001abb58
- (Class)classForCoder;	// IMP=0x00000000001abb32
- (id)description;	// IMP=0x00000000001aba80
- (unsigned long long)retainCount;	// IMP=0x00000000001aba7b
- (_Bool)_isDeallocating;	// IMP=0x00000000001aba6b
- (_Bool)_tryRetain;	// IMP=0x00000000001aba5a
- (oneway void)release;	// IMP=0x00000000001aba55
- (id)retain;	// IMP=0x00000000001aba50
- (unsigned long long)hash;	// IMP=0x00000000001aba4b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ab9a0

@end

