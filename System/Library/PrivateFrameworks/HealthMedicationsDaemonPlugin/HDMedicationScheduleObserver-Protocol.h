//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthMedicationsDaemonPlugin/NSObject-Protocol.h>

@class HDMedicationScheduleManager, NSArray, NSDictionary;

@protocol HDMedicationScheduleObserver <NSObject>
- (void)scheduleManager:(HDMedicationScheduleManager *)arg1 didAddOrModifySchedules:(NSArray *)arg2;
- (void)scheduleManager:(HDMedicationScheduleManager *)arg1 didPruneScheduleItems:(NSArray *)arg2;
- (void)scheduleManagerDidRescheduleMedications:(HDMedicationScheduleManager *)arg1;

@optional
- (void)scheduleManager:(HDMedicationScheduleManager *)arg1 didAddOrModifySchedulesBySyncIdentity:(NSDictionary *)arg2;
@end
