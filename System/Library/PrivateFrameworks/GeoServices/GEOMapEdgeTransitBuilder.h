//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GEOMapEdgeTransitBuilder
{
    struct deque<geo::TransitEdgePiece, std::allocator<geo::TransitEdgePiece>> _pieces;	// 128 = 0x80
}

- (id).cxx_construct;	// IMP=0x0000000000a0a7e1
- (void).cxx_destruct;	// IMP=0x0000000000a0a7d0
- (id)_tileFinderForMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;	// IMP=0x0000000000a0a7a7
- (id)_lastTile;	// IMP=0x0000000000a0a763
- (id)_firstTile;	// IMP=0x0000000000a0a72a
- (Matrix_8746f91e)_lastPoint;	// IMP=0x0000000000a0a666
- (Matrix_8746f91e)_firstPoint;	// IMP=0x0000000000a0a5ad
- (_Bool)_shouldFindEdgeBehind;	// IMP=0x0000000000a0a479
- (_Bool)_shouldFindEdgeAhead;	// IMP=0x0000000000a0a351
- (_Bool)_findEdgeBehindInTile:(id)arg1;	// IMP=0x0000000000a09a88
- (_Bool)_findEdgeAheadInTile:(id)arg1;	// IMP=0x0000000000a08e0b
- (void)_buildCompleteEdge;	// IMP=0x0000000000a08d18
- (unsigned long long)_maxTileCount;	// IMP=0x0000000000a08d0d
- (id)initWithMap:(id)arg1 firstPiece:(const struct TransitEdgePiece *)arg2;	// IMP=0x0000000000a089a0

@end

