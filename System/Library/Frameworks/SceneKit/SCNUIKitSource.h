//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNImageSource.h"

@class CALayer, UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface SCNUIKitSource : SCNImageSource
{
    id _uiView;	// 8 = 0x8
    id _uiWindow;	// 16 = 0x10
    CALayer *_uiWindowLayer;	// 24 = 0x18
    _Bool _isOpaque;	// 32 = 0x20
    _Bool _windowPreparing;	// 33 = 0x21
}

@property(retain, nonatomic) UIWindow *uiWindow; // @synthesize uiWindow=_uiWindow;
@property(retain, nonatomic) UIView *uiView; // @synthesize uiView=_uiView;
- (void)dealloc;	// IMP=0x00000000002a217a
- (_Bool)isOpaque;	// IMP=0x00000000002a216a
- (id)textureSource;	// IMP=0x00000000002a208f
- (id)prepareWindowIfNeeded;	// IMP=0x00000000002a1e0e
- (_Bool)supportsMetal;	// IMP=0x00000000002a1e06
- (id)init;	// IMP=0x00000000002a1dd7

@end

