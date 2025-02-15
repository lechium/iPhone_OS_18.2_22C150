//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPSectionedCollection, NSString;

__attribute__((visibility("hidden")))
@interface _MPLazyTransformSectionedCollectionDataSource : NSObject
{
    MPSectionedCollection *_collection;	// 8 = 0x8
    CDUnknownBlockType _sectionTransform;	// 16 = 0x10
    CDUnknownBlockType _itemTransform;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000067d14
@property(readonly, copy, nonatomic) CDUnknownBlockType itemTransform; // @synthesize itemTransform=_itemTransform;
@property(readonly, copy, nonatomic) CDUnknownBlockType sectionTransform; // @synthesize sectionTransform=_sectionTransform;
@property(readonly, nonatomic) MPSectionedCollection *collection; // @synthesize collection=_collection;
- (id)sectionAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000067c91
- (unsigned long long)numberOfSections;	// IMP=0x0000000000067c7b
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;	// IMP=0x0000000000067c65
- (id)itemAtIndexPath:(id)arg1;	// IMP=0x0000000000067be8
- (id)initWithSectionedCollection:(id)arg1 sectionTransform:(CDUnknownBlockType)arg2 itemTransform:(CDUnknownBlockType)arg3;	// IMP=0x0000000000067b1e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

