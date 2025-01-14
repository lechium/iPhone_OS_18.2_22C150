//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSTimer, NSString;
@protocol BSInvalidatable, OS_dispatch_queue;

@interface BKUserEventTimer : NSObject
{
    double _currentTimeout;	// 8 = 0x8
    double _lastUserEvent;	// 16 = 0x10
    double _lastResetTimerRequest;	// 24 = 0x18
    BSTimer *_timer;	// 32 = 0x20
    _Bool _isIdle;	// 40 = 0x28
    int _currentMode;	// 44 = 0x2c
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    _Bool _shouldNotify;	// 56 = 0x38
    _Bool _safeToResetIdleTimer;	// 57 = 0x39
    id <BSInvalidatable> _stateCaptureAssertion;	// 64 = 0x40
    id <BSInvalidatable> _systemShellObserving;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x002000000003c5c2
- (void).cxx_destruct;	// IMP=0x002000000003c13a
- (void)_queue_clearTimer;	// IMP=0x001000000003c108
- (void)_queue_scheduleTimerWithTimeInterval:(double)arg1;	// IMP=0x001000000003bff3
- (void)_queue_userEventOccurredInPresenceMode;	// IMP=0x001000000003bfa9
- (void)_queue_userEventOccurredInIdleMode;	// IMP=0x001000000003bf66
- (void)_queue_postNotification:(struct __CFString *)arg1;	// IMP=0x001000000003beb5
- (_Bool)isSafeToResetIdleTimer;	// IMP=0x001000000003beac
- (void)notifyOnNextUserEvent;	// IMP=0x001000000003be61
- (void)userEventOccurredOnDisplay:(id)arg1;	// IMP=0x001000000003be04
- (void)resetTimer:(double)arg1 mode:(int)arg2;	// IMP=0x001000000003bd58
- (double)lastUserEventTime;	// IMP=0x001000000003bcc8
- (void)systemShellDidFinishLaunching:(id)arg1;	// IMP=0x001000000003bc7d
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x001000000003bb42
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x001000000003baf2
- (id)succinctDescriptionBuilder;	// IMP=0x001000000003bad6
- (id)succinctDescription;	// IMP=0x001000000003ba86
- (void)dealloc;	// IMP=0x001000000003b9ed
- (id)init;	// IMP=0x001000000003b790

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

