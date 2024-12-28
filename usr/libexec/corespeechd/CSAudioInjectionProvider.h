//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSAudioRecorder.h>

@class CSAudioInjectionDevice, CSAudioInjectionEngine, CSAudioRecordContext, NSHashTable, NSMutableArray, NSMutableDictionary, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface CSAudioInjectionProvider : CSAudioRecorder
{
    _Bool _allowZeroInjection;	// 8 = 0x8
    _Bool _shouldSupportOnlyTVRemote;	// 9 = 0x9
    float _didStartDelayInSeconds;	// 12 = 0xc
    NSHashTable *_observers;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSUUID *_uuid;	// 32 = 0x20
    NSMutableArray *_connectedDevices;	// 40 = 0x28
    CSAudioInjectionDevice *_builtInDevice;	// 48 = 0x30
    CSAudioInjectionDevice *_bundleTvRemote;	// 56 = 0x38
    CSAudioInjectionEngine *_builtInAudioInjectionEngine;	// 64 = 0x40
    NSMutableDictionary *_audioInjectionEngines;	// 72 = 0x48
    unsigned long long _latestPluginStreamId;	// 80 = 0x50
    unsigned long long _activateStartTime;	// 88 = 0x58
    unsigned long long _activateEndTime;	// 96 = 0x60
    unsigned long long _deactivateStartTime;	// 104 = 0x68
    unsigned long long _deactivateEndTime;	// 112 = 0x70
    NSString *_atvRemoteDeviceID;	// 120 = 0x78
    CSAudioRecordContext *_audioRecordContext;	// 128 = 0x80
}

