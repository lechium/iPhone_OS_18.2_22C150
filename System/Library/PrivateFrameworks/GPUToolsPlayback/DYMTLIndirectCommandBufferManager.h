//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DYMTLFunctionPlayer;

__attribute__((visibility("hidden")))
@interface DYMTLIndirectCommandBufferManager : NSObject
{
    DYMTLFunctionPlayer *_player;	// 8 = 0x8
    struct unordered_map<unsigned long long, unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, unsigned long long>>> _gpuVirtualAddressMap;	// 16 = 0x10
    struct unordered_map<unsigned long long, unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, unsigned long long>>> _renderPipelineStateUniqueIdentifier;	// 56 = 0x38
    struct unordered_map<unsigned long long, unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, unsigned long long>>> _computePipelineStateUniqueIdentifier;	// 96 = 0x60
    struct vector<GPUTools::MTL::Utils::DYMTLBufferGPUAddress, std::allocator<GPUTools::MTL::Utils::DYMTLBufferGPUAddress>> _gpuVirtualAddressArray;	// 136 = 0x88
    _Bool _recalculateVirtualAddress;	// 160 = 0xa0
}

- (id).cxx_construct;	// IMP=0x00000000000107e8
- (void).cxx_destruct;	// IMP=0x0000000000010798
- (id)saveComputeEncoder:(id)arg1 withDescriptor:(id)arg2;	// IMP=0x0000000000010768
- (id)saveRenderEncoder:(id)arg1 withDescriptor:(id)arg2;	// IMP=0x0000000000010738
- (id)convertIndirectCommandBufferData:(const char *)arg1 range:(struct _NSRange)arg2 toFBufStream:(const struct CoreFunction *)arg3;	// IMP=0x0000000000010537
- (void)updateReplayerTranslationBuffer;	// IMP=0x000000000000fa6f
- (unsigned long long)setupComputeCommandEncoder:(id)arg1 withData:(const char *)arg2 atIndex:(unsigned long long)arg3 forIndirectCommandBuffer:(id)arg4;	// IMP=0x000000000000f78d
- (unsigned long long)setupRenderCommandEncoder:(id)arg1 withData:(const char *)arg2 atIndex:(unsigned long long)arg3 forIndirectCommandBuffer:(id)arg4;	// IMP=0x000000000000f5ec
- (void)restoreBuffer:(id)arg1 optimizedRanges:(const char *)arg2 commandQueue:(id)arg3;	// IMP=0x000000000000f313
- (void)restoreBuffer:(id)arg1 withData:(const char *)arg2 commandQueue:(id)arg3;	// IMP=0x000000000000f01a
- (void)executeIndirectComputeCommand:(id)arg1 withData:(const char *)arg2 atIndex:(unsigned long long)arg3 forIndirectCommandBuffer:(id)arg4;	// IMP=0x000000000000ec40
- (unsigned int)executeIndirectRenderCommands:(id)arg1 withData:(const char *)arg2 forRange:(struct _NSRange)arg3 forIndirectCommandBuffer:(id)arg4;	// IMP=0x000000000000e7a0
- (void)executeIndirectRenderCommand:(id)arg1 withData:(const char *)arg2 atIndex:(unsigned long long)arg3 forIndirectCommandBuffer:(id)arg4;	// IMP=0x000000000000e11a
- (void)_calculateGPUVirtualAddress;	// IMP=0x000000000000de96
- (void)addComputePipelineStateUniqueIdentifier:(unsigned long long)arg1 forObjectId:(unsigned long long)arg2;	// IMP=0x000000000000de5d
- (void)addRenderPipelineStateUniqueIdentifier:(unsigned long long)arg1 forObjectId:(unsigned long long)arg2;	// IMP=0x000000000000de24
- (void)addGPUVirtualAddress:(unsigned long long)arg1 forObjectId:(unsigned long long)arg2;	// IMP=0x000000000000dddc
- (unsigned long long)computePipelineIdForUniqueIdentifier:(unsigned long long)arg1;	// IMP=0x000000000000ddac
- (unsigned long long)renderPipelineIdForUniqueIdentifier:(unsigned long long)arg1;	// IMP=0x000000000000dd7c
- (pair_d15d9a20)bufferIdAndOffsetForGPUVirtualAddress:(unsigned long long)arg1;	// IMP=0x000000000000dd68
- (id)initWithFunctionPlayer:(id)arg1;	// IMP=0x000000000000dce9

@end

