//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSData, TetraPublicSigningKeyWrapper, _TtC17MessageProtection22Kyber1024ObjCPublicKey;

@interface _TtC17MessageProtection17TetraRegistration : NSObject
{
    MISSING_TYPE *ecdhPublicKey;	// 0 = 0x0
    MISSING_TYPE *kyberPublicKey;	// 1887007839 = 0x7079745f
    MISSING_TYPE *signature;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *timestamp;	// 605968 = 0x93f10
    MISSING_TYPE *tetraVersion;	// 3839 = 0xeff
    MISSING_TYPE *signingPublicKey;	// 605968 = 0x93f10
}

- (void).cxx_destruct;	// IMP=0x000000000007ca60
- (id)init;	// IMP=0x000000000007c9d0
@property(nonatomic, readonly) NSData *registrationData;
- (id)initWithKyberPublicKey:(id)arg1 ecdhPublicKey:(id)arg2 timestamp:(double)arg3 version:(unsigned int)arg4 signedBy:(id)arg5;	// IMP=0x000000000007c190
- (id)initWithTetraRegistrationData:(id)arg1 ecdhPublicKey:(id)arg2 version:(unsigned int)arg3 timestamp:(double)arg4 signedBy:(id)arg5 isEncrypting:(_Bool)arg6 error:(id *)arg7;	// IMP=0x000000000007c0e0
@property(nonatomic, readonly) TetraPublicSigningKeyWrapper *signingPublicKey; // @synthesize signingPublicKey;
@property(nonatomic, readonly) unsigned int tetraVersion; // @synthesize tetraVersion;
@property(nonatomic, readonly) double timestamp; // @synthesize timestamp;
@property(nonatomic, readonly) NSData *signature;
@property(nonatomic, readonly) _TtC17MessageProtection22Kyber1024ObjCPublicKey *kyberPublicKey; // @synthesize kyberPublicKey;
@property(nonatomic, readonly) NSData *serializedECDHPublicKey;

@end

