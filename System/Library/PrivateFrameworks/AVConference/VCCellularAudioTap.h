//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSObject, NSString, VCAudioCaptionsCoordinator, VCMediaRecorder;
@protocol OS_dispatch_queue, VCServerDelegate;

__attribute__((visibility("hidden")))
@interface VCCellularAudioTap
{
    NSMutableDictionary *_audioTapIOMap;	// 88 = 0x58
    VCMediaRecorder *_mediaRecorder;	// 96 = 0x60
    VCAudioCaptionsCoordinator *_captionsCoordinator;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_stateQueue;	// 112 = 0x70
    int _processId;	// 120 = 0x78
    int _reportingModuleID;	// 124 = 0x7c
    NSString *_uuid;	// 128 = 0x80
    long long _tapToken;	// 136 = 0x88
    _Bool _registeredForThermalNotifications;	// 144 = 0x90
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 152 = 0x98
    id <VCServerDelegate> _delegate;	// 160 = 0xa0
}

+ (_Bool)validateAsynchronousActionContext:(const struct tagVCAsynchronousActionContext *)arg1 withError:(id *)arg2;	// IMP=0x00100000002fc72a
+ (unsigned int)audioIOTypeFromTapType:(unsigned int)arg1;	// IMP=0x00100000002fbfe0
+ (id)stringFromTapType:(unsigned int)arg1;	// IMP=0x00100000002f8ba4
@property(retain, nonatomic) id <VCServerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) long long tapToken; // @synthesize tapToken=_tapToken;
- (void)mediaRecorder:(id)arg1 shouldProcessRequest:(id)arg2 recipientID:(id)arg3;	// IMP=0x00000000002fcf7b
- (_Bool)actionDidFinishForContext:(const struct tagVCAsynchronousActionContext *)arg1 withError:(id *)arg2;	// IMP=0x00000000002fccea
- (_Bool)actionWillBeginForContext:(const struct tagVCAsynchronousActionContext *)arg1 withError:(id *)arg2;	// IMP=0x00000000002fca2c
- (struct tagVCAudioIOConfiguration)audioIOConfigWithAudioType:(unsigned int)arg1 sinkDelegateContext:(const struct tagVCAudioIODelegateContext *)arg2;	// IMP=0x00000000002fc67a
- (void)unregisterAudioTapForStreamToken:(long long)arg1;	// IMP=0x00000000002fc5ad
- (int)registerAudioTapForStreamToken:(long long)arg1 tapType:(unsigned int)arg2;	// IMP=0x00000000002fc36d
- (void)setAudioTapIO:(id)arg1 forStreamToken:(long long)arg2;	// IMP=0x00000000002fc2c6
- (int)makeAudioIOForAudioTapIO:(id)arg1;	// IMP=0x00000000002fc041
- (struct tagVCAudioIODelegateContext)sinkDelegateContextWithTapType:(unsigned int)arg1 realtimeContext:(struct tagVCCellularAudioTapIORealtimeContext *)arg2;	// IMP=0x00000000002fbffd
- (void)audioPowerSpectrumSinkDidUnregister;	// IMP=0x00000000002fbfda
- (void)audioPowerSpectrumSinkDidRegister;	// IMP=0x00000000002fbfd4
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;	// IMP=0x00000000002fbf6f
- (void)serverDidDie;	// IMP=0x00000000002fbed9
- (void)didResumeAudioIO:(id)arg1;	// IMP=0x00000000002fbed3
- (void)didSuspendAudioIO:(id)arg1;	// IMP=0x00000000002fbecd
- (void)didResume;	// IMP=0x00000000002fbec7
- (void)didSuspend;	// IMP=0x00000000002fbec1
- (void)controllerFormatChanged:(const struct tagVCAudioFrameFormat *)arg1;	// IMP=0x00000000002fbebb
- (void)didStop:(_Bool)arg1 error:(id)arg2;	// IMP=0x00000000002fbeb5
- (void)didStart:(_Bool)arg1 error:(id)arg2;	// IMP=0x00000000002fbeaf
- (_Bool)removeAudioTapForStreamToken:(long long)arg1 error:(id *)arg2;	// IMP=0x00000000002fbb60
- (_Bool)addAudioTapForStreamToken:(long long)arg1 tapType:(unsigned int)arg2 enableAsyncTapStart:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000002fb799
- (id)initializeAudioTapIOForStreamToken:(long long)arg1 enableAsyncTapStart:(_Bool)arg2;	// IMP=0x00000000002fb715
- (int)validateAddAudioTapForStreamToken:(long long)arg1;	// IMP=0x00000000002fb3d3
- (id)stopAudioForStreamToken:(id)arg1 isDeinitialization:(_Bool)arg2;	// IMP=0x00000000002fa99d
- (id)startAudioForStreamToken:(id)arg1 isInitialization:(_Bool)arg2;	// IMP=0x00000000002fa158
- (void)terminateProcessFromAssertionOverflow:(_Bool)arg1 onAudioTapIO:(id)arg2;	// IMP=0x00000000002f9e42
- (void)dealloc;	// IMP=0x00000000002f9c3e
- (void)invalidate;	// IMP=0x00000000002f9bf3
- (id)initWithProcessId:(int)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;	// IMP=0x00000000002f9843
- (_Bool)setUpCallRecordingComponents;	// IMP=0x00000000002f9606
- (_Bool)setUpDelegateQueue:(id)arg1;	// IMP=0x00000000002f942e
- (void)cleanUpCaptionsCoordinator;	// IMP=0x00000000002f93f5
- (_Bool)setUpCaptionsCoordinator;	// IMP=0x00000000002f9241
- (void)cleanUpMediaRecorder;	// IMP=0x00000000002f9214
- (_Bool)setUpMediaRecorder;	// IMP=0x00000000002f8ff9
- (void)unregisterForThermalNotifications;	// IMP=0x00000000002f8fe4
- (void)registerForThermalNotifications;	// IMP=0x00000000002f8fcf
- (void)handleThermalPressureNotification:(id)arg1;	// IMP=0x00000000002f8fc9
- (void)cleanUpPeriodicReporting;	// IMP=0x00000000002f8f91
- (void)setUpPeriodicReporting;	// IMP=0x00000000002f8f16
- (void)printAudioTapHealth;	// IMP=0x00000000002f8bec
- (struct __CFDictionary *)clientSpecificUserInfo;	// IMP=0x00000000002f8b39
- (_Bool)setUpReportingAgent;	// IMP=0x00000000002f85e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
