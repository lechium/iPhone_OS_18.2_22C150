//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VFXMTLComputePipeline, VFXMTLResourceManager;
@protocol MTLBuffer;

@interface VFXMTLSkinDeformer : NSObject
{
    struct __CFXSkinner *_skinner;	// 8 = 0x8
    struct __CFXGeometry *_baseGeometry;	// 16 = 0x10
    unsigned char _dataKind;	// 24 = 0x18
    VFXMTLResourceManager *_resourceManager;	// 32 = 0x20
    _Bool _skinNormals;	// 40 = 0x28
    _Bool _skinTangents;	// 41 = 0x29
    unsigned int _baseVertexCount;	// 44 = 0x2c
    unsigned long long _currentFrameHash;	// 48 = 0x30
    id <MTLBuffer> _vertexWeightIndicesBuffer;	// 56 = 0x38
    id <MTLBuffer> _boneIndicesBuffer;	// 64 = 0x40
    id <MTLBuffer> _boneWeightsBuffer;	// 72 = 0x48
    VFXMTLComputePipeline *_computePipeline;	// 80 = 0x50
    _Bool _useFallbackCopyKernel;	// 88 = 0x58
}

+ (unsigned long long)requiredOutputs;	// IMP=0x00100000002647bb
+ (unsigned long long)supportedOutputs;	// IMP=0x00100000002647b0
+ (unsigned long long)requiredInputs;	// IMP=0x00100000002647a5
- (unsigned long long)updateWithComputeContext:(id)arg1 positions:(id)arg2 normals:(id)arg3 tangents:(id)arg4;	// IMP=0x000000000026584a
- (id)makeReadOnlyBuffersWithBaseGeometry:(struct __CFXGeometry *)arg1 baseMesh:(struct __CFXMesh *)arg2 blitEncoder:(id)arg3;	// IMP=0x0000000000264c3a
- (void)setupWithComputeContext:(id)arg1;	// IMP=0x00000000002648f0
- (void)dealloc;	// IMP=0x0000000000264882

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