+ (void)createSharedAudioSession;	// IMP=0x00200000000784c3
+ (id)defaultInjectionProvider;	// IMP=0x0010000000078493
- (void).cxx_destruct;	// IMP=0x0020000000076882
@property(nonatomic) _Bool shouldSupportOnlyTVRemote; // @synthesize shouldSupportOnlyTVRemote=_shouldSupportOnlyTVRemote;
@property(nonatomic) _Bool allowZeroInjection; // @synthesize allowZeroInjection=_allowZeroInjection;
@property(retain, nonatomic) CSAudioRecordContext *audioRecordContext; // @synthesize audioRecordContext=_audioRecordContext;
@property(retain, nonatomic) NSString *atvRemoteDeviceID; // @synthesize atvRemoteDeviceID=_atvRemoteDeviceID;
@property(nonatomic) unsigned long long deactivateEndTime; // @synthesize deactivateEndTime=_deactivateEndTime;
@property(nonatomic) unsigned long long deactivateStartTime; // @synthesize deactivateStartTime=_deactivateStartTime;
@property(nonatomic) unsigned long long activateEndTime; // @synthesize activateEndTime=_activateEndTime;
@property(nonatomic) unsigned long long activateStartTime; // @synthesize activateStartTime=_activateStartTime;
@property(nonatomic) unsigned long long latestPluginStreamId; // @synthesize latestPluginStreamId=_latestPluginStreamId;
@property(retain, nonatomic) NSMutableDictionary *audioInjectionEngines; // @synthesize audioInjectionEngines=_audioInjectionEngines;
@property(retain, nonatomic) CSAudioInjectionEngine *builtInAudioInjectionEngine; // @synthesize builtInAudioInjectionEngine=_builtInAudioInjectionEngine;
@property(retain, nonatomic) CSAudioInjectionDevice *bundleTvRemote; // @synthesize bundleTvRemote=_bundleTvRemote;
@property(retain, nonatomic) CSAudioInjectionDevice *builtInDevice; // @synthesize builtInDevice=_builtInDevice;
@property(retain, nonatomic) NSMutableArray *connectedDevices; // @synthesize connectedDevices=_connectedDevices;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) float didStartDelayInSeconds; // @synthesize didStartDelayInSeconds=_didStartDelayInSeconds;
- (void)audioEngineAudioChunkForTvAvailable:(id)arg1 audioChunk:(id)arg2;	// IMP=0x001000000007656e
- (void)audioEngineDidStopRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 reason:(unsigned long long)arg3;	// IMP=0x0010000000076514
- (void)audioEngineBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5 isFileLoadedBuffer:(_Bool)arg6;	// IMP=0x001000000007643c
- (void)audioEngineDidStartRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 successfully:(_Bool)arg3 error:(id)arg4;	// IMP=0x0010000000076393
- (void)configureAlertBehavior:(id)arg1 audioStreamHandleId:(unsigned long long)arg2;	// IMP=0x001000000007638d
- (id)metrics;	// IMP=0x001000000007615a
- (void)enableMiniDucking:(_Bool)arg1;	// IMP=0x0010000000076154
- (id)fetchGibraltarVoiceTriggerInfoWithRecordDeviceIndicator:(id)arg1;	// IMP=0x001000000007614c
- (_Bool)isSessionCurrentlyActivated;	// IMP=0x0010000000076144
- (float)averagePowerForChannel:(unsigned long long)arg1;	// IMP=0x000000000007613b
- (float)peakPowerForChannel:(unsigned long long)arg1;	// IMP=0x0010000000076132
- (void)updateMeters;	// IMP=0x001000000007612c
- (void)setMeteringEnabled:(_Bool)arg1;	// IMP=0x0010000000076126
- (unsigned long long)alertStartTime;	// IMP=0x001000000007611e
- (_Bool)playAlertSoundForType:(long long)arg1 recordDevideIndicator:(id)arg2;	// IMP=0x0010000000076116
- (_Bool)playRecordStartingAlertAndResetEndpointerFromStream:(unsigned long long)arg1 withAlertOverride:(long long)arg2;	// IMP=0x0010000000076083
- (_Bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2 force:(_Bool)arg3;	// IMP=0x001000000007607b
- (id)getPlaybackRouteForStreamID:(unsigned long long)arg1;	// IMP=0x001000000007606e
- (_Bool)duckOthersOption;	// IMP=0x0010000000076066
- (void)setDuckOthersOption:(_Bool)arg1;	// IMP=0x0010000000076060
- (_Bool)setRecordMode:(long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000076058
- (_Bool)deactivateAudioSession:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0010000000075fcb
- (_Bool)deactivateAudioSession:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000075f3e
- (_Bool)activateAudioSessionWithReason:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000075dbb
- (_Bool)prewarmAudioSessionWithStreamHandleId:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0010000000075d59
- (_Bool)isNarrowBandWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x0010000000075d51
- (float)recordingSampleRateWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x0010000000075d38
- (id)recordSettingsWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x0010000000075c37
- (id)audioDeviceInfoWithStreamHandleId:(unsigned long long)arg1 recordDeviceIndicator:(id)arg2;	// IMP=0x0010000000075b4a
- (id)recordDeviceInfoWithStreamHandleId:(unsigned long long)arg1 recordDeviceIndicator:(id)arg2;	// IMP=0x0010000000075a86
- (id)recordRouteWithRecordDeviceIndicator:(id)arg1;	// IMP=0x0010000000075981
- (_Bool)isRecordingWithRecordDeviceIndicator:(id)arg1;	// IMP=0x0010000000075855
- (_Bool)stopAudioStreamWithRecordDeviceIndicator:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000075693
- (_Bool)startAudioStreamWithOption:(id)arg1 recordDeviceIndicator:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000753f9
- (_Bool)prepareAudioStreamRecord:(id)arg1 recordDeviceIndicator:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000075363
- (_Bool)setCurrentContext:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000007535b
- (void)setContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000751de
- (void)setAudioSessionEventDelegate:(id)arg1;	// IMP=0x00100000000751d8
- (void)unregisterObserver:(id)arg1;	// IMP=0x0010000000075144
- (void)registerObserver:(id)arg1;	// IMP=0x00100000000750b0
- (void)willDestroy;	// IMP=0x0010000000075081
- (void)disconnectDevice:(id)arg1;	// IMP=0x0010000000074fe3
- (void)connectDevice:(id)arg1;	// IMP=0x0010000000074f45
- (id)primaryInputDevice;	// IMP=0x0010000000074f17
- (void)stop;	// IMP=0x0010000000074e3a
- (void)_createSpeechDetectionVADIfNeeded;	// IMP=0x0010000000074d0a
- (void)_tearDownSpeechDetectionVADIfNeeded;	// IMP=0x0010000000074c8e
- (void)_connectPluginDevice:(id)arg1;	// IMP=0x0010000000074b78
- (void)start;	// IMP=0x0010000000074b26
- (void)dealloc;	// IMP=0x0010000000074a6c
- (id)init;	// IMP=0x001000000007483b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
