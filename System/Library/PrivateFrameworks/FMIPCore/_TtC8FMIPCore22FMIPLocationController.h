//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC8FMIPCore22FMIPLocationController : NSObject
{
    MISSING_TYPE *locationManager;	// 8 = 0x8
    MISSING_TYPE *locationShifter;	// 16 = 0x10
    MISSING_TYPE *delegate;	// 24 = 0x18
    MISSING_TYPE *locationUpdatingQueue;	// 40 = 0x28
    MISSING_TYPE *currentLocation;	// 48 = 0x30
    MISSING_TYPE *limitedPrecision;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000012bbf0
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x000000000012bb30
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;	// IMP=0x000000000012b6f0
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000012b680
- (id)init;	// IMP=0x000000000012b650

@end

