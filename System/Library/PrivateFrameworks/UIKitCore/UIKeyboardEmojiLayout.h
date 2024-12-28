//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionViewFlowLayout.h"

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiLayout : UICollectionViewFlowLayout
{
    NSMutableDictionary *_attributes;	// 280 = 0x118
    NSMutableArray *_headerWidths;	// 288 = 0x120
}

+ (Class)invalidationContextClass;	// IMP=0x0060000000fc1883
- (void).cxx_destruct;	// IMP=0x0000000000fc321b
- (id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;	// IMP=0x0000000000fc2f97
- (_Bool)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;	// IMP=0x0000000000fc2eb9
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;	// IMP=0x0000000000fc2d55
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;	// IMP=0x0000000000fc2d4d
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x0000000000fc2d45
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000fc229e
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x0000000000fc1e79
- (void)invalidateLayoutWithContext:(id)arg1;	// IMP=0x0000000000fc1b20
- (void)prepareLayout;	// IMP=0x0000000000fc1a01
- (void)_setAttributes:(id)arg1 forSection:(long long)arg2;	// IMP=0x0000000000fc18fb
- (void)dealloc;	// IMP=0x0000000000fc1894

@end
