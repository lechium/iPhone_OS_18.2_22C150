//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFClientConfiguration, AFInstanceContext, AFRequestInfo, AFSpeechRequestOptions, AFWatchdogTimer, NSMutableOrderedSet, NSString, NSUUID, NSXPCConnection;
@protocol AFBluetoothDevice, OS_dispatch_group, OS_dispatch_queue, OS_os_transaction;

@interface ADClientConnection : NSObject
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    AFRequestInfo *_requestInfo;	// 24 = 0x18
    AFSpeechRequestOptions *_requestOptions;	// 32 = 0x20
    CDUnknownBlockType _requestCompletion;	// 40 = 0x28
    NSObject<OS_dispatch_group> *_requestGroup;	// 48 = 0x30
    NSUUID *_requestUUID;	// 56 = 0x38
    AFClientConfiguration *_clientConfiguration;	// 64 = 0x40
    unsigned long long _pendingRequestId;	// 72 = 0x48
    double _pendingRequestTimestamp;	// 80 = 0x50
    CDUnknownBlockType _pendingSpeechRequestContinue;	// 88 = 0x58
    long long _numberOfPresentedUIs;	// 96 = 0x60
    CDUnknownBlockType _presentedUIReply;	// 104 = 0x68
    NSObject<OS_os_transaction> *_presentedUITransaction;	// 112 = 0x70
    int _ringerStateToken;	// 120 = 0x78
    _Bool _hasCachedADShouldSpeak;	// 124 = 0x7c
    _Bool _cachedADShouldSpeak;	// 125 = 0x7d
    _Bool _requestOptionsRequireTTS;	// 126 = 0x7e
    _Bool _serverIsForcingTTS;	// 127 = 0x7f
    _Bool _combinedShouldSpeakState;	// 128 = 0x80
    _Bool _isConnected;	// 129 = 0x81
    id <AFBluetoothDevice> _bluetoothDevice;	// 136 = 0x88
    NSMutableOrderedSet *_audioSessionAssertions;	// 144 = 0x90
    NSMutableOrderedSet *_speechCapturingContexts;	// 152 = 0x98
    AFWatchdogTimer *_longLivedConnectionABCTimer;	// 160 = 0xa0
    AFInstanceContext *_instanceContext;	// 168 = 0xa8
    _Bool adSpeechSessionEnded;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0020000000329f01
