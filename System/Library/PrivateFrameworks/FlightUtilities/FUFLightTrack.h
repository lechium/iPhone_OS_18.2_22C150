//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FUFlightLeg, MKGeodesicPolyline;

__attribute__((visibility("hidden")))
@interface FUFLightTrack : NSObject
{
    MKGeodesicPolyline *_polyline;	// 8 = 0x8
    FUFlightLeg *_leg;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000becb
@property(retain) FUFlightLeg *leg; // @synthesize leg=_leg;
@property(retain) MKGeodesicPolyline *polyline; // @synthesize polyline=_polyline;

@end
