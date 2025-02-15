//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class GEOMapRegion, GEOMuninViewState, GEOURLCollectionStorage, GEOURLDirectionsOptions, GEOURLLocationQueryItem, MISSING_TYPE, MKMapItem, MKURLContext, NSArray, NSDate, NSDictionary, NSError, NSString, _MKURLHandler;

@protocol _MKURLHandlerDelegate <NSObject>
- (_Bool)URLHandler:(_MKURLHandler *)arg1 initiateOfflineDownloadForRegion:(GEOMapRegion *)arg2 displayName:(NSString *)arg3;
- (MISSING_TYPE *)URLHandler:showReportAProblemWithLocationQuery: /* Error: Ran out of types for this method. */;
- (_Bool)URLHandlerShowReports:(_MKURLHandler *)arg1;
- (_Bool)URLHandlerShowAllCuratedCollections:(_MKURLHandler *)arg1;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 showPublisherWithID:(unsigned long long)arg2 resultProviderID:(int)arg3;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 showCuratedCollectionWithID:(unsigned long long)arg2 resultProviderID:(int)arg3;
- (_Bool)URLHandlerShowMyLocationCard:(_MKURLHandler *)arg1;
- (_Bool)URLHandlerShowParkedCar:(_MKURLHandler *)arg1;
- (_Bool)URLHandlerShowCarDestinations:(_MKURLHandler *)arg1;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 showCollection:(GEOURLCollectionStorage *)arg2;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 enterLookAroundWithLocationQueryItem:(GEOURLLocationQueryItem *)arg2;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 enterLookAroundWithViewState:(GEOMuninViewState *)arg2;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 showFavoritesType:(long long)arg2;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 showLineWithID:(unsigned long long)arg2 name:(NSString *)arg3;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 search:(NSString *)arg2 at:(struct CLLocationCoordinate2D)arg3;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 showMapWithoutPinAt:(struct CLLocationCoordinate2D)arg2;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 showMapItem:(MKMapItem *)arg2 label:(NSString *)arg3 at:(struct CLLocationCoordinate2D)arg4;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 showExternalBusinessID:(NSString *)arg2 ofContentProvider:(NSString *)arg3;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 showMUID:(unsigned long long)arg2 resultProviderID:(int)arg3 coordinate:(struct CLLocationCoordinate2D)arg4 query:(NSString *)arg5;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 showAddress:(NSString *)arg2 label:(NSString *)arg3;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 showAddressByCNContactIdentifier:(NSString *)arg2 addressIdentifier:(NSString *)arg3;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 showAddressByRecordID:(NSString *)arg2 addressID:(NSString *)arg3;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 showDirectionsFrom:(NSString *)arg2 toDestinations:(NSArray *)arg3 using:(unsigned long long)arg4 directionsOptions:(GEOURLDirectionsOptions *)arg5;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 showDirectionsFrom:(NSString *)arg2 to:(NSString *)arg3 using:(unsigned long long)arg4 muid:(unsigned long long)arg5 providerId:(int)arg6 showLabel:(NSString *)arg7 directionsOptions:(GEOURLDirectionsOptions *)arg8;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 showDirectionsFrom:(NSString *)arg2 to:(NSString *)arg3 using:(unsigned long long)arg4 directionsOptions:(GEOURLDirectionsOptions *)arg5;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 setContentProvider:(NSString *)arg2;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 setShowTraffic:(_Bool)arg2;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 setUserTrackingMode:(long long)arg2;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 setRegionWithCenter:(struct CLLocationCoordinate2D)arg2;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 setRegionWithCenterAndCamera:(struct CLLocationCoordinate2D)arg2 zoomLevel:(double)arg3 pitch:(double)arg4 yaw:(double)arg5;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 setRegionWithCenterAndCamera:(struct CLLocationCoordinate2D)arg2 altitude:(double)arg3 pitch:(double)arg4 yaw:(double)arg5;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 setRegionWithCenter:(struct CLLocationCoordinate2D)arg2 altitude:(double)arg3;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 setRegionWithCenter:(struct CLLocationCoordinate2D)arg2 zoomLevel:(double)arg3;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 setRegion:(CDStruct_b7cb895d)arg2;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 setMapType:(unsigned long long)arg2;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 setSchemeForCapture:(NSString *)arg2 sourceApplication:(NSString *)arg3 isLaunchedFromTTL:(_Bool)arg4 ttlEventTime:(NSDate *)arg5;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 launchWithOptions:(NSDictionary *)arg2;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 launchIntoPhotoThumbnailGalleryForMapItem:(MKMapItem *)arg2 albumIndex:(unsigned long long)arg3 options:(NSDictionary *)arg4 context:(MKURLContext *)arg5;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 launchIntoTableBookingForMapItem:(MKMapItem *)arg2 options:(NSDictionary *)arg3 context:(MKURLContext *)arg4;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 launchIntoSearchWithMapItems:(NSArray *)arg2 options:(NSDictionary *)arg3 context:(MKURLContext *)arg4;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 launchIntoShowMapItems:(NSArray *)arg2 options:(NSDictionary *)arg3 context:(MKURLContext *)arg4;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 launchIntoRAPForMapItem:(MKMapItem *)arg2 options:(NSDictionary *)arg3 context:(MKURLContext *)arg4;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 launchIntoDirectionsWithMapItems:(NSArray *)arg2 options:(NSDictionary *)arg3 context:(MKURLContext *)arg4;

@optional
- (void)URLHandler:(_MKURLHandler *)arg1 didFinishAsynchronousHandlingWithError:(NSError *)arg2;
- (void)URLHandlerWillStartAsynchronousHandling:(_MKURLHandler *)arg1;
- (_Bool)URLHandlerShouldPerformForwardGeocoding:(_MKURLHandler *)arg1;
- (_Bool)URLHandlerShouldPerformReverseGeocoding:(_MKURLHandler *)arg1;
- (_Bool)URLHandlerShouldPerformRefinementRequest:(_MKURLHandler *)arg1;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 showLabel:(NSString *)arg2 at:(struct CLLocationCoordinate2D)arg3;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 showAddress:(NSString *)arg2 label:(NSString *)arg3 at:(struct CLLocationCoordinate2D)arg4;
- (_Bool)URLHandler:(_MKURLHandler *)arg1 launchIntoTesterWithParam:(id)arg2;
@end

