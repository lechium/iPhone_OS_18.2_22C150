//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSSet.h"

__attribute__((visibility("hidden")))
@interface __NSSetI : NSSet
{
    unsigned int _used:58;	// 8 = 0x8
    unsigned int _szidx:6;	// 15 = 0xf
    id _list[0];	// 16 = 0x10
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0060000000096d20
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0060000000095ead
- (void)dealloc;	// IMP=0x0000000000096e39
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000096e34
- (id)mutableCopy;	// IMP=0x0000000000096d2f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000096d2a
- (id)copy;	// IMP=0x0000000000096d25
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000967fd
- (void)getObjects:(id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000009660c
- (unsigned long long)countForObject:(id)arg1;	// IMP=0x00000000000964b1
- (_Bool)containsObject:(id)arg1;	// IMP=0x000000000009635b
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000009616c
- (double)clumpingInterestingThreshold;	// IMP=0x00000000000960fc
- (double)clumpingFactor;	// IMP=0x0000000000095eb0
- (id)objectEnumerator;	// IMP=0x0000000000095e77
- (id)member:(id)arg1;	// IMP=0x0000000000095cec
- (unsigned long long)count;	// IMP=0x0000000000095cd6

@end

