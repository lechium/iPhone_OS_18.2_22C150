//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNCoreSceneUnderstandingCompoundRequestDetectorConfiguration;

__attribute__((visibility("hidden")))
@interface VNCoreSceneUnderstandingCompoundRequest
{
    VNCoreSceneUnderstandingCompoundRequestDetectorConfiguration *_detectorConfiguration;	// 8 = 0x8
}

+ (Class)configurationClass;	// IMP=0x0060000000408347
+ (id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id *)arg3;	// IMP=0x0060000000407ecc
+ (void)_evaluateOriginalVNClassifyCityNatureImageRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x0060000000407e02
+ (void)_evaluateOriginalVN6Mb1ME89lyW3HpahkEygIG:(id)arg1 configurations:(id)arg2;	// IMP=0x0060000000407d38
+ (void)_evaluateOriginalVN5kJNH3eYuyaLxNpZr5Z7zi:(id)arg1 configurations:(id)arg2;	// IMP=0x0060000000407c61
+ (void)_evaluateOriginalVNClassifyJunkImageRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x0060000000407b8a
+ (void)_evaluateOriginalVNCreateImageFingerprintsRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x0060000000407ac0
+ (void)_evaluateOriginalVNRecognizeObjectsRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x0060000000407933
+ (void)_evaluateOriginalVNGenerateObjectnessBasedSaliencyImageRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x006000000040785f
+ (void)_evaluateOriginalVNGenerateAttentionBasedSaliencyImageRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x0060000000407782
+ (void)_evaluateOriginalVNClassifyImageAestheticsRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x00600000004076ab
+ (void)_evaluateOriginalVNGenerateImageFeaturePrintRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x00600000004075e1
+ (void)_evaluateOriginalVNCreateSceneprintRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x0060000000407504
+ (void)_evaluateOriginalVNSceneClassificationRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x0060000000407399
+ (void)_evaluateOriginalVNClassifyImageRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x00600000004071e3
- (void).cxx_destruct;	// IMP=0x00000000004071d0
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000406f39
- (_Bool)allowsCachingOfResults;	// IMP=0x0000000000406f31
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;	// IMP=0x0000000000406e62
- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000406dfe
- (id)initWithDetectorType:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000000406a15

@end

