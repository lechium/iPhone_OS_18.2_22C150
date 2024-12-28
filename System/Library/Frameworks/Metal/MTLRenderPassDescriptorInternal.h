//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLRenderPassDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLRenderPassDescriptorInternal : MTLRenderPassDescriptor
{
    struct MTLRenderPassDescriptorPrivate _private;	// 40 = 0x28
}

+ (id)renderPassDescriptor;	// IMP=0x00600000001483b2
- (id)sampleBufferAttachments;	// IMP=0x000000000014a559
- (const struct MTLRenderPassDescriptorPrivate *)_descriptorPrivate;	// IMP=0x000000000014a549
- (_Bool)validate:(id)arg1 width:(unsigned long long *)arg2 height:(unsigned long long *)arg3;	// IMP=0x0000000000149d1c
- (unsigned long long)getSamplePositions:(CDStruct_6e3f967a *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000149c4f
- (void)setSamplePositions:(const CDStruct_6e3f967a *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000149ab3
- (void)setRasterizationRateMap:(id)arg1;	// IMP=0x0000000000149a63
- (id)rasterizationRateMap;	// IMP=0x0000000000149a4e
- (unsigned long long)defaultRasterSampleCount;	// IMP=0x0000000000149a3c
- (void)setDefaultRasterSampleCount:(unsigned long long)arg1;	// IMP=0x0000000000149a2a
- (unsigned long long)tileHeight;	// IMP=0x0000000000149a18
- (void)setTileHeight:(unsigned long long)arg1;	// IMP=0x0000000000149a06
- (unsigned long long)tileWidth;	// IMP=0x00000000001499f4
- (void)setTileWidth:(unsigned long long)arg1;	// IMP=0x00000000001499e2
- (unsigned long long)threadgroupMemoryLength;	// IMP=0x00000000001499d0
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1;	// IMP=0x00000000001499be
- (unsigned long long)imageblockSampleLength;	// IMP=0x00000000001499ac
- (void)setImageblockSampleLength:(unsigned long long)arg1;	// IMP=0x000000000014999a
- (id)binaryArchives;	// IMP=0x0000000000149985
- (void)setBinaryArchives:(id)arg1;	// IMP=0x0000000000149938
- (_Bool)pointCoordYFlipEnabled;	// IMP=0x0000000000149924
- (void)setPointCoordYFlipEnabled:(_Bool)arg1;	// IMP=0x0000000000149910
- (_Bool)openGLModeEnabled;	// IMP=0x00000000001498ff
- (void)setOpenGLModeEnabled:(_Bool)arg1;	// IMP=0x00000000001498ee
- (_Bool)ditherEnabled;	// IMP=0x00000000001498dd
- (void)setDitherEnabled:(_Bool)arg1;	// IMP=0x00000000001498cc
- (_Bool)skipEmptyTilesOnClearEnabled;	// IMP=0x00000000001498bb
- (void)setSkipEmptyTilesOnClearEnabled:(_Bool)arg1;	// IMP=0x00000000001498aa
- (_Bool)fineGrainedBackgroundVisibilityEnabled;	// IMP=0x0000000000149899
- (void)setFineGrainedBackgroundVisibilityEnabled:(_Bool)arg1;	// IMP=0x0000000000149888
- (unsigned long long)defaultColorSampleCount;	// IMP=0x0000000000149876
- (void)setDefaultColorSampleCount:(unsigned long long)arg1;	// IMP=0x0000000000149864
- (unsigned long long)renderTargetHeight;	// IMP=0x0000000000149852
- (void)setRenderTargetHeight:(unsigned long long)arg1;	// IMP=0x0000000000149840
- (unsigned long long)renderTargetWidth;	// IMP=0x000000000014982e
- (void)setRenderTargetWidth:(unsigned long long)arg1;	// IMP=0x000000000014981c
- (unsigned long long)renderTargetArrayLength;	// IMP=0x000000000014980a
- (void)setRenderTargetArrayLength:(unsigned long long)arg1;	// IMP=0x00000000001497f8
- (id)visibilityResultBuffer;	// IMP=0x00000000001497e6
- (void)setVisibilityResultBuffer:(id)arg1;	// IMP=0x0000000000149752
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000149512
- (id)description;	// IMP=0x00000000001494fe
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000148ec4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001488ff
- (unsigned long long)hash;	// IMP=0x0000000000148732
- (void)dealloc;	// IMP=0x00000000001486bb
- (id)stencilAttachment;	// IMP=0x0000000000148649
- (void)setStencilAttachment:(id)arg1;	// IMP=0x00000000001485a3
- (id)depthAttachment;	// IMP=0x0000000000148531
- (void)setDepthAttachment:(id)arg1;	// IMP=0x000000000014848b
- (id)colorAttachments;	// IMP=0x000000000014847a
- (id)init;	// IMP=0x00000000001483cc

@end
