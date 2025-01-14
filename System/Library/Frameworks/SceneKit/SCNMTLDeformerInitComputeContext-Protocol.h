//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SceneKit/NSObject-Protocol.h>

@class MTLStageInputOutputDescriptor;
@protocol MTLBlitCommandEncoder, MTLBuffer;

@protocol SCNMTLDeformerInitComputeContext <NSObject>
@property(readonly, nonatomic) MTLStageInputOutputDescriptor *stageInputDescriptor;
@property(readonly, nonatomic) id <MTLBlitCommandEncoder> currentBlitEncoder;
- (id <MTLBuffer>)newBufferForDataKind:(unsigned char)arg1 positionSource:(struct __C3DMeshSource *)arg2 normalSource:(struct __C3DMeshSource *)arg3 positionDataType:(short)arg4 normalDataType:(short)arg5 forStageInputOutputDescriptor:(_Bool)arg6 usePrivateStorageMode:(_Bool)arg7 outStride:(unsigned long long *)arg8 outPositionOffset:(unsigned long long *)arg9 outNormalOffset:(unsigned long long *)arg10;
- (id <MTLBuffer>)newBufferForDataKind:(unsigned char)arg1 meshSource:(struct __C3DMeshSource *)arg2 dataType:(short)arg3 forStageInputOutputDescriptor:(_Bool)arg4 usePrivateStorageMode:(_Bool)arg5 outStride:(unsigned long long *)arg6;
- (id <MTLBuffer>)originalToFirstDeindexedTableBufferWithBlitEncoder:(id <MTLBlitCommandEncoder>)arg1 indexSizeOut:(unsigned long long *)arg2;
- (id <MTLBuffer>)deindexedToFirstDeindexedTableBufferWithBlitEncoder:(id <MTLBlitCommandEncoder>)arg1 indexSizeOut:(unsigned long long *)arg2;
- (id <MTLBuffer>)deindexedToOriginalTableBufferWithBlitEncoder:(id <MTLBlitCommandEncoder>)arg1 indexSizeOut:(unsigned long long *)arg2;
@end

