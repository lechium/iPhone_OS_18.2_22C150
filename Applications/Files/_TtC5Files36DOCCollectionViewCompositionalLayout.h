//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCompositionalLayout.h>

@class MISSING_TYPE;

@interface _TtC5Files36DOCCollectionViewCompositionalLayout : UICollectionViewCompositionalLayout
{
    MISSING_TYPE *footerViewHeight;	// 8 = 0x8
    MISSING_TYPE *footerViewContentInsets;	// 16 = 0x10
    MISSING_TYPE *coreLayout;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00400000001b78a0
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001b7840
- (id)initWithSectionProvider:(CDUnknownBlockType)arg1 configuration:(id)arg2;	// IMP=0x00100000001b7710
- (id)initWithSectionProvider:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b7580
- (id)initWithSection:(id)arg1 configuration:(id)arg2;	// IMP=0x00100000001b7380
- (id)initWithSection:(id)arg1;	// IMP=0x00100000001b72c0
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00100000001b7210
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x00100000001b6ea0
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x00100000001b6e30
@property(nonatomic, readonly) struct CGSize collectionViewContentSize;
- (void)prepareLayout;	// IMP=0x00100000001b6b60

@end
