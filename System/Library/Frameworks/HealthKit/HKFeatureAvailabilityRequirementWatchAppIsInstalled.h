//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityRequirementWatchAppIsInstalled
{
    NSString *_bundleIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000d3156
+ (id)requirementIdentifier;	// IMP=0x00100000000d2e54
- (void).cxx_destruct;	// IMP=0x00000000000d3226
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d3188
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d315e
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d3050
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;	// IMP=0x00000000000d2fd0
- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;	// IMP=0x00000000000d2ebb
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000d2e98
@property(readonly, nonatomic) NSString *requirementDescription;
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x00000000000d2de6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
