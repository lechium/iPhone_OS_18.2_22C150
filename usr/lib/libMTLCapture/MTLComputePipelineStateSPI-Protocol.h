//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GPUToolsCapture/MTLComputePipelineState-Protocol.h>
#import <GPUToolsCapture/MTLPipelineStateWithProgramAddressTable-Protocol.h>

@class MTLDebugInstrumentationData;

@protocol MTLComputePipelineStateSPI <MTLComputePipelineState, MTLPipelineStateWithProgramAddressTable>
@property(readonly, nonatomic) long long shaderValidationState;
@property(readonly) unsigned long long gpuHandle;
@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData;
@property(readonly) unsigned long long uniqueIdentifier;
@property(readonly, nonatomic) unsigned long long allocatedSize;
@property(readonly) unsigned long long staticThreadgroupMemoryLength;
@property(readonly) long long textureWriteRoundingMode;

@optional
@property(readonly, nonatomic) unsigned long long gpuAddress;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R,N

@property(readonly, nonatomic) unsigned long long resourceIndex;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R,N

@end
