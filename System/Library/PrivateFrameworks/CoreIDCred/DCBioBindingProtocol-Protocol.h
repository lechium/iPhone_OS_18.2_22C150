//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreIDCred/NSObject-Protocol.h>

@class DCCredentialAuthorizationToken, DCCredentialTrust;

@protocol DCBioBindingProtocol <NSObject>
- (void)deleteGlobalAuthACLWithCompletion:(void (^)(NSError *))arg1;
- (void)establishPrearmTrustV2:(DCCredentialTrust *)arg1 completion:(void (^)(DCCredentialAttestation *, NSError *))arg2;
- (void)prearmCredentialWithAuthorizationToken:(DCCredentialAuthorizationToken *)arg1 completion:(void (^)(NSError *))arg2;
- (void)nonceForAuthorizationTokenWithCompletion:(void (^)(DCCredentialNonce *, NSError *))arg1;
@end

