//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityRequirementOnboardingRecordsArePresentForPrerequisiteFeatures
{
    NSArray *_prerequisiteFeatureIdentifiers;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001493f3
+ (id)requirementIdentifier;	// IMP=0x0010000000148ad5
- (void).cxx_destruct;	// IMP=0x0000000000149501
@property(readonly, copy, nonatomic) NSArray *prerequisiteFeatureIdentifiers; // @synthesize prerequisiteFeatureIdentifiers=_prerequisiteFeatureIdentifiers;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000149425
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001493fb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001493e8
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000149369
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;	// IMP=0x000000000014919a
- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;	// IMP=0x0000000000148d81
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000148bad
@property(readonly, nonatomic) NSString *requirementDescription;
- (id)initWithPrerequisiteFeatureIdentifiers:(id)arg1;	// IMP=0x0000000000148a67

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
