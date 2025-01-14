//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VFX/NSObject-Protocol.h>

@class MTLStageInputOutputDescriptor;
@protocol MTLBlitCommandEncoder, MTLBuffer;

@protocol VFXMTLDeformerInitComputeContext <NSObject>
@property(readonly, nonatomic) MTLStageInputOutputDescriptor *stageInputDescriptor;
@property(readonly, nonatomic) id <MTLBlitCommandEncoder> currentBlitEncoder;
- (id <MTLBuffer>)newBufferForDataKind:(unsigned char)arg1 positionSource:(struct __CFXMeshSource *)arg2 normalSource:(struct __CFXMeshSource *)arg3 positionDataType:(short)arg4 normalDataType:(short)arg5 forStageInputOutputDescriptor:(_Bool)arg6 usePrivateStorageMode:(_Bool)arg7 outStride:(unsigned long long *)arg8 outPositionOffset:(unsigned long long *)arg9 outNormalOffset:(unsigned long long *)arg10;
- (id <MTLBuffer>)newBufferForDataKind:(unsigned char)arg1 meshSource:(struct __CFXMeshSource *)arg2 dataType:(short)arg3 forStageInputOutputDescriptor:(_Bool)arg4 usePrivateStorageMode:(_Bool)arg5 outStride:(unsigned long long *)arg6;
- (id <MTLBuffer>)originalToFirstDeindexedTableBufferWithBlitEncoder:(id <MTLBlitCommandEncoder>)arg1 indexSizeOut:(unsigned long long *)arg2;
- (id <MTLBuffer>)deindexedToFirstDeindexedTableBufferWithBlitEncoder:(id <MTLBlitCommandEncoder>)arg1 indexSizeOut:(unsigned long long *)arg2;
- (id <MTLBuffer>)deindexedToOriginalTableBufferWithBlitEncoder:(id <MTLBlitCommandEncoder>)arg1 indexSizeOut:(unsigned long long *)arg2;
@end

