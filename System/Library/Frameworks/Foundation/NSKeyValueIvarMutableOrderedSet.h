//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NSKeyValueIvarMutableOrderedSet
{
    struct objc_ivar *_ivar;	// 24 = 0x18
}

- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;	// IMP=0x00000000009121d0
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x000000000091218d
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x0000000000912159
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000912125
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x0000000000911f51
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000911e5f
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x0000000000911e2b
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000911df7
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x0000000000911da6
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000911d5e
- (id)_nonNilMutableOrderedSetValueWithSelector:(SEL)arg1;	// IMP=0x0000000000911d09
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;	// IMP=0x0000000000911c93
- (unsigned long long)count;	// IMP=0x0000000000911c5b
- (void)_proxyNonGCFinalize;	// IMP=0x0000000000911bf8
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x0000000000911b74

@end

