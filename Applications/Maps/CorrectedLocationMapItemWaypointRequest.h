//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CorrectedLocationMapItemWaypointRequest
{
    struct CLLocationCoordinate2D _coordinate;	// 16 = 0x10
}

- (struct CLLocationCoordinate2D)coordinate;	// IMP=0x0020000000e1ed55
- (void)recordRAPInformation:(id)arg1;	// IMP=0x0010000000e1ec98
- (id)loadComposedWaypointWithTraits:(id)arg1 clientResolvedCompletionHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3 networkActivityHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000e1eb6b
- (id)mapItemForLocationComparison;	// IMP=0x0010000000e1eb63
- (void)_maps_buildDescriptionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000e1eab2
- (id)debugDescription;	// IMP=0x0010000000e1e866
- (id)description;	// IMP=0x0010000000e1e61a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000e1e5bd
- (id)initWithMapItem:(id)arg1;	// IMP=0x0010000000e1e521
- (id)initWithCorrectedCoordinate:(struct CLLocationCoordinate2D)arg1 mapItem:(id)arg2;	// IMP=0x0010000000e1e477

@end
