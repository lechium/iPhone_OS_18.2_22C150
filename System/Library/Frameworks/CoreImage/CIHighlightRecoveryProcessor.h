//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIImageProcessorKernel.h"

__attribute__((visibility("hidden")))
@interface CIHighlightRecoveryProcessor : CIImageProcessorKernel
{
}

+ (_Bool)allowPartialOutputRegion;	// IMP=0x00800000001a7ece
+ (_Bool)synchronizeInputs;	// IMP=0x00800000001a7ec6
+ (int)outputFormat;	// IMP=0x00800000001a7eb7
+ (int)formatForInputAtIndex:(int)arg1;	// IMP=0x00800000001a7ea8
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;	// IMP=0x00800000001a7d90
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;	// IMP=0x00800000001a7154
+ (id)functionConstantValuesTuningParameters:(id)arg1;	// IMP=0x00800000001a6f8b
+ (id)compilePipelineForDevice:(id)arg1 functionName:(id)arg2 constantValues:(id)arg3;	// IMP=0x00800000001a6eda

@end

