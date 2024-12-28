//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLCommandBuffer, CaptureMTLDevice, NSMutableSet, NSString;
@protocol MTLDevice, MTLRenderCommandEncoder, MTLRenderCommandEncoderSPI;

@interface CaptureMTLRenderCommandEncoder : NSObject
{
    id <MTLRenderCommandEncoderSPI> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    struct GTTraceContext *_traceContext;	// 24 = 0x18
    struct GTTraceStream *_traceStream;	// 32 = 0x20
    NSMutableSet *_retainedObjects;	// 40 = 0x28
    CaptureMTLCommandBuffer *_captureCommandBuffer;	// 48 = 0x30
    struct apr_pool_t *_pool;	// 56 = 0x38
    struct apr_hash_t *_snapshotMap;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000007b6bf
- (void)waitForFence:(id)arg1 beforeStages:(unsigned long long)arg2;	// IMP=0x000000000007b522
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 stages:(unsigned long long)arg4;	// IMP=0x000000000007b31d
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;	// IMP=0x000000000007b133
- (void)useResourceGroup:(id)arg1 usage:(unsigned long long)arg2 stages:(unsigned long long)arg3;	// IMP=0x000000000007b06b
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2 stages:(unsigned long long)arg3;	// IMP=0x000000000007aec5
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;	// IMP=0x000000000007ad28
- (void)useResidencySets:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000007ac40
- (void)useResidencySet:(id)arg1;	// IMP=0x000000000007ab91
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2 stages:(unsigned long long)arg3;	// IMP=0x000000000007a9a7
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000007a7c1
- (void)useHeap:(id)arg1 stages:(unsigned long long)arg2;	// IMP=0x000000000007a624
- (void)useHeap:(id)arg1;	// IMP=0x000000000007a4a2
- (void)updateFence:(id)arg1 afterStages:(unsigned long long)arg2;	// IMP=0x000000000007a305
- (void)setVisibilityResultMode:(unsigned long long)arg1 offset:(unsigned long long)arg2;	// IMP=0x000000000007a1f3
- (void)setViewportTransformEnabled:(_Bool)arg1;	// IMP=0x000000000007a0f2
- (void)setViewport:(CDStruct_8727d297)arg1;	// IMP=0x0000000000079fc3
- (void)setVertexVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x0000000000079dd6
- (void)setVertexVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000079c39
- (void)setVertexTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000079a4c
- (void)setVertexTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000798af
- (void)setVertexSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000000000796c2
- (void)setVertexSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x000000000007945f
- (void)setVertexSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 lodBias:(float)arg4 atIndex:(unsigned long long)arg5;	// IMP=0x0000000000079398
- (void)setVertexSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x00000000000791d4
- (void)setVertexSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000079037
- (void)setVertexIntersectionFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x0000000000078e4a
- (void)setVertexIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000078cad
- (void)setVertexBytes:(const void *)arg1 length:(unsigned long long)arg2 attributeStride:(unsigned long long)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x0000000000078b3e
- (void)setVertexBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000000789f6
- (void)setVertexBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x00000000000787d8
- (void)setVertexBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 attributeStrides:(const unsigned long long *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x000000000007855d
- (void)setVertexBufferOffset:(unsigned long long)arg1 attributeStride:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000078441
- (void)setVertexBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000007832f
- (void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 attributeStride:(unsigned long long)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x0000000000078178
- (void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000077fd2
- (void)setVertexAmplificationMode:(unsigned long long)arg1 value:(unsigned long long)arg2;	// IMP=0x0000000000077ec0
- (void)setTriangleFrontFillMode:(unsigned long long)arg1 backFillMode:(unsigned long long)arg2;	// IMP=0x0000000000077dae
- (void)setTriangleFillMode:(unsigned long long)arg1;	// IMP=0x0000000000077cb6
- (void)setTransformFeedbackState:(unsigned long long)arg1;	// IMP=0x0000000000077ca0
- (void)setTileVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x0000000000077ab3
- (void)setTileVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000077916
- (void)setTileTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000077729
- (void)setTileTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000007758c
- (void)setTileSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000007739f
- (void)setTileSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x000000000007713c
- (void)setTileSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x0000000000076f78
- (void)setTileSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000076ddb
- (void)setTileIntersectionFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x0000000000076bee
- (void)setTileIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000076a51
- (void)setTileBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000076909
- (void)setTileBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x00000000000766d9
- (void)setTileBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000765c7
- (void)setTileBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000076421
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000076305
- (void)setTessellationFactorScale:(float)arg1;	// IMP=0x00000000000761fe
- (void)setTessellationFactorBuffer:(id)arg1 offset:(unsigned long long)arg2 instanceStride:(unsigned long long)arg3;	// IMP=0x0000000000076058
- (void)setStencilStoreActionOptions:(unsigned long long)arg1;	// IMP=0x0000000000075f60
- (void)setStencilStoreAction:(unsigned long long)arg1;	// IMP=0x0000000000075e68
- (void)setStencilResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(_Bool)arg5;	// IMP=0x0000000000075c98
- (void)setStencilResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4;	// IMP=0x0000000000075ae1
- (void)setStencilReferenceValue:(unsigned int)arg1;	// IMP=0x00000000000759e3
- (void)setStencilFrontReferenceValue:(unsigned int)arg1 backReferenceValue:(unsigned int)arg2;	// IMP=0x00000000000758da
- (void)setStencilCleared;	// IMP=0x00000000000757f0
- (void)setScissorRect:(CDStruct_33dcf794)arg1;	// IMP=0x00000000000756d4
- (void)setRenderPipelineState:(id)arg1;	// IMP=0x0000000000075552
- (void)setProvokingVertexMode:(unsigned long long)arg1;	// IMP=0x000000000007545a
- (void)setPrimitiveRestartEnabled:(_Bool)arg1 index:(unsigned long long)arg2;	// IMP=0x000000000007533b
- (void)setPrimitiveRestartEnabled:(_Bool)arg1;	// IMP=0x000000000007523a
- (void)setPointSize:(float)arg1;	// IMP=0x0000000000075133
- (void)setObjectVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x0000000000075042
- (void)setObjectVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000074f84
- (void)setObjectThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000074e72
- (void)setObjectTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000074c85
- (void)setObjectTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000074ae8
- (void)setObjectSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000000000748fb
- (void)setObjectSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x0000000000074680
- (void)setObjectSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x00000000000744bc
- (void)setObjectSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000007431f
- (void)setObjectIntersectionFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x000000000007422e
- (void)setObjectIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000074170
- (void)setObjectBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000074028
- (void)setObjectBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x0000000000073df8
- (void)setObjectBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000073ce6
- (void)setObjectBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000073b40
- (void)setObjectAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000073a82
- (void)setMeshVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x0000000000073991
- (void)setMeshVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x00000000000738d3
- (void)setMeshTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000000000736e6
- (void)setMeshTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000073549
- (void)setMeshSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000007335c
- (void)setMeshSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x00000000000730e1
- (void)setMeshSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x0000000000072f1d
- (void)setMeshSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000072d80
- (void)setMeshIntersectionFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x0000000000072c8f
- (void)setMeshIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000072bd1
- (void)setMeshBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000072a89
- (void)setMeshBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x0000000000072859
- (void)setMeshBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000072747
- (void)setMeshBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000000725a1
- (void)setMeshAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x00000000000724e3
- (void)setLineWidth:(float)arg1;	// IMP=0x00000000000723dc
- (void)setFrontFacingWinding:(unsigned long long)arg1;	// IMP=0x00000000000722e4
- (void)setFragmentVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x00000000000720f7
- (void)setFragmentVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000071f5a
- (void)setFragmentTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000071d6d
- (void)setFragmentTexture:(id)arg1 atTextureIndex:(unsigned long long)arg2 samplerState:(id)arg3 atSamplerIndex:(unsigned long long)arg4;	// IMP=0x0000000000071b30
- (void)setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000071993
- (void)setFragmentSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000000000717a6
- (void)setFragmentSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x0000000000071543
- (void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 lodBias:(float)arg4 atIndex:(unsigned long long)arg5;	// IMP=0x000000000007147c
- (void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x00000000000712b8
- (void)setFragmentSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000007111b
- (void)setFragmentIntersectionFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x0000000000070f2e
- (void)setFragmentIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000070d91
- (void)setFragmentBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000070c49
- (void)setFragmentBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x0000000000070a2b
- (void)setFragmentBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000070919
- (void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000070773
- (void)setDepthStoreActionOptions:(unsigned long long)arg1;	// IMP=0x000000000007067b
- (void)setDepthStoreAction:(unsigned long long)arg1;	// IMP=0x0000000000070583
- (void)setDepthStencilState:(id)arg1;	// IMP=0x0000000000070401
- (void)setDepthResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(_Bool)arg5;	// IMP=0x0000000000070231
- (void)setDepthResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4;	// IMP=0x000000000007007a
- (void)setDepthClipModeSPI:(unsigned long long)arg1;	// IMP=0x0000000000070064
- (void)setDepthClipMode:(unsigned long long)arg1;	// IMP=0x000000000006ff6c
- (void)setDepthCleared;	// IMP=0x000000000006fe82
- (void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3;	// IMP=0x000000000006fd4c
- (void)setCullMode:(unsigned long long)arg1;	// IMP=0x000000000006fc54
- (void)setCommandDataCorruptModeSPI:(unsigned long long)arg1;	// IMP=0x000000000006fc3e
- (void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000006fb2c
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000006fa1a
- (void)setColorResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(_Bool)arg5 atIndex:(unsigned long long)arg6;	// IMP=0x000000000006f83b
- (void)setColorResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 atIndex:(unsigned long long)arg5;	// IMP=0x000000000006f674
- (void)setClipPlane:(float)arg1 p2:(float)arg2 p3:(float)arg3 p4:(float)arg4 atIndex:(unsigned long long)arg5;	// IMP=0x000000000006f65b
- (void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;	// IMP=0x000000000006f518
- (void)setAlphaTestReferenceValue:(float)arg1;	// IMP=0x000000000006f411
- (void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(_Bool)arg3;	// IMP=0x000000000006f261
- (void)pushDebugGroup:(id)arg1;	// IMP=0x000000000006f0dc
- (void)popDebugGroup;	// IMP=0x000000000006eff2
- (void)memoryBarrierWithScope:(unsigned long long)arg1 afterStages:(unsigned long long)arg2 beforeStages:(unsigned long long)arg3;	// IMP=0x000000000006eebf
- (void)memoryBarrierWithResources:(const id *)arg1 count:(unsigned long long)arg2 afterStages:(unsigned long long)arg3 beforeStages:(unsigned long long)arg4;	// IMP=0x000000000006ec6e
- (_Bool)isMemorylessRender;	// IMP=0x000000000006ec58
- (void)insertDebugSignpost:(id)arg1;	// IMP=0x000000000006ead3
- (void)endEncoding;	// IMP=0x000000000006e9e9
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 baseInstance:(unsigned long long)arg5;	// IMP=0x000000000006e8a0
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4;	// IMP=0x000000000006e767
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3;	// IMP=0x000000000006e64b
- (void)drawPrimitives:(unsigned long long)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;	// IMP=0x000000000006e4a5
- (void)drawPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseInstance:(unsigned long long)arg7;	// IMP=0x000000000006e2d2
- (void)drawPatches:(unsigned long long)arg1 patchIndexBuffer:(id)arg2 patchIndexBufferOffset:(unsigned long long)arg3 indirectBuffer:(id)arg4 indirectBufferOffset:(unsigned long long)arg5;	// IMP=0x000000000006e08a
- (void)drawMeshThreads:(CDStruct_14f26992)arg1 threadsPerObjectThreadgroup:(CDStruct_14f26992)arg2 threadsPerMeshThreadgroup:(CDStruct_14f26992)arg3;	// IMP=0x000000000006df2a
- (void)drawMeshThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerObjectThreadgroup:(CDStruct_14f26992)arg3 threadsPerMeshThreadgroup:(CDStruct_14f26992)arg4;	// IMP=0x000000000006dd55
- (void)drawMeshThreadgroups:(CDStruct_14f26992)arg1 threadsPerObjectThreadgroup:(CDStruct_14f26992)arg2 threadsPerMeshThreadgroup:(CDStruct_14f26992)arg3;	// IMP=0x000000000006dbf5
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexType:(unsigned long long)arg2 indexBuffer:(id)arg3 indexBufferOffset:(unsigned long long)arg4 indirectBuffer:(id)arg5 indirectBufferOffset:(unsigned long long)arg6;	// IMP=0x000000000006d98e
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseVertex:(long long)arg7 baseInstance:(unsigned long long)arg8;	// IMP=0x000000000006d7c4
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6;	// IMP=0x000000000006d5f3
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5;	// IMP=0x000000000006d42c
- (void)drawIndexedPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 controlPointIndexBuffer:(id)arg6 controlPointIndexBufferOffset:(unsigned long long)arg7 instanceCount:(unsigned long long)arg8 baseInstance:(unsigned long long)arg9;	// IMP=0x000000000006d1b8
- (void)drawIndexedPatches:(unsigned long long)arg1 patchIndexBuffer:(id)arg2 patchIndexBufferOffset:(unsigned long long)arg3 controlPointIndexBuffer:(id)arg4 controlPointIndexBufferOffset:(unsigned long long)arg5 indirectBuffer:(id)arg6 indirectBufferOffset:(unsigned long long)arg7;	// IMP=0x000000000006cee1
- (void)dispatchThreadsPerTile:(CDStruct_14f26992)arg1 inRegion:(CDStruct_4c83c94d)arg2 withRenderTargetArrayIndex:(unsigned int)arg3;	// IMP=0x000000000006cd83
- (void)dispatchThreadsPerTile:(CDStruct_14f26992)arg1 inRegion:(CDStruct_4c83c94d)arg2;	// IMP=0x000000000006cc3d
- (void)dispatchThreadsPerTile:(CDStruct_14f26992)arg1;	// IMP=0x000000000006cb28
@property(readonly) unsigned long long tileWidth;
@property(readonly) unsigned long long tileHeight;
@property(copy) NSString *label;
@property(readonly) id <MTLDevice> device;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x000000000006c8fc
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000006c8eb
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000006c82a
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x000000000006c7ca
- (id)originalObject;	// IMP=0x000000000006c7bc
- (void)setTileAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x000000000006c590
- (void)setFragmentAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x000000000006c364
- (void)setVertexAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x000000000006c138
- (void)setVertexAmplificationCount:(unsigned long long)arg1 viewMappings:(const CDStruct_c0454aff *)arg2;	// IMP=0x000000000006bffc
- (void)setViewports:(const CDStruct_8727d297 *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000006bec1
- (void)setScissorRects:(const CDStruct_33dcf794 *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000006bd8a
- (void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;	// IMP=0x000000000006b6e6
- (void)executeCommandsInBuffer:(id)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000006b2a7
- (void)dealloc;	// IMP=0x000000000006b171
- (id)initWithBaseObject:(id)arg1 captureParallelRenderCommandEncoder:(id)arg2;	// IMP=0x000000000006afa0
- (id)initWithBaseObject:(id)arg1 captureCommandBuffer:(id)arg2;	// IMP=0x000000000006ae19
@property(readonly) id <MTLRenderCommandEncoder> baseObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
