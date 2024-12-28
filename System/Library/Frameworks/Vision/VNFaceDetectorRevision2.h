//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNFaceBBoxAligner;

__attribute__((visibility("hidden")))
@interface VNFaceDetectorRevision2
{
    struct shared_ptr<vision::mod::ObjectDetector_DCNFaceDetector_v2> _faceDetector;	// 16 = 0x10
    VNFaceBBoxAligner *_faceBBoxAligner;	// 32 = 0x20
    _Bool _preferBackgroundProcessing;	// 40 = 0x28
}

+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x00600000001ab3bd
+ (id)supportedImageSizeSetForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00600000001ab2ac
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00600000001ab1f2
+ (id)computeStagesToBindForConfigurationOptions:(id)arg1;	// IMP=0x00600000001ab183
- (id).cxx_construct;	// IMP=0x00000000001ac4c6
- (void).cxx_destruct;	// IMP=0x00000000001ac46b
- (void)purgeIntermediates;	// IMP=0x00000000001ac3d3
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000001abf94
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer **)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000001abc39
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001ab4f9

@end
