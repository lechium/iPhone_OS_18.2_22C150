//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC15SafetyMonitorUI23LocationSearchViewModel : NSObject
{
    MISSING_TYPE *_locationSearchText;	// 0 = 0x0
    MISSING_TYPE *_searchedLocations;	// 0 = 0x0
    MISSING_TYPE *_selectedLocation;	// 0 = 0x0
    MISSING_TYPE *_selectedLocationValidity;	// 0 = 0x0
    MISSING_TYPE *_destinationType;	// 0 = 0x0
    MISSING_TYPE *_selectedFenceSize;	// 0 = 0x0
    MISSING_TYPE *_annotations;	// 0 = 0x0
    MISSING_TYPE *_selectedLocationReverseGeocodeStatus;	// 0 = 0x0
    MISSING_TYPE *cancellableSet;	// 0 = 0x0
    MISSING_TYPE *safetyMonitorManager;	// 0 = 0x0
    MISSING_TYPE *mkLocalSearchCompleter;	// 0 = 0x0
    MISSING_TYPE *locationManager;	// 0 = 0x0
    MISSING_TYPE *_endLocation;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000000acc20
- (id)init;	// IMP=0x00000000000acbc0
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000000ace90
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x00000000000acdf0
- (void)completerDidUpdateResults:(id)arg1;	// IMP=0x00000000000ad5e0

@end

