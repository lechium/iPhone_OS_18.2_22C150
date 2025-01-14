//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCalendar, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UIDatePickerCalendarDaySet : NSObject
{
    NSCalendar *_calendar;	// 8 = 0x8
    NSMutableDictionary *_loadedDays;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000001a60c01
- (id)loadedDays;	// IMP=0x0000000001a60be3
- (void)cleanupDaysKeepingDaysForMonths:(id)arg1;	// IMP=0x0000000001a609ed
- (id)daysForMonth:(id)arg1 includingOverlapDays:(_Bool)arg2;	// IMP=0x0000000001a60054
- (id)_partialDaysForMonth:(id)arg1 atBeginningOfMonth:(_Bool)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000001a5fe2a
- (id)_createDaysForMonth:(id)arg1;	// IMP=0x0000000001a5fabe
- (id)initWithCalendar:(id)arg1;	// IMP=0x0000000001a5fa39

@end

