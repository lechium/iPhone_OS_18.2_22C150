//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKSleepSchedule.h>

@class NSString;

@interface HKSleepSchedule (HealthUI)
@property(readonly, nonatomic) NSString *hk_localizedWakeTime;
@property(readonly, nonatomic) NSString *hk_localizedBedtime;
@property(readonly, nonatomic) NSString *hk_localizedScheduledSleepDuration;
- (id)hk_localizedWeekdaysListWithGregorianCalendar:(id)arg1 standaloneFormatter:(id)arg2 listItemFormatter:(id)arg3;	// IMP=0x00300000001a56c9
@property(readonly, nonatomic) NSString *hk_localizedWeekdaysList;
- (void)addDetailValuesToSection:(id)arg1;	// IMP=0x00300000003321f0
@end
