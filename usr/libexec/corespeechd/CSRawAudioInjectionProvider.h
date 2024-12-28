//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSAudioRecorder.h>

@class NSHashTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSRawAudioInjectionProvider : CSAudioRecorder
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_audioFeedTimer;	// 24 = 0x18
    struct __sFILE *_fp;	// 32 = 0x20
}

+ (void)createSharedAudioSession;	// IMP=0x00400000000a9e04
- (void).cxx_destruct;	// IMP=0x00200000000a9924
@property(nonatomic) struct __sFILE *fp; // @synthesize fp=_fp;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *audioFeedTimer; // @synthesize audioFeedTimer=_audioFeedTimer;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)enableSmartRoutingConsiderationForStream:(unsigned long long)arg1 enable:(_Bool)arg2;	// IMP=0x00100000000a988d
- (void)configureAlertBehavior:(id)arg1 audioStreamHandleId:(unsigned long long)arg2;	// IMP=0x00100000000a9887
- (id)metrics;	// IMP=0x00100000000a987f
- (void)enableMiniDucking:(_Bool)arg1;	// IMP=0x00100000000a9879
- (id)fetchGibraltarVoiceTriggerInfoWithRecordDeviceIndicator:(id)arg1;	// IMP=0x00100000000a9871
- (_Bool)isSessionCurrentlyActivated;	// IMP=0x00100000000a9869
- (float)averagePowerForChannel:(unsigned long long)arg1;	// IMP=0x00100000000a9860
- (float)peakPowerForChannel:(unsigned long long)arg1;	// IMP=0x00100000000a9857
- (void)updateMeters;	// IMP=0x00100000000a9851
- (void)setMeteringEnabled:(_Bool)arg1;	// IMP=0x00100000000a984b
- (unsigned long long)alertStartTime;	// IMP=0x00100000000a9843
- (_Bool)playAlertSoundForType:(long long)arg1 recordDevideIndicator:(id)arg2;	// IMP=0x00100000000a983b
- (_Bool)playRecordStartingAlertAndResetEndpointerFromStream:(unsigned long long)arg1 withAlertOverride:(long long)arg2;	// IMP=0x00100000000a97a8
- (_Bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2 force:(_Bool)arg3;	// IMP=0x00100000000a97a0
- (id)getPlaybackRouteForStreamID:(unsigned long long)arg1;	// IMP=0x00100000000a9793
- (_Bool)duckOthersOption;	// IMP=0x00100000000a978b
- (void)setDuckOthersOption:(_Bool)arg1;	// IMP=0x00100000000a9785
- (_Bool)setRecordMode:(long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000000a977d
- (_Bool)deactivateAudioSession:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000000a9775
- (_Bool)activateAudioSessionWithReason:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000000a96f4
- (_Bool)prewarmAudioSessionWithStreamHandleId:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00100000000a9673
- (_Bool)isNarrowBandWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x00100000000a966b
- (float)recordingSampleRateWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x00100000000a9652
- (id)recordSettingsWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x00100000000a9645
- (id)audioDeviceInfoWithStreamHandleId:(unsigned long long)arg1 recordDeviceIndicator:(id)arg2;	// IMP=0x00100000000a963d
- (id)recordDeviceInfoWithStreamHandleId:(unsigned long long)arg1 recordDeviceIndicator:(id)arg2;	// IMP=0x00100000000a9635
- (id)recordRouteWithRecordDeviceIndicator:(id)arg1;	// IMP=0x00100000000a9628
- (_Bool)isRecordingWithRecordDeviceIndicator:(id)arg1;	// IMP=0x00100000000a95a7
- (_Bool)stopAudioStreamWithRecordDeviceIndicator:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a94de
- (void)_readAudioBufferAndFeed;	// IMP=0x00100000000a92e7
- (_Bool)startAudioStreamWithOption:(id)arg1 recordDeviceIndicator:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000a91fa
- (_Bool)prepareAudioStreamRecord:(id)arg1 recordDeviceIndicator:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000a9179
- (_Bool)setCurrentContext:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000000a90d4
- (void)setContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a8ffb
- (void)setAudioSessionEventDelegate:(id)arg1;	// IMP=0x00100000000a8ff5
- (void)unregisterObserver:(id)arg1;	// IMP=0x00100000000a8f61
- (void)registerObserver:(id)arg1;	// IMP=0x00100000000a8ecd
- (void)dealloc;	// IMP=0x00100000000a8e29
- (id)init;	// IMP=0x00100000000a8cfe

@end
