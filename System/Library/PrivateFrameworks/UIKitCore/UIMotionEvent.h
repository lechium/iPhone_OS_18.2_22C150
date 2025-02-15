//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIEvent.h"

@class BKSAccelerometer, NSTimer;

__attribute__((visibility("hidden")))
@interface UIMotionEvent : UIEvent
{
    BKSAccelerometer *_motionAccelerometer;	// 56 = 0x38
    long long _subtype;	// 64 = 0x40
    int _shakeState;	// 72 = 0x48
    long long _stateMachineState;	// 80 = 0x50
    double _shakeStartTime;	// 88 = 0x58
    double _lastMovementTime;	// 96 = 0x60
    double _highLevelTime;	// 104 = 0x68
    double _lowEndTimeout;	// 112 = 0x70
    NSTimer *_idleTimer;	// 120 = 0x78
    _Bool _sentMotionBegan;	// 128 = 0x80
    float _lowPassState[10];	// 132 = 0x84
    unsigned long long _lowPassStateIndex;	// 176 = 0xb0
    unsigned long long _highPassStateIndex;	// 184 = 0xb8
    float _highPassState[2];	// 192 = 0xc0
    int notifyToken;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x00000000013c9c72
@property(nonatomic) int shakeState; // @synthesize shakeState=_shakeState;
- (void)_enablePeakDetectionForScreenBlanked:(id)arg1;	// IMP=0x00000000013c9bd4
- (void)_enablePeakDetectionIfNecessary;	// IMP=0x00000000013c9b4a
- (int)_shakeState;	// IMP=0x00000000013c9b3a
- (float)_determineShakeLevelX:(float)arg1 y:(float)arg2 z:(float)arg3 currentState:(long long)arg4;	// IMP=0x00000000013c999d
- (float)_lowPass:(float)arg1;	// IMP=0x00000000013c9937
- (void)_resetLowPassState;	// IMP=0x00000000013c990c
- (float)_highPass:(float)arg1;	// IMP=0x00000000013c98cc
- (long long)_feedStateMachine:(float)arg1 currentState:(long long)arg2 timestamp:(double)arg3;	// IMP=0x00000000013c9778
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;	// IMP=0x00000000013c95b8
- (void)_idleTimerFired;	// IMP=0x00000000013c94dc
- (void)_accelerometerDidDetectMovementWithTimestamp:(double)arg1;	// IMP=0x00000000013c940e
- (_Bool)_isDetectingMotionEvents;	// IMP=0x00000000013c93f1
- (_Bool)_detectWhenNotActive;	// IMP=0x00000000013c93b1
- (void)_updateAccelerometerEnabled;	// IMP=0x00000000013c931c
- (void)_willSuspend;	// IMP=0x00000000013c92b8
- (void)_willResume;	// IMP=0x00000000013c9296
- (void)_sendEventToResponder:(id)arg1;	// IMP=0x00000000013c9226
- (id)_allWindows;	// IMP=0x00000000013c91bc
- (id)description;	// IMP=0x00000000013c910b
- (void)_setSubtype:(long long)arg1;	// IMP=0x00000000013c90fa
- (long long)subtype;	// IMP=0x00000000013c90e9
- (long long)type;	// IMP=0x00000000013c90de
- (void)dealloc;	// IMP=0x00000000013c8fb6
- (id)_init;	// IMP=0x00000000013c8d6c

@end

