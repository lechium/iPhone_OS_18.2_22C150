//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewLayout.h>

@interface LUIUserGridViewLayout : UICollectionViewLayout
{
}

- (double)contentViewTopEdgeInsetForCollectionViewFrame:(struct CGRect)arg1 contentHeight:(double)arg2;	// IMP=0x004000000004530a
- (struct UIEdgeInsets)edgeInsetsForCollectionViewFrame:(struct CGRect)arg1 layoutInfo:(id)arg2;	// IMP=0x0010000000045085
- (id)layoutInfoForItemCount:(unsigned long long)arg1;	// IMP=0x0010000000044ef9
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x0010000000044ee0
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0010000000044e70
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x0010000000044b1f
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x0010000000044b17
- (struct CGSize)collectionViewContentSize;	// IMP=0x0010000000044b01
- (void)prepareLayout;	// IMP=0x0010000000044338

@end
