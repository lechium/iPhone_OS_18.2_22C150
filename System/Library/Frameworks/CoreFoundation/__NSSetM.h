//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMutableSet.h"

__attribute__((visibility("hidden")))
@interface __NSSetM : NSMutableSet
{
    _Atomic struct __cow_state_t *cow;	// 8 = 0x8
    CDStruct_af6d7307 storage;	// 16 = 0x10
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x006000000014f65f
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x006000000014df79
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014fa97
- (id)mutableCopy;	// IMP=0x000000000014f9ca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014f98f
- (id)copy;	// IMP=0x000000000014f7de
- (void)dealloc;	// IMP=0x000000000014f664
- (void)removeObject:(id)arg1;	// IMP=0x000000000014f0f6
- (void)removeAllObjects;	// IMP=0x000000000014ef6f
- (void)getObjects:(id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000014ed4c
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000014eb65
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000014e93c
- (double)clumpingInterestingThreshold;	// IMP=0x000000000014e8ea
- (double)clumpingFactor;	// IMP=0x000000000014e6cd
- (unsigned long long)countForObject:(id)arg1;	// IMP=0x000000000014e589
- (_Bool)containsObject:(id)arg1;	// IMP=0x000000000014e448
- (void)addObject:(id)arg1;	// IMP=0x000000000014df7c
- (void)_mutate;	// IMP=0x000000000014dee8
- (id)objectEnumerator;	// IMP=0x000000000014de8e
- (id)member:(id)arg1;	// IMP=0x000000000014dd52
- (unsigned long long)count;	// IMP=0x000000000014dd0e

@end
