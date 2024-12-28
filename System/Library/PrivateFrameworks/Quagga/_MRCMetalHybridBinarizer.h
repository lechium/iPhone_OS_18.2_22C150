//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _MRCMetalContext;
@protocol MTLComputePipelineState;

@interface _MRCMetalHybridBinarizer : NSObject
{
    _MRCMetalContext *_metalContext;	// 8 = 0x8
    id <MTLComputePipelineState> _calcuateBlackPointsPipelineState;	// 16 = 0x10
    id <MTLComputePipelineState> _fixBlackPointsPipelineState;	// 24 = 0x18
    id <MTLComputePipelineState> _thresholdPipelineState;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000783f5
- (id)newTextureByBinarizingPixelBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x0000000000077bbb
- (id)initWithMetalContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000077a46
- (id)init;	// IMP=0x0000000000077a30

@end
