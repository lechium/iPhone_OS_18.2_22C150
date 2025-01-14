//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CUIKCalendarSpecialDayData, DayNavigationWeekScrollView, NSDate;

@protocol DayNavigationWeekScrollViewDelegate <NSObject>
- (CUIKCalendarSpecialDayData *)dayNavigationWeekScrollView:(DayNavigationWeekScrollView *)arg1 dayDataForDate:(NSDate *)arg2;
- (_Bool)dayNavigationWeekScrollViewIsLoadingSpecialDayData:(DayNavigationWeekScrollView *)arg1;
- (void)dayNavigationWeekScrollView:(DayNavigationWeekScrollView *)arg1 didChangeCellWidth:(double)arg2;
- (void)dayNavigationWeekScrollView:(DayNavigationWeekScrollView *)arg1 selectedDateChanged:(NSDate *)arg2;
- (void)dayNavigationWeekScrollViewFailedToSelectDate:(void (^)(void))arg1;
- (_Bool)dayNavigationWeekScrollViewAllowedToChangeSelectedDate;
@end

