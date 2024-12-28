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

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000007f5f55
+ (id)logCategory;	// IMP=0x00100000007f5f25
+ (id)identityWithRPIdentity:(id)arg1;	// IMP=0x00100000007f5e3c
- (void).cxx_destruct;	// IMP=0x00000000007f5e29
@property(readonly, copy) HMFKey *deviceIRK; // @synthesize deviceIRK=_deviceIRK;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000007f5da0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000007f5d10
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000007f5d05
- (id)logIdentifier;	// IMP=0x00000000007f5ceb
- (_Bool)isEqualToRPIndentity:(id)arg1;	// IMP=0x00000000007f5c56
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007f5b7f
- (unsigned long long)hash;	// IMP=0x00000000007f5b3b
- (id)shortDescription;	// IMP=0x00000000007f5b21
- (id)initWithDeviceIRK:(id)arg1;	// IMP=0x00000000007f5a7c
- (id)init;	// IMP=0x00000000007f59d4

@end
