//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthMobilityDaemon/NSObject-Protocol.h>

@protocol HKMobilityWalkingSteadinessFeatureStatusManagerServerInterface <NSObject>
- (void)remote_stopObservingChanges;
- (void)remote_startObservingChangesWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_resetOnboardingWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_setNotificationsEnabled:(_Bool)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_fitnessTrackingEnabledWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_notificationStatusWithCompletion:(void (^)(HKMobilityWalkingSteadinessNotificationStatus *, NSError *))arg1;
- (void)remote_onboardingStatusWithCompletion:(void (^)(HKMobilityWalkingSteadinessOnboardingStatus *, NSError *))arg1;
@end
