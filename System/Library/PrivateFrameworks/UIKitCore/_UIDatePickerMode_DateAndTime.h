//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDateFormatter, NSString;

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_DateAndTime
{
    _Bool _weekdayLast;	// 240 = 0xf0
    double _wmdWeekMonthDayWidth;	// 248 = 0xf8
    double _wmdHourWidth;	// 256 = 0x100
    double _wmdMinuteWidth;	// 264 = 0x108
    double _wmdAMPMWidth;	// 272 = 0x110
    double _wmdWeekdayWidth;	// 280 = 0x118
    NSString *_weekdayFormat;	// 288 = 0x120
    NSString *_monthDayFormat;	// 296 = 0x128
    NSString *_hourFormat;	// 304 = 0x130
    NSString *_minuteFormat;	// 312 = 0x138
    NSDateFormatter *_relativeFormatter;	// 320 = 0x140
    NSDateFormatter *_weekdayFormatter;	// 328 = 0x148
}

+ (unsigned long long)extractableCalendarUnits;	// IMP=0x00600000012ac9d0
+ (long long)datePickerMode;	// IMP=0x00600000012ac9c5
- (void).cxx_destruct;	// IMP=0x00000000012af6e9
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1;	// IMP=0x00000000012af694
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1;	// IMP=0x00000000012af63f
- (void)updateEnabledStateOfViewForRow:(long long)arg1 inComponent:(long long)arg2;	// IMP=0x00000000012af518
- (id)viewForRow:(long long)arg1 inComponent:(long long)arg2 reusingView:(id)arg3;	// IMP=0x00000000012aecac
- (_Bool)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3;	// IMP=0x00000000012aea48
- (_Bool)_shouldEnableWeekMonthDayForRow:(long long)arg1;	// IMP=0x00000000012ae92d
- (id)_dateForWeekMonthDayRow:(long long)arg1;	// IMP=0x00000000012ae873
- (long long)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(long long)arg3 currentRow:(long long)arg4;	// IMP=0x00000000012ae61d
- (id)dateForRow:(long long)arg1 inCalendarUnit:(unsigned long long)arg2;	// IMP=0x00000000012ae5bf
- (id)titleForRow:(long long)arg1 inComponent:(long long)arg2;	// IMP=0x00000000012ae54a
- (_Bool)isWeekdayLast;	// IMP=0x00000000012ae53a
- (double)weekdayWidth;	// IMP=0x00000000012ae528
- (double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;	// IMP=0x00000000012ae516
- (double)componentWidthForDateTimeCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;	// IMP=0x00000000012adaf8
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1;	// IMP=0x00000000012adadd
- (id)baseDateComponents;	// IMP=0x00000000012ada34
- (void)_takeBaseDateComponentsFromDate:(id)arg1;	// IMP=0x00000000012ad8af
- (void)_resetBaseDateComponentsIfNecessaryFromDate:(id)arg1;	// IMP=0x00000000012ad6b5
- (void)loadDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000012ad646
- (unsigned long long *)elements;	// IMP=0x00000000012ad48a
- (long long)displayedCalendarUnits;	// IMP=0x00000000012ad451
- (id)dateFormatForCalendarUnit:(unsigned long long)arg1;	// IMP=0x00000000012aceb8
- (id)localizedFormatString;	// IMP=0x00000000012ace1b
- (id)weekdayFormatter;	// IMP=0x00000000012accb2
- (id)relativeFormatter;	// IMP=0x00000000012acb6d
- (void)noteCalendarChanged;	// IMP=0x00000000012acabe
- (void)resetComponentWidths;	// IMP=0x00000000012aca8a
- (void)_shouldReset:(id)arg1;	// IMP=0x00000000012ac9db

@end
