//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HDSPSleepScheduleStateCoordinatorDelayedWakeUpState
{
}

- (void)bedtimeReached;	// IMP=0x000000000003bc77
- (void)windDownReached;	// IMP=0x000000000003bac1
- (id)expirationDate;	// IMP=0x000000000003b7cc
- (void)updateStateForcibly:(_Bool)arg1;	// IMP=0x000000000003b5dd
- (void)significantScheduleChangeOccurred:(unsigned long long)arg1;	// IMP=0x000000000003b568
- (void)alarmDismissed;	// IMP=0x000000000003b3b2
- (void)wakeUpConfirmed:(_Bool)arg1;	// IMP=0x000000000003b1d0
- (void)didExit;	// IMP=0x000000000003b0fb
- (unsigned long long)scheduleState;	// IMP=0x000000000003b0f0
- (id)stateName;	// IMP=0x000000000003b0e3

@end

