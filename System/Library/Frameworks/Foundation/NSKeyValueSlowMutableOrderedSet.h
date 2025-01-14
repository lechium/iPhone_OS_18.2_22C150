//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKeyValueGetter, NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableOrderedSet
{
    NSKeyValueGetter *_valueGetter;	// 24 = 0x18
    NSKeyValueSetter *_valueSetter;	// 32 = 0x20
    _Bool _treatNilValuesLikeEmptyOrderedSets;	// 40 = 0x28
    char _padding[3];	// 41 = 0x29
}

- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;	// IMP=0x0000000000911afe
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x0000000000911a88
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x0000000000911a21
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000009119ba
- (id)_createNonNilMutableOrderedSetValueWithSelector:(SEL)arg1;	// IMP=0x000000000091195a
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x000000000091174e
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000091163b
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x0000000000911607
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000009115d3
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x000000000091159f
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000911557
- (id)_nonNilOrderedSetValueWithSelector:(SEL)arg1;	// IMP=0x0000000000911503
- (unsigned long long)count;	// IMP=0x0000000000911495
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;	// IMP=0x00000000009113fe
- (void)_proxyNonGCFinalize;	// IMP=0x0000000000911371
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x000000000091129e

@end

