//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PUTilingView;

__attribute__((visibility("hidden")))
@interface PUTileHider : NSObject
{
    PUTilingView *_tilingView;	// 8 = 0x8
    NSMutableDictionary *__hiddenTileControllersByLayoutInfo;	// 16 = 0x10
    double __animationDuration;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000005d03a7
@property(readonly, nonatomic) double _animationDuration; // @synthesize _animationDuration=__animationDuration;
@property(readonly, nonatomic) NSMutableDictionary *_hiddenTileControllersByLayoutInfo; // @synthesize _hiddenTileControllersByLayoutInfo=__hiddenTileControllersByLayoutInfo;
@property(readonly, nonatomic) PUTilingView *tilingView; // @synthesize tilingView=_tilingView;
- (void)reattachTiles;	// IMP=0x00000000005d02e3
- (void)unhideTilesAnimated:(_Bool)arg1;	// IMP=0x00000000005d017c
- (void)hideTilesAtIndexPath:(id)arg1 withKinds:(id)arg2 dataSourceIdentifier:(id)arg3 animated:(_Bool)arg4;	// IMP=0x00000000005cfd86
- (void)dealloc;	// IMP=0x00000000005cfccd
- (id)initWithTilingView:(id)arg1;	// IMP=0x00000000005cfc2a
- (id)init;	// IMP=0x00000000005cfc16

@end
