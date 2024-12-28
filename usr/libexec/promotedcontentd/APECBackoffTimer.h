//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDateInterval;
@protocol APClock;

@interface APECBackoffTimer : NSObject
{
    id <APClock> _clock;	// 8 = 0x8
    long long _currentIndex;	// 16 = 0x10
    NSDateInterval *_currentTimer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000f88c7
@property(retain, nonatomic) NSDateInterval *currentTimer; // @synthesize currentTimer=_currentTimer;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) id <APClock> clock; // @synthesize clock=_clock;
- (void)startTimerAt:(long long)arg1;	// IMP=0x00100000000f87b9
- (long long)nextIndex;	// IMP=0x00100000000f8754
- (long long)indexContainingDuration:(double)arg1;	// IMP=0x00100000000f871c
- (void)startNextTimer;	// IMP=0x00100000000f86eb
- (void)startMinimumTimer:(double)arg1;	// IMP=0x00100000000f86ba
- (void)resetTimer;	// IMP=0x00100000000f8680
- (_Bool)isWaitingForBackoff;	// IMP=0x00100000000f85ad
@property(readonly, nonatomic) NSDate *scheduledDate;
- (id)initWithClock:(id)arg1;	// IMP=0x00100000000f84e4

@end
