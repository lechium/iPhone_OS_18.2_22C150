//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedWaypoint, NSArray;

@interface WaypointSet : NSObject
{
    _Bool _areAllValidWaypoints;	// 8 = 0x8
    NSArray *_waypointsOrNull;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000025b40b
@property(readonly, copy, nonatomic) NSArray *waypointsOrNull; // @synthesize waypointsOrNull=_waypointsOrNull;
@property(readonly, nonatomic) _Bool areAllValidWaypoints; // @synthesize areAllValidWaypoints=_areAllValidWaypoints;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x001000000025b3e2
- (unsigned long long)hash;	// IMP=0x001000000025b3cc
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000025b2bb
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x001000000025b200
@property(readonly, copy, nonatomic) GEOComposedWaypoint *destination;
@property(readonly, copy, nonatomic) GEOComposedWaypoint *origin;
- (id)waypointAtIndex:(unsigned long long)arg1;	// IMP=0x001000000025b0a2
- (id)initWithWaypoints:(id)arg1;	// IMP=0x001000000025aeda

@end

