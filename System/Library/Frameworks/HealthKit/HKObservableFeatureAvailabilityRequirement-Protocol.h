//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKFeatureAvailabilityRequirement-Protocol.h>

@class HKFeatureAvailabilityRequirementEvaluationDataSource;
@protocol HKFeatureAvailabilityRequirementSatisfactionObserver;

@protocol HKObservableFeatureAvailabilityRequirement <HKFeatureAvailabilityRequirement>
- (void)unregisterObserver:(id <HKFeatureAvailabilityRequirementSatisfactionObserver>)arg1 fromDataSource:(HKFeatureAvailabilityRequirementEvaluationDataSource *)arg2;
- (void)registerObserver:(id <HKFeatureAvailabilityRequirementSatisfactionObserver>)arg1 forDataSource:(HKFeatureAvailabilityRequirementEvaluationDataSource *)arg2;
@end
