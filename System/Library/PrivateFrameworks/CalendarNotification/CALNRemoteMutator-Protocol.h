//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarNotification/NSObject-Protocol.h>

@class EKAlarm, EKCalendarItem, EKEvent;

@protocol CALNRemoteMutator <NSObject>
- (_Bool)deleteEvent:(EKEvent *)arg1 withSpan:(long long)arg2;
- (void)setParticipantStatus:(long long)arg1 span:(long long)arg2 event:(EKEvent *)arg3;
- (void)setSnoozeTimeInterval:(double)arg1 alarm:(EKAlarm *)arg2 calendarItem:(EKCalendarItem *)arg3;
@end
