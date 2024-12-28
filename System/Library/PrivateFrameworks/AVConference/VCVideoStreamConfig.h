//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableDictionary, NSMutableOrderedSet, NSOrderedSet, NSString;
@protocol VCMediaStreamSyncSource;

__attribute__((visibility("hidden")))
@interface VCVideoStreamConfig
{
    long long _videoResolution;	// 280 = 0x118
    unsigned long long _framerate;	// 288 = 0x120
    unsigned long long _txMaxBitrate;	// 296 = 0x128
    unsigned long long _txMinBitrate;	// 304 = 0x130
    unsigned long long _txInitialBitrate;	// 312 = 0x138
    unsigned long long _rxMaxBitrate;	// 320 = 0x140
    unsigned long long _rxMinBitrate;	// 328 = 0x148
    unsigned long long _keyFrameInterval;	// 336 = 0x150
    NSMutableOrderedSet *_txBitrateTiers;	// 344 = 0x158
    int _remoteVideoInitialOrientation;	// 352 = 0x160
    _Bool _enableCVO;	// 356 = 0x164
    unsigned long long _cvoExtensionID;	// 360 = 0x168
    _Bool _isVideoProtected;	// 368 = 0x170
    long long _type;	// 376 = 0x178
    unsigned long long _sourceFramerate;	// 384 = 0x180
    int _encodingMode;	// 392 = 0x188
    int _encoderUsage;	// 396 = 0x18c
    _Atomic unsigned char *_videoPriorityPointer;	// 400 = 0x190
    long long _captureSourceID;	// 408 = 0x198
    _Bool _shouldSendBlackFramesOnClearScreen;	// 416 = 0x1a0
    _Bool _foveationEnabled;	// 417 = 0x1a1
    unsigned int _screenDisplayID;	// 420 = 0x1a4
    unsigned long long _customWidth;	// 424 = 0x1a8
    unsigned long long _customHeight;	// 432 = 0x1b0
    NSMutableDictionary *_rxCodecFeatureListStrings;	// 440 = 0x1b8
    NSMutableDictionary *_txCodecFeatureListStrings;	// 448 = 0x1c0
    unsigned long long _tilesPerFrame;	// 456 = 0x1c8
    unsigned int _pixelFormat;	// 464 = 0x1d0
    _Bool _ltrpEnabled;	// 468 = 0x1d4
    int _hdrMode;	// 472 = 0x1d8
    NSString *_remoteDeviceName;	// 480 = 0x1e0
    NSString *_profileLevel;	// 488 = 0x1e8
    unsigned int _parameterSets;	// 496 = 0x1f0
    _Bool _temporalScalingEnabled;	// 500 = 0x1f4
    _Bool _isVariableSliceModeEnabled;	// 501 = 0x1f5
    _Bool _rtcpPSFB_FIREnabled;	// 502 = 0x1f6
    _Bool _resetSendRTPTimestampOnStop;	// 503 = 0x1f7
    id <VCMediaStreamSyncSource> _syncSource;	// 504 = 0x1f8
    _Bool _useInBandFEC;	// 512 = 0x200
    unsigned int _audioIOSampleRate;	// 516 = 0x204
    _Bool _fecEnabled;	// 520 = 0x208
    _Bool _rtxEnabled;	// 521 = 0x209
    int _transportProtocolType;	// 524 = 0x20c
    double _minPlaybackInterval;	// 528 = 0x210
    double _minRenderingDelay;	// 536 = 0x218
    double _mediaStallRefresh;	// 544 = 0x220
    double _mediaStallReportRepeatInterval;	// 552 = 0x228
    int _fecHeaderVersion;	// 560 = 0x230
    _Bool _fecGeneratorEnabled;	// 564 = 0x234
    _Bool _useVideoJitterForVideoPlayout;	// 565 = 0x235
    _Bool _forceZeroRegionOfInterestOrigin;	// 566 = 0x236
    _Bool _shouldEnableMLEnhance;	// 567 = 0x237
    _Bool _deferredAssemblyEnabled;	// 568 = 0x238
    _Bool _looseAVSyncEnabled;	// 569 = 0x239
    double _mediaStallTimeout;	// 576 = 0x240
    unsigned long long _maxEncoderPixels;	// 584 = 0x248
}

