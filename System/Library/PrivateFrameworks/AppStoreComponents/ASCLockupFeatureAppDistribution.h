//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ASCLockupFeatureAppDistribution : NSObject
{
    NSString *_distributorBundleId;	// 8 = 0x8
    NSString *_appVersionId;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000027e4f
- (void).cxx_destruct;	// IMP=0x000000000002832b
@property(readonly, copy, nonatomic) NSString *appVersionId; // @synthesize appVersionId=_appVersionId;
@property(readonly, copy, nonatomic) NSString *distributorBundleId; // @synthesize distributorBundleId=_distributorBundleId;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000028084
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000027fc7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000027f19
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000027e57
- (id)initWithDistributorBundleId:(id)arg1 appVersionId:(id)arg2;	// IMP=0x0000000000027d96

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

