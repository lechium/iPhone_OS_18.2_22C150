//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKFeatureAvailabilityRequirementsProviding-Protocol.h>
#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSObject-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKFeatureAvailabilityRequirementEvaluationDataSource, NSNumber, NSString;

@protocol HKFeatureAvailabilityRequirement <NSObject, NSSecureCoding, NSCopying, HKFeatureAvailabilityRequirementsProviding>
+ (NSString *)requirementIdentifier;
@property(readonly, nonatomic) NSString *requirementDescription;
- (NSNumber *)isSatisfiedWithDataSource:(HKFeatureAvailabilityRequirementEvaluationDataSource *)arg1 error:(id *)arg2;
@end

