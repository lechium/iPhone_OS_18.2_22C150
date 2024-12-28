//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface POJWTEncryptionECDHE_A256GCM : NSObject
{
    NSNumber *_encryptionAlgorithm;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000572d3
@property(readonly, nonatomic) NSNumber *encryptionAlgorithm; // @synthesize encryptionAlgorithm=_encryptionAlgorithm;
- (id)encodeAndEncryptJWT:(id)arg1 publicKey:(struct __SecKey *)arg2 otherInfo:(id)arg3 psk:(id)arg4 psk_id:(id)arg5 authPrivateKey:(struct __SecKey *)arg6 auth_kid:(id)arg7 error:(id *)arg8;	// IMP=0x0000000000055d44
- (_Bool)decodeAndDecryptJWT:(id)arg1 privateKey:(struct __SecKey *)arg2 otherInfo:(id)arg3 psk:(id)arg4 psk_id:(id)arg5 authPublicKey:(struct __SecKey *)arg6 error:(id *)arg7;	// IMP=0x0000000000054fda
- (id)algValue;	// IMP=0x0000000000054fcd
- (void)addValuesToHeader:(id)arg1;	// IMP=0x0000000000054f72
- (id)init;	// IMP=0x0000000000054f20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
