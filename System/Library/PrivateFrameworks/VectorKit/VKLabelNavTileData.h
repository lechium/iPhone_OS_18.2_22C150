//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray;

__attribute__((visibility("hidden")))
@interface VKLabelNavTileData : NSObject
{
    struct shared_ptr<md::LabelTile> _tile;	// 8 = 0x8
    NSMapTable *_geoJunctionToJunctionMap;	// 24 = 0x18
    NSMutableArray *_tileEdgeJunctions;	// 32 = 0x20
    _Bool _foundTileEdgeJunctions;	// 40 = 0x28
    _Bool _oppositeCarriagewayJunctionsValid;	// 41 = 0x29
    NSMutableArray *_oppositeCarriagewayJunctions;	// 48 = 0x30
    struct vector<LabelNavJunctionInfo, geo::StdAllocator<LabelNavJunctionInfo, mdm::Allocator>> _junctionInfos;	// 56 = 0x38
}

- (id).cxx_construct;	// IMP=0x0000000000d74be0
- (void).cxx_destruct;	// IMP=0x0000000000d74b50
@property(readonly, nonatomic) const void *tile; // @synthesize tile=_tile;
@property(readonly, retain, nonatomic) NSMutableArray *oppositeCarriagewayJunctions; // @synthesize oppositeCarriagewayJunctions=_oppositeCarriagewayJunctions;
@property(nonatomic) _Bool oppositeCarriagewayJunctionsValid; // @synthesize oppositeCarriagewayJunctionsValid=_oppositeCarriagewayJunctionsValid;
- (void)findOppositeCarriagewayJunctionsWithRouteFeatures:(void *)arg1 distanceThreshold:(double)arg2;	// IMP=0x0000000000d73f40
- (void)appendNavJunctionsInWorldRect:(const void *)arg1 junctions:(id)arg2;	// IMP=0x0000000000d73db0
- (void)initializeJunctionInfos;	// IMP=0x0000000000d73a40
- (id)findTileEdgeJunctionAtCoordinate:(Matrix_8746f91e)arg1;	// IMP=0x0000000000d73880
- (void)_findTileEdgeJunctions;	// IMP=0x0000000000d73740
- (void)addJunction:(id)arg1;	// IMP=0x0000000000d736a0
- (id)junctionAtCoordinate:(Matrix_8746f91e)arg1;	// IMP=0x0000000000d734f0
- (id)junctionForGeoJunction:(struct GeoCodecsConnectivityJunction *)arg1;	// IMP=0x0000000000d734d0
- (id)initWithTile:(const void *)arg1;	// IMP=0x0000000000d733b0

@end
