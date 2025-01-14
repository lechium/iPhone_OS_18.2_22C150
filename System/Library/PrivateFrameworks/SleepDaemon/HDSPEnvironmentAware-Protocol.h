//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SleepDaemon/NSObject-Protocol.h>

@class HDSPEnvironment;

@protocol HDSPEnvironmentAware <NSObject>
+ (id)new;
@property(readonly, nonatomic) __weak HDSPEnvironment *environment;
- (id)initWithEnvironment:(HDSPEnvironment *)arg1;
- (id)init;

@optional
- (void)environmentWillInvalidate:(HDSPEnvironment *)arg1;
- (void)environmentDidBecomeReady:(HDSPEnvironment *)arg1;
- (void)environmentWillBecomeReady:(HDSPEnvironment *)arg1;
@end

