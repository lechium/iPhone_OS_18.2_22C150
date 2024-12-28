//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSBackgroundActivityScheduler, NSData, NSDate, NSObject, NSString, NSTimer, SDUnlockLockMetricDates, SDUnlockMotionDetector, SDUnlockWakeGestureRecord, SFPairedUnlockDailyEvent;
@protocol OS_dispatch_semaphore, OS_dispatch_source;

@interface SDUnlockLockManager
{
    _Bool _lastUnlockedByPairedUnlock;	// 8 = 0x8
    _Bool _inPosition;	// 9 = 0x9
    _Bool _canRetrySetup;	// 10 = 0xa
    _Bool _sentLockedState;	// 11 = 0xb
    _Bool _checkingWristState;	// 12 = 0xc
    _Bool _waitingForAuthToken;	// 13 = 0xd
    _Bool _preventingExitForSetup;	// 14 = 0xe
    _Bool _onWristForCurrentSession;	// 15 = 0xf
    _Bool _checkingWristAndMotionState;	// 16 = 0x10
    NSDate *_wristOnDate;	// 24 = 0x18
    NSString *_requestID;	// 32 = 0x20
    NSTimer *_enableTimer;	// 40 = 0x28
    NSData *_tempLongTermKey;	// 48 = 0x30
    NSDate *_sessionStartDate;	// 56 = 0x38
    NSString *_passcode;	// 64 = 0x40
    long long _unlockSessionID;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_longTermKeyTimer;	// 80 = 0x50
    NSDate *_lastPairedUnlockDate;	// 88 = 0x58
    long long _deviceOffWristForSessionID;	// 96 = 0x60
    NSObject<OS_dispatch_source> *_wristAndMotionTimer;	// 104 = 0x68
    NSObject<OS_dispatch_semaphore> *_positionSemaphore;	// 112 = 0x70
    SDUnlockMotionDetector *_motionDetector;	// 120 = 0x78
    SDUnlockWakeGestureRecord *_lastWakeGestureRecord;	// 128 = 0x80
    SFPairedUnlockDailyEvent *_dailyMetrics;	// 136 = 0x88
    SDUnlockLockMetricDates *_metricDates;	// 144 = 0x90
    NSBackgroundActivityScheduler *_dailyMetricReporter;	// 152 = 0x98
    CDUnknownBlockType _enableHandler;	// 160 = 0xa0
    CDUnknownBlockType _wristAndMotionStateHandler;	// 168 = 0xa8
}

