//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSUIntToIntDictionary : NSObject
{
    struct __CFDictionary *mDictionary;	// 8 = 0x8
}

- (struct __CFDictionary *)p_cfDictionary;	// IMP=0x0000000000280e44
- (void)enumerateKeysAndValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000280d9a
- (id)description;	// IMP=0x0000000000280ca4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000280c92
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000280c52
- (id)allValues;	// IMP=0x0000000000280ba1
- (id)allKeys;	// IMP=0x0000000000280af0
- (id)arrayOfBoxedKeys;	// IMP=0x00000000002809bc
- (void)applyFromIntToIntDictionary:(id)arg1;	// IMP=0x00000000002808e2
- (_Bool)containsKey:(long long)arg1;	// IMP=0x00000000002808ca
- (id)keyEnumerator;	// IMP=0x0000000000280894
- (void)removeAllInts;	// IMP=0x0000000000280886
- (void)setInt:(long long)arg1 forKey:(long long)arg2;	// IMP=0x0000000000280875
- (void)removeIntForKey:(long long)arg1;	// IMP=0x0000000000280864
- (long long)intForKey:(long long)arg1;	// IMP=0x0000000000280853
- (_Bool)intIsPresentForKey:(long long)arg1 outValue:(long long *)arg2;	// IMP=0x0000000000280839
- (unsigned long long)count;	// IMP=0x000000000028082b
- (void)dealloc;	// IMP=0x00000000002807f1
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000280730
- (id)init;	// IMP=0x000000000028071c

@end

