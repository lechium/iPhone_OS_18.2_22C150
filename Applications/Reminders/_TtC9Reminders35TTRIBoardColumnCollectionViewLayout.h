//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCompositionalLayout.h>

@class MISSING_TYPE;

@interface _TtC9Reminders35TTRIBoardColumnCollectionViewLayout : UICollectionViewCompositionalLayout
{
    MISSING_TYPE *helper;	// 8 = 0x8
}

+ (Class)layoutAttributesClass;	// IMP=0x0020000000030ea0
- (void).cxx_destruct;	// IMP=0x0040000000031a00
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000319a0
- (id)initWithSectionProvider:(CDUnknownBlockType)arg1 configuration:(id)arg2;	// IMP=0x0010000000031820
- (id)initWithSectionProvider:(CDUnknownBlockType)arg1;	// IMP=0x0010000000031640
- (id)initWithSection:(id)arg1 configuration:(id)arg2;	// IMP=0x0010000000031380
- (id)initWithSection:(id)arg1;	// IMP=0x0010000000031260
- (id)_extendedAttributesQueryIncludingOrthogonalScrollingRegions:(struct CGRect)arg1;	// IMP=0x00100000000311b0
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x0010000000031100
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x0010000000030f40
@property(nonatomic, readonly) struct CGSize collectionViewContentSize;
- (void)prepareLayout;	// IMP=0x0010000000030e70

@end

