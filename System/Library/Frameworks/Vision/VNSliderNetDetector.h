//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNSliderNetDetector
{
}

+ (unsigned int)analysisPixelFormatTypeForConfiguration:(id)arg1;	// IMP=0x00800000002d8bf3
+ (id)inputImageBlobNameForConfiguration:(id)arg1;	// IMP=0x00800000002d8be6
+ (id)modelPathForConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x00800000002d8bb6
+ (id)supportedAdjustmentKeys;	// IMP=0x00800000002d8ba9
- (id)observationsForLastAnalysisOfImageAnalyzer:(void *)arg1 processOptions:(id)arg2 originatingRequestSpecifier:(id)arg3 qosClass:(unsigned int)arg4 error:(id *)arg5;	// IMP=0x00000000002d87f1
- (unsigned int)analysisTypesForProcessOptions:(id)arg1;	// IMP=0x00000000002d87e6
- (_Bool)configureImageAnalyzerOptions:(void *)arg1 error:(id *)arg2;	// IMP=0x00000000002d8504

@end

