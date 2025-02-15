//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_TVShelfViewLayout.h"

__attribute__((visibility("hidden")))
@interface _TVMLShelfViewLayout : _TVShelfViewLayout
{
    double _showcaseFactor;	// 8 = 0x8
    double _cachedTallestHeaderHeight;	// 16 = 0x10
    struct TVCellMetrics _cellMetrics;	// 24 = 0x18
}

@property(nonatomic) double cachedTallestHeaderHeight; // @synthesize cachedTallestHeaderHeight=_cachedTallestHeaderHeight;
@property(nonatomic) double showcaseFactor; // @synthesize showcaseFactor=_showcaseFactor;
@property(nonatomic) struct TVCellMetrics cellMetrics; // @synthesize cellMetrics=_cellMetrics;
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;	// IMP=0x0000000000051e93
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;	// IMP=0x0000000000051bb7
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000051ae9
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x0000000000051887
- (void)invalidateLayoutWithContext:(id)arg1;	// IMP=0x00000000000515c7
- (id)contentRowMetricsForShowcase:(_Bool)arg1;	// IMP=0x0000000000051045
- (double)headerAllowance;	// IMP=0x0000000000050e45
- (double)expectedLineSpacing;	// IMP=0x0000000000050c26
- (id)init;	// IMP=0x0000000000050b1d

@end

