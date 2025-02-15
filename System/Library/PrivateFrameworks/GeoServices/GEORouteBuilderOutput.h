//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRouteCellularCoverage, GEOComposedRouteCoordinateArray, GEOElevationProfile, GEOMapRegion, NSArray;

__attribute__((visibility("hidden")))
@interface GEORouteBuilderOutput : NSObject
{
    GEOComposedRouteCoordinateArray *_coordinatesArray;	// 8 = 0x8
    NSArray *_legs;	// 16 = 0x10
    NSArray *_segments;	// 24 = 0x18
    NSArray *_steps;	// 32 = 0x20
    NSArray *_guidanceEvents;	// 40 = 0x28
    NSArray *_enrouteNotices;	// 48 = 0x30
    NSArray *_visualInfos;	// 56 = 0x38
    NSArray *_visualInfosForRouteNameLabels;	// 64 = 0x40
    NSArray *_pointSections;	// 72 = 0x48
    GEOComposedRouteCellularCoverage *_cellularCoverage;	// 80 = 0x50
    int _elevationModel;	// 88 = 0x58
    GEOMapRegion *_boundingMapRegion;	// 96 = 0x60
    GEOElevationProfile *_elevationProfile;	// 104 = 0x68
    double _distance;	// 112 = 0x70
    _Bool _usesZilch;	// 120 = 0x78
    NSArray *_cameraInfos;	// 128 = 0x80
    unsigned long long _source;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000f0e852
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(nonatomic) int elevationModel; // @synthesize elevationModel=_elevationModel;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(retain, nonatomic) GEOElevationProfile *elevationProfile; // @synthesize elevationProfile=_elevationProfile;
@property(retain, nonatomic) GEOMapRegion *boundingMapRegion; // @synthesize boundingMapRegion=_boundingMapRegion;
@property(retain, nonatomic) NSArray *pointSections; // @synthesize pointSections=_pointSections;
@property(nonatomic) _Bool usesZilch; // @synthesize usesZilch=_usesZilch;
@property(retain, nonatomic) GEOComposedRouteCellularCoverage *cellularCoverage; // @synthesize cellularCoverage=_cellularCoverage;
@property(retain, nonatomic) NSArray *cameraInfos; // @synthesize cameraInfos=_cameraInfos;
@property(retain, nonatomic) NSArray *visualInfosForRouteNameLabels; // @synthesize visualInfosForRouteNameLabels=_visualInfosForRouteNameLabels;
@property(retain, nonatomic) NSArray *visualInfos; // @synthesize visualInfos=_visualInfos;
@property(retain, nonatomic) NSArray *enrouteNotices; // @synthesize enrouteNotices=_enrouteNotices;
@property(retain, nonatomic) NSArray *guidanceEvents; // @synthesize guidanceEvents=_guidanceEvents;
@property(retain, nonatomic) NSArray *steps; // @synthesize steps=_steps;
@property(retain, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(retain, nonatomic) NSArray *legs; // @synthesize legs=_legs;
@property(retain, nonatomic) GEOComposedRouteCoordinateArray *coordinatesArray; // @synthesize coordinatesArray=_coordinatesArray;

@end

