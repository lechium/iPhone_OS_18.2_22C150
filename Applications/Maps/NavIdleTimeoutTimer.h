//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EventTap, NavIdleTimeoutGestureRecognizer, UIView, UIWindow;
@protocol NavIdleTimerDelegate, OS_dispatch_source;

@interface NavIdleTimeoutTimer : NSObject
{
    _Bool _suppressInterruptions;	// 8 = 0x8
    UIWindow *_window;	// 16 = 0x10
    UIView *_view;	// 24 = 0x18
    double _idleTimeout;	// 32 = 0x20
    id <NavIdleTimerDelegate> _delegate;	// 40 = 0x28
    EventTap *_eventTap;	// 48 = 0x30
    NavIdleTimeoutGestureRecognizer *_gestureRecognizer;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_dispatchSource;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000ea7684
@property(retain, nonatomic) NSObject<OS_dispatch_source> *dispatchSource; // @synthesize dispatchSource=_dispatchSource;
@property(retain, nonatomic) NavIdleTimeoutGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(retain, nonatomic) EventTap *eventTap; // @synthesize eventTap=_eventTap;
@property(nonatomic) __weak id <NavIdleTimerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool suppressInterruptions; // @synthesize suppressInterruptions=_suppressInterruptions;
@property(readonly, nonatomic) double idleTimeout; // @synthesize idleTimeout=_idleTimeout;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(readonly, nonatomic) __weak UIWindow *window; // @synthesize window=_window;
- (void)_handleTimer;	// IMP=0x0010000000ea750f
- (void)_invalidateTimer;	// IMP=0x0010000000ea7487
- (void)_scheduleTimer;	// IMP=0x0010000000ea71a6
- (void)_handleGesture:(id)arg1;	// IMP=0x0010000000ea7157
- (void)_handleEvent:(id)arg1;	// IMP=0x0010000000ea6ec2
- (void)_setupEventTap;	// IMP=0x0010000000ea6c39
- (void)dealloc;	// IMP=0x0010000000ea6bb9
- (id)initWithView:(id)arg1 idleTimeout:(double)arg2;	// IMP=0x0010000000ea6b20
- (id)initWithView:(id)arg1;	// IMP=0x0010000000ea6b06
- (id)initWithWindow:(id)arg1 idleTimeout:(double)arg2;	// IMP=0x0010000000ea6a6d
- (id)initWithWindow:(id)arg1;	// IMP=0x0010000000ea6a53

@end
