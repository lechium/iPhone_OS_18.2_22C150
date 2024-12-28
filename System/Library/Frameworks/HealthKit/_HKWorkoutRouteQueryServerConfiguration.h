//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKQueryServerConfiguration.h"

@class HKWorkoutRoute, NSDateInterval, NSUUID;

__attribute__((visibility("hidden")))
@interface _HKWorkoutRouteQueryServerConfiguration : HKQueryServerConfiguration
{
    HKWorkoutRoute *_workoutRoute;	// 8 = 0x8
    NSUUID *_workoutUUID;	// 16 = 0x10
    NSDateInterval *_dateInterval;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000dc2dd
- (void).cxx_destruct;	// IMP=0x00000000000dc530
@property(copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(copy, nonatomic) NSUUID *workoutUUID; // @synthesize workoutUUID=_workoutUUID;
@property(retain, nonatomic) HKWorkoutRoute *workoutRoute; // @synthesize workoutRoute=_workoutRoute;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000dc40d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000dc2e5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000dc24f

@end
