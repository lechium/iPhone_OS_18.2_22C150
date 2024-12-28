//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (VK)
+ (void)heapsAlgorithm:(id)arg1 k:(long long)arg2 result:(id)arg3;	// IMP=0x00200000000af030
+ (id)vk_arrayFromNonNilObject:(id)arg1;	// IMP=0x00200000000aee4b
- (id)vk_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x00100000000affe1
- (id)vk_map:(CDUnknownBlockType)arg1;	// IMP=0x00100000000afdd7
- (id)vk_compactMap:(CDUnknownBlockType)arg1;	// IMP=0x00100000000afbbd
- (id)vk_arrayByAddingObjectsFromNonNilArray:(id)arg1;	// IMP=0x00100000000afb6f
- (id)vk_arrayByAddingNonNilObject:(id)arg1;	// IMP=0x00100000000afb21
- (id)vk_objectAfter:(id)arg1 wrap:(_Bool)arg2;	// IMP=0x00100000000afa8a
- (id)vk_objectBefore:(id)arg1 wrap:(_Bool)arg2;	// IMP=0x00100000000af9f7
- (id)vk_objectAfter:(id)arg1;	// IMP=0x00100000000af9e3
- (id)vk_objectBefore:(id)arg1;	// IMP=0x00100000000af9cf
- (_Bool)vk_indexIsValid:(long long)arg1;	// IMP=0x00100000000af9a4
- (unsigned long long)vk_indexOfSortedObject:(id)arg1 insertionIndex:(out unsigned long long *)arg2 usingComparator:(CDUnknownBlockType)arg3;	// IMP=0x00100000000af8a5
- (id)vk_arrayByGroupingIntoArraysWithMaxCount:(unsigned long long)arg1;	// IMP=0x00100000000af676
- (id)vk_objectsConformingToProtocol:(id)arg1;	// IMP=0x00100000000af5b8
- (id)vk_safeObjectAtIndex:(long long)arg1;	// IMP=0x00100000000af562
- (id)vk_firstObjectOfClass:(Class)arg1;	// IMP=0x00100000000af512
- (id)vk_objectsOfClass:(Class)arg1;	// IMP=0x00100000000af49d
- (id)vk_objectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00100000000af43e
- (_Bool)vk_containsObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00100000000af40b
- (id)vk_arrayFromReplacingObject:(id)arg1 withObject:(id)arg2;	// IMP=0x00100000000af30a
- (unsigned long long)vk_countOfObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00100000000af18b
- (id)vk_objectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00100000000af139
@property(readonly, nonatomic) NSArray *vk_generateAllPermutations;
@property(readonly, nonatomic) NSArray *vk_randomizedArray;
@property(readonly, nonatomic) id vk_randomObject;
@end
