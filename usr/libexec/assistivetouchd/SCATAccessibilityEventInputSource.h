//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXEventProcessor, NSObject, NSTimer;
@protocol OS_dispatch_queue, SCATAccessibilityEventInputSourceDelegate;

@interface SCATAccessibilityEventInputSource
{
    unsigned long long _analyticsTracker;	// 8 = 0x8
    NSTimer *_analyticsTimer;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_analyticsQueue;	// 24 = 0x18
    AXEventProcessor *_eventProcessor;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000a2b50
@property(retain, nonatomic) AXEventProcessor *eventProcessor; // @synthesize eventProcessor=_eventProcessor;
- (void)updateWithSwitches:(id)arg1 recipe:(id)arg2;	// IMP=0x00100000000a2871
- (_Bool)_handleHandGestureEvent:(long long)arg1;	// IMP=0x00100000000a266f
- (_Bool)_handleAutomationEvent:(long long)arg1;	// IMP=0x00100000000a246d
- (void)_logEventToCoreAnalytics:(long long)arg1;	// IMP=0x00100000000a2314
- (_Bool)_handleSoundEvent:(long long)arg1;	// IMP=0x00100000000a1fde
- (id)_axSwitchForAccessibilitySwitchSource:(id)arg1 eventUsagePage:(long long)arg2 eventUsage:(long long)arg3;	// IMP=0x00100000000a1d6d
- (id)_actionIdentifierForSwitch:(id)arg1;	// IMP=0x00100000000a1c35
- (void)_didReceiveActionWithIdentifier:(id)arg1 start:(_Bool)arg2 ignoreInputHold:(_Bool)arg3;	// IMP=0x00100000000a1ad4
- (void)dealloc;	// IMP=0x00100000000a1a6c
- (void)stopRunning;	// IMP=0x00100000000a1a33
- (void)startRunning;	// IMP=0x00100000000a19f7
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x00100000000a19c8
- (_Bool)_handleAccessibilityEvent:(id)arg1;	// IMP=0x00100000000a18aa
- (void)_stopAccessibilityEventProcessor;	// IMP=0x00100000000a1849
- (void)_startAccessibilityEventProcessor;	// IMP=0x00100000000a1631
- (void)_setupLogging;	// IMP=0x00100000000a1442
- (id)init;	// IMP=0x00100000000a13e1

// Remaining properties
@property(readonly, nonatomic) id <SCATAccessibilityEventInputSourceDelegate> delegate; // @dynamic delegate;

@end

