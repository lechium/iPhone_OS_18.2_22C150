//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOComposedTransitTripRouteStep;

__attribute__((visibility("hidden")))
@interface _GEORouteMatchUpdater_LineProgression
{
    GEOComposedTransitTripRouteStep *_boardStep;	// 56 = 0x38
    GEOComposedTransitTripRouteStep *_alightStep;	// 64 = 0x40
    struct PolylineCoordinate _startRouteCoordinate;	// 72 = 0x48
}

- (id).cxx_construct;	// IMP=0x00000000011de56a
- (void).cxx_destruct;	// IMP=0x00000000011de539
- (unsigned long long)priority;	// IMP=0x00000000011de52e
- (_Bool)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;	// IMP=0x00000000011de00e
- (id)initWithTransitRouteMatcher:(id)arg1 tripSegment:(id)arg2;	// IMP=0x00000000011dde79

@end
