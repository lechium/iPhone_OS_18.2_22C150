//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSNumber;

@interface _TtC15PlatformSSOCore44POCryptoKitHPKE_Curve25519_SHA256_ChachaPoly
{
    MISSING_TYPE *encryptionAlgorithm;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000007a960
- (id)encodeAndEncryptJWT:(id)arg1 publicKey:(struct __SecKey *)arg2 otherInfo:(id)arg3 psk:(id)arg4 psk_id:(id)arg5 authPrivateKey:(struct __SecKey *)arg6 auth_kid:(id)arg7 error:(id *)arg8;	// IMP=0x000000000007a630
- (_Bool)decodeAndDecryptJWT:(id)arg1 privateKey:(struct __SecKey *)arg2 otherInfo:(id)arg3 psk:(id)arg4 psk_id:(id)arg5 authPublicKey:(struct __SecKey *)arg6 error:(id *)arg7;	// IMP=0x0000000000079d90
- (id)algValue;	// IMP=0x0000000000079770
- (void)addValuesTo:(id)arg1;	// IMP=0x00000000000796b0
- (id)init;	// IMP=0x00000000000795a0
@property(nonatomic, readonly) NSNumber *encryptionAlgorithm; // @synthesize encryptionAlgorithm;

@end
