//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC10ClockAngel27ClockAngelConnectionManager : NSObject
{
    MISSING_TYPE *publicListener;	// 8 = 0x8
    MISSING_TYPE *connection;	// 16 = 0x10
    MISSING_TYPE *connectionManagerQueue;	// 24 = 0x18
    MISSING_TYPE *reloadLayout;	// 32 = 0x20
    MISSING_TYPE *$__lazy_storage_$_interface;	// 48 = 0x30
    MISSING_TYPE *$__lazy_storage_$_timerManager;	// 56 = 0x38
    MISSING_TYPE *$__lazy_storage_$_alarmManager;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000047660
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x00100000000475b0
- (id)init;	// IMP=0x0010000000046fa0
- (id)alertingSessionId;	// IMP=0x0010000000048200
- (void)endAlertingSession;	// IMP=0x00100000000481b0
- (void)alertTimerWithActivityId:(id)arg1 timerId:(id)arg2;	// IMP=0x0010000000048110
- (void)warmUp;	// IMP=0x0010000000048030
- (void)stopTimerSessionWithId:(id)arg1;	// IMP=0x0010000000047fe0
- (void)updateTimerSessionWithId:(id)arg1 title:(id)arg2;	// IMP=0x0010000000047dc0
- (void)pauseTimerSessionWithId:(id)arg1 title:(id)arg2 duration:(id)arg3 remaining:(id)arg4 timeRemainingString:(id)arg5 remainingPortion:(id)arg6;	// IMP=0x0010000000047cc0
- (void)startTimerSessionWithId:(id)arg1 title:(id)arg2 estimatedEndDate:(id)arg3 duartion:(id)arg4;	// IMP=0x0010000000047970
- (void)updateAlarmEntry:(id)arg1;	// IMP=0x00100000000489a0
- (void)removeAlarms:(id)arg1;	// IMP=0x0010000000048940
- (void)stopAlarmSnoozeSessionWithId:(id)arg1;	// IMP=0x00100000000485e0
- (void)startAlarmSnoozeSessionWithAlarm:(id)arg1;	// IMP=0x0010000000048590
- (void)startAlarmSnoozeSessionWithId:(id)arg1 estimatedEndDate:(id)arg2 title:(id)arg3;	// IMP=0x00100000000482e0
- (void)alertAlarm:(id)arg1 activityId:(id)arg2;	// IMP=0x0010000000048240

@end
