//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HDSPGoodMorningAlertStateMachineState.h"

__attribute__((visibility("hidden")))
@interface HDSPGoodMorningAlertPresentingState : HDSPGoodMorningAlertStateMachineState
{
}

- (void)sleepScheduleStateChangedToBedtime;	// IMP=0x0000000000045f30
- (id)stateName;	// IMP=0x0000000000045f23
- (void)stateDidExpire;	// IMP=0x0000000000045eb6
- (void)updateState;	// IMP=0x0000000000045b9f
- (void)didExit;	// IMP=0x0000000000045a48
- (void)didEnter;	// IMP=0x00000000000458f1
- (_Bool)schedulesExpiration;	// IMP=0x00000000000458e9
- (double)expirationDuration;	// IMP=0x00000000000458d8

@end

