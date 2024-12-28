//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSCertifiedDeliveryReplayCommitter, IDSEndpoint, IDSSigningKeyDiversifier, NSString;
@protocol IDSMPFullDeviceIdentityContainerEncrypter, IDSMPFullDeviceIdentitySigner;

@interface IDSEndpointEncrypter : NSObject
{
    unsigned int _keyType;	// 8 = 0x8
    id <IDSMPFullDeviceIdentityContainerEncrypter> _fullDeviceIdentityContainerEncrypter;	// 16 = 0x10
    IDSCertifiedDeliveryReplayCommitter *_replayCommitter;	// 24 = 0x18
    IDSEndpoint *_endpoint;	// 32 = 0x20
    long long _forceEncryptionType;	// 40 = 0x28
    id <IDSMPFullDeviceIdentitySigner> _fullDeviceIdentitySigner;	// 48 = 0x30
    IDSSigningKeyDiversifier *_keyDiversifier;	// 56 = 0x38
    id <IDSMPFullDeviceIdentityContainerEncrypter> _fullDeviceIdentityEncrypter;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000378751
@property(retain, nonatomic) id <IDSMPFullDeviceIdentityContainerEncrypter> fullDeviceIdentityEncrypter; // @synthesize fullDeviceIdentityEncrypter=_fullDeviceIdentityEncrypter;
@property(readonly, nonatomic) IDSSigningKeyDiversifier *keyDiversifier; // @synthesize keyDiversifier=_keyDiversifier;
@property(readonly, nonatomic) unsigned int keyType; // @synthesize keyType=_keyType;
@property(readonly, nonatomic) id <IDSMPFullDeviceIdentitySigner> fullDeviceIdentitySigner; // @synthesize fullDeviceIdentitySigner=_fullDeviceIdentitySigner;
@property(nonatomic) long long forceEncryptionType; // @synthesize forceEncryptionType=_forceEncryptionType;
@property(retain, nonatomic) IDSEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, nonatomic) IDSCertifiedDeliveryReplayCommitter *replayCommitter; // @synthesize replayCommitter=_replayCommitter;
@property(readonly, nonatomic) id <IDSMPFullDeviceIdentityContainerEncrypter> fullDeviceIdentityContainerEncrypter; // @synthesize fullDeviceIdentityContainerEncrypter=_fullDeviceIdentityContainerEncrypter;
- (_Bool)_isSecKeyType;	// IMP=0x00100000003786bd
- (_Bool)_isNGMKeyType;	// IMP=0x00100000003786a5
- (_Bool)verifySignedData:(id)arg1 matchesData:(id)arg2 forType:(long long)arg3 onQueue:(id)arg4 error:(id *)arg5;	// IMP=0x001000000037824f
- (void)verifySignedData:(id)arg1 matchesData:(id)arg2 forType:(long long)arg3 onQueue:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000377ed4
- (void)decryptData:(id)arg1 decryptionContext:(id)arg2 usingIdentifier:(id)arg3 onQueue:(id)arg4 isRetry:(_Bool)arg5 replayKey:(id)arg6 withCompletion:(CDUnknownBlockType)arg7;	// IMP=0x0010000000377ea0
- (void)decryptData:(id)arg1 usingIdentifier:(id)arg2 onQueue:(id)arg3 isRetry:(_Bool)arg4 replayKey:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;	// IMP=0x00100000003776f9
- (id)decryptData:(id)arg1 usingIdentifier:(id)arg2 isRetry:(_Bool)arg3 onQueue:(id)arg4 error:(id *)arg5;	// IMP=0x001000000037718a
- (id)legacyEncryptData:(id)arg1 withEncryptedAttributes:(id)arg2 onQueue:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000376e52
- (id)encryptData:(id)arg1 encryptionContext:(id)arg2 forceSizeOptimizations:(_Bool)arg3 resetState:(_Bool)arg4 withEncryptedAttributes:(id)arg5 usedIdentifier:(id *)arg6 onQueue:(id)arg7 metadata:(id *)arg8 error:(id *)arg9;	// IMP=0x0010000000376775
- (id)initWithEndpoint:(id)arg1 fullDeviceIdentitySigner:(id)arg2 keyType:(unsigned int)arg3 keyDiversifier:(id)arg4;	// IMP=0x00100000003766b0
- (id)initWithEndpoint:(id)arg1 fullDeviceIdentityContainerEncrypter:(id)arg2 replayCommitter:(id)arg3 forceEncryptionType:(long long)arg4;	// IMP=0x00100000003765e9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
