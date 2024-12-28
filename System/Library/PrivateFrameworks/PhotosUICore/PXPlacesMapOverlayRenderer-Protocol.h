//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXPlacesMapRenderer-Protocol.h>

@class MKOverlayRenderer, PXPlacesMapView;
@protocol MKOverlay, PXPlacesGeotaggedItemDataSource, PXPlacesMapLayoutItem;

@protocol PXPlacesMapOverlayRenderer <PXPlacesMapRenderer>
@property __weak id <PXPlacesGeotaggedItemDataSource> dataSource;
- (id <MKOverlay>)overlayForLayoutItem:(id <PXPlacesMapLayoutItem>)arg1;
- (MKOverlayRenderer *)rendererForOverlay:(id <MKOverlay>)arg1 andMapView:(PXPlacesMapView *)arg2;
@end
