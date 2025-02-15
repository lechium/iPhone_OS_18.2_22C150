//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADAnnounceSpeechManager, ADAnnouncementRequest, ADCallObserver, ADExternalNotificationRequestQueue, ADRequestDelayManager, AFNotifyObserver, AFWatchdogTimer, BBSettingsGateway, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface ADExternalNotificationRequestHandler : NSObject
{
    AFWatchdogTimer *_currentNotificationTimer;	// 8 = 0x8
    AFWatchdogTimer *_stateTimer;	// 16 = 0x10
    AFWatchdogTimer *_triggerlessUserReplyTimer;	// 24 = 0x18
    _Bool _triggerlessUserReplyTimerTimedOut;	// 32 = 0x20
    _Bool _triggerlessRequestEnteredListeningState;	// 33 = 0x21
    _Bool _waitForUserInputAfterReading;	// 34 = 0x22
    long long _currentState;	// 40 = 0x28
    ADRequestDelayManager *_currentRequestDelayManager;	// 48 = 0x30
    AFNotifyObserver *_clientStateObserver;	// 56 = 0x38
    ADCallObserver *_callObserver;	// 64 = 0x40
    ADAnnounceSpeechManager *_announceSpeechManager;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_instrumentationQueue;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_accessQueue;	// 96 = 0x60
    ADAnnouncementRequest *_previousRequest;	// 104 = 0x68
    ADAnnouncementRequest *_currentRequest;	// 112 = 0x70
    unsigned long long _synchronousBurstIndex;	// 120 = 0x78
    ADExternalNotificationRequestQueue *_requestQueue;	// 128 = 0x80
    AFNotifyObserver *_ringerStateObserver;	// 136 = 0x88
    BBSettingsGateway *_bbSettingsGateway;	// 144 = 0x90
    NSString *_interruptedMediaType;	// 152 = 0x98
    NSUUID *_gestureInterruptedRequestUUID;	// 160 = 0xa0
}

