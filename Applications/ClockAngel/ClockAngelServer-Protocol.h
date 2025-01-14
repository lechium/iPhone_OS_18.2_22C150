//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MTAlarm, NSArray, NSDate, NSNumber, NSString;
@protocol __NSString__;

@protocol ClockAngelServer <NSObject>
- (NSString *)alertingSessionId;
- (void)endAlertingSession;
- (void)alertAlarm:(MTAlarm *)arg1 activityId:(NSString *)arg2;
- (void)alertTimerWithActivityId:(NSString *)arg1 timerId:(NSString *)arg2;
- (void)updateAlarmEntry:(MTAlarm *)arg1;
- (void)removeAlarms:(NSArray<__NSString__> *)arg1;
- (void)stopAlarmSnoozeSessionWithId:(NSString *)arg1;
- (void)startAlarmSnoozeSessionWithAlarm:(MTAlarm *)arg1;
- (void)startAlarmSnoozeSessionWithId:(NSString *)arg1 estimatedEndDate:(NSDate *)arg2 title:(NSString *)arg3;
- (void)warmUp;
- (void)updateTimerSessionWithId:(NSString *)arg1 title:(NSString *)arg2;
- (void)stopTimerSessionWithId:(NSString *)arg1;
- (void)pauseTimerSessionWithId:(NSString *)arg1 title:(NSString *)arg2 duration:(NSNumber *)arg3 remaining:(NSNumber *)arg4 timeRemainingString:(NSString *)arg5 remainingPortion:(NSNumber *)arg6;
- (void)startTimerSessionWithId:(NSString *)arg1 title:(NSString *)arg2 estimatedEndDate:(NSDate *)arg3 duartion:(NSNumber *)arg4;
@end

