//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNImageSource.h"

@class CALayer;

__attribute__((visibility("hidden")))
@interface SCNCoreAnimationSource : SCNImageSource
{
    CALayer *_layer;	// 8 = 0x8
}

@property(retain, nonatomic) CALayer *layer; // @synthesize layer=_layer;
- (void)dealloc;	// IMP=0x0000000000046f75
- (_Bool)isOpaque;	// IMP=0x0000000000046f4a
- (id)textureSource;	// IMP=0x0000000000046ef4

@end
