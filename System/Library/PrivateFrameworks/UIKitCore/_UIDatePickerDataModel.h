//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCalendar, NSDate, NSDateComponents, NSLocale, NSString, NSTimeZone, UIColor, _UIDatePickerChineseCalendar, _UIDatePickerDateRange;

__attribute__((visibility("hidden")))
@interface _UIDatePickerDataModel : NSObject
{
    NSLocale *_effectiveLocale;	// 8 = 0x8
    NSCalendar *_effectiveCalendar;	// 16 = 0x10
    _UIDatePickerChineseCalendar *_chineseWrapperCalendar;	// 24 = 0x18
    NSCalendar *_lastSelectedDateComponentsCalendar;	// 32 = 0x20
    _Bool _roundsToMinuteInterval;	// 40 = 0x28
    long long _datePickerStyle;	// 48 = 0x30
    long long _datePickerMode;	// 56 = 0x38
    NSLocale *_locale;	// 64 = 0x40
    NSCalendar *_calendar;	// 72 = 0x48
    NSTimeZone *_timeZone;	// 80 = 0x50
    NSDate *_date;	// 88 = 0x58
    NSDateComponents *_lastSelectedDateComponents;	// 96 = 0x60
    _UIDatePickerDateRange *_dateRange;	// 104 = 0x68
    long long _minuteInterval;	// 112 = 0x70
    NSString *_customFontDesign;	// 120 = 0x78
    UIColor *_customTextColor;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000001b64d1d
@property(retain, nonatomic) UIColor *customTextColor; // @synthesize customTextColor=_customTextColor;
@property(retain, nonatomic) NSString *customFontDesign; // @synthesize customFontDesign=_customFontDesign;
@property(nonatomic) _Bool roundsToMinuteInterval; // @synthesize roundsToMinuteInterval=_roundsToMinuteInterval;
@property(nonatomic) long long minuteInterval; // @synthesize minuteInterval=_minuteInterval;
@property(readonly, nonatomic) _UIDatePickerDateRange *dateRange; // @synthesize dateRange=_dateRange;
@property(retain, nonatomic) NSDateComponents *lastSelectedDateComponents; // @synthesize lastSelectedDateComponents=_lastSelectedDateComponents;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(copy, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(nonatomic) long long datePickerMode; // @synthesize datePickerMode=_datePickerMode;
@property(nonatomic) long long datePickerStyle; // @synthesize datePickerStyle=_datePickerStyle;
- (id)createDatePickerRepresentingDataModelForMode:(long long)arg1 style:(long long)arg2;	// IMP=0x0000000001b64a92
- (id)createDatePickerRepresentingDataModel;	// IMP=0x0000000001b64a45
@property(readonly, nonatomic) _Bool followsSystemHourCycle;
@property(retain, nonatomic) NSDate *maximumDate;
@property(retain, nonatomic) NSDate *minimumDate;
@property(readonly, copy, nonatomic) NSDateComponents *effectiveDateComponents;
- (id)_dateForRoundingDateToMinuteInterval:(id)arg1;	// IMP=0x0000000001b64505
@property(readonly, nonatomic) NSDate *effectiveDate;
- (void)resetForCurrentLocaleOrCalendarChange;	// IMP=0x0000000001b642d7
@property(readonly, nonatomic) NSCalendar *formattingCalendar;
@property(readonly, nonatomic) NSCalendar *effectiveCalendar;
@property(readonly, nonatomic) NSLocale *effectiveLocale;
- (void)_setupDerivedLocaleAndCalendars;	// IMP=0x0000000001b63cf9
- (id)init;	// IMP=0x0000000001b63c8a

@end
