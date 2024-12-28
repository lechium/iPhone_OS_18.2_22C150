//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNEspressoResources;

__attribute__((visibility("hidden")))
@interface VNEspressoModelFileBasedDetector
{
    VNEspressoResources *_espressoResources;	// 16 = 0x10
    unsigned long long _networkRequiredInputImageWidth;	// 24 = 0x18
    unsigned long long _networkRequiredInputImageHeight;	// 32 = 0x20
    unsigned long long _inputImageAspectRatioHandling;	// 40 = 0x28
}

+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:(id)arg1;	// IMP=0x00600000003c7a9b
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg1;	// IMP=0x00600000003c7a93
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;	// IMP=0x00600000003c7a60
+ (id)espressoModelWeightsFilePathInfoForConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00600000003c7907
+ (id)espressoModelPathForConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00600000003c77dc
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;	// IMP=0x00600000003c762c
+ (id)supportedImageSizeSetForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00600000003c73c0
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00600000003c7158
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x00600000003c70f5
- (void).cxx_destruct;	// IMP=0x00000000003c8ff1
@property(readonly, nonatomic) unsigned long long inputImageAspectRatioHandling; // @synthesize inputImageAspectRatioHandling=_inputImageAspectRatioHandling;
@property(readonly, nonatomic) unsigned long long networkRequiredInputImageHeight; // @synthesize networkRequiredInputImageHeight=_networkRequiredInputImageHeight;
@property(readonly, nonatomic) unsigned long long networkRequiredInputImageWidth; // @synthesize networkRequiredInputImageWidth=_networkRequiredInputImageWidth;
@property(readonly, nonatomic) VNEspressoResources *espressoResources; // @synthesize espressoResources=_espressoResources;
- (_Bool)executePlanForModel:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003c8f0c
- (_Bool)executePlanAndReturnError:(id *)arg1;	// IMP=0x00000000003c8ea0
- (_Bool)bindPixelBuffer:(struct __CVBuffer *)arg1 toNetworkBlobName:(id)arg2 forModel:(id)arg3 error:(id *)arg4;	// IMP=0x00000000003c8d9b
- (_Bool)bindPixelBuffer:(struct __CVBuffer *)arg1 toNetworkBlobName:(id)arg2 error:(id *)arg3;	// IMP=0x00000000003c8cf7
- (_Bool)bindLockedPixelBuffer:(struct __CVBuffer *)arg1 toNetworkInputBlobName:(id)arg2 forModel:(id)arg3 error:(id *)arg4;	// IMP=0x00000000003c8be7
- (_Bool)bindLockedPixelBuffer:(struct __CVBuffer *)arg1 toNetworkInputBlobName:(id)arg2 error:(id *)arg3;	// IMP=0x00000000003c8b43
- (_Bool)_bindBuffer:(CDStruct_0a65202a *)arg1 toNetworkBlobName:(id)arg2 bindMode:(int)arg3 bindPtr:(int)arg4 forModel:(id)arg5 error:(id *)arg6;	// IMP=0x00000000003c8a29
- (_Bool)_bindBuffer:(CDStruct_0a65202a *)arg1 toNetworkBlobName:(id)arg2 bindMode:(int)arg3 bindPtr:(int)arg4 error:(id *)arg5;	// IMP=0x00000000003c8970
- (_Bool)_bindBuffer:(CDStruct_0a65202a *)arg1 toNetworkBlobName:(id)arg2 bindMode:(int)arg3 error:(id *)arg4;	// IMP=0x00000000003c88b8
- (_Bool)bindBuffer:(CDStruct_0a65202a *)arg1 toNetworkOutputBlobName:(id)arg2 forModel:(id)arg3 error:(id *)arg4;	// IMP=0x00000000003c888c
- (_Bool)bindBuffer:(CDStruct_0a65202a *)arg1 toNetworkOutputBlobName:(id)arg2 error:(id *)arg3;	// IMP=0x00000000003c87d6
- (_Bool)bindClientBuffer:(CDStruct_0a65202a *)arg1 toNetworkInputBlobName:(id)arg2 forModel:(id)arg3 error:(id *)arg4;	// IMP=0x00000000003c87aa
- (_Bool)bindClientBuffer:(CDStruct_0a65202a *)arg1 toNetworkInputBlobName:(id)arg2 error:(id *)arg3;	// IMP=0x00000000003c8706
- (_Bool)bindBuffer:(CDStruct_0a65202a *)arg1 toNetworkInputBlobName:(id)arg2 forModel:(id)arg3 error:(id *)arg4;	// IMP=0x00000000003c86da
- (_Bool)bindBuffer:(CDStruct_0a65202a *)arg1 toNetworkInputBlobName:(id)arg2 error:(id *)arg3;	// IMP=0x00000000003c8636
- (_Bool)getWidth:(unsigned long long *)arg1 height:(unsigned long long *)arg2 ofEspressoModelNetworkBlobNamed:(id)arg3 error:(id *)arg4;	// IMP=0x00000000003c8472
- (int)espressoModelNetworkLayersStorageTypeForConfigurationOptions:(id)arg1;	// IMP=0x00000000003c83cd
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer **)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000003c816d
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003c80d2
- (_Bool)_loadEspressoModelWithConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003c7bd2

@end
