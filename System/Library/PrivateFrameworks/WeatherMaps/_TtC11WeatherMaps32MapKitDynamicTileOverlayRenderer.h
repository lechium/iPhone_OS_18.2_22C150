//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/_MKDynamicTileOverlayRenderer.h>

@class MISSING_TYPE;

@interface _TtC11WeatherMaps32MapKitDynamicTileOverlayRenderer : _MKDynamicTileOverlayRenderer
{
    MISSING_TYPE *dynamicOverlay;	// 8 = 0x8
    MISSING_TYPE *overlayRenderer;	// 16 = 0x10
    MISSING_TYPE *signposter;	// 0 = 0x0
    MISSING_TYPE *defaultFramerate;	// 0 = 0x0
    MISSING_TYPE *renderTimer;	// 0 = 0x0
    MISSING_TYPE *previousVisibleTiles;	// 0 = 0x0
    MISSING_TYPE *delegate;	// 0 = 0x0
    MISSING_TYPE *ioSurfaceRefCache;	// 0 = 0x0
    MISSING_TYPE *fallbackBehaviourEnabled;	// 0 = 0x0
    MISSING_TYPE *renderToMetalTexture;	// 0 = 0x0
    MISSING_TYPE *useIOSurfaceCache;	// 0 = 0x0
    MISSING_TYPE *animationPosition;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *isPlaying;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000085732
- (id)initWithOverlay:(id)arg1;	// IMP=0x00000000000856f5
- (id)initWithTileOverlay:(id)arg1;	// IMP=0x00000000000856c1
- (long long)estimatedCostForTile:(id)arg1;	// IMP=0x000000000008560a
- (void)didExitTile:(CDStruct_68723fc0)arg1;	// IMP=0x0000000000085574
- (void)onVisibleTiles:(const CDStruct_68723fc0 *)arg1 count:(long long)arg2;	// IMP=0x00000000000854da
- (_Bool)canDrawKey:(CDStruct_68723fc0)arg1 withTile:(id)arg2;	// IMP=0x0000000000084ac0
- (_Bool)isFallbackEnabled;	// IMP=0x0000000000084943
@property(nonatomic, readonly) _Bool useMetalTexture;
- (void)drawTileAtPath:(CDStruct_68723fc0)arg1 withTile:(id)arg2 inTexture:(id)arg3 withTimestamp:(double)arg4 withTileScale:(float)arg5;	// IMP=0x0000000000084875
- (void)drawTileAtPath:(CDStruct_68723fc0)arg1 withTile:(id)arg2 inIOSurface:(struct __IOSurface *)arg3 withTimestamp:(double)arg4;	// IMP=0x00000000000843b8

// Remaining properties
@property(nonatomic, readonly) _Bool fallbackEnabled;

@end

