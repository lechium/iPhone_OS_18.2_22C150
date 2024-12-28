//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class NSDateComponents, UICalendarView, UICalendarViewDecoration;

@protocol UICalendarViewDelegate <NSObject>

@optional
- (void)calendarView:(UICalendarView *)arg1 didChangeVisibleDateComponentsFrom:(NSDateComponents *)arg2;
- (UICalendarViewDecoration *)calendarView:(UICalendarView *)arg1 decorationForDateComponents:(NSDateComponents *)arg2;
@end
