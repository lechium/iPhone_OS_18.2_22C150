//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate;

@interface _TtC15RelevanceEngine20RESleepScheduleEntry : NSObject
{
    MISSING_TYPE *wakeupTime;	// 101810309 = 0x6118085
    MISSING_TYPE *bedtime;	// 25 = 0x19
}

+ (id)sleepEntryForDatesWithCurrent:(id)arg1 next:(id)arg2 schedule:(id)arg3;	// IMP=0x000000000010b370
- (void).cxx_destruct;	// IMP=0x000000000010b4e0
- (id)init;	// IMP=0x000000000010b480
- (id)initWithWakeupTime:(id)arg1 bedtime:(id)arg2;	// IMP=0x000000000010b180
@property(nonatomic, copy) NSDate *bedtime;
@property(nonatomic, copy) NSDate *wakeupTime;

@end