+ (id)sharedLockManager;	// IMP=0x00200000002109dc
- (void).cxx_destruct;	// IMP=0x0020000000216927
@property(copy) CDUnknownBlockType wristAndMotionStateHandler; // @synthesize wristAndMotionStateHandler=_wristAndMotionStateHandler;
@property(copy) CDUnknownBlockType enableHandler; // @synthesize enableHandler=_enableHandler;
@property(retain) NSBackgroundActivityScheduler *dailyMetricReporter; // @synthesize dailyMetricReporter=_dailyMetricReporter;
@property(retain) SDUnlockLockMetricDates *metricDates; // @synthesize metricDates=_metricDates;
@property(retain) SFPairedUnlockDailyEvent *dailyMetrics; // @synthesize dailyMetrics=_dailyMetrics;
@property(retain) SDUnlockWakeGestureRecord *lastWakeGestureRecord; // @synthesize lastWakeGestureRecord=_lastWakeGestureRecord;
@property(retain) SDUnlockMotionDetector *motionDetector; // @synthesize motionDetector=_motionDetector;
@property(retain) NSObject<OS_dispatch_semaphore> *positionSemaphore; // @synthesize positionSemaphore=_positionSemaphore;
@property(retain) NSObject<OS_dispatch_source> *wristAndMotionTimer; // @synthesize wristAndMotionTimer=_wristAndMotionTimer;
@property long long deviceOffWristForSessionID; // @synthesize deviceOffWristForSessionID=_deviceOffWristForSessionID;
@property(retain) NSDate *lastPairedUnlockDate; // @synthesize lastPairedUnlockDate=_lastPairedUnlockDate;
@property(retain) NSObject<OS_dispatch_source> *longTermKeyTimer; // @synthesize longTermKeyTimer=_longTermKeyTimer;
@property _Bool checkingWristAndMotionState; // @synthesize checkingWristAndMotionState=_checkingWristAndMotionState;
@property _Bool onWristForCurrentSession; // @synthesize onWristForCurrentSession=_onWristForCurrentSession;
@property _Bool preventingExitForSetup; // @synthesize preventingExitForSetup=_preventingExitForSetup;
@property long long unlockSessionID; // @synthesize unlockSessionID=_unlockSessionID;
@property(copy) NSString *passcode; // @synthesize passcode=_passcode;
@property(retain) NSDate *sessionStartDate; // @synthesize sessionStartDate=_sessionStartDate;
@property _Bool waitingForAuthToken; // @synthesize waitingForAuthToken=_waitingForAuthToken;
@property _Bool checkingWristState; // @synthesize checkingWristState=_checkingWristState;
@property(retain) NSData *tempLongTermKey; // @synthesize tempLongTermKey=_tempLongTermKey;
@property(retain) NSTimer *enableTimer; // @synthesize enableTimer=_enableTimer;
@property _Bool sentLockedState; // @synthesize sentLockedState=_sentLockedState;
@property(retain) NSString *requestID; // @synthesize requestID=_requestID;
@property _Bool canRetrySetup; // @synthesize canRetrySetup=_canRetrySetup;
@property(nonatomic) _Bool inPosition; // @synthesize inPosition=_inPosition;
@property _Bool lastUnlockedByPairedUnlock; // @synthesize lastUnlockedByPairedUnlock=_lastUnlockedByPairedUnlock;
@property(retain) NSDate *wristOnDate; // @synthesize wristOnDate=_wristOnDate;
- (void)sendStateResponseWithUnlockEnabled:(_Bool)arg1 passcodeEnabled:(_Bool)arg2;	// IMP=0x00100000002163ac
- (void)sendStashConfirmation:(_Bool)arg1 sessionID:(unsigned int)arg2;	// IMP=0x0010000000216244
- (void)sendStashKeyExchangeResponse:(id)arg1 sessionID:(unsigned int)arg2 errorCode:(long long)arg3;	// IMP=0x00100000002160a3
- (void)sendSessionUnlockConfirmation:(_Bool)arg1 sessionID:(unsigned int)arg2;	// IMP=0x0010000000215f3b
- (void)sendKeyExchangeResponse:(id)arg1 sessionID:(unsigned int)arg2;	// IMP=0x0010000000215d6a
- (void)sendCreateEscrowSecretWithStepData:(id)arg1 sessionID:(unsigned int)arg2;	// IMP=0x0010000000215abb
- (void)sendSetupRequest:(id)arg1 withSessionID:(unsigned int)arg2;	// IMP=0x00100000002157f1
- (void)sendClassALongTermKeyRequest:(id)arg1 sessionID:(unsigned int)arg2;	// IMP=0x001000000021552c
- (void)sendLongTermKeyRequest:(id)arg1 requestID:(id)arg2;	// IMP=0x0010000000215346
- (void)sendDeviceLockStateChanged:(_Bool)arg1;	// IMP=0x0010000000215205
- (void)handleUnlockStateRequest:(id)arg1;	// IMP=0x0010000000215129
- (void)handleRelockRequest;	// IMP=0x00100000002150ad
- (void)handleStashToken:(id)arg1;	// IMP=0x0010000000214f52
- (void)handleStashKeyExchangeRequest:(id)arg1;	// IMP=0x0010000000214d4d
- (void)handleSessionAuthToken:(id)arg1;	// IMP=0x001000000021488a
- (void)handleSessionKeyExchangeRequest:(id)arg1;	// IMP=0x00100000002140a8
- (void)handleSetupCreateRecord:(id)arg1;	// IMP=0x0010000000213b9c
- (void)handleEscrowSessionRequest:(id)arg1;	// IMP=0x00100000002134df
- (void)handleSetupSessionCreated:(id)arg1;	// IMP=0x0010000000213176
- (_Bool)updateLongTermKeys:(id)arg1;	// IMP=0x001000000021307d
- (void)handleClassALongTermKeyResponse:(id)arg1;	// IMP=0x0010000000212ddf
- (void)handleLongTermKeyResponse:(id)arg1;	// IMP=0x0010000000212af3
- (void)handleStartLTK:(id)arg1;	// IMP=0x0010000000212a18
- (void)idsControllerSpaceDidBecomeAvailable:(id)arg1;	// IMP=0x001000000021299c
- (void)idsController:(id)arg1 didReceiveProtoData:(id)arg2 forType:(unsigned short)arg3;	// IMP=0x0010000000212769
- (void)allowExiting;	// IMP=0x001000000021271e
- (void)preventExiting;	// IMP=0x00100000002126d3
- (void)getWristAndMotionStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000212628
- (_Bool)lostModeEnabled;	// IMP=0x0010000000212578
- (_Bool)localDeviceLocked;	// IMP=0x0010000000212570
- (void)resetLongTermKeyRequest;	// IMP=0x001000000021251b
- (void)resetState;	// IMP=0x0010000000212497
- (void)disableUnlockPairing;	// IMP=0x001000000021237d
- (void)forceOnWristCheck;	// IMP=0x0010000000212377
- (void)wristDetectionDisabled:(CDUnknownBlockType)arg1;	// IMP=0x001000000021235c
- (_Bool)deviceOnWrist;	// IMP=0x001000000021234a
- (_Bool)unlockEnabled;	// IMP=0x0010000000212286
- (void)notifyEnableStateWithError:(id)arg1;	// IMP=0x00100000002120a2
- (void)enableUnlockForcingLTKTransfer:(_Bool)arg1;	// IMP=0x0010000000211d48
- (void)enableUnlockWithDevice:(id)arg1 passcode:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000211896
- (void)invalidateLongTermKeyTimer;	// IMP=0x0010000000211809
- (void)restartLongTermKeyTimer;	// IMP=0x0010000000211697
- (void)invalidateEnableTimer;	// IMP=0x0010000000211655
- (void)enableTimerFired:(id)arg1;	// IMP=0x0010000000211559
- (void)restartEnableTimerWithTimeout:(double)arg1;	// IMP=0x00100000002114e2
- (void)scheduleDailyMetricReporterIfNeeded;	// IMP=0x0010000000210f38
- (void)checkKeyBagState;	// IMP=0x0010000000210f32
- (void)devicesDidUnpair:(id)arg1;	// IMP=0x0010000000210ed6
- (void)handleDevicesDidFailToPair;	// IMP=0x0010000000210e83
- (void)handleConfigurationState;	// IMP=0x0010000000210d4f
- (void)keyBagLockStateChange:(id)arg1;	// IMP=0x0010000000210d15
- (id)generateDebugInfo;	// IMP=0x0010000000210c30
- (void)debugInfoRequested:(id)arg1;	// IMP=0x0010000000210bc6
- (void)addObservers;	// IMP=0x0010000000210b97
- (id)init;	// IMP=0x0010000000210a31

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
