//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIImageProcessorKernel.h"

__attribute__((visibility("hidden")))
@interface CILensModelKernelMetalProcessor : CIImageProcessorKernel
{
}

+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;	// IMP=0x008000000015b2f0
+ (_Bool)synchronizeInputs;	// IMP=0x008000000015b2e8
+ (int)outputFormat;	// IMP=0x008000000015b2d9
+ (int)formatForInputAtIndex:(int)arg1;	// IMP=0x008000000015b2d1
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;	// IMP=0x008000000015a9d9
+ (void)compilePipelinesIfNeeded:(id)arg1;	// IMP=0x008000000015a959
+ (void)releasePipelines;	// IMP=0x008000000015a8d4
+ (void)compilePipelines:(id)arg1;	// IMP=0x008000000015a5ef
+ (_Bool)hasValidPipelines;	// IMP=0x008000000015a597

@end

