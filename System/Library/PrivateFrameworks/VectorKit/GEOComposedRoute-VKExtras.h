//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOComposedRoute.h>

@interface GEOComposedRoute (VKExtras)
- (CDStruct_071ac149)pointWithAltitudeCorrectionAtIndex:(unsigned long long)arg1;	// IMP=0x00300000004054f0
- (CDStruct_071ac149)pointWithAltitudeCorrectionAtRouteCoordinate:(struct PolylineCoordinate)arg1;	// IMP=0x00300000004054a0
- (void)_applyAltitudeCorrectionIfNecessary:(CDStruct_071ac149 *)arg1;	// IMP=0x00300000004053f0
@property(readonly, nonatomic) _Bool routeRequiresElevationCorrection;
- (_Bool)shouldRequestWGS84Elevations;	// IMP=0x0030000000405300
@end

