//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VFXMTLResourceManager;
@protocol MTLBuffer;

@interface VFXMTLTessellator : NSObject
{
    struct __CFXGeometry *_geometry;	// 8 = 0x8
    VFXMTLResourceManager *_resourceManager;	// 16 = 0x10
    CDStruct_9b587744 _cachedTessellator;	// 24 = 0x18
    id <MTLBuffer> _tessellationFactorBuffer;	// 48 = 0x30
    id <MTLBuffer> _lastFramePositionBuffer;	// 56 = 0x38
}

- (void)subdivisionSurfaceTessellationDraw:(CDStruct_531ae8f1)arg1;	// IMP=0x000000000003f611
- (void)updateSubdivisionSurfaceTessellator:(CDStruct_9b587744)arg1 parameters:(CDStruct_0b08fa6a)arg2;	// IMP=0x000000000003f55d
- (void)constrainedEdgeLengthTessellationDrawMeshElement:(id)arg1 forMesh:(id)arg2 instanceCount:(unsigned long long)arg3 renderContext:(id)arg4;	// IMP=0x000000000003f3ad
- (void)updateConstrainedEdgeLengthTessellator:(CDStruct_9b587744)arg1 parameters:(CDStruct_0b08fa6a)arg2;	// IMP=0x000000000003ed43
- (void)screenSpaceAdaptiveTessellationDrawMeshElement:(id)arg1 forMesh:(id)arg2 instanceCount:(unsigned long long)arg3 renderContext:(id)arg4;	// IMP=0x000000000003eb93
- (void)updateScreenSpaceAdaptiveTessellator:(CDStruct_9b587744)arg1 parameters:(CDStruct_0b08fa6a)arg2;	// IMP=0x000000000003e48b
- (void)uniformTessellationDrawMeshElement:(id)arg1 forMesh:(id)arg2 instanceCount:(unsigned long long)arg3 renderContext:(id)arg4;	// IMP=0x000000000003e40b
- (void)updateUniformTessellator:(CDStruct_9b587744)arg1;	// IMP=0x000000000003e2cc
- (void)draw:(CDStruct_531ae8f1)arg1;	// IMP=0x000000000003e1c4
- (void)update:(CDStruct_0b08fa6a)arg1;	// IMP=0x000000000003e0cb
- (CDUnknownBlockType)newPipelineStateConfiguratorForMeshElement:(id)arg1 patchType:(unsigned char)arg2 device:(id)arg3;	// IMP=0x000000000003df89
- (unsigned char)pipelineStateHashForMeshElement:(id)arg1 patchType:(unsigned char)arg2;	// IMP=0x000000000003df5f
- (CDStruct_9fd556a9)_pipelineStateHashForMeshElement:(id)arg1 patchType:(unsigned char)arg2;	// IMP=0x000000000003de22
- (void)dealloc;	// IMP=0x000000000003dde7
- (id)initWithGeometry:(struct __CFXGeometry *)arg1 resourceManager:(id)arg2;	// IMP=0x000000000003dd90

@end

