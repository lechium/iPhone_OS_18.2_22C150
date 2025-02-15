//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString;
@protocol CATResettableTimer, CATTimer, OS_dispatch_queue;

@protocol CATTimerSource
- (id <CATTimer>)scheduleInfiniteTimerWithIdentifier:(NSString *)arg1 timeInterval:(double)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3 fireHandler:(void (^)(id <CATTimer>, unsigned long long))arg4;
- (id <CATResettableTimer>)scheduleRepeatTimerWithIdentifier:(NSString *)arg1 timeInterval:(double)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3 totalFires:(unsigned long long)arg4 fireHandler:(void (^)(id <CATResettableTimer>, unsigned long long, _Bool))arg5;
- (id <CATTimer>)scheduleOneShotTimerWithIdentifier:(NSString *)arg1 timeInterval:(double)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3 fireHandler:(void (^)(id <CATTimer>))arg4;
@end

