//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RMSecurityUtilities : NSObject
{
}

+ (_Bool)checkValidAfterWithCertificate:(struct __SecCertificate *)arg1 interval:(double)arg2;	// IMP=0x0040000000077e34
+ (void)generateSelfSignedCertificateAndPrivateKeyWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000778a7
+ (id)serializeCertificateChain:(id)arg1;	// IMP=0x001000000007769a
+ (id)deserializeCertificateChain:(id)arg1;	// IMP=0x0010000000077352
+ (struct __SecKey *)_deserializePrivateKey:(id)arg1 privateKeyIsExportable:(_Bool)arg2;	// IMP=0x001000000007700c
+ (id)_serializePrivateKey:(struct __SecKey *)arg1 privateKeyIsExportable:(_Bool)arg2;	// IMP=0x0010000000076ee1
+ (void)_deserializeIdentity:(id)arg1 privateKeyIsExportable:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000076ba4
+ (void)deserializeBAAIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000076b8d
+ (void)deserializeIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000076b73
+ (id)_serializeIdentityWithPrivateKey:(struct __SecKey *)arg1 certificateChain:(id)arg2 privateKeyIsExportable:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0010000000076a1d
+ (id)serializeBAAIdentityWithPrivateKey:(struct __SecKey *)arg1 certificateChain:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000076a05
+ (id)serializeIdentityWithPrivateKey:(struct __SecKey *)arg1 certificateChain:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000769ea

@end
