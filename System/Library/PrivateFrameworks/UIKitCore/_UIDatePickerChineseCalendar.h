//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCalendar.h>

__attribute__((visibility("hidden")))
@interface _UIDatePickerChineseCalendar : NSCalendar
{
    NSCalendar *_realCalendar;	// 8 = 0x8
}

+ (id)cyclicalFromRelated:(id)arg1;	// IMP=0x00600000012a1646
+ (id)relatedFromCyclical:(id)arg1;	// IMP=0x00600000012a14bd
@property(retain, nonatomic) NSCalendar *realCalendar; // @synthesize realCalendar=_realCalendar;
- (struct _NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;	// IMP=0x00000000012a1ad3
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x00000000012a1ab6
- (id)calendarIdentifier;	// IMP=0x00000000012a1a99
- (struct _NSRange)maximumRangeOfUnit:(unsigned long long)arg1;	// IMP=0x00000000012a1a07
- (void)setTimeZone:(id)arg1;	// IMP=0x00000000012a19ea
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2;	// IMP=0x00000000012a197a
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x00000000012a18cc
- (id)dateFromComponents:(id)arg1;	// IMP=0x00000000012a187c
- (id)initWithCalendar:(id)arg1;	// IMP=0x00000000012a1816

@end

