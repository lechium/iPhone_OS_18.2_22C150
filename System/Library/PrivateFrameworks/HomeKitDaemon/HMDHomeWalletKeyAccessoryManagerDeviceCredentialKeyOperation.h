//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDUser, NSData, NSSet;

__attribute__((visibility("hidden")))
@interface HMDHomeWalletKeyAccessoryManagerDeviceCredentialKeyOperation : HMFObject
{
    NSData *_deviceCredentialKey;	// 8 = 0x8
    NSSet *_accessoriesUUIDs;	// 16 = 0x10
    HMDUser *_user;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000cdd162
@property(readonly) __weak HMDUser *user; // @synthesize user=_user;
@property(readonly, copy) NSSet *accessoriesUUIDs; // @synthesize accessoriesUUIDs=_accessoriesUUIDs;
@property(readonly, copy) NSData *deviceCredentialKey; // @synthesize deviceCredentialKey=_deviceCredentialKey;
- (id)attributeDescriptions;	// IMP=0x0000000000cdcf7f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cdcf74
- (id)operationByMergingWithOperation:(id)arg1;	// IMP=0x0000000000cdce3d
- (id)initWithDeviceCredentialKey:(id)arg1 accessories:(id)arg2 user:(id)arg3;	// IMP=0x0000000000cdcc12
- (id)initWithDeviceCredentialKey:(id)arg1 accessoriesUUIDs:(id)arg2 user:(id)arg3;	// IMP=0x0000000000cdcb28

@end

