//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNFaceLandmarkDetectorDNN
{
    struct shared_ptr<vision::mod::LandmarkDetectorDNN> _landmarkDetector;	// 16 = 0x10
    struct vector<_Geometry2D_point2D_, std::allocator<_Geometry2D_point2D_>> _landmarkPoints65;	// 32 = 0x20
}

+ (int)_detectorConstellationForRequestConstellation:(unsigned long long)arg1;	// IMP=0x00400000003d9eb5
+ (id)outputBlobNames;	// IMP=0x00400000003d9d58
+ (id)inputBlobNames;	// IMP=0x00400000003d9b85
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x00400000003d9b22
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;	// IMP=0x00400000003d9a14
- (id).cxx_construct;	// IMP=0x00000000003dbada
- (void).cxx_destruct;	// IMP=0x00000000003dba76
- (void)releaseResources;	// IMP=0x00000000003dba06
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000003db01f
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer **)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000003dacfc
- (_Bool)translateAndNormalizeLandmarkPointsWrtLLCofAlignedFaceBBox:(void *)arg1 imageBuffer:(id)arg2 outputFace:(id)arg3 error:(id *)arg4;	// IMP=0x00000000003da816
- (_Bool)getLandmarkErrorEstimates:(void *)arg1 forRequestConstellation:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000003da630
- (_Bool)getLandmarkPoints:(void *)arg1 forRequestConstellation:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000003da243
- (_Bool)requestConstellation:(unsigned long long *)arg1 cvmlConstellation:(int *)arg2 fromOptions:(id)arg3 error:(id *)arg4;	// IMP=0x00000000003da166
@property(readonly) void *landmarkPoints65;

@end
