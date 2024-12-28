//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sleep/HKSPPersistentStateMachineState.h>

@class HDSPSleepModeStateMachine, NSString;

__attribute__((visibility("hidden")))
@interface HDSPSleepModeStateMachineState : HKSPPersistentStateMachineState
{
}

- (void)sleepModeTurnedOffForUnknownReason;	// IMP=0x0000000000007b9d
- (void)sleepModeTurnedOnForUnknownReason;	// IMP=0x00000000000079e4
- (void)automationTurnedOffSleepModeWithReason:(unsigned long long)arg1;	// IMP=0x0000000000007826
- (void)automationTurnedOnSleepModeWithReason:(unsigned long long)arg1;	// IMP=0x0000000000007668
- (void)userTurnedOffSleepModeWithReason:(unsigned long long)arg1;	// IMP=0x0000000000007480
- (void)userTurnedOnSleepModeWithReason:(unsigned long long)arg1;	// IMP=0x0000000000007295
- (void)sleepScheduleStateChangedToDisabled;	// IMP=0x00000000000071ca
- (void)sleepScheduleStateChangedToWakeUp:(unsigned long long)arg1 fromState:(unsigned long long)arg2;	// IMP=0x0000000000007009
- (void)sleepScheduleStateChangedToBedtime:(unsigned long long)arg1 fromState:(unsigned long long)arg2;	// IMP=0x0000000000006d76
- (void)sleepScheduleStateChangedToWindDown:(unsigned long long)arg1 fromState:(unsigned long long)arg2;	// IMP=0x0000000000006ae3
@property(readonly, nonatomic) unsigned long long defaultChangeReason;
@property(readonly, nonatomic) long long sleepMode;
- (_Bool)updateStateCommon;	// IMP=0x0000000000006710
- (void)updateStateFromTimeline;	// IMP=0x00000000000064a2
- (void)updateState;	// IMP=0x0000000000006490
- (void)didEnter;	// IMP=0x00000000000062f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak HDSPSleepModeStateMachine *stateMachine; // @dynamic stateMachine;
@property(readonly) Class superclass;

@end
