//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthMobility/NSObject-Protocol.h>

@class HKMobilityWalkingSteadinessNotificationStatus, HKMobilityWalkingSteadinessOnboardingStatus;

@protocol HKMobilityWalkingSteadinessFeatureStatusManagerClient <NSObject>
- (void)client_didUpdateFitnessTrackingEnabled:(_Bool)arg1;
- (void)client_didUpdateNotificationStatus:(HKMobilityWalkingSteadinessNotificationStatus *)arg1;
- (void)client_didUpdateOnboardingStatus:(HKMobilityWalkingSteadinessOnboardingStatus *)arg1;
@end

