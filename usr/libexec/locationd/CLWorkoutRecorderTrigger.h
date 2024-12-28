//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol CLMotionStateMediatorProtocol;

@interface CLWorkoutRecorderTrigger
{
    unsigned char _workoutSession[16];	// 8 = 0x8
    _Bool _isWorkoutPowerSaveModeEnabled;	// 24 = 0x18
    _Bool _active_recording;	// 25 = 0x19
    struct unique_ptr<CLMotionStateMediator_Type::Client, std::default_delete<CLMotionStateMediator_Type::Client>> _motionStateMediatorClient;	// 32 = 0x20
    id <CLMotionStateMediatorProtocol> _motionStateMediatorProtocol;	// 40 = 0x28
    struct unique_ptr<CLMotionStateObserver_Type::Client, std::default_delete<CLMotionStateObserver_Type::Client>> _motionStateObserverClient;	// 48 = 0x30
    _Bool _valid;	// 56 = 0x38
}

- (id).cxx_construct;	// IMP=0x0020000001359e3c
- (void).cxx_destruct;	// IMP=0x0010000001359dea
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void)onNotification:(int)arg1 withData:(id)arg2;	// IMP=0x0010000001359dc4
- (unsigned int)getMaxFileCountForRecording:(_Bool)arg1;	// IMP=0x0010000001359d4d
- (void)onWorkoutSessionUpdate:(struct WorkoutEvent)arg1 withOverview:(CDUnknownBlockType)arg2 andPriors:(CDUnknownBlockType)arg3;	// IMP=0x0010000001359468
- (void)onDeferredStopTimerShouldPublish:(_Bool)arg1 recordSubsequentSession:(_Bool)arg2 isMultiSportSession:(_Bool)arg3 withEvent:(struct WorkoutEvent)arg4 triggerDelay:(double)arg5;	// IMP=0x0010000001359353
- (void)onDeferredStopTimerShouldPublish:(_Bool)arg1;	// IMP=0x00100000013592e0
-     // Error parsing type: v32@0:8r^i16r^(NotificationData={MediatedMotionActivity=d{CLMotionActivity=iiiiiidBfdBidi{FsmTransitionData=CCCS} dii{?=b1b1b1b1b1}iidQi}i{CLNatalieFeatures=fffffffiB}qqqBB[16C]}{MotionOverride=i{CLMotionActivity=iiiiiidBfdBidi{FsmTransitionData=CCCS} dii{?=b1b1b1b1b1}iidQi}q{WorkoutSettings=[16C][16C][16C]qq(WorkoutAttrib={SwimAttrib=qd}Q){FitnessPlusInfo=B[64c]q}Q}}{WorkoutEvent=ddqd{CLWorkoutSessionDetails=idqQ}{WorkoutSettings=[16C][16C][16C]qq(WorkoutAttrib={SwimAttrib=qd}Q){FitnessPlusInfo=B[64c]q}Q}}{IndoorOutdoorUpdate=dqq}{ActivityEvent=dqqqqdd}{WorkoutClassifierResult=dqf{Probabilities=ffffffff}})24, name: onMotionStateMediatorNotification:data:
- (void)onMotionStateObserverNotification:(const int *)arg1 data:(const NotificationData_21cafa63 *)arg2;	// IMP=0x0010000001358a35
- (void)teardownListeners;	// IMP=0x0010000001358852
- (void)setupListeners;	// IMP=0x0010000001358181
- (void)dealloc;	// IMP=0x0010000001358138
- (id)initWithDelegate:(id)arg1 andUniverse:(id)arg2;	// IMP=0x0010000001357ecc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
