//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol MTLComputePipelineState;

__attribute__((visibility("hidden")))
@interface AVTCompositorPipeline : NSObject
{
    _Bool _isAffectedBySkin;	// 8 = 0x8
    _Bool _shouldCompositeAgainDueToGPUError;	// 9 = 0x9
    unsigned long long _affectingComponentsMask;	// 16 = 0x10
    NSArray *_bindings;	// 24 = 0x18
    id <MTLComputePipelineState> _pipelineState;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000c3ea
- (void)compositeTexture:(id)arg1 forMemoji:(id)arg2 considerSkin:(_Bool)arg3 componentsToConsider:(unsigned long long)arg4 computeCommandHandler:(CDUnknownBlockType)arg5 blitCommandHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7 helper:(id)arg8 helperTokens:(id)arg9;	// IMP=0x000000000000bd5c
- (id)initWithFunction:(id)arg1;	// IMP=0x000000000000a94b

@end
