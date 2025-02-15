//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, VCAudioPowerSpectrumSource, VCSessionMediaStreamPresenceConfigurationProvider, VCSystemAudioCaptureSession, VCVideoRule;
@protocol VCSessionUplinkBandwidthAllocator;

__attribute__((visibility("hidden")))
@interface VCSessionParticipantLocal
{
    NSArray *_uplinkBandwidthAllocators;	// 448 = 0x1c0
    id <VCSessionUplinkBandwidthAllocator> _uplinkBandwidthAllocator;	// 456 = 0x1c8
    _Bool _encryptionInfoReceived;	// 464 = 0x1d0
    unsigned int _currentVCMediaQueueSize;	// 468 = 0x1d4
    unsigned int _currentUplinkTargetBitrate;	// 472 = 0x1d8
    unsigned int _currentRateChangeCounter;	// 476 = 0x1dc
    unsigned int _lastSentAudioSampleTime;	// 480 = 0x1e0
    double _lastSentAudioHostTime;	// 488 = 0x1e8
    struct _opaque_pthread_rwlock_t _audioTimestampRWLock;	// 496 = 0x1f0
    unsigned char _lastAudioPriority;	// 696 = 0x2b8
    unsigned char _lastVideoPriority;	// 697 = 0x2b9
    unsigned short _connectionStatsStreamID;	// 698 = 0x2ba
    unsigned int _uplinkBitrateCapWifi;	// 700 = 0x2bc
    unsigned int _uplinkBitrateCapCell;	// 704 = 0x2c0
    _Atomic unsigned char _videoPriority;	// 708 = 0x2c4
    _Bool _videoPriorityEnabled;	// 709 = 0x2c5
    _Bool _shouldResize;	// 710 = 0x2c6
    _Bool _enableRedundancy;	// 711 = 0x2c7
    _Bool _enableVADFiltering;	// 712 = 0x2c8
    _Bool _isVCMediaQueueScheduledForServerBasedStreams;	// 713 = 0x2c9
    NSMutableSet *_localPublishedStreams;	// 720 = 0x2d0
    float _averageSilenceAudioPower;	// 728 = 0x2d8
    unsigned char _audioPriorityRampUp;	// 732 = 0x2dc
    unsigned char _audioPriorityDecaySlow;	// 733 = 0x2dd
    unsigned char _audioPriorityDecayFast;	// 734 = 0x2de
    float _audioVoiceDetectionSensitivity;	// 736 = 0x2e0
    float _audioSilencePowerAverageMultiplier;	// 740 = 0x2e4
    unsigned char _forcedAudioPriorityValue;	// 744 = 0x2e8
    double _forcedAudioPriorityLastUpdateTime;	// 752 = 0x2f0
    _Bool _forcedAudioPriorityEnabled;	// 760 = 0x2f8
    VCVideoRule *_videoRule;	// 768 = 0x300
    _Bool _speechDetected;	// 776 = 0x308
    struct opaqueVCVoiceDetector *_voiceDetector;	// 784 = 0x310
    double _fecRatio;	// 792 = 0x318
    NSMutableSet *_audioPayloadTypes;	// 800 = 0x320
    NSMutableSet *_videoPayloadTypes;	// 808 = 0x328
    VCAudioPowerSpectrumSource *_powerSpectrumSource;	// 816 = 0x330
    int _currentVideoCaptureFrameRate;	// 824 = 0x338
    int _maxSupportedMultiwayCameraFrameRate;	// 828 = 0x33c
    long long _maxSupportedMultiwayVideoResolution;	// 832 = 0x340
    unsigned char _remotePresentationState;	// 840 = 0x348
    _Bool _isRemotePresentationLarge;	// 841 = 0x349
    struct _VCSessionParticipantLocalOneToOneSettings _oneToOneSettings;	// 848 = 0x350
    _Bool _isRemoteOnPeace;	// 896 = 0x380
    int _videoCaptureSource;	// 900 = 0x384
    _Bool _forceMinBitrate;	// 904 = 0x388
    unsigned int _minBitrate;	// 908 = 0x38c
    NSMutableDictionary *_streamInputIDToCaptureSourceIDMap;	// 912 = 0x390
    VCSystemAudioCaptureSession *_systemAudioCaptureSession;	// 920 = 0x398
    _Bool _isMixingSystemAudio;	// 928 = 0x3a0
    double _spatialAudioDisabledLastUpdateTime;	// 936 = 0x3a8
    NSMutableSet *_generatedStreamIDs;	// 944 = 0x3b0
    NSMutableSet *_generatedSSRCs;	// 952 = 0x3b8
    double _initTime;	// 960 = 0x3c0
    NSArray *_remoteParticipants;	// 968 = 0x3c8
    _Bool _isVoiceProcessingEnabled;	// 976 = 0x3d0
    _Bool _isRetransmissionEnabled;	// 977 = 0x3d1
    double _lastVideoEnabledChangedTime;	// 984 = 0x3d8
    _Bool _isAudioPowerSpectrumEnabled;	// 992 = 0x3e0
    _Bool _isOneToOneAuthenticationTagEnabled;	// 993 = 0x3e1
    _Bool _isHigherAudioREDCutoverU1Enabled;	// 994 = 0x3e2
    VCSessionMediaStreamPresenceConfigurationProvider *_presenceProvider;	// 1000 = 0x3e8
    long long _captionsToken;	// 1008 = 0x3f0
    NSArray *_peerSubscribedStreams;	// 1016 = 0x3f8
}

