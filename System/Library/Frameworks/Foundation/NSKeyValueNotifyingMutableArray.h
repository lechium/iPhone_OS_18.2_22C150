//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSKeyValueNotifyingMutableArray
{
    NSMutableArray *_mutableArray;	// 24 = 0x18
}

+ (id)_proxyShare;	// IMP=0x00600000007aa3a0
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;	// IMP=0x00000000007aaa1a
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x00000000007aa95b
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x00000000007aa8d6
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007aa824
- (void)removeLastObject;	// IMP=0x00000000007aa766
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x00000000007aa6d7
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000007aa618
- (void)addObject:(id)arg1;	// IMP=0x00000000007aa553
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x00000000007aa536
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007aa519
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000007aa4fc
- (unsigned long long)count;	// IMP=0x00000000007aa4df
- (void)_proxyNonGCFinalize;	// IMP=0x00000000007aa46e
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x00000000007aa3c7

@end
