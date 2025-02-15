//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEOLocationShifter, MKMapView, NSMapTable, NSMutableArray;

@interface NavigationDebugAnnotationsProvider : NSObject
{
    MKMapView *_mapView;	// 8 = 0x8
    GEOLocationShifter *_locationShifter;	// 16 = 0x10
    GEOComposedRoute *_route;	// 24 = 0x18
    NSMapTable *_renderersForOverlays;	// 32 = 0x20
    NSMapTable *_stepAndManeuverOverlays;	// 40 = 0x28
    NSMutableArray *_userLocationHistory;	// 48 = 0x30
    NSMutableArray *_rawUserLocationHistory;	// 56 = 0x38
    NSMutableArray *_matchedUserLocationHistory;	// 64 = 0x40
    NSMutableArray *_arrivalRegionChangedListeners;	// 72 = 0x48
    long long _userLocationMarkerMode;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000bc14d2
@property(nonatomic) long long userLocationMarkerMode; // @synthesize userLocationMarkerMode=_userLocationMarkerMode;
- (void)_addArrivalRegionOverlay:(id)arg1 fillColor:(id)arg2 strokeColor:(id)arg3 lineWidth:(double)arg4;	// IMP=0x0010000000bc129c
- (void)_updateArrivalOverlaysWithRoute:(id)arg1;	// IMP=0x0010000000bc0585
- (void)_clearStepAndManeuverOverlays;	// IMP=0x0010000000bc04f6
- (void)_addStepOrManeuverOverlayForCoordinate:(CDStruct_071ac149)arg1 color:(id)arg2;	// IMP=0x0010000000bc0405
- (void)_updateStepAndManeuverOverlaysWithRoute:(id)arg1;	// IMP=0x0010000000bbff22
- (void)_clearDebugHistoryAnnotations;	// IMP=0x0010000000bbfb58
- (void)_clearAllDebugAnnotations;	// IMP=0x0010000000bbfb46
- (void)_addLocationAnnotation:(id)arg1 history:(id)arg2;	// IMP=0x0010000000bbf9f4
- (void)_addDebugLocationAnnotationMatchedLocation:(id)arg1;	// IMP=0x0010000000bbf507
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;	// IMP=0x0010000000bbf474
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;	// IMP=0x0010000000bbf1f6
- (void)clearAllAnnotationsAndOverlays;	// IMP=0x0010000000bbf150
- (void)updateWithRoute:(id)arg1;	// IMP=0x0010000000bbf0ee
- (void)updateWithLocation:(id)arg1;	// IMP=0x0010000000bbf0dc
- (void)dealloc;	// IMP=0x0010000000bbef90
- (id)initWithMapView:(id)arg1;	// IMP=0x0010000000bbeae4

@end

