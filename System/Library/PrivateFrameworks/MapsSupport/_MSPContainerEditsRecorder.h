//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface _MSPContainerEditsRecorder : NSObject
{
    NSMutableArray *_originalMutableArray;	// 8 = 0x8
    NSMutableArray *_orderedEdits;	// 16 = 0x10
    NSMutableSet *_updatedObjects;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007911d
- (void)useImmutableObjectsForEditsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000078fa5
- (void)_editDetectorDidDetectUpdateForObject:(id)arg1;	// IMP=0x0000000000078ee3
- (void)_mutableObjectContentDidUpdate:(id)arg1;	// IMP=0x0000000000078e2e
- (void)replaceEditableObjectsAtIndexes:(id)arg1 withEditableObjects:(id)arg2;	// IMP=0x0000000000078d46
- (void)removeEditableObjectsAtIndexes:(id)arg1;	// IMP=0x0000000000078c80
- (void)insertEditableObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x0000000000078ac1
- (void)replaceObjectInEditableObjectsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x0000000000078927
- (void)removeObjectFromEditableObjectsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000078813
- (void)insertObject:(id)arg1 inEditableObjectsAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000078633
- (void)getEditableObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000007861d
- (id)editableObjectsAtIndexes:(id)arg1;	// IMP=0x0000000000078607
- (id)objectInEditableObjectsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000785f1
- (unsigned long long)countOfEditableObjects;	// IMP=0x00000000000785db
@property(readonly, nonatomic) NSArray *orderedEdits;
@property(readonly, nonatomic) NSMutableArray *recordableMutableArray;
- (id)initWithMutableArray:(id)arg1;	// IMP=0x00000000000784d6

@end
