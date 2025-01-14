//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableOrderedSet.h>

@class NSManagedObject, NSMutableDictionary, NSPropertyDescription;

__attribute__((visibility("hidden")))
@interface _NSFaultingMutableOrderedSet : NSMutableOrderedSet
{
    int _cd_rc;	// 8 = 0x8
    struct _NSFaultingMutableOrderedSetFlags _flags;	// 12 = 0xc
    id _realSet;	// 16 = 0x10
    NSManagedObject *_source;	// 24 = 0x18
    unsigned int *_orderKeys;	// 32 = 0x20
    _NSFaultingMutableOrderedSet *_grottyHack;	// 40 = 0x28
    NSMutableDictionary *_forcedKeys;	// 48 = 0x30
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x0060000000263241
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0060000000260f73
+ (id)alloc;	// IMP=0x0060000000260f67
+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x0060000000260ca2
- (id)allObjects;	// IMP=0x0000000000264a29
- (void)sortRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(CDUnknownBlockType)arg3;	// IMP=0x00000000002644dd
- (void)sortWithOptions:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;	// IMP=0x00000000002644b9
- (void)sortUsingComparator:(CDUnknownBlockType)arg1;	// IMP=0x0000000000264495
- (void)unionSet:(id)arg1;	// IMP=0x0000000000264398
- (void)minusSet:(id)arg1;	// IMP=0x000000000026429b
- (void)unionOrderedSet:(id)arg1;	// IMP=0x000000000026419e
- (void)minusOrderedSet:(id)arg1;	// IMP=0x00000000002640a1
- (void)removeObjectsInArray:(id)arg1;	// IMP=0x0000000000263fa1
- (void)removeAllObjects;	// IMP=0x0000000000263f3a
- (void)removeObjectsInRange:(struct _NSRange)arg1;	// IMP=0x0000000000263d0e
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x0000000000263c28
- (void)insertObjects:(const id *)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000263a02
- (void)addObjectsFromArray:(id)arg1;	// IMP=0x0000000000263905
- (void)addObjects:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000026375f
- (void)addObject:(id)arg1;	// IMP=0x000000000026368d
- (_Bool)containsObject:(id)arg1;	// IMP=0x0000000000263648
- (_Bool)_isIdenticalFault:(id)arg1;	// IMP=0x0000000000263592
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000026354a
- (_Bool)isEqualToOrderedSet:(id)arg1;	// IMP=0x000000000026327a
- (id)replacementObjectForCoder:(id)arg1;	// IMP=0x0000000000263252
- (Class)classForCoder;	// IMP=0x0000000000263230
- (id)valueForKeyPath:(id)arg1;	// IMP=0x00000000002631eb
- (id)valueForKey:(id)arg1;	// IMP=0x00000000002631a6
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000263122
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x0000000000263048
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000262fb4
- (void)getObjects:(id *)arg1;	// IMP=0x0000000000262f5a
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000262f01
- (id)objectEnumerator;	// IMP=0x0000000000262ecb
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;	// IMP=0x0000000000262e72
- (id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x0000000000262e28
- (unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;	// IMP=0x0000000000262dcf
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x0000000000262d85
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000262d2c
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000262ce2
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000262c89
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000262bc8
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x0000000000262b83
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000262b3e
- (unsigned long long)count;	// IMP=0x0000000000262b08
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000262ac3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002628cc
@property(readonly, nonatomic) NSPropertyDescription *relationship;
@property(readonly, nonatomic) NSManagedObject *source;
- (void)turnIntoFault;	// IMP=0x00000000002627b5
- (void)_setProcessingIdempotentKVO:(_Bool)arg1;	// IMP=0x0000000000261684
- (_Bool)_shouldProcessKVOChange;	// IMP=0x0000000000261670
- (void)willReadWithContents:(id)arg1;	// IMP=0x0000000000261293
- (void)willRead;	// IMP=0x000000000026122d
- (id)descriptionWithLocale:(id)arg1;	// IMP=0x0000000000261149
- (id)description;	// IMP=0x0000000000261072
@property(readonly, nonatomic, getter=isFault) _Bool fault;
- (void)dealloc;	// IMP=0x0000000000260f7f
- (id)initWithSource:(id)arg1 destinations:(id)arg2 forRelationship:(id)arg3 inContext:(id)arg4;	// IMP=0x0000000000260e38
- (id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(_Bool)arg3;	// IMP=0x0000000000260d1f
- (id)initWithOrderedSet:(id)arg1;	// IMP=0x0000000000260caa
- (_Bool)_reorderObjectsToLocationsByOrderKey:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000264bc6
- (id)_orderedObjectsAndKeys;	// IMP=0x0000000000264b3b

@end

