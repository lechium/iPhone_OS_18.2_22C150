//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileTimer/NSCopying-Protocol.h>
#import <MobileTimer/NSObject-Protocol.h>
#import <MobileTimer/NSSecureCoding-Protocol.h>

@protocol MTTimerTime;

@protocol MTTimerTime <NSObject, NSCopying, NSSecureCoding>
@property(readonly, nonatomic) double remainingTime;
- (long long)compare:(id <MTTimerTime>)arg1;
- (_Bool)isEqualToTime:(id <MTTimerTime>)arg1;
@end
