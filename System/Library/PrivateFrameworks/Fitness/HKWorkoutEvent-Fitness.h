//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKWorkoutEvent.h>

@class HKQuantity;

@interface HKWorkoutEvent (Fitness)
@property(readonly, nonatomic) double fi_splitPaceInMetersPerSecond;
@property(readonly, nonatomic) HKQuantity *fi_splitDistance;
@property(readonly, nonatomic) double fi_splitActiveDuration;
@property(readonly, nonatomic) double fi_distanceGoalCompletionTime;
@property(readonly, nonatomic) _Bool fi_isSplitEvent;
@property(readonly, nonatomic) _Bool fi_isDistanceGoalCompleteEvent;
@property(readonly, nonatomic) _Bool fi_isCustomSplitEvent;
@end
