//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface VCHardwareSettingsMac
{
    _Bool _hiDefEncoding;	// 34 = 0x22
    _Bool _isGVAEncoderAvailableInitialized;	// 35 = 0x23
    _Bool _isGVAEncoderAvailable;	// 36 = 0x24
    int _machineType;	// 40 = 0x28
    int _cpuFamily;	// 44 = 0x2c
    int _numProcessors;	// 48 = 0x30
    int _mhrtz;	// 52 = 0x34
    int _isG5;	// 56 = 0x38
    int _hardwareScore;	// 60 = 0x3c
    NSString *_cpuType;	// 64 = 0x40
    NSString *_machineName;	// 72 = 0x48
    unsigned int _screenWidth;	// 80 = 0x50
    unsigned int _screenHeight;	// 84 = 0x54
    unsigned long long _maxScreenEncodingSizeSupported;	// 88 = 0x58
    _Bool _supportsFilteredScreenCapture;	// 96 = 0x60
    NSString *_modelName;	// 104 = 0x68
    unsigned int _modelVersion;	// 112 = 0x70
    unsigned int _modelRevision;	// 116 = 0x74
    NSData *_boardId;	// 120 = 0x78
}

+ (_Bool)isCellularTappingSupported;	// IMP=0x001000000003f4bf
+ (long long)deviceClass;	// IMP=0x001000000003eb2a
+ (id)sharedInstance;	// IMP=0x001000000003e266
+ (id)virtualHardwareSettings:(id)arg1;	// IMP=0x001000000003d2ca
@property(readonly, nonatomic) _Bool supportsFoveation;
@property(readonly, nonatomic) _Bool captureFormatPrefer16by9ForSquare;
@property(readonly, nonatomic) _Bool supportsOutOfProcessAudioDecoding;
@property(readonly, nonatomic) _Bool supportsOutOfProcessVideoDecoding;
@property(readonly, nonatomic) _Bool isMLEnhanceOneToOneSupported;
@property(readonly, nonatomic) _Bool isExternalCameraSupported;
@property(readonly, nonatomic) _Bool isSmartBrakeSupported;
@property(readonly, nonatomic) _Bool isViewPointCorrectionSupported;
@property(readonly, nonatomic) _Bool isMediaRecordingSupported;
@property(readonly, nonatomic) _Bool isRemoteCameraSenderSupported;
- (_Bool)preferPresentationTimestamp;	// IMP=0x000000000003f4b7
@property(readonly, nonatomic) long long screenShareCapabilities;
- (_Bool)disableMLScalarDuringSharing;	// IMP=0x000000000003f4a4
- (_Bool)supportsDedicatedSystemAudioStream;	// IMP=0x000000000003f30f
- (_Bool)supportsSystemAudioTap;	// IMP=0x000000000003f307
- (_Bool)supportsScreenCapture;	// IMP=0x000000000003f2ff
- (_Bool)limitCameraDownlinkBitrateDuringSharing;	// IMP=0x000000000003f2ea
@property(readonly, nonatomic) NSArray *supportedVideoPayloads;
- (id)queryBoardId;	// IMP=0x000000000003f144
@property(readonly, nonatomic) _Bool shouldEnforceScreenFrameRateLimit;
@property(readonly, nonatomic) unsigned int maxFrameRateSupportedScreenShare;
@property(readonly, nonatomic) unsigned int maxActiveScreenEncoders;
@property(readonly, nonatomic) unsigned long long maxScreenEncodingSizeSupported;
- (_Bool)supportsFilteredScreenCapture;	// IMP=0x000000000003ed59
- (double)previewPreferredAspectRatio;	// IMP=0x000000000003ed4b
- (unsigned int)screenHeightForDisplayID:(unsigned int)arg1;	// IMP=0x000000000003ed39
@property(readonly, nonatomic) unsigned int screenHeight;
@property(readonly, nonatomic) _Bool shouldOverrideGPUMuxing;
- (unsigned int)screenWidthForDisplayID:(unsigned int)arg1;	// IMP=0x000000000003ecb5
@property(readonly, nonatomic) unsigned int screenWidth;
- (void)_initializeScreenDimension;	// IMP=0x000000000003ec80
@property(readonly, nonatomic) _Bool supportsDecodingSquareCameraVideo;
@property(readonly, nonatomic) _Bool supportsMultiway1080pStream;
@property(readonly, nonatomic) _Bool supportsAVFCapture;
- (unsigned int)maxFpsCameraCaptureDuringSharing;	// IMP=0x000000000003ebf1
- (unsigned int)maxRemoteParticipants30fps;	// IMP=0x000000000003eb32
@property(readonly, nonatomic) _Bool isPixelFormatAvailable;
- (void)addPixelFormat;	// IMP=0x000000000003ea41
@property(readonly, nonatomic) _Bool supportsHEIFEncoding;
@property(readonly, nonatomic) _Bool isDeviceLargeScreen;
@property(readonly, nonatomic) _Bool supportsCompressedPixelFormat;
@property(readonly, nonatomic) unsigned int maxActiveVideoDecoders;
- (unsigned int)maxMultiwayFramerateSupported;	// IMP=0x000000000003e922
@property(readonly, nonatomic) _Bool isCaptionsSupported;
- (unsigned int)maxOneToOneFramerateSupported;	// IMP=0x000000000003e90f
@property(readonly, nonatomic) _Bool supportsMultiway720pStream;
@property(readonly, nonatomic) unsigned int maxActiveVideoEncoders;
@property(readonly, nonatomic) unsigned int maxDisplayRefreshRate;
@property(readonly, nonatomic) _Bool useSoftFramerateSwitching;
@property(readonly, nonatomic) int hardwareScore;
@property(readonly, nonatomic) NSString *machineName;
@property(readonly, nonatomic) unsigned int hwEncoderEnterBitrate;
@property(readonly, nonatomic) unsigned int hwEncoderExitBitrate;
- (_Bool)isAppleSiliconMac;	// IMP=0x000000000003e3f9
@property(readonly, nonatomic) _Bool isMacmini;
- (_Bool)isMacBookAir;	// IMP=0x000000000003e3c7
- (_Bool)isIMacPro;	// IMP=0x000000000003e3ae
@property(readonly, nonatomic) _Bool isIMac;
@property(readonly, nonatomic) _Bool isMacPro;
@property(readonly, nonatomic) _Bool isMacBookWVGA;
@property(readonly, nonatomic) _Bool isSpatialAudioSupported;
@property(readonly, nonatomic) _Bool supports1080pDecoding;
@property(readonly, nonatomic) _Bool supports1080pEncoding;
@property(readonly, nonatomic) _Bool canDoHiDefDecoding;
@property(readonly, nonatomic) _Bool canDoHEVC;
@property(readonly, nonatomic) _Bool canDoHiDefEncoding;
- (_Bool)isGVAEncoderAvailable;	// IMP=0x000000000003db82
- (_Bool)_isModel:(id)arg1;	// IMP=0x000000000003db2b
- (_Bool)_isMachineNewerThanSandybridge:(int)arg1;	// IMP=0x000000000003dac3
- (id)_getCPUTypeStringForMachineType:(int)arg1;	// IMP=0x000000000003da39
- (int)_getCPUFamilyType;	// IMP=0x000000000003d898
- (void)setupMachineName;	// IMP=0x000000000003d649
- (void)dealloc;	// IMP=0x000000000003d5c0
- (id)initForDevice:(id)arg1;	// IMP=0x000000000003d091
- (id)init;	// IMP=0x000000000003ce0b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isSiriVoicePlayoutSupported;
@property(readonly, nonatomic) _Bool isSiriVoiceTapSupported;
@property(readonly) Class superclass;

@end
