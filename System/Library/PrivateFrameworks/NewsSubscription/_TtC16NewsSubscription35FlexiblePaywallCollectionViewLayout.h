//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewLayout.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC16NewsSubscription35FlexiblePaywallCollectionViewLayout : UICollectionViewLayout
{
    MISSING_TYPE *layoutProvider;	// 8 = 0x8
    MISSING_TYPE *itemAttributes;	// 48 = 0x30
    MISSING_TYPE *supplementaryItemAttributes;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000f19e0
- (id)init;	// IMP=0x00000000000f1980
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x00000000000f18e0
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000f1410
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x00000000000f1380
@property(nonatomic, readonly) struct CGSize collectionViewContentSize;
- (void)prepareLayout;	// IMP=0x00000000000f12a0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f0940

@end

