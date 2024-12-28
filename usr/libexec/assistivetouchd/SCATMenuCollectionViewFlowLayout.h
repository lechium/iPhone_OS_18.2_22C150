//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewFlowLayout.h>

@class SCATMenuStyleAttributes;

@interface SCATMenuCollectionViewFlowLayout : UICollectionViewFlowLayout
{
    SCATMenuStyleAttributes *_popoverStyleAttributes;	// 8 = 0x8
    SCATMenuStyleAttributes *_dockStyleAttributes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000da1e7
@property(retain, nonatomic) SCATMenuStyleAttributes *dockStyleAttributes; // @synthesize dockStyleAttributes=_dockStyleAttributes;
@property(retain, nonatomic) SCATMenuStyleAttributes *popoverStyleAttributes; // @synthesize popoverStyleAttributes=_popoverStyleAttributes;
- (struct CGSize)collectionViewContentSize;	// IMP=0x00100000000da009
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x00100000000d9d09
- (double)_maxHeightForRow:(unsigned long long)arg1 itemsPerRow:(unsigned long long)arg2;	// IMP=0x00100000000d9b5c
- (double)_heightForAllRows:(unsigned long long)arg1 itemsPerRow:(unsigned long long)arg2;	// IMP=0x00100000000d9aec
- (double)_xValueForDockItemAtIndex:(unsigned long long)arg1 layoutAttributes:(id)arg2;	// IMP=0x00100000000d9884
- (id)_rowToFrameDictionaryForAttributes:(id)arg1 itemsPerRow:(unsigned long long)arg2;	// IMP=0x00100000000d9578
- (void)column:(unsigned long long *)arg1 row:(unsigned long long *)arg2 forItemAtIndex:(unsigned long long)arg3;	// IMP=0x00100000000d94dc
- (void)optimalNumberOfRows:(unsigned long long *)arg1 itemsPerRow:(unsigned long long *)arg2 forTotalNumberOfItems:(unsigned long long)arg3;	// IMP=0x00100000000d92a7
- (unsigned long long)maxVisibleItems;	// IMP=0x00100000000d926a
- (double)menuItemHorizontalSpacingAfterItemAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000d917c
- (unsigned long long)maxRows;	// IMP=0x00100000000d9138
- (unsigned long long)maxItemsPerRow;	// IMP=0x00100000000d90f4
- (struct CGSize)menuItemSpacing;	// IMP=0x00100000000d9045
- (struct CGSize)menuItemSize;	// IMP=0x00100000000d8fe3
- (id)effectiveStyleAttributes;	// IMP=0x00100000000d8f60
- (_Bool)isDockStyle;	// IMP=0x00100000000d8f17
- (_Bool)isPopoverStyle;	// IMP=0x00100000000d8ecf
- (_Bool)willIncludeTitleLabels;	// IMP=0x00100000000d8e8b
- (unsigned long long)numberOfMenuItems;	// IMP=0x00100000000d8e45
- (id)menuSheet;	// IMP=0x00100000000d8dc5
- (id)scatStyle;	// IMP=0x00100000000d8dac
- (id)layoutDelegate;	// IMP=0x00100000000d8d5c
- (double)minimumInteritemSpacing;	// IMP=0x00100000000d8d4a
- (double)minimumLineSpacing;	// IMP=0x00100000000d8d34
- (void)_initStyleAttributes;	// IMP=0x00100000000d8caa
- (id)init;	// IMP=0x00100000000d8c5e

@end
