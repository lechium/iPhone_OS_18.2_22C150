//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedGeometryRoutePersistentData, GEOComposedRoute, MKMapItem, NSString;

@interface SavedRouteWaypointRequest : NSObject
{
    GEOComposedGeometryRoutePersistentData *_routeData;	// 8 = 0x8
    GEOComposedRoute *_route;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000073007f
@property(readonly, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property(readonly, nonatomic) GEOComposedGeometryRoutePersistentData *routeData; // @synthesize routeData=_routeData;
- (void)recordRAPInformation:(id)arg1;	// IMP=0x0010000000730065
- (id)loadComposedWaypointWithTraits:(id)arg1 clientResolvedCompletionHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3 networkActivityHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000072fc5d
- (_Bool)isEquivalentToOtherRequest:(id)arg1;	// IMP=0x001000000072fc02
@property(readonly, nonatomic) NSString *waypointName;
- (id)waypointIconWithScale:(double)arg1;	// IMP=0x001000000072fb1f
@property(readonly, nonatomic) MKMapItem *mapItemForLocationComparison;
@property(readonly, nonatomic) _Bool hasCachedResult;
@property(readonly, nonatomic, getter=isCurrentLocation) _Bool currentLocation;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000072f9ec
- (id)initWithSavedRoute:(id)arg1;	// IMP=0x001000000072f95b
- (id)initWithSavedRouteData:(id)arg1;	// IMP=0x001000000072f899

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
