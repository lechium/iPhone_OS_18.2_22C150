//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCAnsweringMachineConfiguration, NSObject, NSString, NSURL, VCAudioIO;
@protocol OS_dispatch_queue, VCAnsweringMachineDelegate;

__attribute__((visibility("hidden")))
@interface VCAnsweringMachine
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 88 = 0x58
    id <VCAnsweringMachineDelegate> _delegate;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 104 = 0x68
    struct tagVCAnsweringMachineRealtimeContext _realtimeContext;	// 112 = 0x70
    _Bool _registeredForThermalNotifications;	// 200 = 0xc8
    AVCAnsweringMachineConfiguration *_configuration;	// 208 = 0xd0
    NSString *_uuid;	// 216 = 0xd8
    int _deviceRole;	// 224 = 0xe0
    VCAudioIO *_audioIO;	// 232 = 0xe8
    int _reportingModuleID;	// 240 = 0xf0
    struct tagVCAudioFrameFormat _internalFormat;	// 248 = 0xf8
    NSURL *_recordingURL;	// 296 = 0x128
    _Bool _stopIsAsync;	// 304 = 0x130
    _Bool _didInvalidate;	// 305 = 0x131
}

+ (void)terminateProcess:(id)arg1 terminateSource:(id)arg2 agent:(struct opaqueRTCReporting *)arg3;	// IMP=0x0010000000123b2e
@property(readonly, nonatomic) NSURL *recordingURL; // @synthesize recordingURL=_recordingURL;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) AVCAnsweringMachineConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)didSuspendAudioIO:(id)arg1;	// IMP=0x0000000000123b59
- (void)didResumeAudioIO:(id)arg1;	// IMP=0x0000000000123b53
- (void)serverDidDie;	// IMP=0x0000000000123b4d
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;	// IMP=0x0000000000123b47
- (void)streamToken:(long long)arg1 didUpdateCapabilities:(unsigned int)arg2;	// IMP=0x0000000000123b28
- (void)streamTokenDidCleanupAllRequests:(long long)arg1;	// IMP=0x0000000000123b22
- (void)streamToken:(long long)arg1 didFinishRequest:(id)arg2 didSucceed:(_Bool)arg3;	// IMP=0x0000000000123b1c
- (void)streamToken:(long long)arg1 didEndProcessingRequest:(id)arg2 urlContext:(const struct tagVCMediaRecorderDelegateURLContext *)arg3 error:(id)arg4;	// IMP=0x00000000001239b7
- (void)streamToken:(long long)arg1 didStartProcessingRequest:(id)arg2 error:(id)arg3;	// IMP=0x00000000001239b1
- (void)stopMediaRecording;	// IMP=0x000000000012385d
- (void)cleanupMediaRecorder;	// IMP=0x000000000012380e
- (_Bool)setupMediaRecorder;	// IMP=0x00000000001231a2
- (void)cleanupCaptionsCoordinator;	// IMP=0x0000000000123178
- (_Bool)setupCaptionsCoordinator;	// IMP=0x0000000000122e04
- (void)cleanupAnnouncementAssetInjection;	// IMP=0x0000000000122ddc
- (_Bool)setUpAnnouncementAssetInjection;	// IMP=0x0000000000122ba8
- (id)newInjectorConfigurationForAnnouncementAsset:(id)arg1;	// IMP=0x000000000012292c
@property(readonly, nonatomic) long long messageAudioToken;
- (_Bool)configureAudioIO;	// IMP=0x000000000012262b
- (struct tagVCAudioIOConfiguration)defaultAudioIOConfiguration;	// IMP=0x0000000000122279
- (struct AudioStreamBasicDescription)defaultAudioFormat;	// IMP=0x0000000000122245
- (int)deviceRoleForCallSource:(unsigned char)arg1;	// IMP=0x0000000000122227
- (void)cleanupRealtimeContext;	// IMP=0x00000000001221ec
- (_Bool)setupRealtimeContextWithToken:(long long)arg1;	// IMP=0x0000000000121d55
- (void)setupInternalFormat;	// IMP=0x0000000000121cc2
- (void)unregisterForThermalNotifications;	// IMP=0x0000000000121cad
- (void)registerForThermalNotifications;	// IMP=0x0000000000121c98
- (void)handleThermalPressureNotification:(id)arg1;	// IMP=0x0000000000121c92
- (struct __CFDictionary *)clientSpecificUserInfo;	// IMP=0x0000000000121c27
- (_Bool)setupReportingAgentWithCallID:(unsigned int)arg1;	// IMP=0x00000000001216b0
- (struct __CFDictionary *)reportingInitialConfiguration;	// IMP=0x00000000001214ca
- (void)cleanupPeriodicReporting;	// IMP=0x0000000000121492
- (void)setupPeriodicReporting;	// IMP=0x000000000012132d
- (_Bool)autoRunOnStart;	// IMP=0x0000000000121325
- (id)onStop;	// IMP=0x0000000000121122
- (id)onStart;	// IMP=0x0000000000120ede
- (void)setUpRealtimeDefaults;	// IMP=0x0000000000120e9d
- (id)stop;	// IMP=0x0000000000120b9d
- (id)start;	// IMP=0x00000000001208ef
- (void)invalidate;	// IMP=0x000000000012072c
- (void)dealloc;	// IMP=0x000000000012058d
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;	// IMP=0x000000000011fcb3
- (_Bool)setUpInternalStateWithConfiguration:(id)arg1;	// IMP=0x000000000011f954
- (_Bool)setUpConfigurationIndependentInternalState;	// IMP=0x000000000011f763

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

