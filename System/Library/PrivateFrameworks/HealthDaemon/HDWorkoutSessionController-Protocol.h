//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class CMWorkoutManager, HDProfile, HDWorkoutSessionConfiguration, HKWorkoutActivity, HKWorkoutConfiguration, NSArray, NSData, NSDate, NSString, NSUUID;
@protocol HDWorkoutDataAccumulator, HDWorkoutSessionStateController;

@protocol HDWorkoutSessionController <NSObject>
+ (_Bool)supportsWorkoutConfiguration:(HKWorkoutConfiguration *)arg1 clientApplicationIdentifier:(NSString *)arg2;
+ (void)willFinishSessionWithRecoveryData:(NSData *)arg1 profile:(HDProfile *)arg2;
+ (NSString *)recoveryIdentifier;
- (_Bool)enableAutomaticDetectionForActivityConfigurations:(NSArray *)arg1;
- (void)endCurrentActivity:(HKWorkoutActivity *)arg1;
- (void)beginNewActivity:(HKWorkoutActivity *)arg1;
- (void)unitTest_setCMWorkoutManager:(CMWorkoutManager *)arg1;
- (void)hktest_setStateTransitionCompletionHandler:(void (^)(long long, long long))arg1;
- (void)workoutSessionServer:(id <HDWorkoutSessionStateController>)arg1 accumulatorDidChange:(id <HDWorkoutDataAccumulator>)arg2;
- (void)workoutSessionServer:(id <HDWorkoutSessionStateController>)arg1 didTransitionFromState:(long long)arg2 toState:(long long)arg3 date:(NSDate *)arg4;
- (void)workoutSessionServer:(id <HDWorkoutSessionStateController>)arg1 didChangeConfiguration:(HDWorkoutSessionConfiguration *)arg2;
- (id)initWithProfile:(HDProfile *)arg1 sessionConfiguration:(HDWorkoutSessionConfiguration *)arg2 sessionStateController:(id <HDWorkoutSessionStateController>)arg3 recoveryState:(NSData *)arg4;

@optional
- (void)fakeActivityDetection:(NSUUID *)arg1 workoutActivity:(HKWorkoutActivity *)arg2;
- (void)unitTest_suggestActivity:(HKWorkoutActivity *)arg1;
@end
