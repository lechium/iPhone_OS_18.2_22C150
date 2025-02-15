//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueNotifyingMutableOrderedSet
{
    NSMutableOrderedSet *_mutableOrderedSet;	// 24 = 0x18
}

+ (id)_proxyShare;	// IMP=0x0060000000912213
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;	// IMP=0x0000000000912727
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x0000000000912668
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x00000000009125e3
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000912531
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x00000000009124a2
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000009123e3
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x00000000009123c6
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000009123a9
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x000000000091238c
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000091236f
- (unsigned long long)count;	// IMP=0x0000000000912352
- (void)_proxyNonGCFinalize;	// IMP=0x00000000009122e1
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x000000000091223a

@end

