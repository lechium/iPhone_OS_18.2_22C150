//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (SMExtensions)
- (id)timeStringWithPreposition:(long long)arg1 capitalized:(_Bool)arg2;	// IMP=0x0070000000044716
- (id)dateString;	// IMP=0x007000000004469c
- (id)absoluteTimeString:(long long)arg1 preposition:(long long)arg2 capitalized:(_Bool)arg3;	// IMP=0x0070000000044462
- (id)relativeTimeString;	// IMP=0x00700000000443d4
- (id)roundedTime;	// IMP=0x0070000000044390
- (id)roundedFormattedTimeWithRoundedMinutesUnit:(long long)arg1 allowedUnits:(unsigned long long)arg2;	// IMP=0x007000000004429f
- (id)preciseFormattedTime;	// IMP=0x0070000000044283
@end
