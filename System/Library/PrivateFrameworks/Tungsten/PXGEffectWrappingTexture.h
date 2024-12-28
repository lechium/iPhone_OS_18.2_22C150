//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PXGImageTexture.h"

@class MISSING_TYPE, NSIndexSet, NSMutableIndexSet, NSString, PXGColorProgram;
@protocol MTLTexture, PXGMetalSpriteTexture;

__attribute__((visibility("hidden")))
@interface PXGEffectWrappingTexture : PXGImageTexture
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableIndexSet *_lock_activeRenders;	// 16 = 0x10
    id <PXGMetalSpriteTexture> _parent;	// 24 = 0x18
    PXGImageTexture *_imageTextureParent;	// 32 = 0x20
}

+ (id)createTexture;	// IMP=0x0010000000005591
+ (void)_reuseTexture:(id)arg1;	// IMP=0x0010000000005516
+ (id)_dequeueTexture;	// IMP=0x00100000000054a0
+ (id)_reusableTextures;	// IMP=0x0010000000005470
- (void).cxx_destruct;	// IMP=0x000000000000542e
@property(readonly, nonatomic) PXGImageTexture *imageTextureParent; // @synthesize imageTextureParent=_imageTextureParent;
@property(retain, nonatomic) id <PXGMetalSpriteTexture> parent; // @synthesize parent=_parent;
- (MISSING_TYPE *)orientationTransform;	// IMP=0x00000000000053be
- (struct __CVBuffer *)sourceCVPixelBuffer;	// IMP=0x000000000000537a
- (struct CGImage *)sourceCGImage;	// IMP=0x0000000000005336
@property(readonly, nonatomic) struct CGImage *imageRepresentation;
@property(readonly, nonatomic) unsigned char presentationType;
@property(readonly, nonatomic) long long estimatedByteSize;
@property(readonly, nonatomic) struct CGSize pixelSize;
@property(readonly, nonatomic) int shaderFlags;
@property(readonly, nonatomic) _Bool isCaptureTexture;
@property(readonly, nonatomic) float alpha;
@property(readonly, nonatomic) _Bool isOpaque;
@property(readonly, nonatomic) _Bool isAtlas;
@property(nonatomic) long long renderPipelineIndex;
- (void)cleanupAfterRender:(long long)arg1;	// IMP=0x0000000000004f66
- (void)prepareForRender:(long long)arg1;	// IMP=0x0000000000004f17
@property(readonly, nonatomic) PXGColorProgram *colorProgram;
- (void)getTextureInfos:(CDStruct_37a3040a *)arg1 forSpriteIndexes:(const unsigned int *)arg2 geometries:(const CDStruct_4f725fed *)arg3 spriteStyles:(const CDStruct_a79e78a9 *)arg4 spriteInfos:(const CDStruct_12471299 *)arg5 screenScale:(double)arg6 count:(unsigned int)arg7;	// IMP=0x0000000000004e03
@property(readonly, nonatomic) id <MTLTexture> texture;
@property(readonly, nonatomic) id <MTLTexture> chromaTexture;
- (id)init;	// IMP=0x0000000000004c83

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasSprites;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isDegraded;
@property(readonly, nonatomic) unsigned int spriteCount;
@property(readonly, nonatomic) NSIndexSet *spriteIndexes;
@property(readonly) Class superclass;

@end
