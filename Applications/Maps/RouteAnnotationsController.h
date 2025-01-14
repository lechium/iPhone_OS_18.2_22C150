//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapView, MKRouteContextBuilder, NSMutableArray, NSMutableDictionary, NSString, RouteAnnotationsConfiguration, RouteMarkerFormatterController, RouteTrafficFeatureCalculator, RouteTrafficFeaturesUpdater, VKPolylineGroupOverlay;
@protocol OS_dispatch_queue;

@interface RouteAnnotationsController : NSObject
{
    NSObject<OS_dispatch_queue> *_routeContextQueue;	// 8 = 0x8
    MKRouteContextBuilder *_routeContextBuilder;	// 16 = 0x10
    RouteAnnotationsConfiguration *_configuration;	// 24 = 0x18
    MKMapView *_mapView;	// 32 = 0x20
    RouteTrafficFeatureCalculator *_routeTrafficFeatureCalculator;	// 40 = 0x28
    RouteTrafficFeaturesUpdater *_trafficFeaturesUpdater;	// 48 = 0x30
    VKPolylineGroupOverlay *_routesGroupOverlay;	// 56 = 0x38
    RouteMarkerFormatterController *_routeMarkerFormatterController;	// 64 = 0x40
    NSMutableDictionary *_transitVehicleAnnotationsByTripID;	// 72 = 0x48
    NSMutableArray *_annotationTextUpdaters;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000999a2e
@property(retain, nonatomic) NSMutableArray *annotationTextUpdaters; // @synthesize annotationTextUpdaters=_annotationTextUpdaters;
@property(retain, nonatomic) NSMutableDictionary *transitVehicleAnnotationsByTripID; // @synthesize transitVehicleAnnotationsByTripID=_transitVehicleAnnotationsByTripID;
@property(retain, nonatomic) RouteMarkerFormatterController *routeMarkerFormatterController; // @synthesize routeMarkerFormatterController=_routeMarkerFormatterController;
@property(retain, nonatomic) VKPolylineGroupOverlay *routesGroupOverlay; // @synthesize routesGroupOverlay=_routesGroupOverlay;
@property(retain, nonatomic) RouteTrafficFeaturesUpdater *trafficFeaturesUpdater; // @synthesize trafficFeaturesUpdater=_trafficFeaturesUpdater;
@property(retain, nonatomic) RouteTrafficFeatureCalculator *routeTrafficFeatureCalculator; // @synthesize routeTrafficFeatureCalculator=_routeTrafficFeatureCalculator;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
- (void)incidentsStorageManagerDidUpdateVendorIncidentFeatures;	// IMP=0x0010000000999984
- (void)incidentsSourceManagerDidUpdate;	// IMP=0x0010000000999972
- (void)composedRoute:(id)arg1 didUpdateTrafficIncidentsOnRoute:(id)arg2;	// IMP=0x00100000009992e3
- (void)composedRoute:(id)arg1 changedSelectedRideInClusteredSegment:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;	// IMP=0x0010000000999174
- (void)composedRoute:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3;	// IMP=0x001000000099916e
- (void)composedRoute:(id)arg1 appliedTransitRouteUpdates:(id)arg2;	// IMP=0x0010000000999168
- (void)composedRouteUpdatedSnappedPaths:(id)arg1;	// IMP=0x0010000000999162
- (void)routeMarkerFormatterController:(id)arg1 didUpdateMarkerInfoForRoutes:(id)arg2;	// IMP=0x0010000000999036
- (void)updateMatchedLocation:(id)arg1;	// IMP=0x0010000000998bf0
- (CDStruct_02837cd9)mapRectForRouteRemainingAtLocation:(id)arg1;	// IMP=0x00100000009987b0
- (void)_clearStaleVehiclePositionAnnotations;	// IMP=0x0010000000998431
- (void)_updateAnnotationForVehiclePosition:(id)arg1;	// IMP=0x00100000009982ae
- (void)_updateRouteOverlayForRouteIndex:(unsigned long long)arg1;	// IMP=0x0010000000997a42
- (void)_updateWaypointCaptions;	// IMP=0x0010000000997a2c
- (void)_updateTransitVehiclePositionAnnotations;	// IMP=0x001000000099779b
- (void)_continueUpdateTrafficWithInitialTrafficFeatures:(id)arg1 sharedTrafficFeatures:(id)arg2 routes:(id)arg3 includeAlternateRoutes:(_Bool)arg4;	// IMP=0x0010000000996f6b
- (void)_updateTrafficWithInitialTrafficFeatures:(id)arg1;	// IMP=0x0010000000996bf7
- (void)_updateTrafficFeatures;	// IMP=0x00100000009965e8
- (void)_updateRouteMarkerForComposedRoute:(id)arg1 inContext:(id)arg2;	// IMP=0x0010000000996001
- (void)_updateRouteMarkersInContext:(id)arg1;	// IMP=0x0010000000995e79
- (void)_updateMapViewRouteContextForced:(_Bool)arg1 withFinishedHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000099461d
- (void)_updateFocusedOverlayInGroupOverlay;	// IMP=0x0010000000994293
- (void)_updateSelectedOverlayInGroupOverlay;	// IMP=0x0010000000993de6
- (void)_updateOverlaysInGroupOverlay;	// IMP=0x0010000000992c4f
@property(copy, nonatomic) RouteAnnotationsConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)updateConfigurationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000991c54
- (void)_showRouteTrafficPreferenceChanged;	// IMP=0x0010000000991bc6
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000991945
- (id)_routeContextBuilder;	// IMP=0x001000000099190a
- (void)dealloc;	// IMP=0x0010000000990d6e
- (id)init;	// IMP=0x0010000000990b1a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

