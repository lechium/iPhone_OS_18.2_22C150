//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewLayout.h>

@class NSMutableDictionary;
@protocol PUCollectionViewLayoutProvider;

__attribute__((visibility("hidden")))
@interface PUCollectionViewLayoutCache : UICollectionViewLayout
{
    NSMutableDictionary *_itemLayoutAttributesByIndexPath;	// 8 = 0x8
    NSMutableDictionary *_supplementaryViewLayoutAttributesByKind;	// 16 = 0x10
    NSMutableDictionary *_decorationViewLayoutAttributesByKind;	// 24 = 0x18
    id <PUCollectionViewLayoutProvider> _layoutProvider;	// 32 = 0x20
    struct {
        unsigned int hasSupplementaryLayoutAttributes:1;
        unsigned int hasDecorationLayoutAttributes:1;
    } _layoutProviderFlags;	// 40 = 0x28
    _Bool _cachesResults;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x0000000000256db7
@property(nonatomic) _Bool cachesResults; // @synthesize cachesResults=_cachesResults;
@property(readonly, nonatomic) __weak id <PUCollectionViewLayoutProvider> layoutProvider; // @synthesize layoutProvider=_layoutProvider;
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;	// IMP=0x0000000000256d76
- (void)invalidateLayoutCache;	// IMP=0x0000000000256d1c
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000256b38
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000256954
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x0000000000256832
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x00000000002567c9
- (struct CGSize)collectionViewContentSize;	// IMP=0x000000000025676f
- (id)init;	// IMP=0x000000000025675b
- (id)initWithProvider:(id)arg1;	// IMP=0x000000000025669f

@end
