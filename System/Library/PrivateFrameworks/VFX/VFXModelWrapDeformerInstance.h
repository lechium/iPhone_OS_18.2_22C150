//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VFXMTLComputePipeline;
@protocol MTLBuffer;

@interface VFXModelWrapDeformerInstance : NSObject
{
    unsigned long long _bindingMode;	// 8 = 0x8
    struct {
        unsigned int vertexCount;
        CDStruct_14d5dc5e innerLayerToDeformedTransform;
        CDStruct_14d5dc5e outerLayerToDeformedTransform;
    } _uniforms;	// 16 = 0x10
    struct __CFXNode *_innerLayerNode;	// 160 = 0xa0
    struct __CFXNode *_outerLayerNode;	// 168 = 0xa8
    struct __CFXNode *_deformedNode;	// 176 = 0xb0
    unsigned long long _currentFrameHash;	// 184 = 0xb8
    VFXMTLComputePipeline *_computePipeline;	// 192 = 0xc0
    id <MTLBuffer> _pointIndicesBuffer;	// 200 = 0xc8
    id <MTLBuffer> _barycentricCoordsBuffer;	// 208 = 0xd0
    id <MTLBuffer> _innerLayerInfluencesBuffer;	// 216 = 0xd8
    id <MTLBuffer> _innerBindingSpaceVectorsBuffer;	// 224 = 0xe0
    id <MTLBuffer> _outerBindingSpaceVectorsBuffer;	// 232 = 0xe8
    id <MTLBuffer> _innerBindingOffsetsBuffer;	// 240 = 0xf0
    id <MTLBuffer> _outerBindingOffsetsBuffer;	// 248 = 0xf8
    _Bool _isLegacySingleLayerDeformer;	// 256 = 0x100
    struct {
        unsigned int vertexCount;
        CDStruct_14d5dc5e driverToDeformedTransform;
    } _legacyUniforms;	// 272 = 0x110
    struct __CFXNode *_legacyDrivingNode;	// 352 = 0x160
    id <MTLBuffer> _legacyOffsetsOrTransformsBuffer;	// 360 = 0x168
}

- (unsigned long long)updateWithContext:(id)arg1;	// IMP=0x00000000001d80d7
- (void)dealloc;	// IMP=0x00000000001d8041

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
