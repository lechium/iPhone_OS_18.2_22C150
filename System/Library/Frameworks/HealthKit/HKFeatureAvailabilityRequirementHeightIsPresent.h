//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityRequirementHeightIsPresent
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000d84aa
+ (id)requirementIdentifier;	// IMP=0x00100000000d7efe
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d84b8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d84b2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d849f
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d841e
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;	// IMP=0x00000000000d8364
- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;	// IMP=0x00000000000d809d
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000d7f1f
@property(readonly, nonatomic) NSString *requirementDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
