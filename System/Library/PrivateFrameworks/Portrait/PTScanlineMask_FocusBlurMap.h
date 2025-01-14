//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSIndexSet, PTFocusBlurMap;

__attribute__((visibility("hidden")))
@interface PTScanlineMask_FocusBlurMap
{
    PTFocusBlurMap *_map;	// 40 = 0x28
    NSIndexSet *_region;	// 48 = 0x30
    struct CGSize _normalizedTileSize;	// 56 = 0x38
    struct CGSize _placementTileSize;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000006075a
@property struct CGSize placementTileSize; // @synthesize placementTileSize=_placementTileSize;
@property struct CGSize normalizedTileSize; // @synthesize normalizedTileSize=_normalizedTileSize;
@property(readonly) NSIndexSet *region; // @synthesize region=_region;
@property(readonly) PTFocusBlurMap *map; // @synthesize map=_map;
- (struct _NSRange)pixelRangeForTileRangeY:(struct _NSRange)arg1;	// IMP=0x000000000006051b
- (struct _NSRange)pixelRangeForTileRangeX:(struct _NSRange)arg1;	// IMP=0x00000000000603e9
- (void)_recalculatePlacementTileSize;	// IMP=0x00000000000602a0
- (void)setPlacement:(struct CGRect)arg1;	// IMP=0x000000000006024e
- (id)scanlineIter;	// IMP=0x0000000000060218
- (id)initWithFocusBlurMap:(id)arg1 region:(id)arg2;	// IMP=0x0000000000060176

@end

