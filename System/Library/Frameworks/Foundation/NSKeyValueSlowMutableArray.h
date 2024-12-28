//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKeyValueGetter, NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableArray
{
    NSKeyValueGetter *_valueGetter;	// 24 = 0x18
    NSKeyValueSetter *_valueSetter;	// 32 = 0x20
    _Bool _treatNilValuesLikeEmptyArrays;	// 40 = 0x28
    char _padding[3];	// 41 = 0x29
}

- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;	// IMP=0x00000000007a9bf2
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x00000000007a9b7c
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x00000000007a9b15
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007a9aae
- (void)removeLastObject;	// IMP=0x00000000007a9a4c
- (id)_createNonNilMutableArrayValueWithSelector:(SEL)arg1;	// IMP=0x00000000007a99ec
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x00000000007a97e0
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000007a96cd
- (void)addObject:(id)arg1;	// IMP=0x00000000007a95cc
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x00000000007a9598
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007a9564
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000007a951c
- (id)_nonNilArrayValueWithSelector:(SEL)arg1;	// IMP=0x00000000007a94c8
- (unsigned long long)count;	// IMP=0x00000000007a945a
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;	// IMP=0x00000000007a93c3
- (void)_proxyNonGCFinalize;	// IMP=0x00000000007a9336
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x00000000007a9263

@end
