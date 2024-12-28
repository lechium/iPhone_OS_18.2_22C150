//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (TSUAdditions)
+ (id)tc_dateWithWordDate:(const struct WrdDateTime *)arg1;	// IMP=0x00200000003de9f8
- (_Bool)tsu_isEqualToDate:(id)arg1;	// IMP=0x00100000002c7d5d
- (id)tsu_fullFormattedDateWithPeriod;	// IMP=0x00100000002c7cf0
- (id)p_ruleForOverAYearAgoForDate:(id)arg1 withDateFormatter:(id)arg2;	// IMP=0x00100000002c7c5c
- (id)p_ruleForOverAWeekAgoForDate:(id)arg1 withDateFormatter:(id)arg2;	// IMP=0x00100000002c7bc8
- (id)p_ruleForUpToSevenDaysAgoAndNotYesterdayForDate:(id)arg1 withDateFormatter:(id)arg2;	// IMP=0x00100000002c7b34
- (id)p_ruleForYesterday:(id)arg1 withDateFormatter:(id)arg2;	// IMP=0x00100000002c7a22
- (id)p_ruleForYesterdayShortAsPossible:(id)arg1;	// IMP=0x00100000002c79c6
- (id)p_rule1To23HoursAgo:(long long)arg1;	// IMP=0x00100000002c7921
- (id)p_rule1To59MinutesAgo:(long long)arg1;	// IMP=0x00100000002c787f
- (id)tsu_relativeAnnotationStringForEarlierDate:(id)arg1;	// IMP=0x00100000002c7868
- (id)tsu_relativeAnnotationStringForEarlierDate:(id)arg1 withDateFormatter:(id)arg2;	// IMP=0x00100000002c7853
- (id)tsu_relativeAnnotationStringForEarlierDate:(id)arg1 withDateFormatter:(id)arg2 shortAsPossible:(_Bool)arg3;	// IMP=0x00100000002c74dd
@property(readonly, nonatomic) CDStruct_d65e47c4 tsu_DOSTime;
- (id)tsu_initWithDOSTime:(CDStruct_d65e47c4)arg1;	// IMP=0x00100000002c7394
- (void)tc_copyToWordDate:(struct WrdDateTime *)arg1;	// IMP=0x00100000003deb09
@end
