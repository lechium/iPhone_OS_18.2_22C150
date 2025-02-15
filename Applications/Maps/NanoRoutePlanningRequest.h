//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, GEOAutomobileOptions, GEOCompanionRouteContext, GEOCyclingOptions, GEOMapServiceTraits, GEOTransitOptions, GEOWalkingOptions, NSArray, NSDate, NSString, NanoDirectionWaypoint;

@interface NanoRoutePlanningRequest : NSObject
{
    _Bool _startNavigationAutomatically;	// 8 = 0x8
    int _transportType;	// 12 = 0xc
    GEOApplicationAuditToken *_auditToken;	// 16 = 0x10
    GEOCompanionRouteContext *_companionRouteContext;	// 24 = 0x18
    unsigned long long _preferredMode;	// 32 = 0x20
    NSArray *_waypoints;	// 40 = 0x28
    unsigned long long _maximumNumberOfRoutes;	// 48 = 0x30
    GEOMapServiceTraits *_traits;	// 56 = 0x38
    NSDate *_departureDate;	// 64 = 0x40
    NSDate *_arrivalDate;	// 72 = 0x48
    GEOAutomobileOptions *_automobileOptions;	// 80 = 0x50
    GEOTransitOptions *_transitOptions;	// 88 = 0x58
    GEOWalkingOptions *_walkingOptions;	// 96 = 0x60
    GEOCyclingOptions *_cyclingOptions;	// 104 = 0x68
    NSString *_tracePath;	// 112 = 0x70
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000007e0c61
+ (id)requestWithTraceAtPath:(id)arg1;	// IMP=0x00100000007e085f
+ (id)requestForPlaceholderDirections;	// IMP=0x00100000007e0575
+ (id)requestForDirectionsWithCompanionRouteDetails:(id)arg1 companionRouteContext:(id)arg2;	// IMP=0x00100000007e03fa
+ (id)requestForDirectionsToCustomRoute:(id)arg1 currentLocation:(id)arg2 companionRouteContext:(id)arg3;	// IMP=0x00100000007e0240
+ (id)requestWithWaypoints:(id)arg1 viaTransportType:(int)arg2 traits:(id)arg3 companionRouteContext:(id)arg4;	// IMP=0x00100000007e0142
- (void).cxx_destruct;	// IMP=0x00200000007e1751
@property(copy, nonatomic) NSString *tracePath; // @synthesize tracePath=_tracePath;
@property(retain, nonatomic) GEOCyclingOptions *cyclingOptions; // @synthesize cyclingOptions=_cyclingOptions;
@property(retain, nonatomic) GEOWalkingOptions *walkingOptions; // @synthesize walkingOptions=_walkingOptions;
@property(retain, nonatomic) GEOTransitOptions *transitOptions; // @synthesize transitOptions=_transitOptions;
@property(retain, nonatomic) GEOAutomobileOptions *automobileOptions; // @synthesize automobileOptions=_automobileOptions;
@property(retain, nonatomic) NSDate *arrivalDate; // @synthesize arrivalDate=_arrivalDate;
@property(retain, nonatomic) NSDate *departureDate; // @synthesize departureDate=_departureDate;
@property(nonatomic) _Bool startNavigationAutomatically; // @synthesize startNavigationAutomatically=_startNavigationAutomatically;
@property(copy, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(nonatomic) unsigned long long maximumNumberOfRoutes; // @synthesize maximumNumberOfRoutes=_maximumNumberOfRoutes;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(retain, nonatomic) NSArray *waypoints; // @synthesize waypoints=_waypoints;
@property(nonatomic) unsigned long long preferredMode; // @synthesize preferredMode=_preferredMode;
@property(retain, nonatomic) GEOCompanionRouteContext *companionRouteContext; // @synthesize companionRouteContext=_companionRouteContext;
@property(readonly, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
- (id)debugDescription;	// IMP=0x00100000007e13b9
- (id)description;	// IMP=0x00100000007e1289
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000007e107d
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000007e0c69
- (void)_populateCopy:(id)arg1;	// IMP=0x00100000007e0b8e
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000007e0b5a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000007e0b26
- (id)snapshot;	// IMP=0x00100000007e07dd
@property(readonly, nonatomic) int resolvedTransportType;
@property(readonly, nonatomic) NanoDirectionWaypoint *destinationWaypoint;
@property(readonly, nonatomic) NanoDirectionWaypoint *originWaypoint;
- (id)requestedCompanionRouteDetails;	// IMP=0x00100000007e05c6
- (id)init;	// IMP=0x00100000007e0010
- (void)_addTimepointIfNeededToRouteAttributes:(id)arg1;	// IMP=0x001000000071d58c
- (void)_populateRouteAttributes:(id)arg1 forTransportType:(int)arg2;	// IMP=0x001000000071d453
- (id)routeAttributes;	// IMP=0x001000000071d3f0

@end

