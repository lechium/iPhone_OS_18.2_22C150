//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC11ClockPosterP33_80B341479428838F1831E32E38C9D6BF14LocationSource : NSObject
{
    MISSING_TYPE *_isLocationUpdating;	// 8 = 0x8
    MISSING_TYPE *_location;	// 16 = 0x10
    MISSING_TYPE *stream;	// 24 = 0x18
    MISSING_TYPE *distanceFilter;	// 0 = 0x0
    MISSING_TYPE *source;	// 0 = 0x0
    MISSING_TYPE *inUseAssertion;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_locationManager;	// 0 = 0x0
    MISSING_TYPE *locationQueue;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000000c2690
- (id)init;	// IMP=0x00000000000c2630
@property(nonatomic, readonly) NSString *description;
- (void)locationManagerDidChangeAuthorization:(id)arg1;	// IMP=0x00000000000c39d0
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000000c3960
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x00000000000c38d0

@end

