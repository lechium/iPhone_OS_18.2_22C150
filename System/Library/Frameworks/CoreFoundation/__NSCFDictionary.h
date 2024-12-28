//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMutableDictionary.h"

__attribute__((visibility("hidden")))
@interface __NSCFDictionary : NSMutableDictionary
{
    unsigned char _cfinfo[4];	// 8 = 0x8
    unsigned int _rc;	// 12 = 0xc
    unsigned int _bits[4];	// 16 = 0x10
    void *_callbacks;	// 32 = 0x20
    id *_values;	// 40 = 0x28
    id *_keys;	// 48 = 0x30
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0060000000056ffe
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0060000000056de2
- (unsigned long long)retainCount;	// IMP=0x0000000000057383
- (_Bool)_isDeallocating;	// IMP=0x0000000000057373
- (_Bool)_tryRetain;	// IMP=0x0000000000057362
- (oneway void)release;	// IMP=0x000000000005735d
- (id)retain;	// IMP=0x0000000000057358
- (id)description;	// IMP=0x0000000000057284
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000057245
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000571ed
- (void)removeAllObjects;	// IMP=0x0000000000057197
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000057143
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000057098
- (unsigned long long)hash;	// IMP=0x0000000000057093
- (Class)classForCoder;	// IMP=0x000000000005706d
- (void)setObservationInfo:(void *)arg1;	// IMP=0x0000000000057001
- (void)removeObjectForKey:(id)arg1;	// IMP=0x0000000000056f86
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000056ed7
- (id)keyEnumerator;	// IMP=0x0000000000056e7d
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000056e35
- (unsigned long long)count;	// IMP=0x0000000000056dfa

@end
