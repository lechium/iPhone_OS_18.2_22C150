//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNMemeClassifier
{
    int _modelDrop;	// 12 = 0xc
}

+ (id)sceneLabelsFilePathForConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x00600000002fc22e
+ (_Bool)providesSceneLabelsForConfiguration:(id)arg1;	// IMP=0x00600000002fc202
+ (unsigned int)analysisPixelFormatTypeForConfiguration:(id)arg1;	// IMP=0x00600000002fc1f7
+ (id)inputImageBlobNameForConfiguration:(id)arg1;	// IMP=0x00600000002fc1ae
+ (id)modelPathForConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x00600000002fc146
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x00600000002fc0e3
- (id)observationsForLastAnalysisOfImageAnalyzer:(void *)arg1 processOptions:(id)arg2 originatingRequestSpecifier:(id)arg3 qosClass:(unsigned int)arg4 error:(id *)arg5;	// IMP=0x00000000002fc61b
- (unsigned int)analysisTypesForProcessOptions:(id)arg1;	// IMP=0x00000000002fc610
- (_Bool)configureImageAnalyzerOptions:(void *)arg1 error:(id *)arg2;	// IMP=0x00000000002fc58f
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002fc4c9
- (id)supportedIdentifiersWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002fc4a5

@end
