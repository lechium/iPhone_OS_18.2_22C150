//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSDateComponents, NSString, NSTimeZone;

__attribute__((visibility("hidden")))
@interface HMDTimerTrigger
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSDate *currentFireDate;	// 16 = 0x10
    NSDate *_currentFireDate;	// 24 = 0x18
    NSDate *_fireDate;	// 32 = 0x20
    NSTimeZone *_fireDateTimeZone;	// 40 = 0x28
    NSString *_significantEvent;	// 48 = 0x30
    NSDateComponents *_significantEventOffset;	// 56 = 0x38
    NSDateComponents *_fireRepeatInterval;	// 64 = 0x40
    NSArray *_recurrences;	// 72 = 0x48
    NSString *_timerID;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000049a722
+ (id)getCalendar:(id)arg1;	// IMP=0x006000000049a69e
+ (id)validateWholeMinuteDate:(id)arg1 onCalendar:(id)arg2;	// IMP=0x006000000049a56d
+ (id)validateTriggerModel:(id)arg1 message:(id)arg2 currentFireDate:(id)arg3;	// IMP=0x00600000004999c7
+ (id)validateRecurrences:(id)arg1;	// IMP=0x00600000004993bf
+ (id)validateSignificantOffset:(id)arg1;	// IMP=0x00600000004993b7
+ (id)validateRecurrence:(id)arg1 calendar:(id)arg2 fireDate:(id)arg3;	// IMP=0x0060000000499218
+ (id)logCategory;	// IMP=0x00600000004991e8
- (void).cxx_destruct;	// IMP=0x000000000049849a
@property(retain, nonatomic) NSString *timerID; // @synthesize timerID=_timerID;
@property(copy, nonatomic) NSArray *recurrences; // @synthesize recurrences=_recurrences;
@property(copy, nonatomic) NSDateComponents *fireRepeatInterval; // @synthesize fireRepeatInterval=_fireRepeatInterval;
@property(copy, nonatomic) NSDateComponents *significantEventOffset; // @synthesize significantEventOffset=_significantEventOffset;
@property(copy, nonatomic) NSString *significantEvent; // @synthesize significantEvent=_significantEvent;
@property(copy, nonatomic) NSTimeZone *fireDateTimeZone; // @synthesize fireDateTimeZone=_fireDateTimeZone;
@property(copy, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
- (void)handleTimerFiredNotification:(id)arg1;	// IMP=0x00000000004981f4
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000004981ee
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000498060
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000497e7e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000497b8c
- (id)getFireInterval;	// IMP=0x0000000000497a99
- (id)getCalendar;	// IMP=0x0000000000497a36
- (void)_closestDatesForStartDate:(id)arg1 earliestDate:(id)arg2 timeZone:(id)arg3 deliveryRepeatInterval:(id)arg4 returnDateBefore:(id *)arg5 returnDateAfter:(id *)arg6;	// IMP=0x0000000000496eed
- (void)_reactiveTriggerAfterDelay;	// IMP=0x0000000000496e07
- (void)_timerTriggered;	// IMP=0x0000000000496c3e
- (_Bool)_shouldExecuteActionSet;	// IMP=0x00000000004967c3
- (id)_nextSignificantEventFireDate;	// IMP=0x00000000004966c4
- (id)_nextFireDate;	// IMP=0x0000000000496507
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000004963ee
- (_Bool)shouldActivateOnLocalDevice;	// IMP=0x0000000000496379
- (void)_disableTimerOffReactivationFailure;	// IMP=0x0000000000496347
- (_Bool)_reactivateSignificantEventTrigger;	// IMP=0x000000000049615a
- (_Bool)_reactivateFireDateTrigger;	// IMP=0x0000000000496025
- (_Bool)_reactivateTrigger;	// IMP=0x0000000000495fc9
- (id)_serializeForAdd;	// IMP=0x0000000000495bb6
- (id)backingStoreObjects:(long long)arg1;	// IMP=0x0000000000495b28
- (id)emptyModelObject;	// IMP=0x0000000000495a70
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x000000000049578b
- (void)_handleTimerTriggerUpdate:(id)arg1 message:(id)arg2;	// IMP=0x000000000049570b
- (void)_handleUpdateTimerTriggerPropertiesModel:(id)arg1 message:(id)arg2;	// IMP=0x00000000004952be
- (void)_handleUpdateTimerTriggerPropertiesRequest:(id)arg1;	// IMP=0x00000000004950e1
- (void)_registerForMessages;	// IMP=0x0000000000494f5e
- (void)_stopTimer;	// IMP=0x0000000000494ecd
- (void)_startTimer:(id)arg1;	// IMP=0x0000000000494a51
- (void)_startTimerWithSignificantEventDate:(id)arg1;	// IMP=0x0000000000494a3f
- (void)_startTimerWithFireDate:(id)arg1;	// IMP=0x0000000000494792
- (void)invalidate;	// IMP=0x0000000000494635
- (void)timerTriggered;	// IMP=0x00000000004944b5
- (void)dealloc;	// IMP=0x00000000004943ef
- (void)completeConfiguration;	// IMP=0x000000000049437e
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;	// IMP=0x0000000000493fb4
- (void)setCurrentFireDate:(id)arg1;	// IMP=0x0000000000493f60
@property(readonly) NSDate *currentFireDate; // @synthesize currentFireDate=_currentFireDate;
- (unsigned long long)triggerType;	// IMP=0x0000000000493f0f
- (id)dumpState;	// IMP=0x0000000000493c44
- (id)description;	// IMP=0x0000000000493a4f
- (id)initWithModel:(id)arg1 home:(id)arg2;	// IMP=0x000000000049386b
- (id)initWithName:(id)arg1 uuid:(id)arg2;	// IMP=0x0000000000493799

@end
