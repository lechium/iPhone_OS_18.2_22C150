//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedGeometryRoutePersistentData, GEOComposedWaypoint, GEOLocation, NSString;
@protocol GEOMapItem, GEOMapServiceTicket;

@interface NanoDirectionWaypoint : NSObject
{
    id <GEOMapServiceTicket> _refinementTicket;	// 8 = 0x8
    _Bool _currentLocation;	// 16 = 0x10
    int _providerID;	// 20 = 0x14
    GEOLocation *_location;	// 24 = 0x18
    id <GEOMapItem> _geoMapItem;	// 32 = 0x20
    NSString *_searchString;	// 40 = 0x28
    unsigned long long _muid;	// 48 = 0x30
    NSString *_findMyHandleID;	// 56 = 0x38
    GEOComposedGeometryRoutePersistentData *_destinationRouteData;	// 64 = 0x40
    NSString *_name;	// 72 = 0x48
    GEOComposedWaypoint *_composedWaypoint;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000001e08a
+ (id)directionWaypointWithLabel:(id)arg1 muid:(unsigned long long)arg2 providerID:(int)arg3;	// IMP=0x001000000001d123
+ (id)directionWaypointWithSearchString:(id)arg1;	// IMP=0x001000000001d0da
+ (id)directionWaypointWithGEOMapItem:(id)arg1;	// IMP=0x001000000001d043
+ (id)directionWaypointForLocation:(id)arg1 findMyHandleID:(id)arg2;	// IMP=0x001000000001cfa3
+ (id)directionWaypointForLocation:(id)arg1;	// IMP=0x001000000001cf5a
+ (id)directionWaypointForCurrentLocation:(id)arg1;	// IMP=0x001000000001cef2
+ (id)directionWaypointForComposedWaypoint:(id)arg1;	// IMP=0x001000000001cd26
+ (id)directionWaypointToCustomRoute:(id)arg1;	// IMP=0x001000000001cc51
+ (id)directionWaypointForCompanionWaypoint:(id)arg1;	// IMP=0x001000000001ca2e
- (void).cxx_destruct;	// IMP=0x002000000001ec3d
@property(retain, nonatomic) GEOComposedWaypoint *composedWaypoint; // @synthesize composedWaypoint=_composedWaypoint;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) GEOComposedGeometryRoutePersistentData *destinationRouteData; // @synthesize destinationRouteData=_destinationRouteData;
@property(retain, nonatomic) NSString *findMyHandleID; // @synthesize findMyHandleID=_findMyHandleID;
@property(nonatomic) int providerID; // @synthesize providerID=_providerID;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain, nonatomic) id <GEOMapItem> geoMapItem; // @synthesize geoMapItem=_geoMapItem;
@property(retain, nonatomic) GEOLocation *location; // @synthesize location=_location;
@property(nonatomic, getter=isCurrentLocation) _Bool currentLocation; // @synthesize currentLocation=_currentLocation;
- (id)debugDescription;	// IMP=0x001000000001e830
- (id)description;	// IMP=0x001000000001e4e8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000001e337
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000001e092
- (void)cancelRefinement;	// IMP=0x001000000001e059
- (void)refineWithTraits:(id)arg1 auditToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001d4e1
- (_Bool)isValid;	// IMP=0x001000000001d338
- (id)companionWaypoint;	// IMP=0x001000000001eca5

@end

