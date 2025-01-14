//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapView, NSString;

@interface POIShapeUserLocation : NSObject
{
    struct CLLocationCoordinate2D _coordinate;	// 8 = 0x8
    MKMapView *_mapView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000047b789
@property(readonly, nonatomic) __weak MKMapView *mapView; // @synthesize mapView=_mapView;
- (struct CGSize)_size;	// IMP=0x001000000047b756
@property(readonly, nonatomic) struct CGSize estimatedSize;
@property(readonly, nonatomic) struct CGRect currentFrameInMapView;
@property(readonly, nonatomic) struct CLLocationCoordinate2D centerCoordinate;
- (id)initWithMapView:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2;	// IMP=0x001000000047b3db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

