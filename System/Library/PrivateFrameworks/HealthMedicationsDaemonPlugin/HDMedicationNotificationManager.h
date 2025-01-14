//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDProfile, HDRestorableAlarm, HKCalendarCache, NSDate, NSUserDefaults;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HDMedicationNotificationManager : NSObject
{
    HDProfile *_profile;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    HDRestorableAlarm *_restorableAlarm;	// 24 = 0x18
    HDRestorableAlarm *_expirationAlarm;	// 32 = 0x20
    NSDate *_dateAnchor;	// 40 = 0x28
    HKCalendarCache *_calendarCache;	// 48 = 0x30
    NSUserDefaults *_userDefaults;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_unitTesting_restorableAlarmQueue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_unitTesting_expirationAlarmQueue;	// 72 = 0x48
    HDRestorableAlarm *_unitTesting_restorableAlarm;	// 80 = 0x50
    HDRestorableAlarm *_unitTesting_expirationAlarm;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000002e777
@property(retain, nonatomic) HDRestorableAlarm *unitTesting_expirationAlarm; // @synthesize unitTesting_expirationAlarm=_unitTesting_expirationAlarm;
@property(retain, nonatomic) HDRestorableAlarm *unitTesting_restorableAlarm; // @synthesize unitTesting_restorableAlarm=_unitTesting_restorableAlarm;
@property(nonatomic) NSObject<OS_dispatch_queue> *unitTesting_expirationAlarmQueue; // @synthesize unitTesting_expirationAlarmQueue=_unitTesting_expirationAlarmQueue;
@property(nonatomic) NSObject<OS_dispatch_queue> *unitTesting_restorableAlarmQueue; // @synthesize unitTesting_restorableAlarmQueue=_unitTesting_restorableAlarmQueue;
- (double)_snoozeDuration;	// IMP=0x000000000002e6ff
- (double)_followUpDuration;	// IMP=0x000000000002e6bd
- (id)_notInteractedDoseEventsForScheduleItems:(id)arg1 transaction:(id)arg2;	// IMP=0x000000000002dbed
- (id)pruneAllScheduleItemsBeforeDate:(id)arg1 createDoseEvents:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000002d6cb
- (id)unitTesting_activeSchedulesFromDate:(id)arg1 transaction:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002d62b
- (void)_addNotificationObserver:(id)arg1;	// IMP=0x000000000002d578
- (void)_queue_alarm:(id)arg1 didReceiveDueEvents:(id)arg2 date:(id)arg3;	// IMP=0x000000000002a11d
- (_Bool)_scheduleMedicationsFromDate:(id)arg1 clearNotSentItems:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000026c0a
- (_Bool)_rescheduleMedicationsFromDate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000026b28
@property(readonly, nonatomic) _Bool areDoseRemindersEnabled;
- (_Bool)rescheduleMedicationsWithError:(id *)arg1;	// IMP=0x000000000002695f
- (id)initWithProfile:(id)arg1 userDefaults:(id)arg2;	// IMP=0x000000000002636c
- (id)init;	// IMP=0x00000000000262f2

@end

