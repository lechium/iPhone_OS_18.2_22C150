//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC11WeatherMaps23InteractiveRefreshTimer : _TtCs12_SwiftObject
{
    MISSING_TYPE *isPaused;	// 16 = 0x10
    MISSING_TYPE *interval;	// 24 = 0x18
    MISSING_TYPE *block;	// 32 = 0x20
    MISSING_TYPE *timer;	// 48 = 0x30
    MISSING_TYPE *pausedTimerNextFireDate;	// 0 = 0x0
    MISSING_TYPE *didExperienceSignificantTimeChangeWhilePaused;	// 0 = 0x0
}

- (void)notifiedSignificantTimeChange:(id)arg1;	// IMP=0x00000000000c82f1

@end

