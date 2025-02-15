//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityBaseRequirement : NSObject
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000144b36
+ (id)requirementIdentifier;	// IMP=0x00100000002e9965
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000144b44
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000144b3e
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000144ab5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000144aaa
- (id)_hk_featureAvailabilityRequirements;	// IMP=0x0000000000144a4a
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002e99a6
@property(readonly, nonatomic) NSString *requirementDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

