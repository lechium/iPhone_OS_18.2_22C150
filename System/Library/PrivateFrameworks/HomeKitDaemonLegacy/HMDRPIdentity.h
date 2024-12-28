//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFKey;

__attribute__((visibility("hidden")))
@interface HMDRPIdentity : HMFObject
{
    HMFKey *_deviceIRK;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000005b1b2c
+ (id)logCategory;	// IMP=0x00100000005b1afc
+ (id)identityWithRPIdentity:(id)arg1;	// IMP=0x00100000005b1a13
- (void).cxx_destruct;	// IMP=0x00000000005b1a00
@property(readonly, copy) HMFKey *deviceIRK; // @synthesize deviceIRK=_deviceIRK;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000005b1977
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005b18e7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005b18dc
- (id)logIdentifier;	// IMP=0x00000000005b18c2
- (_Bool)isEqualToRPIndentity:(id)arg1;	// IMP=0x00000000005b182d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005b1756
- (unsigned long long)hash;	// IMP=0x00000000005b1712
- (id)shortDescription;	// IMP=0x00000000005b16f8
- (id)initWithDeviceIRK:(id)arg1;	// IMP=0x00000000005b1653
- (id)init;	// IMP=0x00000000005b15ab

@end
