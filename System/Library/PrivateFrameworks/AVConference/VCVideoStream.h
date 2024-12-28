//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCStatisticsCollector, NSNumber, NSObject, NSString, VCRedundancyControllerVideo, VCVideoCaptureConverter, VCVideoReceiverBase, VCVideoRule, VCVideoTransmitterBase, VideoAttributes;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, VCVideoReceiverFeedbackDelegate;

__attribute__((visibility("hidden")))
@interface VCVideoStream
{
    long long _type;	// 672 = 0x2a0
    NSObject<OS_dispatch_queue> *_lastDecodedFrameQueue;	// 680 = 0x2a8
    unsigned int _uplinkOperatingBitrate;	// 688 = 0x2b0
    struct __CVBuffer *_cachedRemoteVideoFrame;	// 696 = 0x2b8
    VCVideoTransmitterBase *_videoTransmitter;	// 704 = 0x2c0
    VCVideoReceiverBase *_videoReceiver;	// 712 = 0x2c8
    VCVideoRule *_videoRule;	// 720 = 0x2d0
    int _reportingModuleID;	// 728 = 0x2d8
    unsigned int _reportingDefaultRealtimePeriod;	// 732 = 0x2dc
    NSObject<OS_dispatch_semaphore> *_bufferQueueSemaphore;	// 736 = 0x2e0
    struct opaqueCMBufferQueue *_bufferQueue;	// 744 = 0x2e8
    VCVideoCaptureConverter *_captureConverter;	// 752 = 0x2f0
    _Bool _isServerBasedBandwidthProbingEnabled;	// 760 = 0x2f8
    _Bool _isEndToEndBasedBandwidthProbingEnabled;	// 761 = 0x2f9
    unsigned char _lastMediaPriority;	// 762 = 0x2fa
    NSNumber *_targetStreamID;	// 768 = 0x300
    unsigned short _currentStreamID;	// 776 = 0x308
    NSNumber *_sendingStreamID;	// 784 = 0x310
    _Bool _isCompoundStreamIDsIncreased;	// 792 = 0x318
    _Bool _shouldEnableFaceZoom;	// 793 = 0x319
    _Bool _didReceiveFirstFrame;	// 794 = 0x31a
    _Bool _shouldCacheRemoteVideoFrame;	// 795 = 0x31b
    _Atomic _Bool _isVideoCaptureRegistered;	// 796 = 0x31c
    double _fecRatio;	// 800 = 0x320
    int _captureSource;	// 808 = 0x328
    int _streamInputCaptureSource;	// 812 = 0x32c
    long long _captureSourceID;	// 816 = 0x330
    unsigned int _mediaQueueSizeInMillisecond;	// 824 = 0x338
    unsigned int _screenDisplayID;	// 828 = 0x33c
    unsigned int _customWidth;	// 832 = 0x340
    unsigned int _customHeight;	// 836 = 0x344
    unsigned int _tilesPerFrame;	// 840 = 0x348
    unsigned int _initialTargetBitrate;	// 844 = 0x34c
    struct OpaqueFigCFWeakReference *_weakStream;	// 848 = 0x350
    AVCStatisticsCollector *_statisticsCollector;	// 856 = 0x358
    VCRedundancyControllerVideo *_redundancyController;	// 864 = 0x360
    int _lastDisplayedFromImageQueueCount;	// 872 = 0x368
    int _lastDroppedFromImageQueueCount;	// 876 = 0x36c
    double _lastDecodedVideoFrameTime;	// 880 = 0x370
    double _lastStatisticsCollectorVideoStallTotalUpdateTime;	// 888 = 0x378
    _Bool _isRemoteMediaStalled;	// 896 = 0x380
    double _lastMediaStallReportTime;	// 904 = 0x388
    double _mediaStallTimeout;	// 912 = 0x390
    double _mediaStallReportRepeatInterval;	// 920 = 0x398
    _Bool _sendContinuousStallMessages;	// 928 = 0x3a0
    unsigned int _rtpTimestampRate;	// 932 = 0x3a4
    unsigned short _temporalScalingBaseLayerStreamID;	// 936 = 0x3a8
    _Bool _isTemporalScalingEnabled;	// 938 = 0x3aa
    CDStruct_1b6d18a9 _lastSentFrameHostTimeBeforeStop;	// 940 = 0x3ac
    unsigned int _lastSentFrameRTPTimestampBeforeStop;	// 964 = 0x3c4
    id _videoStreamDelegate;	// 968 = 0x3c8
    struct tagVCVideoStreamDelegateRealtimeInstanceVTable _videoStreamDelegateFunctions;	// 976 = 0x3d0
    struct __CFDictionary *_colorInfo;	// 984 = 0x3d8
    unsigned int _baseQualityIndex;	// 992 = 0x3e0
    unsigned int _cachedConnectionMTU;	// 996 = 0x3e4
    unsigned int _constantTransportOverhead;	// 1000 = 0x3e8
    double _externalOutputVideoLatency;	// 1008 = 0x3f0
    double _initTime;	// 1016 = 0x3f8
    _Bool _haveReportedPerfTimers;	// 1024 = 0x400
    VideoAttributes *_cachedRemoteScreenAttributes;	// 1032 = 0x408
}

