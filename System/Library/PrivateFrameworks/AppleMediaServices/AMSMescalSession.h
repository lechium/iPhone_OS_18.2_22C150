//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSMescalFairplaySession;

__attribute__((visibility("hidden")))
@interface AMSMescalSession : NSObject
{
    AMSMescalFairplaySession *_session;	// 8 = 0x8
}

+ (id)sessionWithType:(long long)arg1;	// IMP=0x006000000042de61
+ (id)primeSession;	// IMP=0x006000000042ddf7
+ (id)defaultSession;	// IMP=0x006000000042dd8d
- (void).cxx_destruct;	// IMP=0x000000000042ef81
- (_Bool)verifyPrimeSignature:(id)arg1 error:(id *)arg2;	// IMP=0x000000000042ef30
- (id)primeSignatureForData:(id)arg1 bag:(id)arg2 error:(id *)arg3;	// IMP=0x000000000042eed1
- (id)signData:(id)arg1 bag:(id)arg2 error:(id *)arg3;	// IMP=0x000000000042ee72
- (id)_cachedCertPath;	// IMP=0x000000000042ed34
- (id)_cachedCertData;	// IMP=0x000000000042e839
- (_Bool)_cacheCertData:(id)arg1 expiration:(double)arg2;	// IMP=0x000000000042e1d9
- (id)verifyPrimeSignature:(id)arg1;	// IMP=0x000000000042e14d
- (id)verifyData:(id)arg1 withSignature:(id)arg2 bag:(id)arg3;	// IMP=0x000000000042e057
- (id)signData:(id)arg1 bag:(id)arg2;	// IMP=0x000000000042df80
- (id)primeSignatureForData:(id)arg1 bag:(id)arg2;	// IMP=0x000000000042dea9
- (id)initWithType:(long long)arg1;	// IMP=0x000000000042d99c

@end
