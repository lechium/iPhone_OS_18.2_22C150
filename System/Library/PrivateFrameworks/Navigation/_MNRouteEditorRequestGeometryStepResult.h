//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEODirectionsError, GEODirectionsRequest, NSError;

__attribute__((visibility("hidden")))
@interface _MNRouteEditorRequestGeometryStepResult : NSObject
{
    GEOComposedRoute *_route;	// 8 = 0x8
    GEODirectionsRequest *_directionsRequest;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    GEODirectionsError *_directionsError;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000145b2
@property(retain, nonatomic) GEODirectionsError *directionsError; // @synthesize directionsError=_directionsError;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) GEODirectionsRequest *directionsRequest; // @synthesize directionsRequest=_directionsRequest;
@property(retain, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;

@end
