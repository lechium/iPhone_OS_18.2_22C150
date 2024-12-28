//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBModelContainer.h>

@class HMFPairingIdentity;

__attribute__((visibility("hidden")))
@interface HMDLegacyModelContainer : HMBModelContainer
{
    HMFPairingIdentity *_pairingIdentity;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000f34ce5
@property(readonly, nonatomic) HMFPairingIdentity *pairingIdentity; // @synthesize pairingIdentity=_pairingIdentity;
- (id)decodePropertyValueFromData:(id)arg1 forProperty:(id)arg2 field:(id)arg3 storageLocation:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x0000000000f34af1
- (id)encodePropertyValue:(id)arg1 forProperty:(id)arg2 field:(id)arg3 storageLocation:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x0000000000f3493e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f348bc
- (id)encryptData:(id)arg1 compress:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000f347b5
- (id)decryptData:(id)arg1 decompress:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000f3469b
- (id)modelFromData:(id)arg1 encoding:(unsigned long long)arg2 storageLocation:(unsigned long long)arg3 type:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000f34294
- (Class)modelClassForTypeName:(id)arg1;	// IMP=0x0000000000f340b1
- (id)initWithDataVersion:(id)arg1 legacyDataVersion:(id)arg2 pairingIdentity:(id)arg3;	// IMP=0x0000000000f3402f

@end
