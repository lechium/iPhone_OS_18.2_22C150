//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _HKFeatureAvailabilityRequirementCountryIsSupportedOnActiveRemoteDevice
{
    _Bool _isSupportedIfCountryListMissing;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000409b6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000040a3b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000409be
- (unsigned long long)hash;	// IMP=0x0000000000040977
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000408ed
- (id)isSatisfiedWithOnboardingEligibility:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000040834
- (id)initWithFeatureIdentifier:(id)arg1 isSupportedIfCountryListMissing:(_Bool)arg2;	// IMP=0x00000000000407f2
- (id)initWithFeatureIdentifier:(id)arg1;	// IMP=0x00000000000407de

@end

