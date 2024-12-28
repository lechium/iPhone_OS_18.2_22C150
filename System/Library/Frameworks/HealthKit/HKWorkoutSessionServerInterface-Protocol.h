//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKWorkoutConfiguration, NSArray, NSData, NSDate, NSDictionary;

@protocol HKWorkoutSessionServerInterface
- (void)remote_sendDataToRemoteWorkoutSession:(NSData *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_stopMirroringToCompanionDeviceWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_startMirroringToCompanionDeviceWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_enableAutomaticDetectionForActivityConfigurations:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_endCurrentActivityOnDate:(NSDate *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_beginNewActivityWithConfiguration:(HKWorkoutConfiguration *)arg1 date:(NSDate *)arg2 metadata:(NSDictionary *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)remote_recoverWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_syncSessionEvent:(long long)arg1 date:(NSDate *)arg2;
- (void)remote_setTargetState:(long long)arg1 date:(NSDate *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_setupMirroredSessionWithHandler:(void (^)(_HKWorkoutSessionSnapshot *, NSError *))arg1;
- (void)remote_setupTaskServerWithCompletion:(void (^)(_Bool, NSError *))arg1;
@end
