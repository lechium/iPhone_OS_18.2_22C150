//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class FCContentArchive, FCContentManifest;

@interface NSArray (FCAdditions)
+ (void)fc_walkArray:(id)arg1 andArray:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000297059
+ (id)fc_generatedArrayWithCount:(unsigned long long)arg1 generator:(CDUnknownBlockType)arg2;	// IMP=0x0010000000296b52
+ (id)fc_array:(CDUnknownBlockType)arg1;	// IMP=0x0010000000296ac6
+ (id)fc_arrayByAddingUniqueObjectsFromArray:(id)arg1 toArray:(id)arg2;	// IMP=0x0010000000296a0c
+ (id)fc_arrayByAddingObjectsFromArray:(id)arg1 toArray:(id)arg2 inRelativeOrder:(unsigned long long)arg3;	// IMP=0x0010000000296970
+ (id)fc_arrayByAddingObjectsFromArray:(id)arg1 toArray:(id)arg2;	// IMP=0x00100000002968d4
- (double)fc_cosineDistanceToArray:(id)arg1;	// IMP=0x0010000000298270
- (double)fc_euclideanDistanceToArray:(id)arg1;	// IMP=0x0010000000298046
- (_Bool)fc_isEqualToArray:(id)arg1;	// IMP=0x0010000000297fc6
- (_Bool)fc_isEqualToArray:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x0010000000297e87
- (id)fc_rotateElementsFromTheIndexOfSelectedItem:(unsigned long long)arg1;	// IMP=0x0010000000297c67
- (id)fc_sortedArrayStartingWithElementsSatisfying:(CDUnknownBlockType)arg1 sortedBy:(CDUnknownBlockType)arg2;	// IMP=0x001000000029798e
- (void)fc_enumerateIslandsOfCommonValuesForKeyBlock:(CDUnknownBlockType)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000029752f
- (void)fc_splitArrayWithTest:(CDUnknownBlockType)arg1 result:(CDUnknownBlockType)arg2;	// IMP=0x00100000002973aa
- (struct _NSRange)fc_expandIndex:(unsigned long long)arg1 toIncludeAdjacentObjectsPassingTest:(CDUnknownBlockType)arg2;	// IMP=0x001000000029728b
- (id)fc_uniqueByValueBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000296f24
- (unsigned long long)fc_distanceFromArray:(id)arg1;	// IMP=0x0010000000296d99
- (unsigned long long)fc_uniqueCount;	// IMP=0x0010000000296d4b
- (id)fc_arrayByReversingObjects;	// IMP=0x0010000000296cfb
- (double)fc_reduceArrayWithDouble:(double)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0010000000296779
- (id)fc_reduceArrayWithInitial:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00100000002965d1
- (void)fc_visitSubarraysWithMaxCount:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0010000000296507
- (id)fc_subarrayWithPercentToEnd:(double)arg1;	// IMP=0x00100000002963d5
- (id)fc_subarrayWithPercentFromBeginning:(double)arg1;	// IMP=0x00100000002962cc
- (void)fc_subarrayWithCount:(unsigned long long)arg1 result:(CDUnknownBlockType)arg2;	// IMP=0x00100000002961a1
- (id)fc_safeSubarrayWithCountFromBack:(unsigned long long)arg1;	// IMP=0x001000000029614c
- (id)fc_safeSubarrayWithCountFromFront:(unsigned long long)arg1;	// IMP=0x0010000000296106
- (id)fc_safeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x00100000002960bc
- (id)fc_arrayByMergingAdjacentObjectsWithMergePolicy:(CDUnknownBlockType)arg1 mergeBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000295c20
- (id)fc_subarrayToIndex:(unsigned long long)arg1 withMaxCount:(unsigned long long)arg2 range:(struct _NSRange *)arg3;	// IMP=0x0010000000295ac1
- (id)fc_subarrayFromIndex:(unsigned long long)arg1 withMaxCount:(unsigned long long)arg2 range:(struct _NSRange *)arg3;	// IMP=0x0010000000295964
- (id)fc_subarrayInOrder:(unsigned long long)arg1 relativeToIndex:(unsigned long long)arg2 withMaxCount:(unsigned long long)arg3 range:(struct _NSRange *)arg4;	// IMP=0x001000000029591b
- (id)fc_subarrayInOrder:(unsigned long long)arg1 relativeToIndex:(unsigned long long)arg2 inclusive:(_Bool)arg3;	// IMP=0x00100000002958d2
- (id)fc_subarrayFromCount:(unsigned long long)arg1;	// IMP=0x001000000029588f
- (id)fc_subarrayWithMaxCount:(unsigned long long)arg1;	// IMP=0x001000000029584b
- (id)fc_subarrayFromIndex:(unsigned long long)arg1 inclusive:(_Bool)arg2;	// IMP=0x0010000000295830
- (id)fc_subarrayUpToIndex:(unsigned long long)arg1 inclusive:(_Bool)arg2;	// IMP=0x001000000029580f
- (id)fc_subarrayUpToCountInclusive:(unsigned long long)arg1;	// IMP=0x00100000002957bc
- (id)fc_arrayByAddingNonContainedObjectsFromArray:(id)arg1;	// IMP=0x001000000029564a
- (id)fc_setByCollectingObjectsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000002953ea
- (id)fc_arrayByCollectingObjectsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000029524f
- (id)fc_indexesOfObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000029519e
- (id)fc_indexesOfObjectsIdenticalTo:(id)arg1;	// IMP=0x0010000000294f91
- (unsigned long long)fc_indexOfFirstObjectWithValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000294e73
- (id)fc_arraysByPartitioningWithBudget:(id)arg1 indicesOfOverBudgetObjects:(id *)arg2 appraiser:(CDUnknownBlockType)arg3 accumulator:(CDUnknownBlockType)arg4 comparator:(CDUnknownBlockType)arg5;	// IMP=0x001000000029431e
- (id)fc_arraysByPartitioningOnObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000294018
- (id)fc_arraysByExcisingRange:(struct _NSRange)arg1;	// IMP=0x0010000000293e57
- (id)fc_arrayByReplacingObjectsInRange:(struct _NSRange)arg1 withObject:(id)arg2;	// IMP=0x0010000000293d81
- (id)fc_arrayByRemovingObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000293c7c
- (id)fc_arrayByRemovingObjectsAtIndexes:(id)arg1;	// IMP=0x0010000000293c04
- (id)fc_arrayByRemovingObjectsInRange:(struct _NSRange)arg1;	// IMP=0x0010000000293baa
- (id)fc_arrayByRemovingFirstObject;	// IMP=0x0010000000293b57
- (id)fc_arrayByReplacingObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x0010000000293ad4
- (id)fc_arrayByReplacingObjectIdenticalTo:(id)arg1 withObject:(id)arg2;	// IMP=0x0010000000293a04
- (id)fc_arrayByRemovingKeysInDictionary:(id)arg1;	// IMP=0x0010000000293928
- (id)fc_arrayByRemovingObjectsInArray:(id)arg1;	// IMP=0x00100000002938b0
- (id)fc_arrayByRemovingObjectIdenticalTo:(id)arg1;	// IMP=0x0010000000293838
- (id)fc_arrayByRemovingObject:(id)arg1;	// IMP=0x00100000002937c0
- (id)fc_arrayByFlattening;	// IMP=0x0010000000293780
- (unsigned long long)fc_countOfObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00100000002934bd
- (id)fc_arrayOfObjectsFailingTest:(CDUnknownBlockType)arg1;	// IMP=0x00100000002933b6
- (id)fc_arrayOfObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00100000002932af
- (id)fc_orderedSetByTransformingWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000029319f
- (id)fc_setOfObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000029308f
- (id)fc_setByTransformingWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000292f7f
- (id)fc_arrayByTransformingWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000292ecb
- (id)fc_objectsOfMinValueWithValueBlock:(CDUnknownBlockType)arg1 comparator:(CDUnknownBlockType)arg2;	// IMP=0x0010000000292b90
- (id)fc_objectsOfMaxValueWithValueBlock:(CDUnknownBlockType)arg1 comparator:(CDUnknownBlockType)arg2;	// IMP=0x0010000000292855
- (id)fc_arrayByTransformingWithBlockWithIndex:(CDUnknownBlockType)arg1;	// IMP=0x0010000000292713
- (_Bool)fc_allObjectsPassTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000029266d
- (_Bool)fc_containsObjectsWithValue:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000029263a
- (_Bool)fc_containsObjectsAtBack:(id)arg1;	// IMP=0x0010000000292595
- (_Bool)fc_containsObjectsAtFront:(id)arg1;	// IMP=0x00100000002924f0
- (_Bool)fc_containsObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00100000002924bd
- (id)fc_randomObject;	// IMP=0x0010000000292457
- (id)fc_lastObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00100000002922d2
- (id)fc_firstObjectOfClass:(Class)arg1;	// IMP=0x001000000029225d
- (id)fc_firstObjectWithValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000292135
- (id)fc_firstObjectFromIndex:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x0010000000291ea3
- (id)fc_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000291d4d
- (id)fc_onlyObject;	// IMP=0x0010000000291bdd
- (id)fc_dictionaryOfTransformedSortedObjectsWithKeyBlock:(CDUnknownBlockType)arg1 valueBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000002917df
- (id)fc_dictionaryOfSortedObjectsWithKeyBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000291688
- (id)fc_dictionaryWithValueBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000002913e7
- (id)fc_dictionaryWithKeyBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000291166
- (id)fc_dictionaryWithKeySelector:(SEL)arg1 valueSelector:(SEL)arg2;	// IMP=0x0010000000290d9e
- (id)fc_dictionaryWithKeyBlock:(CDUnknownBlockType)arg1 valueBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000002909fa
- (id)fc_dictionaryWithKeySelector:(SEL)arg1;	// IMP=0x0010000000290757
- (id)fc_randomlyMergeWithArray:(id)arg1;	// IMP=0x0010000000290534
- (void)fc_enumerateSideBySideWithArray:(id)arg1 reverse:(_Bool)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00100000002902b8
- (id)fc_objectInSortedOrderedCollectionWithFeature:(id)arg1 usingFeatureProvider:(CDUnknownBlockType)arg2 comparator:(CDUnknownBlockType)arg3;	// IMP=0x00100000002902a5
- (id)fc_diffAgainstSortedOrderedCollection:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;	// IMP=0x0010000000290292
- (_Bool)fc_isSortedUsingComparator:(CDUnknownBlockType)arg1;	// IMP=0x0010000000290285
- (void)fc_enumerateObjectsFromIndex:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000002901f1
- (void)fc_enumerateObjectsInReverse:(_Bool)arg1 usingSkipAheadBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000002900e9
- (void)fc_enumerateObjectsPairwiseUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000002900dc
@property(readonly, nonatomic) FCContentManifest *contentManifest;
@property(readonly, nonatomic) FCContentArchive *contentArchive;
@end
