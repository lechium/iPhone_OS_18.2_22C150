//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC7remindd17RDLocationManager : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *q_locationManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000004cf410
- (id)init;	// IMP=0x00100000004cf3b0
- (void)locationManagerDidChangeAuthorization:(id)arg1;	// IMP=0x00100000004cfc50
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;	// IMP=0x00100000004cf970
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00100000004cf900
- (void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;	// IMP=0x00100000004cf890
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;	// IMP=0x00100000004cf7b0
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;	// IMP=0x00100000004cf480

@end