@property(nonatomic) _Bool adSpeechSessionEnded; // @synthesize adSpeechSessionEnded;
- (void)_continuePendingSpeechRequestFromTimestamp:(double)arg1;	// IMP=0x0010000000329e0e
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000329d11
- (oneway void)emitHomeMetricInvocationEvent;	// IMP=0x0010000000329ccd
- (oneway void)recordUIMetrics:(id)arg1;	// IMP=0x0010000000329cc7
- (oneway void)_refreshAssistantValidation;	// IMP=0x0010000000329c83
- (oneway void)_startSpeechWithURL:(id)arg1 isNarrowBand:(_Bool)arg2;	// IMP=0x0010000000329c07
- (oneway void)_requestBarrierIfNecessaryWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000329b9a
- (oneway void)_requestBarrierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000329b2d
- (oneway void)_barrierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000329b22
- (oneway void)_clearAssistantInfoForAccountIdentifier:(id)arg1;	// IMP=0x0010000000329ab3
- (oneway void)_fetchAppContextForApplicationInfo:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000003299df
- (oneway void)_broadcastCommandDictionary:(id)arg1;	// IMP=0x00100000003298f3
- (oneway void)_performTaskCommandDictionary:(id)arg1 forBundleIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000003297f0
- (oneway void)_performCommandDictionary:(id)arg1 forBundleIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000003296e1
- (oneway void)_sendLargeData:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000003296cc
- (oneway void)_pingServiceForIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000329520
- (oneway void)_listInstalledServicesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000003294b3
- (oneway void)adviseSessionArbiterToContinueWithPreviousWinner:(_Bool)arg1;	// IMP=0x0010000000329462
- (oneway void)reportIssueForType:(id)arg1 subtype:(id)arg2 context:(id)arg3;	// IMP=0x001000000032931f
- (oneway void)reportIssueForError:(id)arg1 type:(long long)arg2 subtype:(id)arg3 context:(id)arg4;	// IMP=0x001000000032921a
- (oneway void)reportIssueForError:(id)arg1 type:(long long)arg2 context:(id)arg3;	// IMP=0x0010000000329138
- (oneway void)updateSpeechSynthesisRecord:(id)arg1;	// IMP=0x00100000003290cb
- (oneway void)stopAllAudioPlaybackRequests:(_Bool)arg1;	// IMP=0x0010000000329056
- (oneway void)stopAudioPlaybackRequest:(id)arg1 immediately:(_Bool)arg2;	// IMP=0x0010000000328fc0
- (oneway void)startAudioPlaybackRequest:(id)arg1 options:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000328f14
- (oneway void)getRemoteClockTimerSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000328e01
- (oneway void)getSerializedCachedObjectsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000328b5b
- (oneway void)getDeferredObjectsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000328acc
- (oneway void)recordAWDSuccessMetrics;	// IMP=0x0010000000328a88
- (oneway void)recordCancellationMetrics;	// IMP=0x0010000000328a44
- (oneway void)recordFailureMetricsForError:(id)arg1;	// IMP=0x00100000003289d7
- (oneway void)telephonyRequestCompleted;	// IMP=0x0010000000328993
- (oneway void)prepareForPhoneCall;	// IMP=0x001000000032894f
- (oneway void)setAlertContextDirty;	// IMP=0x001000000032890b
- (oneway void)setOverriddenApplicationContext:(id)arg1 withContext:(id)arg2;	// IMP=0x001000000032887c
- (oneway void)setApplicationContextForApplicationInfos:(id)arg1 withRefId:(id)arg2;	// IMP=0x0010000000328865
- (oneway void)fetchAppicationContextForApplicationInfo:(id)arg1 supplementalContext:(id)arg2 refID:(id)arg3;	// IMP=0x00100000003287c4
- (oneway void)setApplicationContext:(id)arg1;	// IMP=0x0010000000328757
- (oneway void)willSetApplicationContextWithRefId:(id)arg1;	// IMP=0x00100000003286ea
- (oneway void)rollbackClearContext;	// IMP=0x001000000032861a
- (oneway void)clearContext;	// IMP=0x001000000032853b
- (oneway void)performGenericAceCommand:(id)arg1 interruptOutstandingRequest:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000003284a0
- (oneway void)requestStateUpdateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000003283af
- (oneway void)requestShouldSpeakStateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000328356
- (oneway void)stopSpeechWithOptions:(id)arg1;	// IMP=0x0010000000328244
- (oneway void)cancelSpeech;	// IMP=0x001000000032815d
- (oneway void)rollbackRequest;	// IMP=0x0010000000328086
- (oneway void)cancelRequestForReason:(long long)arg1 withError:(id)arg2;	// IMP=0x0010000000327f26
- (oneway void)updateSpeechOptions:(id)arg1;	// IMP=0x0010000000327e17
- (oneway void)startAcousticIDRequestWithOptions:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000327d67
- (oneway void)startSpeechPronunciationRequestWithOptions:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000327cb7
- (oneway void)continuePendingSpeechRequestWithId:(unsigned long long)arg1 fromTimestamp:(double)arg2;	// IMP=0x0010000000327be5
- (oneway void)startRecordingForPendingSpeechRequestWithOptions:(id)arg1 requestId:(unsigned long long)arg2 sessionUUID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000032797b
- (oneway void)startRequestWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003277c7
- (void)_setRequestCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000327593
- (oneway void)endSession;	// IMP=0x00100000003273f3
- (oneway void)setConfiguration:(id)arg1;	// IMP=0x00100000003272d8
- (oneway void)didDismissUI;	// IMP=0x00100000003270e0
- (oneway void)willPresentUIWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000326e58
- (oneway void)setModesConfiguration:(id)arg1;	// IMP=0x0010000000326deb
- (oneway void)setCarDNDActive:(_Bool)arg1;	// IMP=0x0010000000326d9a
- (oneway void)setLockState:(_Bool)arg1 showingLockScreen:(_Bool)arg2;	// IMP=0x0010000000326d44
- (oneway void)resumeInterruptedAudioPlaybackIfNeeded;	// IMP=0x0010000000326d00
- (oneway void)forceAudioSessionInactiveWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000326c36
- (oneway void)forceAudioSessionActiveWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000326b53
- (oneway void)boostedPreheatWithStyle:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000326ad6
- (oneway void)preheatWithStyle:(long long)arg1 forOptions:(id)arg2;	// IMP=0x0010000000326a58
- (void)bluetoothDeviceDidInvalidate:(id)arg1;	// IMP=0x001000000032699d
- (void)bluetoothDevice:(id)arg1 headphoneListeningModeDidChangeFrom:(long long)arg2 to:(long long)arg3;	// IMP=0x00100000003268c0
- (void)bluetoothDevice:(id)arg1 headphoneInEarDetectionStateDidChangeFrom:(id)arg2 to:(id)arg3;	// IMP=0x001000000032671f
- (void)bluetoothDevice:(id)arg1 deviceInfoDidChangeFrom:(id)arg2 to:(id)arg3;	// IMP=0x001000000032661c
- (void)audioPlaybackService:(id)arg1 didStopRequest:(id)arg2 error:(id)arg3;	// IMP=0x0010000000326565
- (void)audioPlaybackService:(id)arg1 didStartRequest:(id)arg2;	// IMP=0x00100000003264d8
- (void)audioPlaybackService:(id)arg1 willStartRequest:(id)arg2;	// IMP=0x001000000032644b
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerResetNotification:(id)arg2;	// IMP=0x0010000000326361
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerLostNotification:(id)arg2;	// IMP=0x0010000000326277
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2;	// IMP=0x001000000032618d
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)arg2;	// IMP=0x00100000003260a3
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)arg2;	// IMP=0x0010000000325ffa
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)arg2;	// IMP=0x0010000000325e5b
- (void)adShouldSpeakStateDidChange:(_Bool)arg1;	// IMP=0x0010000000325e0d
- (void)_logShouldSpeakState:(_Bool)arg1;	// IMP=0x0010000000325db2
- (_Bool)adWaitingForAudioFile;	// IMP=0x0010000000325daa
- (void)adSpeechRecordingPerformTwoShotPromptWithType:(long long)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000325d0a
- (void)adSpeechRecordingDidDetectStartPointWithContext:(id)arg1;	// IMP=0x0010000000325cbf
- (void)adSpeechLocalRecognitionDidSucceedWithSessionUUID:(id)arg1;	// IMP=0x0010000000325cb9
- (void)adSpeechRecognitionDidFail:(id)arg1 sessionUUID:(id)arg2;	// IMP=0x0010000000325c2c
- (void)adSpeechRecognitionWillBeginRecognitionUpdateForTask:(id)arg1;	// IMP=0x0010000000325b9f
- (void)adSpeechRecordingDidRecognizePhrases:(id)arg1 rawPhrases:(id)arg2 utterances:(id)arg3 rawUtterances:(id)arg4 nluResult:(id)arg5 sessionUUID:(id)arg6 refId:(id)arg7;	// IMP=0x0010000000325b99
- (void)adSpeechRecordingDidRecognizePartialPackage:(id)arg1 nluResult:(id)arg2 sessionUUID:(id)arg3;	// IMP=0x0010000000325b93
- (void)adSpeechRecordingDidRecognizeTokens:(id)arg1 nluResult:(id)arg2 sessionUUID:(id)arg3;	// IMP=0x0010000000325b8d
- (void)adSpeechRecognizedPartialResult:(id)arg1;	// IMP=0x0010000000325b00
- (void)adSpeechRecognized:(id)arg1 usingSpeechModel:(id)arg2 sessionUUID:(id)arg3;	// IMP=0x0010000000325a73
- (void)adSpeechRecordingWillStopWithSignpostID:(unsigned long long)arg1;	// IMP=0x0010000000325a24
- (void)adSpeechRecordingDidFail:(id)arg1 context:(id)arg2;	// IMP=0x0000000000325913
- (void)adSpeechRecordingDidCancelWithContext:(id)arg1;	// IMP=0x0010000000325841
- (void)adSpeechRecordingDidEndWithContext:(id)arg1;	// IMP=0x001000000032576f
- (void)adSpeechRecordingDidChangeAVRecordRoute:(id)arg1 bluetoothDevice:(id)arg2 isDucking:(_Bool)arg3 isTwoShot:(_Bool)arg4 speechEndHostTime:(unsigned long long)arg5 context:(id)arg6;	// IMP=0x001000000032565c
- (void)adSpeechRecordingDidBeginOnAVRecordRoute:(id)arg1 audioSessionID:(unsigned int)arg2 bluetoothDevice:(id)arg3 sessionRequestUUID:(id)arg4 dictationOptions:(id)arg5 context:(id)arg6;	// IMP=0x00100000003254bf
- (void)adSpeechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg1 context:(id)arg2;	// IMP=0x0010000000325408
- (void)_updateShouldSpeak;	// IMP=0x00100000003252ed
- (_Bool)_shouldSpeak;	// IMP=0x00100000003252ca
- (void)_computeShouldSpeak;	// IMP=0x00100000003250fe
- (void)_unregisterForRingerStateNotification;	// IMP=0x00100000003250da
- (void)_registerForRingerStateNotification;	// IMP=0x0010000000324fdf
- (void)_setServerForcedTTS:(_Bool)arg1;	// IMP=0x0010000000324f9c
- (void)_setRequestOptionsRequireTTS:(_Bool)arg1;	// IMP=0x0010000000324f87
- (void)_setADShouldSpeak:(_Bool)arg1;	// IMP=0x0010000000324f6e
- (CDStruct_6ad76789)adClientConnectionAuditToken;	// IMP=0x0010000000324f22
- (void)adNetworkDidBecomeActive;	// IMP=0x0010000000324ed7
- (void)adFailedToLaunchAppWithBundleIdentifier:(id)arg1;	// IMP=0x0010000000324e4a
- (void)adWillProcessAppLaunchWithBundleIdentifier:(id)arg1;	// IMP=0x0010000000324dbd
- (void)adAudioSessionDidBecomeActive:(_Bool)arg1;	// IMP=0x0010000000324d6f
- (void)adAudioSessionWillBecomeActive:(_Bool)arg1;	// IMP=0x0010000000324d21
- (void)adRequestWillProcessStartPlayback:(long long)arg1 intent:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000324c56
- (void)adRequestDidHandleFailedStartPlayback:(long long)arg1;	// IMP=0x0010000000324c07
- (void)adServerRequestsTTSStateUnmuted:(_Bool)arg1;	// IMP=0x0010000000324bb9
- (void)adAceConnectionWillRetryOnError:(id)arg1;	// IMP=0x0010000000324b2c
- (void)adInvalidateCurrentUserActivity;	// IMP=0x0010000000324ae1
- (void)adSetUserActivityInfo:(id)arg1 webpageURL:(id)arg2;	// IMP=0x0010000000324a2a
- (void)adAcousticIDRequestDidFinishSuccessfully:(_Bool)arg1;	// IMP=0x00100000003249dc
- (void)adMusicWasDetected;	// IMP=0x0010000000324991
- (void)adAcousticIDRequestWillStart;	// IMP=0x0010000000324946
- (void)adQuickStopWasHandledWithActions:(unsigned long long)arg1;	// IMP=0x00100000003248f7
- (void)adRequestRequestedDismissAssistantWithReason:(long long)arg1;	// IMP=0x00100000003248a8
- (void)adRequestRequestedDismissAssistant;	// IMP=0x001000000032485d
- (void)adExtensionRequestFinishedForApplication:(id)arg1 error:(id)arg2;	// IMP=0x00100000003247a6
- (void)adExtensionRequestWillStartForApplication:(id)arg1;	// IMP=0x0010000000324719
- (void)adWantsToCacheImage:(id)arg1;	// IMP=0x001000000032468c
- (_Bool)adTextToSpeechIsMuted;	// IMP=0x001000000032458a
- (void)adGetBulletinContext:(CDUnknownBlockType)arg1;	// IMP=0x00100000003244fd
- (void)adRequestRequestedOpenURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000032443e
- (void)adRequestRequestedOpenApplicationWithBundleID:(id)arg1 URL:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000324353
- (void)adStartUIRequestWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000324294
- (void)_adjustSiriVolumeIfNeeded;	// IMP=0x001000000032428e
- (void)adRequestDidReceiveTimeoutExtensionRequestWithDuration:(double)arg1;	// IMP=0x00100000003241a2
- (id)currentBluetoothDevice;	// IMP=0x0010000000324191
- (void)adRequestEncounteredIntermediateError:(id)arg1;	// IMP=0x0010000000324072
- (void)adRequestDidCompleteWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x0010000000323f3f
- (void)_handleRequestCompletedWithUUID:(id)arg1 error:(id)arg2;	// IMP=0x0010000000323d0b
- (void)adRequestDidReceiveCommand:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000323ba4
- (void)adRequestDidUpdateResponseMode:(id)arg1;	// IMP=0x0010000000323b17
- (void)adRequestWillReceiveCommand:(id)arg1;	// IMP=0x0010000000323a8a
- (void)_removeAllAudioSessionAssertionsForReason:(id)arg1;	// IMP=0x00100000003236cc
- (void)_addAudioSessionAssertion:(id)arg1;	// IMP=0x00100000003235c9
- (void)_removeAllSpeechCapturingContextsForReason:(id)arg1;	// IMP=0x0010000000323382
- (void)_addSpeechCapturingContext:(id)arg1;	// IMP=0x001000000032327f
- (void)_setBluetoothDevice:(id)arg1;	// IMP=0x0010000000323173
- (void)_speechRecordingDidFinish;	// IMP=0x00100000003230e1
- (void)_updateSpeechRequestOptions:(id)arg1;	// IMP=0x0010000000322fd1
- (id)_serviceDelegateWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000322f3a
- (id)_serviceDelegate;	// IMP=0x0010000000322f24
- (void)connectionDisconnected;	// IMP=0x0010000000322cba
- (void)dealloc;	// IMP=0x0010000000322b7c
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x001000000032288f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

