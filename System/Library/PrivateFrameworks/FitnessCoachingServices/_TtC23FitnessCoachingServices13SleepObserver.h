//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC23FitnessCoachingServices13SleepObserver : NSObject
{
    MISSING_TYPE *dateProvider;	// 8 = 0x8
    MISSING_TYPE *duetObserver;	// 48 = 0x30
    MISSING_TYPE *lock;	// 88 = 0x58
    MISSING_TYPE *notificationCenter;	// 96 = 0x60
    MISSING_TYPE *platform;	// 104 = 0x68
    MISSING_TYPE *state;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000008330
- (id)init;	// IMP=0x00000000000083a0
- (void)dealloc;	// IMP=0x0000000000008310
- (void)sleepDataProviderLastAlarmWakeUpDateDidChange;	// IMP=0x0000000000008f00
- (void)sleepDataProviderLastGoodMorningDismissedDateDidChange;	// IMP=0x0000000000008ef0
- (void)sleepDataProviderUserDayDidUpdate;	// IMP=0x00000000000089a0
- (id)currentCalendar;	// IMP=0x0000000000008900
- (id)currentDate;	// IMP=0x00000000000087f0

@end
