//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sleep/NSObject-Protocol.h>

@class HKSPSleepEvent, HKSPSleepSchedule, HKSPSleepSettings, HKSPSleepStore;

@protocol HKSPSleepStoreObserver <NSObject>

@optional
- (void)sleepStore:(HKSPSleepStore *)arg1 sleepModeOnDidChange:(_Bool)arg2;
- (void)sleepStore:(HKSPSleepStore *)arg1 sleepScheduleStateDidChange:(unsigned long long)arg2;
- (void)sleepStore:(HKSPSleepStore *)arg1 sleepEventDidOccur:(HKSPSleepEvent *)arg2;
- (void)sleepStore:(HKSPSleepStore *)arg1 sleepSettingsDidChange:(HKSPSleepSettings *)arg2;
- (void)sleepStore:(HKSPSleepStore *)arg1 sleepScheduleDidChange:(HKSPSleepSchedule *)arg2;
@end