+ (_Bool)updateUplinkStreamsForPeerSubscribedStreams:(id)arg1 streamGroup:(id)arg2 uplinkBandwidthAllocator:(id)arg3;	// IMP=0x00100000002bd2a6
+ (_Bool)updateBandwidthAllocator:(id)arg1 activeStream:(id)arg2 peerSubscribedStreams:(id)arg3 streamGroup:(id)arg4;	// IMP=0x00100000002bce55
+ (_Bool)negotiatorCipherSuite:(unsigned int *)arg1 fromMediaStreamConfig:(id)arg2;	// IMP=0x00100000002b1be1
+ (_Bool)isCameraEnabledWithMediaStates:(id)arg1;	// IMP=0x00100000002aa7e1
@property(copy, nonatomic) NSArray *remoteParticipants; // @synthesize remoteParticipants=_remoteParticipants;
@property(nonatomic, setter=setRetransmissionEnabled:) _Bool isRetransmissionEnabled; // @synthesize isRetransmissionEnabled=_isRetransmissionEnabled;
@property(nonatomic) _Bool isRemoteOnPeace; // @synthesize isRemoteOnPeace=_isRemoteOnPeace;
@property(readonly, nonatomic) struct _VCSessionParticipantLocalOneToOneSettings oneToOneSettings; // @synthesize oneToOneSettings=_oneToOneSettings;
@property(readonly, nonatomic) NSSet *videoPayloadTypes; // @synthesize videoPayloadTypes=_videoPayloadTypes;
@property(readonly, nonatomic) NSSet *audioPayloadTypes; // @synthesize audioPayloadTypes=_audioPayloadTypes;
@property(copy, nonatomic) NSArray *peerSubscribedStreams; // @synthesize peerSubscribedStreams=_peerSubscribedStreams;
@property(nonatomic) _Bool enableVADFiltering; // @synthesize enableVADFiltering=_enableVADFiltering;
@property(nonatomic) unsigned int uplinkBitrateCapCell; // @synthesize uplinkBitrateCapCell=_uplinkBitrateCapCell;
@property(nonatomic) unsigned int uplinkBitrateCapWifi; // @synthesize uplinkBitrateCapWifi=_uplinkBitrateCapWifi;
@property(readonly, nonatomic) unsigned short connectionStatsStreamID; // @synthesize connectionStatsStreamID=_connectionStatsStreamID;
@property(nonatomic) _Bool encryptionInfoReceived; // @synthesize encryptionInfoReceived=_encryptionInfoReceived;
- (id)videoCallMicrophoneBandwidthTable;	// IMP=0x00000000002c17bc
- (id)microphoneOnlyBandwidthTable;	// IMP=0x00000000002c177a
- (unsigned int)remainderBitrateSplitForStreamToken:(long long)arg1;	// IMP=0x00000000002c16d8
- (_Bool)shouldCapStream:(long long)arg1 cappedBitrate:(unsigned int *)arg2;	// IMP=0x00000000002c1633
- (id)qualityTierTableForStreamToken:(long long)arg1;	// IMP=0x00000000002c159d
- (void)checkAndReportThermalIncreaseAudioOnly:(int)arg1;	// IMP=0x00000000002c1364
- (void)reportCameraCompositionEnabled:(_Bool)arg1;	// IMP=0x00000000002c12ba
- (void)streamGroup:(id)arg1 didRequestRedundancy:(_Bool)arg2;	// IMP=0x00000000002c11df
- (void)streamGroup:(id)arg1 didChangeState:(unsigned int)arg2;	// IMP=0x00000000002c1190
- (void)streamGroup:(id)arg1 didSuspendStreams:(_Bool)arg2;	// IMP=0x00000000002c0d3c
- (void)didReceiveCustomReportPacket:(struct tagRTCPPACKET *)arg1 arrivalNTPTime:(union tagNTP)arg2;	// IMP=0x00000000002c0cea
- (void)didReceiveReportPacket:(struct tagRTCPPACKET *)arg1 arrivalNTPTime:(union tagNTP)arg2;	// IMP=0x00000000002c0c98
- (void)handleActiveConnectionChange:(id)arg1;	// IMP=0x00000000002c070d
- (void)serverDidDie;	// IMP=0x00000000002c06e2
- (void)updateMediaStreamsForStreamGroup:(id)arg1 uplinkBitrateCap:(unsigned int)arg2 rateChangeCounter:(unsigned int)arg3;	// IMP=0x00000000002c05a1
- (void)dispatchedHandleActiveConnectionChangeForStreamGroups:(id)arg1;	// IMP=0x00000000002c02d0
- (void)reportVideoEnabledStatsWithVideoEnabled:(_Bool)arg1;	// IMP=0x00000000002c016c
- (void)didStopReacting;	// IMP=0x00000000002c0065
- (void)reactionDidStart:(id)arg1;	// IMP=0x00000000002bff4b
- (void)captureSource1080pAvailabilityDidChange:(_Bool)arg1;	// IMP=0x00000000002bfeab
- (void)frameRateIsBeingThrottled:(int)arg1 thermalLevelDidChange:(_Bool)arg2 powerLevelDidChange:(_Bool)arg3;	// IMP=0x00000000002bfd90
- (void)updateCaptureSourceVideoFeatureStatus:(struct tagVCVideoCaptureFeatureStatus)arg1;	// IMP=0x00000000002bfbab
- (void)captureSourcePortraitBlurEnabledDidChange:(_Bool)arg1;	// IMP=0x00000000002bfb7f
- (void)captureSourceCenterStageEnabledDidChange:(_Bool)arg1;	// IMP=0x00000000002bfb53
- (void)captureSourcePositionDidChange:(_Bool)arg1;	// IMP=0x00000000002bfb27
- (void)cameraAvailabilityDidChange:(_Bool)arg1;	// IMP=0x00000000002bf883
- (void)thermalLevelDidChange:(int)arg1;	// IMP=0x00000000002bf589
- (id)clientCaptureRule;	// IMP=0x00000000002bf581
- (void)avConferencePreviewError:(id)arg1;	// IMP=0x00000000002bf3b2
- (CDUnknownBlockType)copyOnVideoFrameBlock;	// IMP=0x00000000002bf31e
- (void)sourceFrameRateDidChange:(unsigned int)arg1;	// IMP=0x00000000002bf12e
- (_Bool)prepareVideoFrame:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x00000000002bf110
- (_Bool)onVideoFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 attribute:(CDStruct_51555cf6)arg3;	// IMP=0x00000000002bf0e0
- (struct tagVCNetworkStreamIdentifiers)generateSSRC:(_Bool)arg1 streamID:(_Bool)arg2 repairStreamID:(_Bool)arg3 v2StreamID:(_Bool)arg4;	// IMP=0x00000000002be98d
- (unsigned int)generateSSRC;	// IMP=0x00000000002be96e
- (unsigned short)generateIDSStreamID;	// IMP=0x00000000002be947
- (void)dispatchedUpdateVCMediaQueueSize:(unsigned int)arg1;	// IMP=0x00000000002be4f6
- (void)updateVCMediaQueueSize:(unsigned int)arg1;	// IMP=0x00000000002be45f
- (void)updateTargetBitrateOneToOne:(unsigned int)arg1 rateChangeCounter:(unsigned int)arg2;	// IMP=0x00000000002be13d
- (void)dispatchedUpdateUplinkTargetBitrate:(unsigned int)arg1 rateChangeCounter:(unsigned int)arg2;	// IMP=0x00000000002bdf96
- (void)updateUplinkTargetBitrateForStreamGroups;	// IMP=0x00000000002bdd0f
- (void)updateUplinkTargetBitrate:(unsigned int)arg1 rateChangeCounter:(unsigned int)arg2;	// IMP=0x00000000002bd9fd
- (void)redundancyController:(id)arg1 redundancyVectorDidChange:(CDStruct_d7e2e0ee)arg2;	// IMP=0x00000000002bd9f7
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;	// IMP=0x00000000002bd9f1
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;	// IMP=0x00000000002bd9eb
- (void)setUpCaptions;	// IMP=0x00000000002bd9c6
- (_Bool)enableRedundancy:(_Bool)arg1;	// IMP=0x00000000002bd56e
- (void)updatePeerSubscribedStreams:(id)arg1 streamGroup:(id)arg2;	// IMP=0x00000000002bccba
- (void)updateRedundancyEnabledForPeerSubscribedStreams:(id)arg1;	// IMP=0x00000000002bca78
- (_Bool)checkSubscribedStreamsConsistency:(id)arg1;	// IMP=0x00000000002bbc6c
- (void)generateKeyFrameWithStreamID:(id)arg1 streamGroupID:(unsigned int)arg2 firType:(int)arg3;	// IMP=0x00000000002bbad5
- (void)setupEncodingModeWithVideoStreamConfig:(id)arg1;	// IMP=0x00000000002bb92c
- (id)newStreamInfoWithAudioStreamWithConfiguration:(id)arg1 idsDestination:(id)arg2 isMultiway:(_Bool)arg3 streamGroupID:(unsigned int)arg4 streamToken:(long long)arg5;	// IMP=0x00000000002bad11
- (id)newVideoStreamWithConfig:(id)arg1 groupID:(unsigned int)arg2;	// IMP=0x00000000002bac6b
- (_Bool)shouldEnableUplinkRetransmissionForStreamGroupID:(unsigned int)arg1;	// IMP=0x00000000002babfd
- (id)newStreamInfoWithVideoStreamWithConfiguration:(id)arg1 idsDestination:(id)arg2 groupID:(unsigned int)arg3;	// IMP=0x00000000002ba18f
- (id)getAudioDumpName;	// IMP=0x00000000002ba187
- (void)updateAudioPriorityWithSampleBuffer:(struct opaqueVCAudioBufferList *)arg1;	// IMP=0x00000000002b9fe6
- (void)stopVoiceActivityDetection;	// IMP=0x00000000002b9fbe
- (void)startVoiceActivityDetection;	// IMP=0x00000000002b9f75
- (_Bool)isHighPriorityAudioWithPower:(float)arg1 voiceActive:(_Bool)arg2;	// IMP=0x00000000002b9f18
- (void)setMuted:(_Bool)arg1;	// IMP=0x00000000002b9d63
- (void)createOpaqueData;	// IMP=0x00000000002b9d1a
- (_Bool)createParticipantInfo;	// IMP=0x00000000002b9976
- (void)addCallInfoBlobToParticipantInfo:(id)arg1;	// IMP=0x00000000002b9586
- (id)setupStreamRTP:(id)arg1;	// IMP=0x00000000002b9571
- (id)audioRuleCollectionWithAudioStreamConfig:(id)arg1;	// IMP=0x00000000002b8ed6
- (void)updateWindowState:(int)arg1 isLocal:(_Bool)arg2 windowRect:(struct CGRect)arg3;	// IMP=0x00000000002b8b24
- (_Bool)isRemotePresentationLarge:(struct CGRect)arg1;	// IMP=0x00000000002b8af4
- (_Bool)containsStreamWithSSRC:(unsigned int)arg1;	// IMP=0x00000000002b897b
- (void)updateSupportedAudioRules:(id)arg1;	// IMP=0x00000000002b86f1
- (id)supportedAudioRules;	// IMP=0x00000000002b86dd
- (id)newVideoStreamOneToOneConfigurationWithStreamGroupId:(unsigned int)arg1;	// IMP=0x00000000002b84cc
- (id)newAudioStreamOneToOneConfigurationWithStreamGroupId:(unsigned int)arg1;	// IMP=0x00000000002b8287
- (void)setupOneToOneEncryptionInfoWithConfiguration:(id)arg1;	// IMP=0x00000000002b808b
- (void)updateOneToOneBandwidthAllocationTable:(id)arg1 mediaType:(unsigned char)arg2 streamGroupID:(unsigned int)arg3;	// IMP=0x00000000002b7e3b
- (_Bool)configureOneToOneAudioStreamsWithDeviceRole:(int)arg1;	// IMP=0x00000000002b7a73
- (_Bool)configureOneToOneVideoStreamsWithDeviceRole:(int)arg1;	// IMP=0x00000000002b7629
- (_Bool)configureWithOneToOneParticipantConfig:(id)arg1 shouldConfigureGFTStreams:(_Bool)arg2;	// IMP=0x00000000002b6c08
- (_Bool)configureMultiwayStreamGroups;	// IMP=0x00000000002b687a
- (void)setupOneToOneAudioStreamWithConfig:(id)arg1 streamGroupID:(unsigned int)arg2;	// IMP=0x00000000002b60e2
- (_Bool)setupOneToOneVideoStreamWithConfig:(id)arg1 streamGroupID:(unsigned int)arg2;	// IMP=0x00000000002b5876
- (void)overrideVideoStreamConfigWithDefaults:(id)arg1 streamGroupID:(unsigned int)arg2;	// IMP=0x00000000002b5687
- (void)logRemoteParticipantInfo:(id)arg1;	// IMP=0x00000000002b54e4
- (int)negotiateOneToOne:(id)arg1;	// IMP=0x00000000002b4cb7
- (unsigned int)oneToOneAudioStreamRedundancyMode;	// IMP=0x00000000002b4c5d
- (unsigned int)oneToOneVideoStreamRedundancyMode;	// IMP=0x00000000002b4b2c
- (unsigned int)oneToOneVideoStreamRedundancyPercentage;	// IMP=0x00000000002b48c4
- (void)updatePayloadTypesWithAudioConfigs:(id)arg1;	// IMP=0x00000000002b47af
- (void)updatePayloadTypesWithVideoConfigs:(id)arg1;	// IMP=0x00000000002b46dd
- (_Bool)initializeMediaNegotiator;	// IMP=0x00000000002b424f
- (_Bool)addMediaConfigurationsToLocalConfiguration:(id)arg1;	// IMP=0x00000000002b3d9e
- (_Bool)addVideoConfigurationsToLocalConfiguration:(id)arg1;	// IMP=0x00000000002b3b5a
- (id)featureListString:(id)arg1 removingPayload:(int)arg2 andPayload:(int)arg3 mediaType:(unsigned char)arg4;	// IMP=0x00000000002b3ac2
- (_Bool)initializeOneToOneStreamGroup:(id)arg1 forLocalConfig:(id)arg2;	// IMP=0x00000000002b375a
- (_Bool)initializeStreamGroupsForLocalConfig:(id)arg1;	// IMP=0x00000000002b34d6
- (void)initializeMultiwayVideoStreamGroup:(id)arg1 forLocalConfig:(id)arg2;	// IMP=0x00000000002b32a5
- (void)initializeMultiwayAudioStreamGroup:(id)arg1 forLocalConfig:(id)arg2;	// IMP=0x00000000002b3071
- (id)newStreamGroupNegotiationConfigForStreamGroup:(id)arg1;	// IMP=0x00000000002b1d68
- (void)streamGroupNegotiationVideoConfigForStreamGroup:(id)arg1 streamConfig:(id)arg2 mediaConfig:(id)arg3;	// IMP=0x00000000002b19a0
- (id)newVideoConfigurationForMediaType:(unsigned char)arg1;	// IMP=0x00000000002b1628
- (_Bool)addFeatureListStringsForVideoConfiguration:(id)arg1 mediaType:(unsigned char)arg2;	// IMP=0x00000000002b0e60
- (id)u1VideoRuleCollectionsForMediaType:(unsigned char)arg1;	// IMP=0x00000000002b0c05
- (_Bool)v1FeatureListStringsSupportedForMediaType:(unsigned char)arg1;	// IMP=0x00000000002b0a54
- (_Bool)featureListStringsRequiredForMediaType:(unsigned char)arg1;	// IMP=0x00000000002b08a3
- (id)newMediaNegotiatorAudioConfigurationForMediaType:(unsigned int)arg1;	// IMP=0x00000000002b0676
- (id)multiwayVideoStreamNegotiatorConfigForStreamConfig:(id)arg1 isSubstream:(_Bool)arg2;	// IMP=0x00000000002b0429
- (id)multiwayAudioStreamNegotiatorConfigForStreamConfig:(id)arg1;	// IMP=0x00000000002b017a
- (_Bool)completeStreamSetup:(id)arg1 rtpCipherSuite:(long long)arg2;	// IMP=0x00000000002b00ed
- (id)newStreamInfoWithAudioStreamWithConfiguration:(id)arg1 streamToken:(long long)arg2 isMultiway:(_Bool)arg3 streamGroupID:(unsigned int)arg4;	// IMP=0x00000000002afc8b
- (void)updateMultiwayBandwithAllocationTable:(id)arg1 mediaType:(unsigned int)arg2 streamGroupID:(unsigned int)arg3 encoderGroupID:(unsigned int)arg4 minNetworkBitrate:(unsigned int)arg5 maxNetworkBitrate:(unsigned int)arg6;	// IMP=0x00000000002af473
- (id)newStreamInfoWithVideoStreamWithConfiguration:(id)arg1 streamGroupID:(unsigned int)arg2 rtpCipherSuite:(long long)arg3;	// IMP=0x00000000002af23e
- (id)newAudioStreamSendGroupWithConfig:(id)arg1 streamGroupID:(unsigned int)arg2;	// IMP=0x00000000002af1ff
- (_Bool)setupAudioStreamsWithStreamConfiguration:(id)arg1 streamGroupConfiguration:(id)arg2;	// IMP=0x00000000002aecb2
- (_Bool)setupVideoMediaStreamsWithStreamGroupConfiguration:(id)arg1 streamGroupConfig:(id)arg2 streamGroupID:(unsigned int)arg3 mediaType:(unsigned int)arg4;	// IMP=0x00000000002adf74
- (_Bool)setupVideoStreamsWithStreamConfiguration:(id)arg1 streamGroupConfiguration:(id)arg2;	// IMP=0x00000000002adc47
- (struct opaqueCMFormatDescription *)getCaptionsFormatDescription;	// IMP=0x00000000002adbe2
- (struct opaqueCMFormatDescription *)getAudioFormatDescriptionForStreamGroupID:(unsigned int)arg1;	// IMP=0x00000000002adb3d
- (id)newAudioSendGroupConfigWithStreamGroupID:(unsigned int)arg1 streamGroupConfiguration:(id)arg2;	// IMP=0x00000000002ad523
- (id)newVideoSendGroupConfigWithStreamGroupID:(unsigned int)arg1 streamGroupConfiguration:(id)arg2;	// IMP=0x00000000002ad51b
- (_Bool)setupAudioStreamsWithStreamConfigurations:(id)arg1 mediaNegotiatorConfig:(id)arg2 streamGroupConfiguration:(id)arg3;	// IMP=0x00000000002ad250
- (_Bool)applyCachedMediaStreamsWithStreamConfigurations:(id)arg1 mediaNegotiatorConfig:(id)arg2;	// IMP=0x00000000002acdb4
- (_Bool)setupVideoStreamsWithStreamConfigurations:(id)arg1 mediaNegotiatorConfig:(id)arg2 streamGroupConfiguration:(id)arg3;	// IMP=0x00000000002acd63
- (_Bool)applyCachedStreamGroupMediaStreams:(id)arg1 toMultiwayConfig:(id)arg2;	// IMP=0x00000000002ac910
- (_Bool)applyCachedMediaStreams:(id)arg1 toMultiwayConfig:(id)arg2;	// IMP=0x00000000002ac6d0
- (_Bool)isStreamGroupActive:(id)arg1;	// IMP=0x00000000002ac510
- (_Bool)isOneToOneStreamGroup:(unsigned int)arg1;	// IMP=0x00000000002ac410
- (_Bool)remoteParticipantsSupportStreamGroupID:(unsigned int)arg1;	// IMP=0x00000000002ac248
- (_Bool)wolfParticipantSupportsStreamGroupID:(unsigned int)arg1;	// IMP=0x00000000002ac1f2
- (_Bool)webParticipantSupportsStreamGroupID:(unsigned int)arg1;	// IMP=0x00000000002ac1d8
- (_Bool)nativeParticipantSupportsStreamGroupID:(unsigned int)arg1;	// IMP=0x00000000002ac19c
- (_Bool)isEnabledMediaType:(unsigned int)arg1;	// IMP=0x00000000002ac0e8
- (_Bool)isActiveMediaType:(unsigned int)arg1;	// IMP=0x00000000002ac005
- (void)setCellularUniqueTag:(unsigned int)arg1;	// IMP=0x00000000002abeee
@property(readonly, nonatomic) unsigned int currentUplinkTotalBitrate;
- (void)setMediaSuggestion:(struct VCRateControlMediaSuggestion *)arg1;	// IMP=0x00000000002abd64
- (_Bool)configureAudioIOWithDeviceRole:(int)arg1 operatingMode:(int)arg2;	// IMP=0x00000000002ab504
- (struct tagVCAudioIOConfiguration)audioIOConfigWithDeviceRole:(int)arg1 operatingMode:(int)arg2;	// IMP=0x00000000002aaf92
- (void)updateMediaSettingsWithConfig:(id)arg1;	// IMP=0x00000000002aac99
- (id)applyMicReconfigurationForCameraTransition;	// IMP=0x00000000002aa892
- (unsigned int)calculateUplinkTotalBitrateForMediaStreams:(id)arg1;	// IMP=0x00000000002aa63c
@property(readonly, nonatomic) struct __CFString *activeStreamKeys;
- (void)collectAudioChannelMetrics:(CDStruct_b671a7c4 *)arg1;	// IMP=0x00000000002aa2c5
- (void)collectVideoChannelMetrics:(CDStruct_b671a7c4 *)arg1;	// IMP=0x00000000002aa127
- (void)stopAudioIOCompletion;	// IMP=0x00000000002aa115
- (void)stopSystemAudioCapture;	// IMP=0x00000000002a9dbe
- (void)startSystemAudioCapture;	// IMP=0x00000000002a9be9
- (_Bool)setState:(unsigned int)arg1;	// IMP=0x00000000002a9b32
- (void)stopVideoCaptureClient;	// IMP=0x00000000002a9b0e
- (_Bool)isOneToOneModeEnabled;	// IMP=0x00000000002a9a31
- (void)setOneToOneModeEnabled:(_Bool)arg1;	// IMP=0x00000000002a9775
- (void)startMultiwayStreams;	// IMP=0x00000000002a91d8
- (void)resumeStreamsOnOneToOneModeSwitch;	// IMP=0x00000000002a8c8b
- (void)suspendStreamsOnOneToOneModeSwitch;	// IMP=0x00000000002a8b2b
- (void)resetOneToOneSettings;	// IMP=0x00000000002a8afd
- (void)deregisterForVideoCapture;	// IMP=0x00000000002a8ae6
- (void)deregisterForVideoCaptureAndStopProcessingAllMediaRecorderRequests:(_Bool)arg1;	// IMP=0x00000000002a8ae0
- (void)registerForVideoCapture:(int)arg1;	// IMP=0x00000000002a8ada
- (struct CGSize)captureEncodingSize;	// IMP=0x00000000002a89de
@property(nonatomic) int currentVideoCaptureFrameRate;
- (id)updateMediaState:(unsigned int)arg1 forStreamGroups:(id)arg2;	// IMP=0x00000000002a84ac
- (id)completeMediaStateChange;	// IMP=0x00000000002a849a
- (void)updateActiveVoiceOnly;	// IMP=0x00000000002a8377
- (void)updateVideoPaused:(_Bool)arg1;	// IMP=0x00000000002a8141
- (void)applyScreenEnabledSetting:(_Bool)arg1;	// IMP=0x00000000002a7f12
- (id)applyVideoEnabledSetting:(_Bool)arg1;	// IMP=0x00000000002a7a23
- (id)startCameraStreamGroups;	// IMP=0x00000000002a784e
- (id)startMicStreamGroups;	// IMP=0x00000000002a7677
- (_Bool)reconfigureAudioIOForMode:(int)arg1 error:(id *)arg2;	// IMP=0x00000000002a6f01
- (_Bool)reconfigureOneToOneAudioStream:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002a6576
- (int)maxCaptureCameraFrameRate;	// IMP=0x00000000002a5923
- (void)dispatchedSetAudioEnabled:(_Bool)arg1;	// IMP=0x00000000002a5844
- (long long)maxCaptureResolution;	// IMP=0x00000000002a5839
- (void)stop;	// IMP=0x00000000002a57c7
- (void)dispatchedStartOneToOneStreams;	// IMP=0x00000000002a55d3
- (void)start;	// IMP=0x00000000002a5399
- (void)cleanupStreamInputs;	// IMP=0x00000000002a5371
- (_Bool)setupStreamInputsWithConfig:(id)arg1;	// IMP=0x00000000002a5369
- (_Bool)setupStreamGroupsWithConfig:(id)arg1 negotiatorConfig:(id)arg2;	// IMP=0x00000000002a4fde
- (_Bool)setupStreamGroupMediaSync;	// IMP=0x00000000002a4f5a
- (_Bool)setupStreamGroupWithStreamGroupConfig:(id)arg1 negotiatorConfig:(id)arg2;	// IMP=0x00000000002a4ad2
- (int)captureSourceIDFromStreamGroupConfig:(id)arg1;	// IMP=0x00000000002a4909
- (int)captureSourceIDFromStreamGroupID:(unsigned int)arg1;	// IMP=0x00000000002a4886
- (void)setupSystemAudioCapture;	// IMP=0x00000000002a474e
- (_Bool)setupCameraStreamGroupWithStreamConfigs:(id)arg1 negotiatorConfig:(id)arg2 streamGroupConfiguration:(id)arg3;	// IMP=0x00000000002a441b
- (_Bool)setupAudioStreamGroupWithStreamConfigs:(id)arg1 negotiatorConfig:(id)arg2 streamGroupConfiguration:(id)arg3;	// IMP=0x00000000002a4128
- (unsigned int)mediaStateForMediaType:(unsigned int)arg1;	// IMP=0x00000000002a4029
- (_Bool)isParticipantIDBasedKeyLookupEnabled;	// IMP=0x00000000002a4021
- (void)updateAudioSpectrumState;	// IMP=0x00000000002a3976
- (id)processCachedParticipantData:(id)arg1;	// IMP=0x00000000002a36da
- (id)newUplinkBandwidthAllocators;	// IMP=0x00000000002a320e
- (void)logDashboardLinks;	// IMP=0x00000000002a3050
- (void)dealloc;	// IMP=0x00000000002a2e81
- (id)initWithConfig:(id)arg1 delegate:(id)arg2;	// IMP=0x00000000002a0db0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

