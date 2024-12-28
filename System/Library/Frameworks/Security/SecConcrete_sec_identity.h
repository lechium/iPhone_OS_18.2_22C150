//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SecConcrete_sec_identity : NSObject
{
    struct __SecIdentity *identity;	// 8 = 0x8
    struct __CFArray *certs;	// 16 = 0x10
    CDUnknownBlockType sign_block;	// 24 = 0x18
    CDUnknownBlockType decrypt_block;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *operation_queue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000053ba5
- (void)dealloc;	// IMP=0x0000000000053b48
- (id)initWithCertificates:(struct __CFArray *)arg1 signBlock:(CDUnknownBlockType)arg2 decryptBlock:(CDUnknownBlockType)arg3 queue:(id)arg4;	// IMP=0x0000000000053a00
- (id)initWithIdentityAndCertificates:(struct __SecIdentity *)arg1 certificates:(struct __CFArray *)arg2;	// IMP=0x0000000000053979
- (id)initWithIdentity:(struct __SecIdentity *)arg1;	// IMP=0x000000000005390a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
