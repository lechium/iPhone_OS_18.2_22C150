//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityRegionAvailabilityRequirement
{
    NSString *_featureIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000d4c6a
- (void).cxx_destruct;	// IMP=0x00000000000d4d3a
@property(readonly, copy, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d4c9c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d4c72
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d4c5f
- (unsigned long long)hash;	// IMP=0x00000000000d4bea
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d4b88
- (id)isSatisfiedWithRegionAvailability:(id)arg1 dataSource:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000d4b0b
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000d4a74
- (id)initWithFeatureIdentifier:(id)arg1;	// IMP=0x00000000000d49fa

@end

