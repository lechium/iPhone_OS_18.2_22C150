//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileTimer/MTStateMachineInfoProvider-Protocol.h>

@class MTAlarm, NSDate;

@protocol MTSleepModeStateMachineInfoProvider <MTStateMachineInfoProvider>
@property(readonly, nonatomic) _Bool isUserAsleep;
@property(readonly, nonatomic) NSDate *keepOffUntilDate;
@property(readonly, nonatomic) NSDate *currentDate;
@property(readonly, nonatomic) MTAlarm *sleepAlarm;
- (_Bool)isSleepModeEnabled:(_Bool *)arg1;
@end
