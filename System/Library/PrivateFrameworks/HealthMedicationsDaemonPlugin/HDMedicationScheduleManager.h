//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDAssertion, HDMedicationNotificationManager, HDMedicationTimeZoneManager, HDProfile, HKObserverSet, HKSynchronousObserverSet, NSMutableDictionary, NSString, _HKDelayedOperation;
@protocol HDMedicationScheduleObserver, HDMedicationScheduleSynchronousObserver, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HDMedicationScheduleManager : NSObject
{
    HDProfile *_profile;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    HKObserverSet<HDMedicationScheduleObserver> *_observers;	// 24 = 0x18
    HKSynchronousObserverSet<HDMedicationScheduleSynchronousObserver> *_synchronousObservers;	// 32 = 0x20
    struct os_unfair_lock_s _observersLock;	// 40 = 0x28
    NSMutableDictionary *_observersLock_pendingSchedulesBySyncIdentity;	// 48 = 0x30
    HDMedicationTimeZoneManager *_timeZoneManager;	// 56 = 0x38
    _HKDelayedOperation *_rescheduleOperation;	// 64 = 0x40
    long long _isOperationRequiredOnNextUnlock;	// 72 = 0x48
    struct os_unfair_lock_s _operationLock;	// 80 = 0x50
    HDAssertion *_accessibilityAssertion;	// 88 = 0x58
    int _notificationSettingsDidChangeNotificationToken;	// 96 = 0x60
    HDMedicationNotificationManager *_notificationManager;	// 104 = 0x68
    CDUnknownBlockType _unitTesting_willRunRescheduleOperationWithDelay;	// 112 = 0x70
    CDUnknownBlockType _unitTesting_didRunRescheduleOperationWithDelay;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000001d757
@property(copy, nonatomic) CDUnknownBlockType unitTesting_didRunRescheduleOperationWithDelay; // @synthesize unitTesting_didRunRescheduleOperationWithDelay=_unitTesting_didRunRescheduleOperationWithDelay;
@property(copy, nonatomic) CDUnknownBlockType unitTesting_willRunRescheduleOperationWithDelay; // @synthesize unitTesting_willRunRescheduleOperationWithDelay=_unitTesting_willRunRescheduleOperationWithDelay;
@property(readonly, nonatomic) HDMedicationNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
- (id)orderingTermsForSortDescriptors:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001d409
- (void)batchNotifyObserversOnCommitOfTransaction:(id)arg1 didAddOrModifySchedule:(id)arg2 syncIdentity:(long long)arg3;	// IMP=0x000000000001cb34
- (_Bool)pruneAllScheduleItemsBeforeDate:(id)arg1 createDoseEvents:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000001c890
- (void)unregisterSynchronousObserver:(id)arg1;	// IMP=0x000000000001c72a
- (void)registerSynchronousObserver:(id)arg1;	// IMP=0x000000000001c714
- (void)unregisterObserver:(id)arg1;	// IMP=0x000000000001c6fe
- (void)registerObserver:(id)arg1 queue:(id)arg2;	// IMP=0x000000000001c6e8
- (_Bool)deleteMedicationSchedule:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001c68f
- (_Bool)_updateSchedulesToTimeZone:(id)arg1 maintainCalendarDatesAndTimes:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000001b5c9
- (_Bool)updateSchedulesToLocalTimeZoneAndMaintainCalendarDatesAndTimes:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000001b4ec
- (_Bool)updateTimeZoneExperienceAsDismissedWithError:(id *)arg1;	// IMP=0x000000000001b238
@property(readonly, nonatomic) HDMedicationTimeZoneManager *timeZoneManager;
- (_Bool)updateNotificationSent:(_Bool)arg1 scheduleItemIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000019b34
- (void)rescheduleMedicationsSynchronously:(_Bool)arg1;	// IMP=0x0000000000019311
- (_Bool)rescheduleMedicationsWithError:(id *)arg1;	// IMP=0x0000000000018e8e
- (_Bool)logUnloggedDoseEventsForScheduledItemIdentifier:(id)arg1 status:(long long)arg2 logDate:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000018dd0
- (_Bool)insertMedicationSchedules:(id)arg1 syncProvenance:(long long)arg2 syncIdentity:(long long)arg3 error:(id *)arg4;	// IMP=0x0000000000018c79
- (_Bool)insertMedicationSchedules:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000018b8c
- (_Bool)insertMedicationSchedule:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000018a68
- (_Bool)enumerateMedicationSchedulesWithPredicate:(id)arg1 limit:(long long)arg2 orderingTerms:(id)arg3 error:(id *)arg4 enumerationHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000018728
- (id)medicationSchedulesWithPredicate:(id)arg1 transaction:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000183d3
- (id)medicationSchedulesWithPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000181be
- (id)medicationSchedulesWithError:(id *)arg1;	// IMP=0x00000000000181a7
- (_Bool)medicationSchedule:(id *)arg1 identifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000180c4
- (_Bool)medicationSchedule:(id *)arg1 medicationIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000017e8a
- (void)userDomainConceptManager:(id)arg1 didJournalUserDomainConcepts:(id)arg2;	// IMP=0x0000000000017e84
- (void)userDomainConceptManager:(id)arg1 didDeleteUserDomainConcepts:(id)arg2;	// IMP=0x0000000000017e7e
- (void)userDomainConceptManager:(id)arg1 didUpdateUserDomainConcepts:(id)arg2;	// IMP=0x0000000000017e15
- (void)userDomainConceptManager:(id)arg1 didAddUserDomainConcepts:(id)arg2;	// IMP=0x0000000000017dbd
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;	// IMP=0x0000000000017d92
- (void)profileDidBecomeReady:(id)arg1;	// IMP=0x0000000000017aaf
- (void)unitTesting_invalidate;	// IMP=0x0000000000017aa5
- (void)dealloc;	// IMP=0x00000000000179bb
- (id)initWithProfile:(id)arg1 userDefaults:(id)arg2;	// IMP=0x000000000001727b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

