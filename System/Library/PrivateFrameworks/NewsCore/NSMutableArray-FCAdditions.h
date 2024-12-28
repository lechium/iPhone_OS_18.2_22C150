//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (FCAdditions)
- (void)fc_rotateRightWithCount:(unsigned long long)arg1;	// IMP=0x002000000019e763
- (void)fc_reverseObjects;	// IMP=0x002000000019e6e5
- (void)fc_replaceObjectIdenticalTo:(id)arg1 withObjects:(id)arg2;	// IMP=0x002000000019e543
- (void)fc_replaceObjectIdenticalTo:(id)arg1 withObject:(id)arg2;	// IMP=0x002000000019e4dc
- (void)fc_safelyAddObjectsFromArray:(id)arg1;	// IMP=0x002000000019e4be
- (void)fc_safelyAddObject:(id)arg1;	// IMP=0x002000000019e4a5
- (void)fc_trimFromFrontToMaxCount:(unsigned long long)arg1;	// IMP=0x002000000019e468
- (void)fc_trimToMaxCount:(unsigned long long)arg1;	// IMP=0x002000000019e42a
- (void)fc_insertObjects:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x002000000019e39b
- (void)fc_insertObjects:(id)arg1 inOrderRelativeToContents:(unsigned long long)arg2;	// IMP=0x002000000019e1f2
- (void)fc_insertObject:(id)arg1 inOrderRelativeToContents:(unsigned long long)arg2;	// IMP=0x002000000019e095
- (void)fc_removeObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x002000000019dfec
- (id)fc_popLastObject;	// IMP=0x002000000019dfa4
- (id)fc_popLeadingObjectsOfCount:(unsigned long long)arg1;	// IMP=0x002000000019df16
- (id)fc_safelyPopFirstObject;	// IMP=0x002000000019deb0
- (id)fc_popFirstObject;	// IMP=0x002000000019de64
- (void)fc_removeFirstObject;	// IMP=0x002000000019de2a
- (void)fc_removeObject:(id)arg1 sortedUsingSelector:(SEL)arg2;	// IMP=0x002000000019dcfd
- (void)fc_insertObject:(id)arg1 sortedUsingSelector:(SEL)arg2;	// IMP=0x002000000019dbd0
- (id)fc_mergeSortedOrderedCollection:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;	// IMP=0x002000000019dbbd
- (void)fc_safelyAddStringIfNonNilAndNotZeroLength:(id)arg1;	// IMP=0x002000000019e7d4
- (void)fc_rotateRightWithCount:(unsigned long long)arg1;	// IMP=0x00200000003922db
- (void)fc_reverseObjects;	// IMP=0x002000000039225d
- (void)fc_replaceObjectIdenticalTo:(id)arg1 withObjects:(id)arg2;	// IMP=0x00200000003920bb
- (void)fc_replaceObjectIdenticalTo:(id)arg1 withObject:(id)arg2;	// IMP=0x0020000000392054
- (void)fc_safelyAddObjectsFromArray:(id)arg1;	// IMP=0x0020000000392036
- (void)fc_safelyAddObject:(id)arg1;	// IMP=0x002000000039201d
- (void)fc_trimFromFrontToMaxCount:(unsigned long long)arg1;	// IMP=0x0020000000391fe0
- (void)fc_trimToMaxCount:(unsigned long long)arg1;	// IMP=0x0020000000391fa2
- (void)fc_insertObjects:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0020000000391f13
- (void)fc_insertObjects:(id)arg1 inOrderRelativeToContents:(unsigned long long)arg2;	// IMP=0x0020000000391d6a
- (void)fc_insertObject:(id)arg1 inOrderRelativeToContents:(unsigned long long)arg2;	// IMP=0x0020000000391c0d
- (void)fc_removeObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0020000000391b64
- (id)fc_popLastObject;	// IMP=0x0020000000391b1c
- (id)fc_popLeadingObjectsOfCount:(unsigned long long)arg1;	// IMP=0x0020000000391a8e
- (id)fc_safelyPopFirstObject;	// IMP=0x0020000000391a28
- (id)fc_popFirstObject;	// IMP=0x00200000003919dc
- (void)fc_removeFirstObject;	// IMP=0x00200000003919a2
- (void)fc_removeObject:(id)arg1 sortedUsingSelector:(SEL)arg2;	// IMP=0x0020000000391875
- (void)fc_insertObject:(id)arg1 sortedUsingSelector:(SEL)arg2;	// IMP=0x0020000000391748
- (id)fc_mergeSortedOrderedCollection:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;	// IMP=0x0020000000391735
- (void)fc_safelyAddStringIfNonNilAndNotZeroLength:(id)arg1;	// IMP=0x002000000039234c
@end
