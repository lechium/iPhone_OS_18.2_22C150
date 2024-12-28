//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDAccountController, IDSDServiceController, IDSOTRController, IDSPeerIDManager, IDSPublicKeyStorage, IDSRateLimiter, IDSRegistrationKeyManager;

@interface IDSEncrypterBuilder : NSObject
{
    _Bool _avoidMainQueue;	// 8 = 0x8
    IDSPublicKeyStorage *_publicKeyStorage;	// 16 = 0x10
    IDSPeerIDManager *_peerIDManager;	// 24 = 0x18
    IDSDAccountController *_accountController;	// 32 = 0x20
    IDSRegistrationKeyManager *_registrationKeyManager;	// 40 = 0x28
    IDSRateLimiter *_rateLimiter;	// 48 = 0x30
    IDSOTRController *_OTRController;	// 56 = 0x38
    IDSDServiceController *_serviceController;	// 64 = 0x40
    long long _forceEncryptionType;	// 72 = 0x48
}

+ (id)builderWithPublicKeyStorage:(id)arg1 peerIDManager:(id)arg2 accountController:(id)arg3 registrationKeyManager:(id)arg4 rateLimiter:(id)arg5 OTRController:(id)arg6 serviceController:(id)arg7 avoidMainQueue:(_Bool)arg8 forceEncryptionType:(long long)arg9;	// IMP=0x0040000000100ac9
- (void).cxx_destruct;	// IMP=0x00200000001015c8
@property(nonatomic) long long forceEncryptionType; // @synthesize forceEncryptionType=_forceEncryptionType;
@property(nonatomic) _Bool avoidMainQueue; // @synthesize avoidMainQueue=_avoidMainQueue;
@property(retain, nonatomic) IDSDServiceController *serviceController; // @synthesize serviceController=_serviceController;
@property(retain, nonatomic) IDSOTRController *OTRController; // @synthesize OTRController=_OTRController;
@property(retain, nonatomic) IDSRateLimiter *rateLimiter; // @synthesize rateLimiter=_rateLimiter;
@property(retain, nonatomic) IDSRegistrationKeyManager *registrationKeyManager; // @synthesize registrationKeyManager=_registrationKeyManager;
- (void)setAccountController:(id)arg1;	// IMP=0x0010000000101525
- (id)accountController;	// IMP=0x001000000010151b
@property(retain, nonatomic) IDSPeerIDManager *peerIDManager; // @synthesize peerIDManager=_peerIDManager;
@property(retain, nonatomic) IDSPublicKeyStorage *publicKeyStorage; // @synthesize publicKeyStorage=_publicKeyStorage;
- (id)verifierWithEndpoint:(id)arg1 keyType:(unsigned int)arg2 keyDiversifier:(id)arg3;	// IMP=0x0010000000101436
- (id)verifierWithLocalURI:(id)arg1 remoteURI:(id)arg2 pushToken:(id)arg3 service:(id)arg4 cert:(id)arg5 keyType:(unsigned int)arg6 keyDiversifier:(id)arg7;	// IMP=0x001000000010129f
- (id)signerWithKeyType:(unsigned int)arg1 keyDiversifier:(id)arg2 service:(id)arg3;	// IMP=0x00100000001011e4
- (id)encrypterWithOTRToken:(id)arg1;	// IMP=0x0010000000101187
- (id)encrypterWithEndpoint:(id)arg1;	// IMP=0x0010000000101098
- (id)encrypterWithDeviceID:(id)arg1;	// IMP=0x0010000000100fb8
- (id)encrypterWithLocalURI:(id)arg1 remoteURI:(id)arg2 pushToken:(id)arg3 service:(id)arg4 cert:(id)arg5;	// IMP=0x0010000000100de3
- (id)_createHashingDeviceIdentityEncrypter;	// IMP=0x0010000000100d4a
- (id)initWithPublicKeyStorage:(id)arg1 peerIDManager:(id)arg2 accountController:(id)arg3 registrationKeyManager:(id)arg4 rateLimiter:(id)arg5 OTRController:(id)arg6 serviceController:(id)arg7 avoidMainQueue:(_Bool)arg8 forceEncryptionType:(long long)arg9;	// IMP=0x0010000000100bf1

@end
