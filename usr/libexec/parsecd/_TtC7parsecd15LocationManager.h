//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC7parsecd15LocationManager : NSObject
{
    MISSING_TYPE *assembly;	// 8 = 0x8
    MISSING_TYPE *locationService;	// 24 = 0x18
    MISSING_TYPE *updateQueue;	// 40 = 0x28
    MISSING_TYPE *geoCoder;	// 48 = 0x30
    MISSING_TYPE *geoLocation;	// 56 = 0x38
    MISSING_TYPE *lastGeoLocationUpdate;	// 64 = 0x40
    MISSING_TYPE *geoPlacemark;	// 72 = 0x48
    MISSING_TYPE *geoLocationLatLng;	// 80 = 0x50
    MISSING_TYPE *geoLocationAge;	// 0 = 0x0
    MISSING_TYPE *geoLocationSource;	// 2 = 0x2
    MISSING_TYPE *geoClientMetadata;	// 0 = 0x0
    MISSING_TYPE *lookupGeoLocationLatLng;	// 0 = 0x0
    MISSING_TYPE *_locationAuthorizationStatus;	// 0 = 0x0
    MISSING_TYPE *_lastLocationUpdateDate;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0020000000040238
- (id)init;	// IMP=0x0010000000043224
- (void)updateCountryCode:(id)arg1;	// IMP=0x0010000000041b8d
- (void)updateMapsClientMetadata:(id)arg1;	// IMP=0x001000000004155d
- (void)performedSearchNotification:(id)arg1;	// IMP=0x001000000004111c
- (void)bagChangeNotification:(id)arg1;	// IMP=0x0010000000040eac
- (void)dealloc;	// IMP=0x001000000004021b
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0010000000043954
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;	// IMP=0x00100000000435d7
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x001000000004333c

@end
