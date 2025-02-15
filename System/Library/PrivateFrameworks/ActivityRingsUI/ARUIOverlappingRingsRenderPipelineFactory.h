//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ARUIRingsAlphaReductionState, ARUIRingsEmptyState, ARUIRingsEndCapShadowState, ARUIRingsFillState;

__attribute__((visibility("hidden")))
@interface ARUIOverlappingRingsRenderPipelineFactory
{
    ARUIRingsEmptyState *_emptyState;	// 8 = 0x8
    ARUIRingsFillState *_fillState;	// 16 = 0x10
    ARUIRingsEndCapShadowState *_endCapShadowState;	// 24 = 0x18
    ARUIRingsAlphaReductionState *_alphaReductionState;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001f7db
- (id)pipelineForConfiguration:(id)arg1;	// IMP=0x000000000001f692
- (id)initWithDeviceSPI:(id)arg1 librarySPI:(id)arg2;	// IMP=0x000000000001f567
- (id)initWithDevice:(id)arg1 library:(id)arg2;	// IMP=0x000000000001f415

@end

