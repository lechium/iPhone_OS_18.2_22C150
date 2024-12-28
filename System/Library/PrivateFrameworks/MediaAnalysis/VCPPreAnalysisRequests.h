//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VN1JC7R3k4455fKQz0dY1VhQ, VN5kJNH3eYuyaLxNpZr5Z7zi, VN6Mb1ME89lyW3HpahkEygIG, VNClassifyCityNatureImageRequest, VNClassifyImageAestheticsRequest, VNClassifyImageRequest, VNClassifyJunkImageRequest, VNClassifyMemeImageRequest, VNClassifyPotentialLandmarkRequest, VNCreateImageFingerprintsRequest, VNCreateSceneprintRequest, VNGenerateAttentionBasedSaliencyImageRequest, VNGenerateObjectnessBasedSaliencyImageRequest, VNRecognizeDocumentElementsRequest, VNRecognizeObjectsRequest, VNSceneClassificationRequest, VNVYvzEtX1JlUdu8xx5qhDI;

@interface VCPPreAnalysisRequests : NSObject
{
    VNClassifyImageAestheticsRequest *_aestheticsRequest;	// 8 = 0x8
    VNSceneClassificationRequest *_classificationRequest;	// 16 = 0x10
    VNCreateSceneprintRequest *_sceneprintRequest;	// 24 = 0x18
    VNGenerateAttentionBasedSaliencyImageRequest *_saliencyRequest;	// 32 = 0x20
    VNClassifyJunkImageRequest *_junkImageRequest;	// 40 = 0x28
    VNRecognizeObjectsRequest *_objectRequest;	// 48 = 0x30
    VNGenerateObjectnessBasedSaliencyImageRequest *_saliencyObjectnessRequest;	// 56 = 0x38
    VNClassifyPotentialLandmarkRequest *_landmarkRequest;	// 64 = 0x40
    VNVYvzEtX1JlUdu8xx5qhDI *_nsfwRequest;	// 72 = 0x48
    VN6Mb1ME89lyW3HpahkEygIG *_tabooRequest;	// 80 = 0x50
    VN5kJNH3eYuyaLxNpZr5Z7zi *_semanticRequest;	// 88 = 0x58
    VNCreateSceneprintRequest *_sceneprintRawRequest;	// 96 = 0x60
    VNClassifyMemeImageRequest *_memeRequest;	// 104 = 0x68
    VN1JC7R3k4455fKQz0dY1VhQ *_adjustmentsRequest;	// 112 = 0x70
    VNRecognizeDocumentElementsRequest *_documentRequest;	// 120 = 0x78
    VNClassifyCityNatureImageRequest *_cityNatureRequest;	// 128 = 0x80
    VNCreateImageFingerprintsRequest *_imagefingerprintsRequest;	// 136 = 0x88
    VNClassifyImageRequest *_classifyImageRequest;	// 144 = 0x90
}

+ (void)asyncLoadSharedPhotoFormatsObjects;	// IMP=0x00600000000a3dd8
+ (void)asyncCacheRequestIdealDimension;	// IMP=0x00600000000a3ad6
+ (id)_cachedRequestIdealDimension;	// IMP=0x00600000000a2938
+ (_Bool)isDimensionUnknown:(id)arg1;	// IMP=0x00600000000a2708
+ (unsigned long long)sharpnessRevision;	// IMP=0x00600000000a26c2
+ (_Bool)includeDMF;	// IMP=0x00600000000a26ba
+ (_Bool)includeJunk;	// IMP=0x00600000000a26b2
+ (_Bool)includeCN;	// IMP=0x00600000000a26aa
+ (_Bool)includePA;	// IMP=0x00600000000a26a2
+ (_Bool)includeIVS;	// IMP=0x00600000000a269a
+ (_Bool)includeDocument;	// IMP=0x00600000000a2692
+ (_Bool)includeRotation;	// IMP=0x00600000000a268a
+ (_Bool)includeMeme;	// IMP=0x00600000000a2682
+ (_Bool)includeSO;	// IMP=0x00600000000a267a
+ (_Bool)includeDO;	// IMP=0x00600000000a2672
+ (_Bool)includeWP;	// IMP=0x00600000000a266a
+ (_Bool)includeSDG;	// IMP=0x00600000000a2662
+ (_Bool)includeSE;	// IMP=0x00600000000a265a
+ (_Bool)includeLM;	// IMP=0x00600000000a2652
+ (_Bool)includeNSFW;	// IMP=0x00600000000a264a
- (void).cxx_destruct;	// IMP=0x00000000000a4668
@property(retain, nonatomic) VNClassifyImageRequest *classifyImageRequest; // @synthesize classifyImageRequest=_classifyImageRequest;
@property(retain, nonatomic) VNCreateImageFingerprintsRequest *imagefingerprintsRequest; // @synthesize imagefingerprintsRequest=_imagefingerprintsRequest;
@property(retain, nonatomic) VNClassifyCityNatureImageRequest *cityNatureRequest; // @synthesize cityNatureRequest=_cityNatureRequest;
@property(retain, nonatomic) VNRecognizeDocumentElementsRequest *documentRequest; // @synthesize documentRequest=_documentRequest;
@property(retain, nonatomic) VN1JC7R3k4455fKQz0dY1VhQ *adjustmentsRequest; // @synthesize adjustmentsRequest=_adjustmentsRequest;
@property(retain, nonatomic) VNClassifyMemeImageRequest *memeRequest; // @synthesize memeRequest=_memeRequest;
@property(retain, nonatomic) VNCreateSceneprintRequest *sceneprintRawRequest; // @synthesize sceneprintRawRequest=_sceneprintRawRequest;
@property(retain, nonatomic) VN5kJNH3eYuyaLxNpZr5Z7zi *semanticRequest; // @synthesize semanticRequest=_semanticRequest;
@property(retain, nonatomic) VN6Mb1ME89lyW3HpahkEygIG *tabooRequest; // @synthesize tabooRequest=_tabooRequest;
@property(retain, nonatomic) VNVYvzEtX1JlUdu8xx5qhDI *nsfwRequest; // @synthesize nsfwRequest=_nsfwRequest;
@property(retain, nonatomic) VNClassifyPotentialLandmarkRequest *landmarkRequest; // @synthesize landmarkRequest=_landmarkRequest;
@property(retain, nonatomic) VNGenerateObjectnessBasedSaliencyImageRequest *saliencyObjectnessRequest; // @synthesize saliencyObjectnessRequest=_saliencyObjectnessRequest;
@property(retain, nonatomic) VNRecognizeObjectsRequest *objectRequest; // @synthesize objectRequest=_objectRequest;
@property(retain, nonatomic) VNClassifyJunkImageRequest *junkImageRequest; // @synthesize junkImageRequest=_junkImageRequest;
@property(retain, nonatomic) VNGenerateAttentionBasedSaliencyImageRequest *saliencyRequest; // @synthesize saliencyRequest=_saliencyRequest;
@property(retain, nonatomic) VNCreateSceneprintRequest *sceneprintRequest; // @synthesize sceneprintRequest=_sceneprintRequest;
@property(retain, nonatomic) VNSceneClassificationRequest *classificationRequest; // @synthesize classificationRequest=_classificationRequest;
@property(retain, nonatomic) VNClassifyImageAestheticsRequest *aestheticsRequest; // @synthesize aestheticsRequest=_aestheticsRequest;
- (id)mapAvailableRequestsToResolution;	// IMP=0x00000000000a35ae
- (id)gatherAvailableRequests;	// IMP=0x00000000000a2724

@end
