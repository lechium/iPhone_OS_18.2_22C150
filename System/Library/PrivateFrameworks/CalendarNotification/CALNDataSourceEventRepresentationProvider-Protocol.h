//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarNotification/NSObject-Protocol.h>

@class EKCalendarEventInvitationNotification, EKEvent, NSDate, NSDictionary, NSTimeZone;

@protocol CALNDataSourceEventRepresentationProvider <NSObject>
- (NSDictionary *)eventRepresentationDictionaryForInvitationNotification:(EKCalendarEventInvitationNotification *)arg1 event:(EKEvent *)arg2 date:(NSDate *)arg3 endDate:(NSDate *)arg4 timeZone:(NSTimeZone *)arg5;
- (NSDictionary *)eventRepresentationDictionaryForUpcomingEvent:(EKEvent *)arg1 date:(NSDate *)arg2 displayTimeZone:(NSTimeZone *)arg3;
@end

