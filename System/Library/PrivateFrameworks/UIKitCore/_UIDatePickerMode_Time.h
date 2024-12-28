//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_Time
{
    double _timeHourWidth;	// 240 = 0xf0
    double _timeMinuteWidth;	// 248 = 0xf8
    double _timeAMPMWidth;	// 256 = 0x100
    NSString *_hourFormat;	// 264 = 0x108
    NSString *_minuteFormat;	// 272 = 0x110
}

+ (unsigned long long)extractableCalendarUnits;	// IMP=0x00600000012abe9c
+ (long long)datePickerMode;	// IMP=0x00600000012abe94
- (void).cxx_destruct;	// IMP=0x00000000012ac994
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1;	// IMP=0x00000000012ac977
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1;	// IMP=0x00000000012ac94d
- (_Bool)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3;	// IMP=0x00000000012ac771
- (id)font;	// IMP=0x00000000012ac75f
- (double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;	// IMP=0x00000000012ac373
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1;	// IMP=0x00000000012ac358
- (void)noteCalendarChanged;	// IMP=0x00000000012ac2f1
- (void)resetComponentWidths;	// IMP=0x00000000012ac2c8
- (double)rowHeight;	// IMP=0x00000000012ac2ba
- (id)dateFormatForCalendarUnit:(unsigned long long)arg1;	// IMP=0x00000000012abfde
- (id)localizedFormatString;	// IMP=0x00000000012abf41
- (void)_shouldReset:(id)arg1;	// IMP=0x00000000012abeda
- (long long)displayedCalendarUnits;	// IMP=0x00000000012abea7

@end
