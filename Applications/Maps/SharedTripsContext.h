//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSharedNavState, MISSING_TYPE, MKMapView, MapCameraController, NSArray, NSString, PersonalizedItemManager, RouteAnnotationsController, SearchPinsManager, SharedTripsAnnotationsController;

@interface SharedTripsContext : NSObject
{
    NSString *_selectedTripID;	// 8 = 0x8
    MapCameraController *_cameraController;	// 16 = 0x10
    MKMapView *_mapView;	// 24 = 0x18
    PersonalizedItemManager *_personalizedItemManager;	// 32 = 0x20
    RouteAnnotationsController *_routeAnnotationsController;	// 40 = 0x28
    SharedTripsAnnotationsController *_sharedTripsAnnotationsController;	// 48 = 0x30
    SearchPinsManager *_searchPinsManager;	// 56 = 0x38
    NSArray *_sharedTrips;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000b5c5f4
@property(readonly, nonatomic) NSArray *sharedTrips; // @synthesize sharedTrips=_sharedTrips;
@property(readonly, nonatomic) SearchPinsManager *searchPinsManager; // @synthesize searchPinsManager=_searchPinsManager;
@property(readonly, nonatomic) SharedTripsAnnotationsController *sharedTripsAnnotationsController; // @synthesize sharedTripsAnnotationsController=_sharedTripsAnnotationsController;
@property(readonly, nonatomic) RouteAnnotationsController *routeAnnotationsController; // @synthesize routeAnnotationsController=_routeAnnotationsController;
@property(readonly, nonatomic) PersonalizedItemManager *personalizedItemManager; // @synthesize personalizedItemManager=_personalizedItemManager;
@property(readonly, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(readonly, nonatomic) MapCameraController *cameraController; // @synthesize cameraController=_cameraController;
- (void)sharedTripService:(id)arg1 didUpdateReachedDestinationForSharedTrip:(id)arg2;	// IMP=0x0010000000b5c59c
- (void)sharedTripService:(id)arg1 didUpdateClosedTrip:(id)arg2;	// IMP=0x0010000000b5c58a
- (void)sharedTripService:(id)arg1 didRemoveSharedTrip:(id)arg2;	// IMP=0x0010000000b5c4da
- (void)sharedTripService:(id)arg1 didUpdateDestinationForSharedTrip:(id)arg2;	// IMP=0x0010000000b5c4c8
- (void)sharedTripService:(id)arg1 didUpdateETAForSharedTrip:(id)arg2;	// IMP=0x0010000000b5c4b6
- (void)sharedTripService:(id)arg1 didUpdateRouteForSharedTrip:(id)arg2;	// IMP=0x0010000000b5c4a4
- (void)sharedTripService:(id)arg1 didReceiveSharedTrip:(id)arg2;	// IMP=0x0010000000b5c492
- (void)sharedTripServiceDidUpdateReceivingAvailability:(id)arg1;	// IMP=0x0010000000b5c480
- (void)presentErrorForUnsupportedProtocolOrTransportWithTrip:(id)arg1;	// IMP=0x0010000000b5c46b
- (void)presentErrorForChinaTrip:(id)arg1;	// IMP=0x0010000000b5c456
- (void)presentDetailsForSelectedTrip;	// IMP=0x0010000000b5c441
@property(retain, nonatomic) GEOSharedNavState *selectedTrip;
- (void)_updateSharedTrips;	// IMP=0x0010000000b5b9b3
- (MISSING_TYPE *)_updateEverything;	// IMP=0x0010000000b5b92f
- (void)mapView:(id)arg1 willStartRespondingToGesture:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000b5b8f0
- (_Bool)usesDefaultTransitions;	// IMP=0x0010000000b5b8e8
- (void)dismiss;	// IMP=0x0010000000b5b8e2
- (void)resignCurrent:(_Bool)arg1;	// IMP=0x0010000000b5b85d
- (void)becomeCurrent:(_Bool)arg1;	// IMP=0x0010000000b5b6d8
- (void)recenterOnRouteAnimated:(_Bool)arg1;	// IMP=0x0010000000b5b68e
- (_Bool)shouldShowRoute;	// IMP=0x0010000000b5b61b
- (_Bool)showsMapView;	// IMP=0x0010000000b5b613
- (void)dealloc;	// IMP=0x0010000000b5b561
- (id)initWithInitialSelectedSharedTrip:(id)arg1;	// IMP=0x0010000000b5b438
- (id)init;	// IMP=0x0010000000b5b33b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

