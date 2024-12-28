//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class NSArray, NSDate;
@protocol HDWorkoutDataAccumulatorObserver;

@protocol HDWorkoutDataAccumulator <NSObject>
- (NSDate *)startDate;
- (NSArray *)currentEvents;
- (void)removeDataAccumulationObserver:(id <HDWorkoutDataAccumulatorObserver>)arg1;
- (void)addDataAccumulationObserver:(id <HDWorkoutDataAccumulatorObserver>)arg1;
@end
