//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (RCAdditions)
+ (id)_fr_sharedYearAndMonthDateFormatter;	// IMP=0x0020000000004e27
+ (id)rc_laterDateAllowingNilWithDate:(id)arg1 andDate:(id)arg2;	// IMP=0x0020000000004cbd
+ (id)rc_earlierDateAllowingNilWithDate:(id)arg1 andDate:(id)arg2;	// IMP=0x0020000000004c3b
+ (id)rc_dateWithMillisecondTimeIntervalSince1970:(unsigned long long)arg1;	// IMP=0x0020000000004708
+ (id)rc_dateFromStringWithHTTPHeaderFormat:(id)arg1;	// IMP=0x0020000000004397
+ (id)rc_dateFromStringWithISO8601Format:(id)arg1;	// IMP=0x00200000000042d1
+ (id)rc_dateFromString:(id)arg1 possibleFormats:(id)arg2;	// IMP=0x002000000000408f
- (id)rc_stringForLogging;	// IMP=0x0010000000004e15
- (id)rc_stringWithYearAndMonthFormat;	// IMP=0x0010000000004dae
- (id)rc_stringWithISO8601Format;	// IMP=0x0010000000004d3f
- (_Bool)rc_isSameDayAs:(id)arg1;	// IMP=0x0010000000004b46
@property(readonly, nonatomic) _Bool rc_isWeekend;
- (_Bool)isToday;	// IMP=0x0010000000004a1d
- (long long)rc_GregorianCalendarDaysSinceDate:(id)arg1;	// IMP=0x00100000000048d5
- (id)rc_dateOfEarliestGregorianCalendarDay;	// IMP=0x001000000000480e
- (unsigned long long)rc_millisecondTimeIntervalSinceDate:(id)arg1;	// IMP=0x0010000000004784
- (unsigned long long)rc_millisecondTimeIntervalSince1970;	// IMP=0x0010000000004742
- (id)rc_dateBySubtractingTimeInterval:(double)arg1;	// IMP=0x0010000000004693
- (_Bool)rc_isWithinTimeInterval:(double)arg1 ofDate:(id)arg2;	// IMP=0x001000000000465f
- (_Bool)rc_isLaterThan:(id)arg1 withPrecision:(long long)arg2;	// IMP=0x00100000000045b1
- (_Bool)rc_isLaterThanOrEqualTo:(id)arg1;	// IMP=0x0010000000004597
- (_Bool)rc_isLaterThan:(id)arg1;	// IMP=0x001000000000457d
- (_Bool)rc_isEarlierThan:(id)arg1 withPrecision:(long long)arg2;	// IMP=0x00100000000044cf
- (_Bool)rc_isEarlierThanOrEqualTo:(id)arg1;	// IMP=0x00100000000044b2
- (_Bool)rc_isEarlierThan:(id)arg1;	// IMP=0x0010000000004498
@property(readonly) double rc_timeIntervalUntilNow;
@end
