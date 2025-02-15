//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthMedications/HKUnitTestingTaskServerInterface-Protocol.h>

@class HKMedicationSchedule, NSArray, NSDate, NSString;

@protocol HKMedicationScheduleControlServer <HKUnitTestingTaskServerInterface>
- (void)remote_observeMedicationScheduleChanges:(_Bool)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_logUnloggedMedicationsWithScheduledItemIdentifier:(NSString *)arg1 status:(long long)arg2 logDate:(NSDate *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)remote_rescheduleMedicationsWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_updateNotificationSent:(_Bool)arg1 scheduleItemIdentifier:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_saveScheduleItems:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_deleteSchedule:(HKMedicationSchedule *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_fetchAllSchedulesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)remote_fetchSchedulesWithMedicationIdentifiers:(NSArray *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)remote_fetchScheduleWithMedicationIdentifier:(NSString *)arg1 completion:(void (^)(HKMedicationSchedule *, NSError *))arg2;
- (void)remote_setTimeZoneTipAsDismissedWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_updateSchedulesToLocalTimeZoneAndMaintainCalendarDatesAndTimes:(_Bool)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_saveSchedule:(HKMedicationSchedule *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

