//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLTileRenderPipelineDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLTileRenderPipelineDescriptorInternal : MTLTileRenderPipelineDescriptor
{
    struct MTLTileRenderPipelineDescriptorPrivate _private;	// 32 = 0x20
}

- (id)gpuCompilerSPIOptions;	// IMP=0x0000000000008290
- (void)setGpuCompilerSPIOptions:(id)arg1;	// IMP=0x0000000000008243
- (id)newPipelineScript;	// IMP=0x0000000000008239
- (id)newSerializedTileDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000007c9c
- (void)validateWithDevice:(id)arg1;	// IMP=0x0000000000007c66
- (_Bool)validateWithDevice:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000007613
- (id)colorAttachments;	// IMP=0x0000000000007602
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000007351
- (unsigned long long)hash;	// IMP=0x000000000000714e
- (void)setMaxCallStackDepth:(unsigned long long)arg1;	// IMP=0x000000000000713c
- (unsigned long long)maxCallStackDepth;	// IMP=0x000000000000712a
- (void)setSupportAddingBinaryFunctions:(_Bool)arg1;	// IMP=0x0000000000007119
- (_Bool)supportAddingBinaryFunctions;	// IMP=0x0000000000007108
- (void)setInsertLibraries:(id)arg1;	// IMP=0x00000000000070ea
- (id)insertLibraries;	// IMP=0x00000000000070d8
- (void)setPreloadedLibraries:(id)arg1;	// IMP=0x0000000000007091
- (id)preloadedLibraries;	// IMP=0x000000000000707f
- (void)setLinkedFunctions:(id)arg1;	// IMP=0x0000000000006fed
- (id)linkedFunctions;	// IMP=0x0000000000006f9e
- (id)binaryArchives;	// IMP=0x0000000000006f8c
- (void)setBinaryArchives:(id)arg1;	// IMP=0x0000000000006f45
- (long long)textureWriteRoundingMode;	// IMP=0x0000000000006f33
- (void)setTextureWriteRoundingMode:(long long)arg1;	// IMP=0x0000000000006f21
- (unsigned long long)maxTotalThreadsPerThreadgroup;	// IMP=0x0000000000006f0f
- (void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1;	// IMP=0x0000000000006ec3
- (const struct MTLTileRenderPipelineDescriptorPrivate *)_descriptorPrivate;	// IMP=0x0000000000006eb3
- (_Bool)threadgroupSizeMatchesTileSize;	// IMP=0x0000000000006ea2
- (void)setThreadgroupSizeMatchesTileSize:(_Bool)arg1;	// IMP=0x0000000000006e91
- (id)tileFunction;	// IMP=0x0000000000006e7f
- (void)setTileFunction:(id)arg1;	// IMP=0x0000000000006df5
- (void)setLabel:(id)arg1;	// IMP=0x0000000000006d56
- (id)label;	// IMP=0x0000000000006d44
- (void)reset;	// IMP=0x0000000000006c48
- (long long)shaderValidationState;	// IMP=0x0000000000006c33
- (void)setShaderValidationState:(long long)arg1;	// IMP=0x0000000000006c1e
- (long long)shaderValidation;	// IMP=0x0000000000006c09
- (void)setShaderValidation:(long long)arg1;	// IMP=0x0000000000006bf4
- (void)setMaxAccelerationStructureTraversalDepth:(unsigned long long)arg1;	// IMP=0x0000000000006bdf
- (unsigned long long)maxAccelerationStructureTraversalDepth;	// IMP=0x0000000000006bca
- (void)setProfileControl:(id)arg1;	// IMP=0x0000000000006b7d
- (id)profileControl;	// IMP=0x0000000000006b68
- (id)tileBuffers;	// IMP=0x0000000000006b56
- (void)setColorSampleCount:(unsigned long long)arg1;	// IMP=0x0000000000006b44
- (unsigned long long)colorSampleCount;	// IMP=0x0000000000006b32
- (void)setPluginData:(id)arg1;	// IMP=0x0000000000006af2
- (id)pluginData;	// IMP=0x0000000000006ae0
- (void)setRasterSampleCount:(unsigned long long)arg1;	// IMP=0x0000000000006ace
- (unsigned long long)rasterSampleCount;	// IMP=0x0000000000006abc
- (void)setSampleCount:(unsigned long long)arg1;	// IMP=0x0000000000006aaa
- (unsigned long long)sampleCount;	// IMP=0x0000000000006a98
- (id)description;	// IMP=0x0000000000006a84
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000062c8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000060c9
- (void)dealloc;	// IMP=0x000000000000602d
- (id)init;	// IMP=0x0000000000005f58

@end

