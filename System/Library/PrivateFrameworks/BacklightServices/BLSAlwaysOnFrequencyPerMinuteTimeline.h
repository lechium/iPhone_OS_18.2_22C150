//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BLSAlwaysOnTimeline.h"

@class NSCalendar;

__attribute__((visibility("hidden")))
@interface BLSAlwaysOnFrequencyPerMinuteTimeline : BLSAlwaysOnTimeline
{
    NSCalendar *_calendar;	// 24 = 0x18
    long long _frequencyPerMinute;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000013e8e
- (id)unconfiguredEntriesForDateInterval:(id)arg1 previousEntry:(id)arg2;	// IMP=0x00000000000132b0
- (long long)requestedFidelityForStartEntryInDateInterval:(id)arg1 withPreviousEntry:(id)arg2;	// IMP=0x0000000000013275
- (id)description;	// IMP=0x00000000000130f2
- (id)initWithPerMinuteUpdateFrequency:(long long)arg1 identifier:(id)arg2 configure:(CDUnknownBlockType)arg3;	// IMP=0x0000000000012fc4

@end