+ (_Bool)shouldRegisterReportingForStreamType:(long long)arg1;	// IMP=0x001000000042a836
+ (_Bool)shouldEnableRateControlForStreamType:(long long)arg1;	// IMP=0x001000000042a81c
+ (_Bool)isFeatureListStringExpectedForStreamType:(long long)arg1;	// IMP=0x001000000042a802
+ (_Bool)isLowLatencyStreamType:(long long)arg1;	// IMP=0x001000000042a7c1
+ (id)capabilities;	// IMP=0x0010000000428a14
+ (id)supportedVideoPayloads;	// IMP=0x0010000000428a07
+ (void)terminateProcess:(id)arg1 terminateSource:(id)arg2 agent:(struct opaqueRTCReporting *)arg3;	// IMP=0x0010000000428077
+ (_Bool)shouldUseRandomRTPTimestampWithType:(long long)arg1;	// IMP=0x001000000042745d
+ (id)newFeatureListStringsWithConfiguration:(id)arg1;	// IMP=0x0010000000422d15
@property(readonly, nonatomic) _Bool isTemporalScalingEnabled; // @synthesize isTemporalScalingEnabled=_isTemporalScalingEnabled;
@property(readonly) VCVideoTransmitterBase *videoTransmitter; // @synthesize videoTransmitter=_videoTransmitter;
@property(readonly) VCVideoReceiverBase *videoReceiver; // @synthesize videoReceiver=_videoReceiver;
@property(nonatomic) unsigned int customHeight; // @synthesize customHeight=_customHeight;
@property(nonatomic) unsigned int customWidth; // @synthesize customWidth=_customWidth;
@property(nonatomic) unsigned int screenDisplayID; // @synthesize screenDisplayID=_screenDisplayID;
@property(nonatomic) _Bool shouldEnableFaceZoom; // @synthesize shouldEnableFaceZoom=_shouldEnableFaceZoom;
@property(readonly, nonatomic) _Bool isCompoundStreamIDsIncreased; // @synthesize isCompoundStreamIDsIncreased=_isCompoundStreamIDsIncreased;
@property(readonly, nonatomic) NSNumber *sendingStreamID; // @synthesize sendingStreamID=_sendingStreamID;
@property(nonatomic) _Bool isEndToEndBasedBandwidthProbingEnabled; // @synthesize isEndToEndBasedBandwidthProbingEnabled=_isEndToEndBasedBandwidthProbingEnabled;
@property(nonatomic) _Bool isServerBasedBandwidthProbingEnabled; // @synthesize isServerBasedBandwidthProbingEnabled=_isServerBasedBandwidthProbingEnabled;
@property(retain, nonatomic) NSNumber *targetStreamID; // @synthesize targetStreamID=_targetStreamID;
- (void)reportStreamPerfTimings;	// IMP=0x0000000000434078
- (void)updateSourcePlayoutTime:(const struct tagVCMediaTime *)arg1;	// IMP=0x0000000000433a4a
- (void)updateWindowState:(int)arg1 isLocal:(_Bool)arg2 windowRect:(struct CGRect)arg3;	// IMP=0x0000000000433a1d
- (void)redundancyController:(id)arg1 redundancyVectorDidChange:(CDStruct_d7e2e0ee)arg2;	// IMP=0x00000000004337fc
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;	// IMP=0x00000000004337f6
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;	// IMP=0x00000000004337bc
- (void)rateAdaptation:(id)arg1 targetBitrateDidChange:(unsigned int)arg2 rateChangeCounter:(unsigned int)arg3;	// IMP=0x00000000004334a7
- (void)handleActiveConnectionChange:(id)arg1;	// IMP=0x000000000043338f
- (void)collectTxChannelMetrics:(CDStruct_b671a7c4 *)arg1;	// IMP=0x0000000000433360
- (void)collectRxChannelMetrics:(CDStruct_b671a7c4 *)arg1;	// IMP=0x0000000000433331
- (void)collectRxChannelMetrics:(CDStruct_b671a7c4 *)arg1 interval:(float)arg2;	// IMP=0x0000000000433314
- (void)reactionDidStart:(id)arg1;	// IMP=0x000000000043330e
- (void)cameraAvailabilityDidChange:(_Bool)arg1;	// IMP=0x0000000000433253
- (void)thermalLevelDidChange:(int)arg1;	// IMP=0x0000000000433023
- (id)clientCaptureRule;	// IMP=0x0000000000433012
- (void)avConferenceScreenCaptureError:(id)arg1;	// IMP=0x0000000000432e7d
- (void)avConferencePreviewError:(id)arg1;	// IMP=0x0000000000432ce8
- (CDUnknownBlockType)copyOnVideoFrameBlock;	// IMP=0x0000000000432c27
- (void)sourceFrameRateDidChange:(unsigned int)arg1;	// IMP=0x0000000000432c0a
- (_Bool)onVideoFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 attribute:(CDStruct_51555cf6)arg3;	// IMP=0x0000000000432b54
- (void)vcVideoReceiver:(id)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;	// IMP=0x0000000000432a23
- (unsigned int)vcVideoReceiver:(id)arg1 receivedTMMBR:(unsigned int)arg2;	// IMP=0x000000000043288a
- (void)vcVideoReceiver:(id)arg1 downlinkQualityDidChange:(id)arg2;	// IMP=0x000000000043278b
- (void)vcVideoReceiverRequestKeyFrame:(id)arg1 rtcpPSFBType:(unsigned int)arg2;	// IMP=0x0000000000432363
- (void)vcVideoReceiver:(id)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2 firType:(int)arg3;	// IMP=0x00000000004320d5
@property(nonatomic, getter=getVideoReceiverFeedbackDelegate) id <VCVideoReceiverFeedbackDelegate> videoReceiverFeedbackDelegate;
- (void)stopSynchronization;	// IMP=0x0000000000432012
- (_Bool)startSynchronization:(id)arg1;	// IMP=0x0000000000431ff5
- (struct __CFDictionary *)getClientSpecificUserInfo;	// IMP=0x0000000000430ad5
- (_Bool)isClientSpecificUserInfoSupported:(int)arg1;	// IMP=0x0000000000430abc
- (int)reportVideoStreamType;	// IMP=0x0000000000430a2c
- (struct __CFString *)getReportingClientName;	// IMP=0x00000000004308d4
- (struct __CFString *)getReportingServiceName;	// IMP=0x0000000000430893
- (int)screenSharingReportingClientType;	// IMP=0x00000000004307f2
- (int)remoteCameraReportingClientType;	// IMP=0x00000000004307b8
@property(nonatomic) _Bool didReceiveFirstFrame;
- (void)setVideoStreamDelegate:(id)arg1 delegateFunctions:(const struct tagVCVideoStreamDelegateRealtimeInstanceVTable *)arg2;	// IMP=0x0000000000430637
- (void)handleVTPSendFailedWithData:(void *)arg1;	// IMP=0x00000000004305ca
@property(nonatomic) unsigned int targetBitrateChangeCounter;
@property(nonatomic) unsigned int targetEncoderBitrate;
@property unsigned int lastSentAudioSampleTime;
@property double lastSentAudioHostTime;
- (void)setPeerSubscribedStreamIDs:(id)arg1;	// IMP=0x000000000042fd00
- (void)setStreamIDs:(id)arg1 repairStreamIDs:(id)arg2;	// IMP=0x000000000042f38d
- (void)setTransmitterStreamIDs:(id)arg1 repairStreamIDs:(id)arg2;	// IMP=0x000000000042ecbb
- (unsigned int)getMaxTemporalBitrateForStreamIDs:(id)arg1;	// IMP=0x000000000042e947
- (double)rtcpHeartbeatLeeway;	// IMP=0x000000000042e939
- (void)onSendRTCPPacket;	// IMP=0x000000000042e83f
- (void)onRTCPTimeout;	// IMP=0x000000000042e82c
- (void)onRTPTimeout;	// IMP=0x000000000042e819
- (void)onResumeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000042e675
- (void)onPauseWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000042e4e4
- (void)onStopWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000042e13e
- (void)onStartWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000042daf5
- (void)setupInternalRedundancyControllerWithStreamConfig:(id)arg1;	// IMP=0x000000000042d900
- (_Bool)shouldReportNetworkInterfaceType;	// IMP=0x000000000042d8ee
- (_Bool)isTransportIPv6;	// IMP=0x000000000042d7ea
@property(readonly) unsigned int networkMTU;
- (void)gatherRealtimeStats:(struct __CFDictionary *)arg1;	// IMP=0x000000000042d665
- (void)setupReportingAgent;	// IMP=0x000000000042d0ab
- (void)collectImageQueuePerformanceMetrics:(struct __CFDictionary *)arg1;	// IMP=0x000000000042d0a5
- (_Bool)registerForVideoCapture;	// IMP=0x000000000042d040
- (_Bool)registerForCameraCaptureWithConfig:(id)arg1;	// IMP=0x000000000042cd0a
- (void)reportFailedToRegisterVideoFramesFromSource:(int)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4;	// IMP=0x000000000042cbea
- (void)deregisterForVideoCapture;	// IMP=0x000000000042cbd8
- (int)operatingModeForVideoStreamType:(long long)arg1;	// IMP=0x000000000042cbb8
- (_Bool)onConfigureStreamWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000042b651
- (void)configureMediaStallSettingsWithConfig:(id)arg1;	// IMP=0x000000000042b555
- (unsigned int)maxFramerateFromStreamConfigs:(id)arg1;	// IMP=0x000000000042b1b9
- (_Bool)configureStreamInputCaptureSourceWithStreamInputID:(long long)arg1 frameRate:(unsigned int)arg2;	// IMP=0x000000000042b1b1
- (void)deregisterCurrentStreamInputCaptureSource;	// IMP=0x000000000042b1ab
- (id)getReceiveStatsCollectorWithStreamConfig:(id)arg1;	// IMP=0x000000000042b11f
- (id)getTransmitStatsCollectorWithStreamConfig:(id)arg1;	// IMP=0x000000000042b0ba
- (id)getTransmitMediaControllerWithStreamConfig:(id)arg1;	// IMP=0x000000000042b06c
- (void)onCallIDChanged;	// IMP=0x000000000042b066
- (id)supportedPayloads;	// IMP=0x000000000042b04d
@property(readonly) double videoRxFrameRate;
@property(readonly, nonatomic) double activeVideoStallDuration;
- (void)setUplinkRetransmissionEnabled:(_Bool)arg1;	// IMP=0x000000000042aefb
- (void)setLooseAVSyncEnabled:(_Bool)arg1;	// IMP=0x000000000042aede
- (void)setDeferredAssemblyEnabled:(_Bool)arg1;	// IMP=0x000000000042aec1
- (void)setJitterBufferMode:(int)arg1;	// IMP=0x000000000042aea4
- (_Bool)enableRateControlFeebackInConfig:(id)arg1;	// IMP=0x000000000042ad00
- (_Bool)setEncodingMode:(int)arg1;	// IMP=0x000000000042abec
- (_Bool)validateStreamConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000042a850
- (_Bool)isLowLatencyStreamType;	// IMP=0x000000000042a7db
@property(readonly, nonatomic) unsigned int lastDisplayedFrameRTPTimestamp;
- (void)setShouldEnableMLEnhance:(_Bool)arg1 streamID:(unsigned short)arg2;	// IMP=0x000000000042a685
- (void)cleanupBeforeReconfigure:(id)arg1;	// IMP=0x0000000000429c74
- (_Bool)validateVideoStreamConfigurations:(id)arg1;	// IMP=0x0000000000429b66
- (void)sendLastRemoteVideoFrame:(struct __CVBuffer *)arg1;	// IMP=0x0000000000429b14
- (void)setFECRedundancyVector:(const CDStruct_d7e2e0ee *)arg1;	// IMP=0x0000000000429af7
@property(nonatomic) double fecRatio;
- (void)generateKeyFrameWithFIRType:(int)arg1;	// IMP=0x000000000042969d
- (void)resetRemoteMediaStalled;	// IMP=0x0000000000429487
- (void)requestLastDecodedFrame;	// IMP=0x00000000004293f1
- (void)updateVideoConfig:(id)arg1;	// IMP=0x0000000000428bbc
- (void)dealloc;	// IMP=0x00000000004287a1
- (void)setupVideoStream;	// IMP=0x000000000042852c
- (id)initWithTransportSessionID:(unsigned int)arg1 idsParticipantID:(unsigned long long)arg2 ssrc:(unsigned int)arg3 streamToken:(long long)arg4;	// IMP=0x000000000042822d
- (id)init;	// IMP=0x0000000000428198
- (double)lastReceivedRTCPPacketTime;	// IMP=0x000000000042817b
- (double)lastReceivedRTPPacketTime;	// IMP=0x000000000042815e
- (_Bool)setRTPPayloads:(int *)arg1 numPayloads:(int)arg2 withError:(id *)arg3;	// IMP=0x00000000004280bc
- (void)updateShouldCacheRemoteVideoFrame;	// IMP=0x0000000000428090
- (void)setupVideoTransmitterConfigColorInfo:(id)arg1;	// IMP=0x0000000000427f66
- (void)setupColorInfo:(id)arg1;	// IMP=0x0000000000427483
- (void)setMediaSuggestion:(struct VCRateControlMediaSuggestion *)arg1;	// IMP=0x0000000000427440
- (void)handleNWConnectionPacketEvent:(struct packet_id *)arg1 eventType:(int)arg2;	// IMP=0x00000000004273e7
- (void)handleNWConnectionNotification:(struct tagVCNWConnectionNotification *)arg1;	// IMP=0x000000000042739b
- (struct tagVCVideoReceiverDelegateRealtimeInstanceVTable)videoReceiverDelegateFunctions;	// IMP=0x00000000004270ec
- (void)stopRateAdaptation;	// IMP=0x000000000042706b
- (void)startRateAdaptationWithStreamConfig:(id)arg1;	// IMP=0x0000000000426a7d
- (void)enableRedundancyController:(id)arg1;	// IMP=0x00000000004267b8
- (unsigned int)dumpIDFromCallID;	// IMP=0x00000000004266e5
- (void)setupCompoundStreamIDsWithStreamIDs:(id)arg1;	// IMP=0x00000000004260fe
- (void)destroyVideoModules;	// IMP=0x0000000000426010
- (void)destroyVideoReceiver;	// IMP=0x0000000000425f05
- (void)updateVideoReceiver:(id)arg1;	// IMP=0x0000000000425d60
- (_Bool)useUEPForVideoConfig:(int)arg1;	// IMP=0x0000000000425ca4
- (void)setupVideoReceiver:(id)arg1 withTransmitterHandle:(struct tagHANDLE *)arg2;	// IMP=0x0000000000425489
- (struct tagVCNACKGeneratorStoreBagsConfig)readServerPacketRetransmissionsForVideoStoreBagConfig:(id)arg1;	// IMP=0x0000000000424d48
- (struct tagVCVideoReceiverConfig)videoReceiverConfigWithVideoStreamConfig:(id)arg1;	// IMP=0x0000000000423bc0
- (struct tagVCVideoStreamReceiverConfig)videoStreamReceiverConfigWithDumpID:(unsigned int)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2;	// IMP=0x0000000000423ae0
- (void)cleaunpReceiverConfig:(struct tagVCVideoReceiverConfig *)arg1;	// IMP=0x0000000000423a97
- (void)addReceiverStreamConfigsToReceiverConfig:(struct tagVCVideoReceiverConfig *)arg1 streamConfig:(id)arg2;	// IMP=0x00000000004238a1
- (void)setupMultiwayVideoReceiverConfig:(struct tagVCVideoReceiverConfig *)arg1 forTransportStream:(id)arg2;	// IMP=0x0000000000423536
- (void)setupMultiwayVideoReceiverStreamSwitchInfo:(struct tagVCVideoReceiverStreamConfig *)arg1 forTransportStream:(id)arg2;	// IMP=0x000000000042340f
- (void)setupMultiwayVideoReceiverTemporalScalingConfig:(struct tagVCVideoReceiverStreamConfig *)arg1 forTransportStream:(id)arg2;	// IMP=0x0000000000423345
- (_Bool)isScreenConfig:(id)arg1;	// IMP=0x00000000004232d8
- (int)pickScreenDisplayMode;	// IMP=0x000000000042329f
- (id)newScreenCaptureConfigForVideoConfig:(id)arg1;	// IMP=0x0000000000422dd2
- (void)setVideoExpected:(_Bool)arg1;	// IMP=0x0000000000422dcc
- (void)destroyVideoTransmitter;	// IMP=0x0000000000422bfa
- (void)initVideoTransmitter;	// IMP=0x00000000004225ea
- (id)newVideoTransmitterConfigWithVideoStreamConfig:(id)arg1;	// IMP=0x0000000000420e39
- (void)overrideConfigWithDefaults:(id)arg1;	// IMP=0x0000000000420cb8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
