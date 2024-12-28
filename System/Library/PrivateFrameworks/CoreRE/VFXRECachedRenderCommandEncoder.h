//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MTLDevice, MTLRenderCommandEncoder;

__attribute__((visibility("hidden")))
@interface VFXRECachedRenderCommandEncoder : NSObject
{
    id <MTLRenderCommandEncoder> _encoder;	// 8 = 0x8
    struct RenderCommandEncoder _encoderCPP;	// 16 = 0x10
    void *_encoderState;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x0000000000ac95c0
- (void).cxx_destruct;	// IMP=0x0000000000ac959a
- (void)waitForFence:(id)arg1 beforeStages:(unsigned long long)arg2;	// IMP=0x0000000000ac9584
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2 stages:(unsigned long long)arg3;	// IMP=0x0000000000ac956e
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000ac9552
- (void)useHeap:(id)arg1 stages:(unsigned long long)arg2;	// IMP=0x0000000000ac953c
- (void)useHeap:(id)arg1;	// IMP=0x0000000000ac9521
- (void)updateFence:(id)arg1 afterStages:(unsigned long long)arg2;	// IMP=0x0000000000ac950b
- (void)textureBarrier;	// IMP=0x0000000000ac9505
- (void)setVisibilityResultMode:(unsigned long long)arg1 offset:(unsigned long long)arg2;	// IMP=0x0000000000ac94ef
- (void)setVertexVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x0000000000ac94d9
- (void)setVertexVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000ac94c3
- (void)setVertexIntersectionFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x0000000000ac94ad
- (void)setVertexIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000ac9497
- (void)setVertexAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000ac9481
- (void)setTileVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x0000000000ac946b
- (void)setTileVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000ac9455
- (void)setTileTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000ac943f
- (void)setTileTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000ac9429
- (void)setTileSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000ac9413
- (void)setTileSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x0000000000ac93fd
- (void)setTileSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x0000000000ac93e7
- (void)setTileSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000ac93d1
- (void)setTileIntersectionFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x0000000000ac93bb
- (void)setTileIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000ac93a5
- (void)setTileBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000ac938f
- (void)setTileBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x0000000000ac9379
- (void)setTileBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000ac9363
- (void)setTileBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000ac934d
- (void)setTileAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000ac9337
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000ac9321
- (void)setTessellationFactorScale:(float)arg1;	// IMP=0x0000000000ac930b
- (void)setTessellationFactorBuffer:(id)arg1 offset:(unsigned long long)arg2 instanceStride:(unsigned long long)arg3;	// IMP=0x0000000000ac92f5
- (void)setObjectThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000ac92df
- (void)setObjectTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000ac92c9
- (void)setObjectTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000ac92b3
- (void)setObjectSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000ac929d
- (void)setObjectSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x0000000000ac9287
- (void)setObjectSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x0000000000ac9271
- (void)setObjectSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000ac925b
- (void)setObjectBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000ac9245
- (void)setObjectBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x0000000000ac922f
- (void)setObjectBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000ac9219
- (void)setObjectBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000ac9203
- (void)setMeshTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000ac91ed
- (void)setMeshTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000ac91d7
- (void)setMeshSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000ac91c1
- (void)setMeshSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x0000000000ac91ab
- (void)setMeshSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x0000000000ac9195
- (void)setMeshSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000ac917f
- (void)setMeshBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000ac9169
- (void)setMeshBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x0000000000ac9153
- (void)setMeshBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000ac913d
- (void)setMeshBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000ac9127
- (void)setFragmentVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x0000000000ac9111
- (void)setFragmentVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000ac90fb
- (void)setFragmentIntersectionFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x0000000000ac90e5
- (void)setFragmentIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000ac90cf
- (void)setFragmentAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000ac90b9
- (void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(_Bool)arg3;	// IMP=0x0000000000ac90a3
- (void)memoryBarrierWithScope:(unsigned long long)arg1 afterStages:(unsigned long long)arg2 beforeStages:(unsigned long long)arg3;	// IMP=0x0000000000ac908d
- (void)memoryBarrierWithResources:(const id *)arg1 count:(unsigned long long)arg2 afterStages:(unsigned long long)arg3 beforeStages:(unsigned long long)arg4;	// IMP=0x0000000000ac9077
- (void)executeCommandsInBuffer:(id)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000ac9061
- (void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;	// IMP=0x0000000000ac904b
- (void)dispatchThreadsPerTile:(CDStruct_14f26992)arg1;	// IMP=0x0000000000ac9035
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 stages:(unsigned long long)arg4;	// IMP=0x0000000000ac901f
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;	// IMP=0x0000000000ac9003
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2 stages:(unsigned long long)arg3;	// IMP=0x0000000000ac8fed
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;	// IMP=0x0000000000ac8fd1
- (void)setViewports:(const CDStruct_8727d297 *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000ac8fbb
- (void)setViewport:(CDStruct_8727d297)arg1;	// IMP=0x0000000000ac8fa5
- (void)setVertexTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000ac8f8f
- (void)setVertexTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000ac8f79
- (void)setVertexSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000ac8f63
- (void)setVertexSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x0000000000ac8f4d
- (void)setVertexSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x0000000000ac8f37
- (void)setVertexSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000ac8f21
- (void)setVertexBytes:(const void *)arg1 length:(unsigned long long)arg2 attributeStride:(unsigned long long)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x0000000000ac8f0b
- (void)setVertexBufferOffset:(unsigned long long)arg1 attributeStride:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000ac8ef5
- (void)setVertexBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 attributeStrides:(const unsigned long long *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x0000000000ac8edf
- (void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 attributeStride:(unsigned long long)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x0000000000ac8ec9
- (void)setVertexBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x0000000000ac8eb3
- (void)setVertexBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000ac8e9d
- (void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000ac8e87
- (void)setVertexAmplificationCount:(unsigned long long)arg1 viewMappings:(const CDStruct_c0454aff *)arg2;	// IMP=0x0000000000ac8e71
- (void)setFragmentTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000ac8e5b
- (void)setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000ac8e45
- (void)setFragmentSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000ac8e2f
- (void)setFragmentSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x0000000000ac8e19
- (void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x0000000000ac8e03
- (void)setFragmentSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000ac8ded
- (void)setFragmentBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000ac8dd7
- (void)setFragmentBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x0000000000ac8dc1
- (void)setFragmentBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000ac8dab
- (void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000ac8d95
- (void)setStencilStoreActionOptions:(unsigned long long)arg1;	// IMP=0x0000000000ac8d7f
- (void)setStencilStoreAction:(unsigned long long)arg1;	// IMP=0x0000000000ac8d69
- (void)setScissorRects:(const CDStruct_33dcf794 *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000ac8d53
- (void)setScissorRect:(CDStruct_33dcf794)arg1;	// IMP=0x0000000000ac8d3d
- (void)setVertexBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000ac8d27
- (void)setDepthStoreActionOptions:(unsigned long long)arg1;	// IMP=0x0000000000ac8d11
- (void)setDepthStoreAction:(unsigned long long)arg1;	// IMP=0x0000000000ac8cfb
- (void)setDepthClipMode:(unsigned long long)arg1;	// IMP=0x0000000000ac8ce5
- (void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3;	// IMP=0x0000000000ac8ccf
- (void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000ac8cb9
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000ac8ca3
- (void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;	// IMP=0x0000000000ac8c8d
- (void)drawPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseInstance:(unsigned long long)arg7;	// IMP=0x0000000000ac8c77
- (void)drawPatches:(unsigned long long)arg1 patchIndexBuffer:(id)arg2 patchIndexBufferOffset:(unsigned long long)arg3 indirectBuffer:(id)arg4 indirectBufferOffset:(unsigned long long)arg5;	// IMP=0x0000000000ac8c61
- (void)drawMeshThreads:(CDStruct_14f26992)arg1 threadsPerObjectThreadgroup:(CDStruct_14f26992)arg2 threadsPerMeshThreadgroup:(CDStruct_14f26992)arg3;	// IMP=0x0000000000ac8c4b
- (void)drawMeshThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerObjectThreadgroup:(CDStruct_14f26992)arg3 threadsPerMeshThreadgroup:(CDStruct_14f26992)arg4;	// IMP=0x0000000000ac8c35
- (void)drawMeshThreadgroups:(CDStruct_14f26992)arg1 threadsPerObjectThreadgroup:(CDStruct_14f26992)arg2 threadsPerMeshThreadgroup:(CDStruct_14f26992)arg3;	// IMP=0x0000000000ac8c1f
- (void)drawIndexedPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 controlPointIndexBuffer:(id)arg6 controlPointIndexBufferOffset:(unsigned long long)arg7 instanceCount:(unsigned long long)arg8 baseInstance:(unsigned long long)arg9;	// IMP=0x0000000000ac8c09
- (void)drawIndexedPatches:(unsigned long long)arg1 patchIndexBuffer:(id)arg2 patchIndexBufferOffset:(unsigned long long)arg3 controlPointIndexBuffer:(id)arg4 controlPointIndexBufferOffset:(unsigned long long)arg5 indirectBuffer:(id)arg6 indirectBufferOffset:(unsigned long long)arg7;	// IMP=0x0000000000ac8bf3
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 baseInstance:(unsigned long long)arg5;	// IMP=0x0000000000ac8bdd
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4;	// IMP=0x0000000000ac8bc7
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3;	// IMP=0x0000000000ac8bb1
- (void)drawPrimitives:(unsigned long long)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;	// IMP=0x0000000000ac8b9b
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexType:(unsigned long long)arg2 indexBuffer:(id)arg3 indexBufferOffset:(unsigned long long)arg4 indirectBuffer:(id)arg5 indirectBufferOffset:(unsigned long long)arg6;	// IMP=0x0000000000ac8b85
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseVertex:(long long)arg7 baseInstance:(unsigned long long)arg8;	// IMP=0x0000000000ac8b6f
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6;	// IMP=0x0000000000ac8b59
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5;	// IMP=0x0000000000ac8b43
- (void)pushDebugGroup:(id)arg1;	// IMP=0x0000000000ac8b2d
- (void)popDebugGroup;	// IMP=0x0000000000ac8b17
- (void)insertDebugSignpost:(id)arg1;	// IMP=0x0000000000ac8b01
- (void)endEncoding;	// IMP=0x0000000000ac8aeb
- (void)setRenderPipelineState:(id)arg1;	// IMP=0x0000000000ac8a3d
- (void)setDepthStencilState:(id)arg1;	// IMP=0x0000000000ac89b7
- (void)setFrontFacingWinding:(unsigned long long)arg1;	// IMP=0x0000000000ac8979
- (void)setStencilFrontReferenceValue:(unsigned int)arg1 backReferenceValue:(unsigned int)arg2;	// IMP=0x0000000000ac88fa
- (void)setStencilReferenceValue:(unsigned int)arg1;	// IMP=0x0000000000ac88e0
- (void)setTriangleFillMode:(unsigned long long)arg1;	// IMP=0x0000000000ac8889
- (void)setCullMode:(unsigned long long)arg1;	// IMP=0x0000000000ac8835
@property(readonly) unsigned long long tileHeight;
@property(readonly) unsigned long long tileWidth;
@property(copy) NSString *label;
@property(readonly) id <MTLDevice> device;
- (void)setEncoder:(id)arg1 state:(void *)arg2;	// IMP=0x0000000000ac874d
- (id)init;	// IMP=0x0000000000ac871e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
