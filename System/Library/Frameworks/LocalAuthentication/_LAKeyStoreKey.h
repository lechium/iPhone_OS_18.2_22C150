//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface _LAKeyStoreKey : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSData *_acl;	// 16 = 0x10
    NSData *_publicKeyHash;	// 24 = 0x18
    id _keyRef;	// 32 = 0x20
    id _pubKeyRef;	// 40 = 0x28
}

+ (id)buildWithDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001062a
- (void).cxx_destruct;	// IMP=0x0000000000011df3
- (_Bool)canVerifyUsingSecKeyAlgorithm:(struct __CFString *)arg1;	// IMP=0x0000000000011d5e
- (void)verifyData:(id)arg1 signature:(id)arg2 secKeyAlgorithm:(struct __CFString *)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000011bc3
- (_Bool)canEncryptUsingSecKeyAlgorithm:(struct __CFString *)arg1;	// IMP=0x0000000000011baa
- (void)encryptData:(id)arg1 secKeyAlgorithm:(struct __CFString *)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001196d
- (_Bool)canExchangeKeysUsingSecKeyAlgorithm:(struct __CFString *)arg1;	// IMP=0x0000000000011954
- (void)exchangeKeysWithPublicKey:(id)arg1 secKeyAlgorithm:(struct __CFString *)arg2 secKeyParameters:(id)arg3 context:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000115ec
- (_Bool)canDecryptUsingSecKeyAlgorithm:(struct __CFString *)arg1;	// IMP=0x00000000000115d3
- (void)decryptData:(id)arg1 secKeyAlgorithm:(struct __CFString *)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000001139d
- (_Bool)canSignUsingSecKeyAlgorithm:(struct __CFString *)arg1;	// IMP=0x0000000000011387
- (void)signData:(id)arg1 secKeyAlgorithm:(struct __CFString *)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000011151
- (void)exportBytesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010cbf
@property(readonly, nonatomic) NSData *publicKeyHash;
@property(readonly, nonatomic) NSData *acl;
@property(readonly, nonatomic) NSString *identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

