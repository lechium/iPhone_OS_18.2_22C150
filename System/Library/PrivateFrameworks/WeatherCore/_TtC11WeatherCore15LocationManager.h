//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC11WeatherCore15LocationManager : NSObject
{
    MISSING_TYPE *locationManager;	// 8 = 0x8
    MISSING_TYPE *isUpdatingLocation;	// 16 = 0x10
    MISSING_TYPE *hasReducedLocationUpdates;	// 17 = 0x11
    MISSING_TYPE *_firstRevGeoComplete;	// 24 = 0x18
    MISSING_TYPE *logger;	// 32 = 0x20
    MISSING_TYPE *_locationUpdateSignpostID;	// 40 = 0x28
    MISSING_TYPE *_authorizationSignpostID;	// 48 = 0x30
    MISSING_TYPE *observers;	// 56 = 0x38
    MISSING_TYPE *lock;	// 64 = 0x40
    MISSING_TYPE *notifyQueue;	// 72 = 0x48
    MISSING_TYPE *locationActivityQueue;	// 80 = 0x50
    MISSING_TYPE *geocodeManager;	// 88 = 0x58
    MISSING_TYPE *locationCacheManager;	// 96 = 0x60
    MISSING_TYPE *_authorizationState;	// 136 = 0x88
    MISSING_TYPE *_currentLocationStatus;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000003e821
- (id)init;	// IMP=0x000000000003e7eb
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x0000000000040346
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000003f4c4
- (void)locationManagerDidChangeAuthorization:(id)arg1;	// IMP=0x000000000003f250

@end

