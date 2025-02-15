//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEOComposedRouteStep, UIColor;

@interface RouteStepCalloutCell : NSObject
{
    GEOComposedRoute *_route;	// 8 = 0x8
    unsigned long long _stepIndex;	// 16 = 0x10
    unsigned long long _numberOfAttemptedRotations;	// 24 = 0x18
    struct CGRect _frame;	// 32 = 0x20
    struct CGRect _contentRect;	// 64 = 0x40
    UIColor *_calloutTextColor;	// 96 = 0x60
    unsigned int _calloutType;	// 104 = 0x68
    struct CGAffineTransform _t;	// 112 = 0x70
}

+ (id)cellWithRoute:(id)arg1 stepIndex:(unsigned long long)arg2 type:(unsigned int)arg3;	// IMP=0x004000000052118c
- (void).cxx_destruct;	// IMP=0x0020000000521928
@property(readonly, nonatomic) struct CGRect contentRect; // @synthesize contentRect=_contentRect;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) unsigned long long stepIndex; // @synthesize stepIndex=_stepIndex;
@property(retain, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
- (void)drawInRect:(struct CGRect)arg1;	// IMP=0x00100000005216fc
- (_Bool)rotate;	// IMP=0x0010000000521683
- (_Bool)shouldRotateWithCallout:(id)arg1;	// IMP=0x0010000000521620
- (struct CGRect)_frameForType:(unsigned int)arg1;	// IMP=0x001000000052138d
@property(nonatomic) struct CGAffineTransform transform; // @dynamic transform;
@property(readonly, nonatomic) GEOComposedRouteStep *routeStep; // @dynamic routeStep;
- (id)initWithRoute:(id)arg1 stepIndex:(unsigned long long)arg2 type:(unsigned int)arg3;	// IMP=0x00100000005211e9

@end

