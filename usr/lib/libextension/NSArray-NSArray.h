//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (NSArray)
+ (id)newWithContentsOf:(id)arg1 immutable:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00600000007174e0
+ (id)newWithContentsOf:(id)arg1 immutable:(_Bool)arg2;	// IMP=0x0060000000717343
+ (id)arrayWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x006000000071730f
+ (id)arrayWithContentsOfURL:(id)arg1;	// IMP=0x00600000007172e0
+ (id)arrayWithContentsOfFile:(id)arg1;	// IMP=0x00600000007172b1
+ (_Bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;	// IMP=0x0060000000716d55
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000717b66
- (_Bool)writeToURL:(id)arg1 atomically:(_Bool)arg2;	// IMP=0x0010000000717a63
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2;	// IMP=0x001000000071790c
- (id)_stringToWrite;	// IMP=0x00100000007178b2
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x00100000007176fc
- (id)initWithContentsOfURL:(id)arg1;	// IMP=0x00100000007176c5
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x001000000071768e
- (id)sortedArrayUsingSelector:(SEL)arg1 hint:(id)arg2;	// IMP=0x00100000007171e2
- (id)sortedArrayUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2 hint:(id)arg3;	// IMP=0x0010000000716ec2
- (id)sortedArrayHint;	// IMP=0x0010000000716d5d
- (Class)classForCoder;	// IMP=0x0010000000716d44
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000716924
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000007164c7
- (id)debugDescription;	// IMP=0x00100000007162c4
- (id)valueForKeyPath:(id)arg1;	// IMP=0x00100000007a3580
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000007a3475
- (id)valueForKey:(id)arg1;	// IMP=0x00100000007a31d0
- (id)_distinctUnionOfSetsForKeyPath:(id)arg1;	// IMP=0x00100000007a312d
- (id)_distinctUnionOfObjectsForKeyPath:(id)arg1;	// IMP=0x00100000007a30eb
- (id)_distinctUnionOfArraysForKeyPath:(id)arg1;	// IMP=0x00100000007a30a9
- (id)_unionOfSetsForKeyPath:(id)arg1;	// IMP=0x00100000007a2ffd
- (id)_unionOfArraysForKeyPath:(id)arg1;	// IMP=0x00100000007a2f66
- (id)_unionOfObjectsForKeyPath:(id)arg1;	// IMP=0x00100000007a2ecf
- (id)_minForKeyPath:(id)arg1;	// IMP=0x00100000007a2e37
- (id)_maxForKeyPath:(id)arg1;	// IMP=0x00100000007a2d9f
- (id)_countForKeyPath:(id)arg1;	// IMP=0x00100000007a2d6a
- (id)_avgForKeyPath:(id)arg1;	// IMP=0x00100000007a2cf1
- (id)_sumForKeyPath:(id)arg1;	// IMP=0x00100000007a2bb8
- (_Bool)_validateValue:(inout id *)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 error:(out id *)arg4;	// IMP=0x00100000007a74de
- (void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3;	// IMP=0x00100000007a749b
- (id)_mutableSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;	// IMP=0x00100000007a7467
- (id)_mutableOrderedSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;	// IMP=0x00100000007a7433
- (id)_mutableArrayValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;	// IMP=0x00100000007a73ff
- (id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;	// IMP=0x00100000007a73cb
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x00100000007b7a06
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;	// IMP=0x00100000007b799a
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;	// IMP=0x00100000007b792e
- (void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3;	// IMP=0x00100000007b7803
- (void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 context:(void *)arg4;	// IMP=0x00100000007b75c0
- (void)addObserver:(id)arg1 toObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 options:(unsigned long long)arg4 context:(void *)arg5;	// IMP=0x00100000007b7479
- (id)arrayByApplyingDifference:(id)arg1;	// IMP=0x00100000007e1b51
- (id)differenceFromArray:(id)arg1;	// IMP=0x00100000007e1b3d
- (id)differenceFromArray:(id)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x00100000007e1b24
- (id)differenceFromArray:(id)arg1 withOptions:(unsigned long long)arg2 usingEquivalenceTest:(CDUnknownBlockType)arg3;	// IMP=0x00100000007e0781
- (id)stringsByAppendingPathComponent:(id)arg1;	// IMP=0x0010000000801ad5
- (id)pathsMatchingExtensions:(id)arg1;	// IMP=0x00100000008019ea
- (id)filteredArrayUsingPredicate:(id)arg1;	// IMP=0x00100000008106f4
- (id)sortedArrayUsingDescriptors:(id)arg1;	// IMP=0x0010000000840f48
- (id)replacementObjectForPortCoder:(id)arg1;	// IMP=0x00100000008d32c4
@end
