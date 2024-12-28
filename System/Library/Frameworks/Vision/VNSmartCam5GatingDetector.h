//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, VNSaliencyOHeatmapBoundingBoxGenerator, VisionCoreSmartCam5InferenceNetworkDescriptor;

__attribute__((visibility("hidden")))
@interface VNSmartCam5GatingDetector
{
    VisionCoreSmartCam5InferenceNetworkDescriptor *_inferenceNetworkDescriptor;	// 16 = 0x10
    NSDictionary *_documentIdentifierToSceneLabels;	// 24 = 0x18
    VNSaliencyOHeatmapBoundingBoxGenerator *_boundingBoxGenerator;	// 32 = 0x20
}

+ (id)segmentationLabelsFilePathForConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000293f3f
+ (_Bool)providesSegmentationLabelsForConfiguration:(id)arg1;	// IMP=0x0060000000293f37
+ (unsigned int)analysisPixelFormatTypeForConfiguration:(id)arg1;	// IMP=0x0060000000293ea2
+ (id)inputImageBlobNameForConfiguration:(id)arg1;	// IMP=0x0060000000293e01
+ (id)sceneLabelsFilePathForConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000293d18
+ (_Bool)providesSceneLabelsForConfiguration:(id)arg1;	// IMP=0x0060000000293d10
+ (id)modelPathForConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000293c62
+ (id)_inferenceNetworkDescriptorForConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000293ba8
- (void).cxx_destruct;	// IMP=0x00000000002929eb
- (id)observationsForLastAnalysisOfImageAnalyzer:(void *)arg1 processOptions:(id)arg2 originatingRequestSpecifier:(id)arg3 qosClass:(unsigned int)arg4 error:(id *)arg5;	// IMP=0x0000000000291f2f
- (unsigned int)analysisTypesForProcessOptions:(id)arg1;	// IMP=0x0000000000291c61
- (_Bool)configureImageAnalyzerOptions:(void *)arg1 error:(id *)arg2;	// IMP=0x0000000000291b5a
- (unsigned long long)defaultImageCropAndScaleOption;	// IMP=0x0000000000291b4f
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000291952
@property(readonly, copy) NSArray *supportedDocumentElementIdentifiers;
- (id)supportedClassificationIdentifiersWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002918a6

@end
