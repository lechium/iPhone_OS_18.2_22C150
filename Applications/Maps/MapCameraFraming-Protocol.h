//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class GEOComposedRoute, GEOMapRegion, HistoryEntryRecentsItem, MKMapCamera, MKMapItem, MKMapView, MNLocation, NSArray, NSNumber, SearchResult, VKLabelMarker;
@protocol POIShape;

@protocol MapCameraFraming <NSObject>
@property(readonly, nonatomic) __weak MKMapView *mapView;
- (CDStruct_02837cd9)mapRectForTripFromLocation:(MNLocation *)arg1 alongRoute:(GEOComposedRoute *)arg2;
- (CDStruct_02837cd9)mapRectApproximatingRouteFromStartPOIShape:(id <POIShape>)arg1 toEndPOIShapes:(NSArray *)arg2;
- (void)restoreRegionForMapSelectionForLabelMarker:(VKLabelMarker *)arg1 edgeInsets:(struct UIEdgeInsets)arg2 completion:(void (^)(_Bool))arg3;
- (void)restoreRegionForMapSelectionWithCamera:(MKMapCamera *)arg1 completion:(void (^)(_Bool))arg2;
- (void)frameMapRect:(CDStruct_02837cd9)arg1 animated:(_Bool)arg2 completion:(void (^)(_Bool))arg3;
- (void)frameSearchResults:(NSArray *)arg1 withResultToSelect:(SearchResult *)arg2 historyItem:(HistoryEntryRecentsItem *)arg3 suggestedMapRegion:(GEOMapRegion *)arg4 minZoom:(NSNumber *)arg5 maxZoom:(NSNumber *)arg6 disableAdditionalViewportPadding:(_Bool)arg7 completion:(void (^)(_Bool, SearchResult *, struct))arg8;
- (void)displayTransitRoute:(GEOComposedRoute *)arg1 boardingStopCoord:(CDStruct_3f2a7a20)arg2 boardingStopIndex:(unsigned long long)arg3 animated:(_Bool)arg4 completion:(void (^)(_Bool))arg5;
- (void)displayMapRegion:(GEOMapRegion *)arg1 animated:(_Bool)arg2 completion:(void (^)(_Bool))arg3;
- (void)frameLabelMarker:(VKLabelMarker *)arg1 edgeInsets:(struct UIEdgeInsets)arg2 minZoom:(NSNumber *)arg3 maxZoom:(NSNumber *)arg4 completion:(void (^)(_Bool))arg5;
- (void)frameMapItem:(MKMapItem *)arg1 animated:(_Bool)arg2 completion:(void (^)(_Bool))arg3;
- (void)frameApproximateRouteFromStartPOIShape:(id <POIShape>)arg1 toEndPOIShapes:(NSArray *)arg2 animated:(_Bool)arg3 completion:(void (^)(_Bool))arg4;
- (void)frameRoutes:(NSArray *)arg1 includeCompassInset:(_Bool)arg2 waypoints:(_Bool)arg3 animated:(_Bool)arg4 completion:(void (^)(_Bool))arg5;
- (void)frameRoutes:(NSArray *)arg1 includeCompassInset:(_Bool)arg2 animated:(_Bool)arg3 completion:(void (^)(_Bool))arg4;
@end

