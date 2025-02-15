//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LookAroundPIPStateMachine, MKLookAroundView, MKMapView, NSHashTable, NSString, VKLabelMarker, VKMuninMarker;
@protocol MKMapServiceTicket, NSObject;

@interface LookAroundPIPDataCoordinatorImpl : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    double _absoluteHeadings[5];	// 16 = 0x10
    double _absoluteHeadingsAverage;	// 56 = 0x38
    double _absoluteHeadingsSum;	// 64 = 0x40
    unsigned long long _filteredHeadingsCount;	// 72 = 0x48
    unsigned long long _filteredHeadingsIndex;	// 80 = 0x50
    double _headingsQuadrants[5];	// 88 = 0x58
    double _headingsQuadrantsSum;	// 128 = 0x80
    _Bool _isMapViewInSyncWithLookAroundView;	// 136 = 0x88
    _Bool _isRotatingMapView;	// 137 = 0x89
    _Bool _isZoomingMapView;	// 138 = 0x8a
    _Bool _isMapViewUserInteractionStarted;	// 139 = 0x8b
    _Bool _isLookAroundViewUserInteractionStarted;	// 140 = 0x8c
    MKMapView *_mapView;	// 144 = 0x90
    MKLookAroundView *_lookAroundView;	// 152 = 0x98
    NSHashTable *_observers;	// 160 = 0xa0
    VKLabelMarker *_labelMarkerToRefine;	// 168 = 0xa8
    id <MKMapServiceTicket> _refineTicket;	// 176 = 0xb0
    id <NSObject> _mapViewDidChangeLookAroundAvailabilityObserver;	// 184 = 0xb8
    id <NSObject> _lookAroundViewDidBecomeAdequatelyDrawnObserver;	// 192 = 0xc0
    LookAroundPIPStateMachine *_stateMachine;	// 200 = 0xc8
    double _lookAroundViewHeading;	// 208 = 0xd0
    double _lastHeading;	// 216 = 0xd8
    struct CLLocationCoordinate2D _lastCoordinate;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x0020000000ce7e41
