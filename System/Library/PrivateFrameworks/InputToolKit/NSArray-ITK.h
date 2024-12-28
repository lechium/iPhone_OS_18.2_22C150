//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (ITK)
+ (void)heapsAlgorithm:(id)arg1 k:(long long)arg2 result:(id)arg3;	// IMP=0x002000000000e28b
+ (id)itk_arrayFromNonNilObject:(id)arg1;	// IMP=0x002000000000e0a6
- (id)itk_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f23c
- (id)itk_map:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f032
- (id)itk_compactMap:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ee18
- (id)itk_arrayByAddingObjectsFromNonNilArray:(id)arg1;	// IMP=0x001000000000edca
- (id)itk_arrayByAddingNonNilObject:(id)arg1;	// IMP=0x001000000000ed7c
- (id)itk_objectAfter:(id)arg1 wrap:(_Bool)arg2;	// IMP=0x001000000000ece5
- (id)itk_objectBefore:(id)arg1 wrap:(_Bool)arg2;	// IMP=0x001000000000ec52
- (id)itk_objectAfter:(id)arg1;	// IMP=0x001000000000ec3e
- (id)itk_objectBefore:(id)arg1;	// IMP=0x001000000000ec2a
- (_Bool)itk_indexIsValid:(long long)arg1;	// IMP=0x001000000000ebff
- (unsigned long long)itk_indexOfSortedObject:(id)arg1 insertionIndex:(out unsigned long long *)arg2 usingComparator:(CDUnknownBlockType)arg3;	// IMP=0x001000000000eb00
- (id)itk_arrayByGroupingIntoArraysWithMaxCount:(unsigned long long)arg1;	// IMP=0x001000000000e8d1
- (id)itk_objectsConformingToProtocol:(id)arg1;	// IMP=0x001000000000e813
- (id)itk_safeObjectAtIndex:(long long)arg1;	// IMP=0x001000000000e7bd
- (id)itk_firstObjectOfClass:(Class)arg1;	// IMP=0x001000000000e76d
- (id)itk_objectsOfClass:(Class)arg1;	// IMP=0x001000000000e6f8
- (id)itk_objectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e699
- (_Bool)itk_containsObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e666
- (id)itk_arrayFromReplacingObject:(id)arg1 withObject:(id)arg2;	// IMP=0x001000000000e565
- (unsigned long long)itk_countOfObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e3e6
- (id)itk_objectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e394
@property(readonly, nonatomic) NSArray *itk_generateAllPermutations;
@property(readonly, nonatomic) NSArray *itk_randomizedArray;
@property(readonly, nonatomic) id itk_randomObject;
@end
