//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKOverlayRenderer.h>

@class NSMutableDictionary;

@interface RouteTileLoadingDebugOverlayRenderer : MKOverlayRenderer
{
    NSMutableDictionary *_tileTypeToZoomLevels;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000da00bb
- (void)drawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2 inContext:(struct CGContext *)arg3;	// IMP=0x0010000000d9f7ac
- (id)initWithOverlay:(id)arg1;	// IMP=0x0010000000d9f2d5

@end