@property(nonatomic) double lastHeading; // @synthesize lastHeading=_lastHeading;
@property(nonatomic) struct CLLocationCoordinate2D lastCoordinate; // @synthesize lastCoordinate=_lastCoordinate;
- (void);	// IMP=0x0010000000ce7deb
@property(nonatomic) double lookAroundViewHeading; // @synthesize lookAroundViewHeading=_lookAroundViewHeading;
@property(nonatomic) _Bool isLookAroundViewUserInteractionStarted; // @synthesize isLookAroundViewUserInteractionStarted=_isLookAroundViewUserInteractionStarted;
@property(nonatomic) _Bool isMapViewUserInteractionStarted; // @synthesize isMapViewUserInteractionStarted=_isMapViewUserInteractionStarted;
@property(nonatomic) _Bool isZoomingMapView; // @synthesize isZoomingMapView=_isZoomingMapView;
@property(nonatomic) _Bool isRotatingMapView; // @synthesize isRotatingMapView=_isRotatingMapView;
@property(nonatomic) _Bool isMapViewInSyncWithLookAroundView; // @synthesize isMapViewInSyncWithLookAroundView=_isMapViewInSyncWithLookAroundView;
@property(retain, nonatomic) LookAroundPIPStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) id <NSObject> lookAroundViewDidBecomeAdequatelyDrawnObserver; // @synthesize lookAroundViewDidBecomeAdequatelyDrawnObserver=_lookAroundViewDidBecomeAdequatelyDrawnObserver;
@property(retain, nonatomic) id <NSObject> mapViewDidChangeLookAroundAvailabilityObserver; // @synthesize mapViewDidChangeLookAroundAvailabilityObserver=_mapViewDidChangeLookAroundAvailabilityObserver;
@property(retain, nonatomic) id <MKMapServiceTicket> refineTicket; // @synthesize refineTicket=_refineTicket;
@property(retain, nonatomic) VKLabelMarker *labelMarkerToRefine; // @synthesize labelMarkerToRefine=_labelMarkerToRefine;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) MKLookAroundView *lookAroundView; // @synthesize lookAroundView=_lookAroundView;
@property(readonly, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
- (void)_nearestMuninMarkerWithCompleteMarkerHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000ce7bd6
- (void)_didEndMovingLookAroundView:(_Bool)arg1;	// IMP=0x0010000000ce7a26
- (void)_willEndMovingLookAroundView:(_Bool)arg1 shouldZoomIfFinished:(_Bool)arg2;	// IMP=0x0010000000ce763d
- (void)_startMovingLookAroundViewToMapItem:(id)arg1 orMuninMarker:(id)arg2 heading:(double)arg3 shouldZoom:(_Bool)arg4;	// IMP=0x0010000000ce6fa3
- (void)_dispatchSelector:(SEL)arg1 toObserver:(id)arg2;	// IMP=0x0010000000ce6f40
- (SEL)_selectorForObserverEventType:(unsigned long long)arg1;	// IMP=0x0010000000ce6dcc
- (void)_notifyObservers:(unsigned long long)arg1;	// IMP=0x0010000000ce6bc5
- (void)_refineLabelMarker:(id)arg1;	// IMP=0x0010000000ce6622
- (void)_handleMapViewDidResumeIfNeeded:(id)arg1;	// IMP=0x0010000000ce64ba
- (void)_moveLookAroundViewToMapItem:(id)arg1;	// IMP=0x0010000000ce6208
- (void)_moveLookAroundViewToCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x0010000000ce5f0a
- (void)_moveLookAroundViewIfNeeded;	// IMP=0x0010000000ce5e41
- (void)_handleMapView:(id)arg1 didDidChangeLookAroundAvailability:(long long)arg2;	// IMP=0x0010000000ce5cee
- (void)_handleMapViewTap:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x0010000000ce5ae0
- (void)_handleMapViewZoomStop:(id)arg1 zoomGestureType:(long long)arg2 zoomDirection:(long long)arg3;	// IMP=0x0010000000ce5962
- (void)_handleMapViewOneFingerPanWithZoomDirection:(long long)arg1;	// IMP=0x0010000000ce5936
- (void)_handleMapViewPinchWithZoomDirection:(long long)arg1;	// IMP=0x0010000000ce590a
- (void)_handleMapViewRotateStop:(id)arg1;	// IMP=0x0010000000ce57df
- (void)_handleMapViewPanStop:(id)arg1 shouldMoveLookAroundView:(_Bool)arg2;	// IMP=0x0010000000ce55df
- (void)_handleMapViewRotatingIfNeeded:(id)arg1;	// IMP=0x0010000000ce55bd
- (void)_handleMapViewPanningIfNeeded:(id)arg1;	// IMP=0x0010000000ce54dc
- (void)_handleMapViewZoomStart:(id)arg1;	// IMP=0x0010000000ce53c6
- (void)_handleMapViewRotateStart:(id)arg1;	// IMP=0x0010000000ce529b
- (void)_handleMapViewPanStart:(id)arg1;	// IMP=0x0010000000ce5143
- (double)_filteredHeadingWithHeading:(double)arg1;	// IMP=0x0010000000ce4fdb
- (void)_filteredHeadingReset;	// IMP=0x0010000000ce4fae
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000ce4f95
- (void)addObserver:(id)arg1;	// IMP=0x0010000000ce4f7c
- (void)setNeedsLookAroundAvailabilityUpdate;	// IMP=0x0010000000ce4ea9
- (void)synchronizeMapViewIfNeeded;	// IMP=0x0010000000ce4bcd
- (void)setNeedsMapViewSynchronization;	// IMP=0x0010000000ce4b50
- (void)resume;	// IMP=0x0010000000ce4ae2
- (void)pause;	// IMP=0x0010000000ce4a74
- (void)coordinateLookAroundViewDidChangeVisibleRegion:(id)arg1;	// IMP=0x0010000000ce4983
- (void)coordinateLookAroundViewDidStopUserInteraction:(id)arg1;	// IMP=0x0010000000ce4924
- (void)coordinateLookAroundViewDidStartUserInteraction:(id)arg1;	// IMP=0x0010000000ce48c8
- (void)coordinateMapView:(id)arg1 didChangeLookAroundAvailability:(long long)arg2;	// IMP=0x0010000000ce4832
- (void)coordinateMapViewDidChangeVisibleRegion:(id)arg1;	// IMP=0x0010000000ce47b2
- (void)coordinateMapViewRegionDidChange:(id)arg1;	// IMP=0x0010000000ce474f
- (void)coordinateMapView:(id)arg1 willSelectLabelMarker:(id)arg2;	// IMP=0x0010000000ce459a
- (void)coordinateMapViewDidStopUserInteraction:(id)arg1;	// IMP=0x0010000000ce44fc
- (void)coordinateMapView:(id)arg1 didStopRespondingToGesture:(long long)arg2 zoomDirection:(long long)arg3 zoomGestureType:(long long)arg4 didDecelerate:(_Bool)arg5 tiltDirection:(long long)arg6;	// IMP=0x0010000000ce4458
- (void)coordinateMapView:(id)arg1 willStartRespondingToGesture:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000ce43dc
- (void)coordinateMapViewDidStartUserInteraction:(id)arg1;	// IMP=0x0010000000ce42c1
- (void)exitLookAroundPIPAfter:(double)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000ce3edb
- (void)_onSuccessProceedToEnterLookArounPIP:(_Bool)arg1;	// IMP=0x0010000000ce3d32
- (void)_onSuccess:(_Bool)arg1 synchronizeMapViewCenterToLookAroundViewCenterAndContinue:(CDUnknownBlockType)arg2;	// IMP=0x0010000000ce3c0a
- (void)_onSuccess:(_Bool)arg1 waitForLookAroundViewToBecomeAdequatelyDrawnIfNeededAndContinue:(CDUnknownBlockType)arg2;	// IMP=0x0010000000ce387b
- (void)_onSuccess:(_Bool)arg1 setLookAroundViewEntryPointWithMapItem:(id)arg2 orMuninMarker:(id)arg3 andContinue:(CDUnknownBlockType)arg4;	// IMP=0x0010000000ce34fb
- (void)_getMuninMarkerAtCoordinate:(struct CLLocationCoordinate2D)arg1 shouldWait:(_Bool)arg2 andContinue:(CDUnknownBlockType)arg3;	// IMP=0x0010000000ce2fae
- (void)_getEntryMuninMarkerAtCoordinate:(struct CLLocationCoordinate2D)arg1 shouldWait:(_Bool)arg2 andContinue:(CDUnknownBlockType)arg3;	// IMP=0x0010000000ce2f1c
- (void)_getMuninMarkerWithMapViewOrMapItem:(id)arg1 shouldWait:(_Bool)arg2 andContinue:(CDUnknownBlockType)arg3;	// IMP=0x0010000000ce2e49
- (void)_getEntryMuninMarkerWithMapViewOrMapItem:(id)arg1 shouldWait:(_Bool)arg2 andContinue:(CDUnknownBlockType)arg3;	// IMP=0x0010000000ce2d76
- (void)enterLookAroundPIPWithLookAroundView:(id)arg1 mapItem:(id)arg2;	// IMP=0x0010000000ce288a
@property(readonly, nonatomic) _Bool isLookAroundDataAvailable;
@property(readonly, nonatomic) VKMuninMarker *muninMarker;
- (void)_nonselectingTapGestureRecognizerAction:(id)arg1;	// IMP=0x0010000000ce272a
@property(readonly, nonatomic) _Bool isPanningMapView;
- (void)dealloc;	// IMP=0x0010000000ce266c
- (id)initWithMapView:(id)arg1;	// IMP=0x0010000000ce2564

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