+ (id)sharedNotificationRequestHandler;	// IMP=0x0020000000352baa
- (void).cxx_destruct;	// IMP=0x002000000034e6c4
- (void)_voicePromptStyleDidChange:(id)arg1;	// IMP=0x001000000034e6be
- (void)voicePromptStyleDidChange:(id)arg1;	// IMP=0x001000000034e6b8
- (void)_adCallStateChangedCallIncoming:(_Bool)arg1;	// IMP=0x001000000034e313
- (void)adCallStateChangedCallIncoming:(_Bool)arg1;	// IMP=0x001000000034e2c5
- (void)adCallStateChangedCallInProcess:(_Bool)arg1;	// IMP=0x001000000034e2bf
- (void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;	// IMP=0x001000000034e255
- (void)audioPlaybackService:(id)arg1 didStopRequest:(id)arg2 error:(id)arg3;	// IMP=0x001000000034e24f
- (void)audioPlaybackService:(id)arg1 didStartRequest:(id)arg2;	// IMP=0x001000000034e1c2
- (void)audioPlaybackService:(id)arg1 willStartRequest:(id)arg2;	// IMP=0x001000000034e1bc
- (void)speechManager:(id)arg1 didStopUnexpectlyWithError:(id)arg2;	// IMP=0x001000000034e171
- (_Bool)speechManager:(id)arg1 detectedSpeechForListeningType:(long long)arg2 atHostTime:(float)arg3 shouldHandleActivation:(_Bool)arg4;	// IMP=0x001000000034e0d6
- (void)requestLifecycleObserver:(id)arg1 requestDidEndWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x001000000034e00f
- (void)requestLifecycleObserver:(id)arg1 requestWasCancelledWithInfo:(id)arg2 forReason:(long long)arg3 origin:(long long)arg4 client:(id)arg5 successorInfo:(id)arg6;	// IMP=0x001000000034ddb8
- (void)requestLifecycleObserver:(id)arg1 requestWillBeginWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x001000000034dcc3
- (void)_triggerlessListeningTimerEnded;	// IMP=0x001000000034dc59
- (void)inEarDetectionStateDidChangeForBTAddress:(id)arg1 fromState:(id)arg2 toState:(id)arg3;	// IMP=0x001000000034d9e4
- (void)currentAudioRouteDidChange:(id)arg1;	// IMP=0x001000000034d957
- (void)_stopObservingRouteChanges;	// IMP=0x001000000034d90c
- (void)_startObservingRouteChanges;	// IMP=0x001000000034d8c1
- (void)deactivateCurrentAnnouncementRequestForReason:(long long)arg1;	// IMP=0x001000000034d872
- (void)_deactivateCurrentAnnouncementRequestForReason:(long long)arg1;	// IMP=0x001000000034d763
- (void)markNotificationAsReadWithIdentifer:(id)arg1;	// IMP=0x001000000034d6d6
- (void)fetchUnreadNotificationsFromThreadAfterNotificationWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000034d61f
- (void)_startTriggerlessFollowupRequestForSpeechObservingType:(long long)arg1 hostTime:(float)arg2;	// IMP=0x001000000034d50e
- (void)deferAudioSessionDeactivationForAnnouncementRequest;	// IMP=0x001000000034d448
- (void)notifySpeechDetectedIsUndirected;	// IMP=0x001000000034d382
- (long long)announcePlatformForCurrentRequest;	// IMP=0x001000000034d23d
- (void)_processAnyQueuedAnnouncementsAfterUserSpeech;	// IMP=0x001000000034cfe0
- (void)audioSessionDidEnd;	// IMP=0x001000000034cf1a
- (void)_withdrawalAnnouncementRequestForNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000034cc25
- (void)withdrawalAnnouncementRequestForNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000034cb6e
- (void)_deactivateForReason:(long long)arg1 source:(long long)arg2 event:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000034ca92
- (void)_deactivateCarPlayNotificationAnnouncementRequestForReason:(long long)arg1 notification:(id)arg2 sourceAppId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000034c8ec
- (void)_deactivateNotificationAnnouncementRequestForReason:(long long)arg1 notification:(id)arg2 sourceAppId:(id)arg3 platform:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000034c6f2
- (void)deactivateNotificationAnnouncementRequestForReason:(long long)arg1 notification:(id)arg2 sourceAppId:(id)arg3 platform:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000034c5f7
- (_Bool)_deactivateWorkoutReminderAnnouncementWithId:(id)arg1;	// IMP=0x001000000034c25b
- (void)deactivateWorkoutReminderAnnouncementWithId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000034c1a4
- (void)_stopCurrentRequestWithReason:(long long)arg1 shouldCancelRequest:(_Bool)arg2;	// IMP=0x001000000034bf25
- (void)_clearCurrentNotificationTimer;	// IMP=0x001000000034bef3
- (void)_startTimerToResetStateFrom:(long long)arg1;	// IMP=0x001000000034be4a
- (void)_startAttendingForSpeechIfNeededForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000034bba0
- (long long)_getAnnouncementRequestFailureReasonFromError:(id)arg1;	// IMP=0x001000000034bb2a
- (void)_startAnnouncementRequest:(id)arg1;	// IMP=0x001000000034b88f
- (void)_emitInstrumentationEventsForRequest:(id)arg1 currentlyPlayingMediaType:(id)arg2;	// IMP=0x001000000034b823
- (void)emitInstrumentationEventsForRequest:(id)arg1;	// IMP=0x001000000034b796
- (void)_startAnnouncementRequestWithRequestInfo:(id)arg1;	// IMP=0x001000000034b6cd
- (void)_handleNotificationWithRequiresOpportuneTime:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000034b2ad
- (void)_adjustAnnouncementVolumeIfNeccessaryForRequest:(id)arg1;	// IMP=0x001000000034b2a7
- (void)_shouldAnnounceGivenCurrentClientConditionsForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000034b132
- (void)_startAnnouncementRequestIfOpportune:(id)arg1;	// IMP=0x001000000034b09d
- (void)_handleAnnounceIncomingCallRequest:(id)arg1;	// IMP=0x001000000034ad9e
- (_Bool)_accessibleAnnounceIsEnabled;	// IMP=0x001000000034ad6e
- (_Bool)_canAnnounceInCarPlay;	// IMP=0x001000000034ac80
- (void)_handleAnnounceNotificationRequest:(id)arg1;	// IMP=0x0010000000349ec8
- (_Bool)_announceOnDeviceSpeakerAllowedForRequest:(id)arg1;	// IMP=0x0010000000349e79
- (void)_deliverSummary:(id)arg1 forNotification:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000349dc4
- (void)deliverSummary:(id)arg1 forNotification:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000349cdf
- (void)announcementRequestReadyToBeAnnounced:(id)arg1;	// IMP=0x0010000000349c52
- (void);	// IMP=0x0010000000349b67
- (void)handleAnnouncementRequest:(id)arg1;	// IMP=0x0010000000349ada
- (void)_markThreadCancellationForCurrentRequest:(id)arg1;	// IMP=0x00100000003498e8
- (void)_changeCurrentStateToState:(long long)arg1;	// IMP=0x001000000034967f
- (void)_clearTriggerlessUserReplyTimer;	// IMP=0x00100000003495cc
- (void)_clearRequestState;	// IMP=0x0010000000349448
- (void)_completeNotificationsWithSuccess:(_Bool)arg1 forReason:(long long)arg2 shouldEmitInstrumentationEvent:(_Bool)arg3;	// IMP=0x00100000003492fd
- (_Bool)_isDeviceSilent;	// IMP=0x0010000000349219
- (id)_queue;	// IMP=0x001000000034920b
- (void)_setCurrentRequest:(id)arg1;	// IMP=0x00100000003491fa
- (id)_currentRequest;	// IMP=0x00100000003491ec
- (long long)_currentState;	// IMP=0x00100000003491e2
- (id)_requestQueue;	// IMP=0x00100000003491d1
- (id)_sharedCommandCenter;	// IMP=0x00100000003491b8
- (id)currentRequest;	// IMP=0x00100000003491a6
- (id)_init;	// IMP=0x0010000000348e0d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

