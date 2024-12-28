//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PlatformSSOCore/NSObject-Protocol.h>

@class NSData, NSNumber, NSString, POJWT, POMutableJWT;

@protocol POJWTEncryptionAlgorithm <NSObject>
@property(readonly, nonatomic) NSNumber *encryptionAlgorithm;
- (NSString *)algValue;
- (_Bool)decodeAndDecryptJWT:(POJWT *)arg1 privateKey:(struct __SecKey *)arg2 otherInfo:(NSString *)arg3 psk:(NSData *)arg4 psk_id:(NSData *)arg5 authPublicKey:(struct __SecKey *)arg6 error:(id *)arg7;
- (NSString *)encodeAndEncryptJWT:(POMutableJWT *)arg1 publicKey:(struct __SecKey *)arg2 otherInfo:(NSString *)arg3 psk:(NSData *)arg4 psk_id:(NSData *)arg5 authPrivateKey:(struct __SecKey *)arg6 auth_kid:(NSData *)arg7 error:(id *)arg8;
@end
