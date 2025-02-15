//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIScreen.h>

@class CARScreenInfo;

@interface UIScreen (CarExtras)
- (id)_car_debugDescription;	// IMP=0x0020000000759f33
@property(readonly, nonatomic) double _car_baselineScaledETATrayPixelHeight;
@property(readonly, nonatomic) double _car_baselineScaledManeuverPixelHeight;
@property(readonly, nonatomic) double _car_baselineScaledManeuverPixelWidth;
- (double)_car_baselineETATrayPointHeight;	// IMP=0x0010000000759e32
- (double)_car_baselineManeuverPointHeight;	// IMP=0x0010000000759dee
- (double)_car_baselineManeuverPointWidth;	// IMP=0x0010000000759daa
- (double)_car_baselineETATrayPixelHeight;	// IMP=0x0010000000759d93
- (double)_car_baselineManeuverPixelHeight;	// IMP=0x0010000000759d7c
- (double)_car_baselineManeuverPixelWidth;	// IMP=0x0010000000759d65
- (double)_car_baselinePixelSize;	// IMP=0x0010000000759d21
- (_Bool)_car_hasDebugPhysicalSizeOverride;	// IMP=0x0010000000759cf0
@property(readonly, nonatomic) _Bool _car_hasScreenInfo;
@property(readonly, nonatomic) struct CGSize _car_physicalSize;
- (struct CGSize)_car_pixelSize;	// IMP=0x0010000000759c09
@property(readonly, nonatomic) CARScreenInfo *_car_screenInfo;
@property(readonly, nonatomic) double _car_dynamicPointScaleValue;
@property(readonly, nonatomic) double _car_dynamicPixelScaleValue;
@property(readonly, nonatomic) double _car_physicalPointSize;
- (double)_car_physicalPixelSize;	// IMP=0x00100000007594bc
@end

