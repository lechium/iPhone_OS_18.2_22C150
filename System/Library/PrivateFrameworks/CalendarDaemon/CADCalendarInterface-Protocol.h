//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CADObjectID, NSArray;

@protocol CADCalendarInterface
- (void)CADCalendar:(CADObjectID *)arg1 hasEventsWithRoomAsAttendee:(void (^)(int, _Bool))arg2;
- (void)CADCalendar:(CADObjectID *)arg1 hasEvents:(void (^)(int, _Bool))arg2;
- (void)CADDatabaseGetCalendarsWithFaultedProperties:(NSArray *)arg1 reply:(void (^)(int, NSArray *, NSArray *))arg2;
@end