+ (id)profileLevelStringForId:(unsigned int)arg1;	// IMP=0x000000000036497f
+ (unsigned int)profileLevelIdForString:(id)arg1;	// IMP=0x00000000003648fd
+ (_Bool)validateClientDictionary:(id)arg1;	// IMP=0x00000000003645d3
@property(nonatomic) _Bool looseAVSyncEnabled; // @synthesize looseAVSyncEnabled=_looseAVSyncEnabled;
@property(nonatomic) _Bool deferredAssemblyEnabled; // @synthesize deferredAssemblyEnabled=_deferredAssemblyEnabled;
@property(nonatomic) _Bool shouldEnableMLEnhance; // @synthesize shouldEnableMLEnhance=_shouldEnableMLEnhance;
@property(nonatomic) _Bool forceZeroRegionOfInterestOrigin; // @synthesize forceZeroRegionOfInterestOrigin=_forceZeroRegionOfInterestOrigin;
@property(nonatomic) unsigned long long maxEncoderPixels; // @synthesize maxEncoderPixels=_maxEncoderPixels;
@property(nonatomic) _Bool useVideoJitterForVideoPlayout; // @synthesize useVideoJitterForVideoPlayout=_useVideoJitterForVideoPlayout;
@property(nonatomic) _Bool fecGeneratorEnabled; // @synthesize fecGeneratorEnabled=_fecGeneratorEnabled;
@property(nonatomic) int fecHeaderVersion; // @synthesize fecHeaderVersion=_fecHeaderVersion;
@property(nonatomic) double mediaStallReportRepeatInterval; // @synthesize mediaStallReportRepeatInterval=_mediaStallReportRepeatInterval;
@property(nonatomic) double mediaStallTimeout; // @synthesize mediaStallTimeout=_mediaStallTimeout;
@property(nonatomic) double minRenderingDelay; // @synthesize minRenderingDelay=_minRenderingDelay;
@property(nonatomic) double minPlaybackInterval; // @synthesize minPlaybackInterval=_minPlaybackInterval;
@property(nonatomic) int transportProtocolType; // @synthesize transportProtocolType=_transportProtocolType;
@property(nonatomic) _Bool rtxEnabled; // @synthesize rtxEnabled=_rtxEnabled;
@property(nonatomic) _Bool fecEnabled; // @synthesize fecEnabled=_fecEnabled;
@property(nonatomic) unsigned int audioIOSampleRate; // @synthesize audioIOSampleRate=_audioIOSampleRate;
@property(nonatomic) _Bool useInBandFEC; // @synthesize useInBandFEC=_useInBandFEC;
@property(nonatomic) int encoderUsage; // @synthesize encoderUsage=_encoderUsage;
@property(nonatomic) _Bool resetSendRTPTimestampOnStop; // @synthesize resetSendRTPTimestampOnStop=_resetSendRTPTimestampOnStop;
@property(nonatomic) id <VCMediaStreamSyncSource> syncSource; // @synthesize syncSource=_syncSource;
@property(nonatomic) _Bool rtcpPSFB_FIREnabled; // @synthesize rtcpPSFB_FIREnabled=_rtcpPSFB_FIREnabled;
@property(nonatomic) _Bool isVariableSliceModeEnabled; // @synthesize isVariableSliceModeEnabled=_isVariableSliceModeEnabled;
@property(nonatomic) _Bool temporalScalingEnabled; // @synthesize temporalScalingEnabled=_temporalScalingEnabled;
@property(nonatomic) unsigned int parameterSets; // @synthesize parameterSets=_parameterSets;
@property(retain, nonatomic) NSString *profileLevel; // @synthesize profileLevel=_profileLevel;
@property(retain, nonatomic) NSString *remoteDeviceName; // @synthesize remoteDeviceName=_remoteDeviceName;
@property(nonatomic) int hdrMode; // @synthesize hdrMode=_hdrMode;
@property(nonatomic) _Bool ltrpEnabled; // @synthesize ltrpEnabled=_ltrpEnabled;
@property(nonatomic) unsigned long long tilesPerFrame; // @synthesize tilesPerFrame=_tilesPerFrame;
@property(nonatomic) unsigned int pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(nonatomic) unsigned long long customHeight; // @synthesize customHeight=_customHeight;
@property(nonatomic) unsigned long long customWidth; // @synthesize customWidth=_customWidth;
@property(nonatomic) unsigned int screenDisplayID; // @synthesize screenDisplayID=_screenDisplayID;
@property(nonatomic) _Bool foveationEnabled; // @synthesize foveationEnabled=_foveationEnabled;
@property(nonatomic) _Bool shouldSendBlackFramesOnClearScreen; // @synthesize shouldSendBlackFramesOnClearScreen=_shouldSendBlackFramesOnClearScreen;
@property(nonatomic) long long captureSourceID; // @synthesize captureSourceID=_captureSourceID;
@property(nonatomic) _Atomic unsigned char *videoPriorityPointer; // @synthesize videoPriorityPointer=_videoPriorityPointer;
@property(nonatomic) int encodingMode; // @synthesize encodingMode=_encodingMode;
@property(nonatomic) unsigned long long sourceFramerate; // @synthesize sourceFramerate=_sourceFramerate;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool isVideoProtected; // @synthesize isVideoProtected=_isVideoProtected;
@property(nonatomic) unsigned long long cvoExtensionID; // @synthesize cvoExtensionID=_cvoExtensionID;
@property(nonatomic) _Bool enableCVO; // @synthesize enableCVO=_enableCVO;
@property(nonatomic) int remoteVideoInitialOrientation; // @synthesize remoteVideoInitialOrientation=_remoteVideoInitialOrientation;
@property(nonatomic) unsigned long long keyFrameInterval; // @synthesize keyFrameInterval=_keyFrameInterval;
@property(readonly, nonatomic) NSDictionary *txCodecFeatureListStrings; // @synthesize txCodecFeatureListStrings=_txCodecFeatureListStrings;
@property(readonly, nonatomic) NSDictionary *rxCodecFeatureListStrings; // @synthesize rxCodecFeatureListStrings=_rxCodecFeatureListStrings;
@property(nonatomic) unsigned long long rxMaxBitrate; // @synthesize rxMaxBitrate=_rxMaxBitrate;
@property(nonatomic) unsigned long long rxMinBitrate; // @synthesize rxMinBitrate=_rxMinBitrate;
@property(nonatomic) unsigned long long txInitialBitrate; // @synthesize txInitialBitrate=_txInitialBitrate;
@property(readonly, nonatomic) NSOrderedSet *txBitrateTiers; // @synthesize txBitrateTiers=_txBitrateTiers;
@property(nonatomic) unsigned long long txMaxBitrate; // @synthesize txMaxBitrate=_txMaxBitrate;
@property(nonatomic) unsigned long long txMinBitrate; // @synthesize txMinBitrate=_txMinBitrate;
@property(nonatomic) unsigned long long framerate; // @synthesize framerate=_framerate;
@property(nonatomic) long long videoResolution; // @synthesize videoResolution=_videoResolution;
- (void)initializeParameterSets;	// IMP=0x00000000003652b4
- (void)addTxBitrateTier:(id)arg1;	// IMP=0x000000000036520e
- (void)addTxCodecFeatureListString:(id)arg1 codecType:(long long)arg2;	// IMP=0x00000000003651bc
- (void)addRxCodecFeatureListString:(id)arg1 codecType:(long long)arg2;	// IMP=0x000000000036516a
- (_Bool)updateWithClientDictionary:(id)arg1;	// IMP=0x0000000000365158
- (_Bool)applyVideoStreamClientDictionary:(id)arg1;	// IMP=0x0000000000364a05
- (void)dealloc;	// IMP=0x000000000036452e
- (id)initWithClientDictionary:(id)arg1;	// IMP=0x000000000036422c
- (id)init;	// IMP=0x0000000000364218

@end
