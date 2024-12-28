//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNFaceAnalyzerMultiDetectorBase
{
    struct shared_ptr<vision::mod::FaceprintAndAttributes> _mMultiHeadedFaceClassifier;	// 16 = 0x10
}

+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00400000001895be
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg1;	// IMP=0x00400000001895b3
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;	// IMP=0x0040000000189583
+ (const void *)modelVersionForOptions:(id)arg1;	// IMP=0x004000000018947e
+ (unsigned long long)numberOfImageChannels;	// IMP=0x0040000000189473
+ (id)keyForDetectorWithConfigurationOptions:(id)arg1;	// IMP=0x00400000001892e7
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x0040000000189284
+ (_Bool)producesObservationsForMultipleRequestClasses;	// IMP=0x004000000018927c
- (id).cxx_construct;	// IMP=0x0000000000194bc4
- (void).cxx_destruct;	// IMP=0x0000000000194b7d
- (_Bool)_saveFaceAttributes:(void *)arg1 toFaceObservation:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000194a60
- (_Bool)_isFaceprintJunk:(shared_ptr_0a6daad2)arg1;	// IMP=0x000000000019497e
- (_Bool)_saveFaceprint:(shared_ptr_0a6daad2)arg1 toFaceObservation:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x000000000019469d
- (void)_addFaceAnalysisResultsFromMap:(void *)arg1 toFaceAttributeObject:(id)arg2 forOriginatingRequestSpecifier:(id)arg3;	// IMP=0x000000000018f101
- (struct vImage_Buffer *)prepare_vImageBufferForCVPixelBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x000000000018f0bd
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000018cef6
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer **)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000018ccfd
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 warningRecorder:(id)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000018c927
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000189a7c

@end
