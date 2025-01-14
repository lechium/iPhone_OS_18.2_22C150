//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDateComponents.h>

@interface NSDateComponents (Additions)
+ (unsigned long long)_hf_allPossibleComponents;	// IMP=0x008000000011e786
+ (id)hf_zeroDateComponentsWithComponents:(unsigned long long)arg1 calendar:(id)arg2;	// IMP=0x008000000011e5c0
+ (id)hf_componentsWithHour:(long long)arg1 minute:(long long)arg2;	// IMP=0x008000000011dccd
+ (id)hf_yearlyIntervalComponents;	// IMP=0x008000000011dc5f
+ (id)hf_monthlyIntervalComponents;	// IMP=0x008000000011dbf1
+ (id)hf_biweeklyIntervalComponents;	// IMP=0x008000000011db83
+ (id)hf_weeklyIntervalComponents;	// IMP=0x008000000011db15
+ (id)hf_dailyIntervalComponents;	// IMP=0x008000000011daa7
+ (id)hf_dailyWeekdayIntervalComponentsWithCalendar:(id)arg1;	// IMP=0x008000000011d947
+ (id)hf_dailyWeekdayIntervalComponents;	// IMP=0x008000000011d872
- (unsigned long long)hf_validComponents;	// IMP=0x001000000011e791
- (long long)hf_compareNextMatchingDate:(id)arg1 withCalendar:(id)arg2;	// IMP=0x001000000011e2e2
- (long long)hf_compareNextMatchingDate:(id)arg1;	// IMP=0x001000000011e261
- (id)hf_negativeValue;	// IMP=0x001000000011e0ac
- (id)hf_absoluteValue;	// IMP=0x001000000011def3
- (double)hf_timeInterval;	// IMP=0x001000000011de3d
- (_Bool)hf_isEqualToHomeKitRecurrence:(id)arg1;	// IMP=0x001000000011dd24
@end

