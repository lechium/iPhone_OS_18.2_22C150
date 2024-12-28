//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapView, NSMutableArray;

@interface SearchResultsDebugOverlay : NSObject
{
    NSMutableArray *_polygons;	// 8 = 0x8
    MKMapView *_mapView;	// 16 = 0x10
}

+ (id)viewForAnnotation:(id)arg1;	// IMP=0x00400000002efed2
+ (id)rendererWithPolygon:(id)arg1;	// IMP=0x00100000002efe03
- (void).cxx_destruct;	// IMP=0x00200000002eff5c
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) NSMutableArray *polygons; // @synthesize polygons=_polygons;
- (id)annotationTitleWithMapRegion:(id)arg1 title:(id)arg2;	// IMP=0x00100000002efc35
- (id)polygonForMapRegion:(id)arg1 title:(id)arg2;	// IMP=0x00100000002ef9f6
- (void)removeDrawnDebugMapRegions;	// IMP=0x00100000002ef906
- (void)drawDebugMapRegionsWithSearchResults:(id)arg1 suggestedMapRegion:(id)arg2;	// IMP=0x00100000002ef492
- (id)initWithMapView:(id)arg1;	// IMP=0x00100000002ef427

@end
