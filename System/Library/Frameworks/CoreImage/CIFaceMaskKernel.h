//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIImageProcessorKernel.h"

__attribute__((visibility("hidden")))
@interface CIFaceMaskKernel : CIImageProcessorKernel
{
}

+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;	// IMP=0x00800000000c93e1
+ (_Bool)synchronizeInputs;	// IMP=0x00800000000c93d9
+ (int)outputFormat;	// IMP=0x00800000000c93ca
+ (int)formatForInputAtIndex:(int)arg1;	// IMP=0x00800000000c93bb
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;	// IMP=0x00800000000c8802
+ (void)allocateBuffersIfNeeded:(id)arg1;	// IMP=0x00800000000c8782
+ (void)releaseBuffers;	// IMP=0x00800000000c875f
+ (void)allocateBuffers:(id)arg1;	// IMP=0x00800000000c873b
+ (_Bool)hasValidBuffers;	// IMP=0x00800000000c872a
+ (void)compilePipelinesIfNeeded:(id)arg1;	// IMP=0x00800000000c86aa
+ (void)releasePipelines;	// IMP=0x00800000000c8670
+ (void)compilePipelines:(id)arg1;	// IMP=0x00800000000c84f3
+ (_Bool)hasValidPipelines;	// IMP=0x00800000000c84d5

@end

