//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDateInterval, NSDictionary, NSError, NSUUID;

@protocol HKPersistableWorkoutEvent
@property(readonly, copy, nonatomic) NSDictionary *metadata;
@property(readonly, copy, nonatomic) NSError *error;
@property(readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property(readonly, nonatomic) long long workoutEventType;
@property(readonly, copy, nonatomic) NSUUID *sessionUUID;
- (id)initWithWorkoutEventType:(long long)arg1 sessionUUID:(NSUUID *)arg2 dateInterval:(NSDateInterval *)arg3 metadata:(NSDictionary *)arg4 error:(NSError *)arg5;
@end

