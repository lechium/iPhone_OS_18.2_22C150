//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (HKDayIndex)
+ (id)hk_latestPossibleDateWithDayIndex:(long long)arg1;	// IMP=0x0080000000030a1c
+ (id)hk_earliestPossibleDateWithDayIndex:(long long)arg1;	// IMP=0x008000000003098b
+ (id)hk_noonWithDayIndex:(long long)arg1 calendar:(id)arg2;	// IMP=0x0080000000030971
+ (id)hk_dateOnDayIndex:(long long)arg1 atHour:(long long)arg2 calendar:(id)arg3;	// IMP=0x00800000000308d1
+ (id)hk_sleepMonthStartForMorningIndex:(long long)arg1 calendar:(id)arg2;	// IMP=0x0080000000031001
+ (id)hk_sleepWeekStartForMorningIndex:(long long)arg1 calendar:(id)arg2;	// IMP=0x0080000000030f41
+ (id)hk_sleepDayStartForMorningIndex:(long long)arg1 calendar:(id)arg2;	// IMP=0x0080000000030cb8
+ (id)hk_dateWithNanosecondsSince1970:(long long)arg1;	// IMP=0x00800000000f3f3c
+ (id)hk_mostRecentDate:(id)arg1;	// IMP=0x00800000000f3eb0
- (long long)hk_latestPossibleDayIndex;	// IMP=0x0010000000030c5e
- (long long)hk_earliestPossibleDayIndex;	// IMP=0x0010000000030c04
- (long long)hk_dayIndexWithCalendar:(id)arg1;	// IMP=0x0010000000030ae4
- (id)hk_sleepDayMidnightWithCalendar:(id)arg1;	// IMP=0x00100000000310ae
- (id)hk_sleepDayStartWithCalendar:(id)arg1;	// IMP=0x0010000000030e22
- (long long)hk_morningIndexWithCalendar:(id)arg1;	// IMP=0x0010000000030ce1
- (id)hk_utcDateAdjustedToCalendar:(id)arg1;	// IMP=0x00100000000f3f8a
- (long long)hk_nanosecondsSince1970;	// IMP=0x00100000000f3f6b
- (id)hk_truncateToDay;	// IMP=0x00100000000f3ee1
- (id)hk_nearestDate:(id)arg1;	// IMP=0x00100000000f3e2b
- (id)hk_rfc3339String;	// IMP=0x00100000000f3d55
- (_Bool)hk_isAfterOrEqualToDate:(id)arg1;	// IMP=0x00100000000f3d40
- (_Bool)hk_isBeforeOrEqualToDate:(id)arg1;	// IMP=0x001000000000e34b
- (_Bool)hk_isAfterDate:(id)arg1;	// IMP=0x001000000000e360
- (_Bool)hk_isBeforeDate:(id)arg1;	// IMP=0x0010000000010edf
@end
