//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDAlarmEvent.h>

@class HKNotificationInstruction;

@interface HDAlarmEvent (HKMenstrualCycles)
- (long long)hdmc_fertileWindowDayShift;	// IMP=0x0030000000003670
- (long long)hdmc_fertileWindowEndDayIndex;	// IMP=0x00300000000035a9
- (id)hdmc_categoryIdentifier;	// IMP=0x0030000000003519
@property(readonly, copy, nonatomic) HKNotificationInstruction *hdmc_notificationHoldInstruction;
@end

