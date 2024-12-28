//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

@class NSObject;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _UISystemGestureGateGestureRecognizer : UIGestureRecognizer
{
    unsigned char _systemGestureGateType;	// 8 = 0x8
    unsigned int _systemGesturesRecognitionPossible:1;	// 9 = 0x9
    unsigned int _waitingForSystemGestureStateNotification:1;	// 9 = 0x9
    double _lastTouchTime;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_delayTimeoutTimer;	// 24 = 0x18
}

+ (_Bool)_supportsDefaultPressTypes;	// IMP=0x0060000000c8ba71
+ (_Bool)_supportsDefaultTouchTypes;	// IMP=0x0060000000c8ba69
- (void).cxx_destruct;	// IMP=0x0000000000c8c3a5
- (id)_gateGestureTypeString;	// IMP=0x0000000000c8c375
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000000c8c36f
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x0000000000c8c367
- (_Bool)canPreventGestureRecognizer:(id)arg1;	// IMP=0x0000000000c8c352
- (_Bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;	// IMP=0x0000000000c8c32c
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000c8c31a
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000c8bfa4
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000c8ba81
- (_Bool)_isAllowedToReceiveGESEvents;	// IMP=0x0000000000c8ba79
- (void)_cancelTimeoutTimerIfNeeded;	// IMP=0x0000000000c8ba2f
- (void)_timeOut;	// IMP=0x0000000000c8b8d4
- (void)_systemGestureStateChanged:(id)arg1;	// IMP=0x0000000000c8b742
- (void)_resetGestureRecognizer;	// IMP=0x0000000000c8b683
- (void)_notifyWindowNoLongerAwaitingSystemGestureNotification:(id)arg1;	// IMP=0x0000000000c8b502
- (void)setDelaysTouchesEnded:(_Bool)arg1;	// IMP=0x0000000000c8b3cb
- (void)setDelaysTouchesBegan:(_Bool)arg1;	// IMP=0x0000000000c8b294
- (void)dealloc;	// IMP=0x0000000000c8b208
- (id)initWithWindow:(id)arg1 type:(unsigned char)arg2;	// IMP=0x0000000000c8b08b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000c8b049
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000c8b007

@end
