//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface POIShapeFactory : NSObject
{
}

+ (id);	// IMP=0x004000000047b31c
+ (id)composedWaypointPOIShapeWithMapView:(id)arg1 composedWaypoint:(id)arg2;	// IMP=0x001000000047b232
+ (id)customPOIShapeWithMapView:(id)arg1 customFeatureAnnotation:(id)arg2;	// IMP=0x001000000047b1c0
+ (id)userLocationPOIShapeWithMapView:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2;	// IMP=0x001000000047b157
+ (id)userLocationPOIShapeWithMapView:(id)arg1;	// IMP=0x001000000047b0fa

@end
