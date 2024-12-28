//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SCNTechnique;
@protocol MTLTexture;

__attribute__((visibility("hidden")))
@interface AVTRendererViewTransitionTechnique : NSObject
{
    id <MTLTexture> _snapshotTexture;	// 8 = 0x8
    float _framebufferTextureOpacity;	// 16 = 0x10
    SCNTechnique *_technique;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003de32
@property(retain, nonatomic) id <MTLTexture> snapshotTexture;
@property(nonatomic) float framebufferTextureOpacity;
@property(readonly, nonatomic) SCNTechnique *technique;
- (id)initWithSceneRenderer:(id)arg1;	// IMP=0x000000000003da8b

@end
