//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOLocation, GEOMapFeatureAccess, GEOMapFeatureRoad, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GEORoadConnectivityPenalty : NSObject
{
    GEOLocation *_location;	// 8 = 0x8
    GEOMapFeatureRoad *_originRoad;	// 16 = 0x10
    NSMutableDictionary *_roadIntersections;	// 24 = 0x18
    GEOMapFeatureAccess *_mapFeatureAccess;	// 32 = 0x20
    unsigned long long _maxDepthForRoadConnectivity;	// 40 = 0x28
    _Bool _completedConnectivityMap;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000078eba3
@property(retain, nonatomic) NSMutableDictionary *roadIntersections; // @synthesize roadIntersections=_roadIntersections;
- (double)penaltyForCandidate:(id)arg1;	// IMP=0x000000000078eb16
- (unsigned long long)shortestLengthToRoad:(id)arg1;	// IMP=0x000000000078ea03
@property(readonly, nonatomic) GEOMapFeatureRoad *originRoad;
- (void)_addRoadsFromOriginRoad:(id)arg1 currentDepth:(unsigned long long)arg2;	// IMP=0x000000000078e5ae
- (void)_initConnectivityMap;	// IMP=0x000000000078e504
- (id)initWithOriginRoad:(id)arg1;	// IMP=0x000000000078e44f
- (id)init;	// IMP=0x000000000078e425

@end
