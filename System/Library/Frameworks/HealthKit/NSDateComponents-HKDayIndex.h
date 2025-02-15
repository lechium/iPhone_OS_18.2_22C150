//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDateComponents.h>

@interface NSDateComponents (HKDayIndex)
+ (id)hk_componentsWithDayIndex:(long long)arg1 calendar:(id)arg2;	// IMP=0x00600000000b2c41
+ (id)hk_dateComponentsForCalendarUnit:(unsigned long long)arg1;	// IMP=0x0060000000100300
+ (id)hk_componentsWithDays:(long long)arg1;	// IMP=0x00600000001002cf
+ (id)hk_oneWeek;	// IMP=0x0060000000100297
+ (id)hk_oneDay;	// IMP=0x0060000000100280
+ (id)hk_componentsWithHour:(long long)arg1 minute:(long long)arg2;	// IMP=0x0060000000299ea0
- (id)hk_dayIndexDateDescription;	// IMP=0x00100000000b2ebe
- (long long)hk_dayIndex;	// IMP=0x00100000000b2da9
- (long long)hk_indexForDate:(id)arg1 anchorDate:(id)arg2;	// IMP=0x00100000001010c5
- (id)hk_dateIntervalForDate:(id)arg1 anchorDate:(id)arg2 outIndex:(long long *)arg3;	// IMP=0x0010000000100cf2
- (long long)hk_ageWithCurrentDate:(id)arg1;	// IMP=0x0010000000100c2a
- (id)hk_negativeComponents;	// IMP=0x0010000000100c11
- (id)hk_translateDateComponentsToCalendar:(id)arg1 calendarUnits:(unsigned long long)arg2;	// IMP=0x0010000000100ace
- (id)hk_populatedCalendarGregorianCalendarDefault;	// IMP=0x001000000000a457
- (long long)hk_maxComponentValue;	// IMP=0x00100000001008a4
- (id)_hk_dateComponentsMultipliedByCount:(long long)arg1;	// IMP=0x00100000001005de
- (id)_hk_dateByAddingFilteredInterval:(long long)arg1 toDate:(id)arg2;	// IMP=0x00100000001004f9
- (id)hk_dateByAddingInterval:(long long)arg1 toDate:(id)arg2;	// IMP=0x00100000001003c1
- (double)hk_approximateDuration;	// IMP=0x0010000000100336
- (id)hk_dateOptionalDescription;	// IMP=0x0010000000299fd0
- (id)hk_minuteNumber;	// IMP=0x0010000000299f60
- (id)hk_hourNumber;	// IMP=0x0010000000299ef0
@end

