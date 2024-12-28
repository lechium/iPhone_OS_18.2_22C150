//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SCNGeometryDeformer, SCNMTLDeformerStack;
@protocol MTLBlitCommandEncoder, MTLBuffer, MTLComputeCommandEncoder, MTLDevice, SCNGeometryDeformerInstance;

__attribute__((visibility("hidden")))
@interface SCNGeometryDeformerInstanceWrapper : NSObject
{
    SCNMTLDeformerStack *_stack;	// 8 = 0x8
    SCNGeometryDeformer *_deformer;	// 16 = 0x10
    id <SCNGeometryDeformerInstance> _instance;	// 24 = 0x18
    struct {
        CDStruct_8602b176 srcPositions;
        CDStruct_8602b176 dstPositions;
        CDStruct_8602b176 srcNormals;
        CDStruct_8602b176 dstNormals;
        CDStruct_8602b176 srcTangents;
        CDStruct_8602b176 dstTangents;
        CDStruct_8602b176 dependency0Positions;
        CDStruct_8602b176 dependency0Normals;
        CDStruct_8602b176 dependency0Tangents;
        CDStruct_8602b176 dependency1Positions;
        CDStruct_8602b176 dependency1Normals;
        CDStruct_8602b176 dependency1Tangents;
    } _stageInputOutputDescriptors;	// 32 = 0x20
    CDUnknownBlockType _currentUpdateComputeEncoderProvider;	// 416 = 0x1a0
    id <MTLComputeCommandEncoder> _currentUpdateComputeEncoder;	// 424 = 0x1a8
    CDStruct_afe1dd20 _currentUpdateBuffers;	// 432 = 0x1b0
}

- (id)dependency1TangentBuffer;	// IMP=0x000000000007aaef
- (id)dependency1NormalBuffer;	// IMP=0x000000000007aae2
- (id)dependency1PositionBuffer;	// IMP=0x000000000007aad5
- (id)dependency0TangentBuffer;	// IMP=0x000000000007aac8
- (id)dependency0NormalBuffer;	// IMP=0x000000000007aabb
- (id)dependency0PositionBuffer;	// IMP=0x000000000007aaae
@property(readonly, nonatomic) id <MTLBuffer> dstTangentBuffer;
@property(readonly, nonatomic) id <MTLBuffer> srcTangentBuffer;
@property(readonly, nonatomic) id <MTLBuffer> dstNormalBuffer;
@property(readonly, nonatomic) id <MTLBuffer> srcNormalBuffer;
@property(readonly, nonatomic) id <MTLBuffer> dstPositionBuffer;
@property(readonly, nonatomic) id <MTLBuffer> srcPositionBuffer;
@property(readonly, nonatomic) id <MTLComputeCommandEncoder> currentComputeEncoder;
- (void)setStageInputOutputBuffersToCurrentComputeEncoder;	// IMP=0x000000000007a905
- (id)_currentResourceManager;	// IMP=0x000000000007a8f7
- (void)setStageInputOutputBuffersToComputeEncoder:(struct SCNMTLComputeCommandEncoder *)arg1;	// IMP=0x000000000007a7aa
- (id)_currentRenderContext;	// IMP=0x000000000007a799
- (CDStruct_4c2781bd)_currentFrustumInfo;	// IMP=0x000000000007a740
- (CDStruct_c6fc9200)_currentTransforms;	// IMP=0x000000000007a717
- (unsigned long long)_currentFrameHash;	// IMP=0x000000000007a663
- (void)configureStageInputOutputDescriptor:(id)arg1 withDeformerFunction:(id)arg2;	// IMP=0x000000000007a2c8
@property(readonly, nonatomic) id <MTLBlitCommandEncoder> currentBlitEncoder;
@property(readonly, nonatomic) id <MTLDevice> device;
- (void)dealloc;	// IMP=0x000000000007a265

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
