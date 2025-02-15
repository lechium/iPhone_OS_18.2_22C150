//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthenticationServices/NSObject-Protocol.h>

@class ASPasswordCredential, NSDictionary, NSError, NSString;

@protocol _ASAccountAuthenticationModificationExtensionHostContextProtocol <NSObject>
- (void)dismissRequestUI;
- (void)prepareToCancelRequestWithError:(NSError *)arg1 completion:(void (^)(void))arg2;
- (void)prepareToCompleteRequestWithUpdatedCredential:(ASPasswordCredential *)arg1 userInfo:(NSDictionary *)arg2 completion:(void (^)(void))arg3;
- (void)prepareToCompleteUpgradeToSignInWithAppleWithUserInfo:(NSDictionary *)arg1 completion:(void (^)(void))arg2;
- (void)getSignInWithAppleAuthorizationWithState:(NSString *)arg1 nonce:(NSString *)arg2 completion:(void (^)(ASAuthorizationAppleIDCredential *, NSError *))arg3;
@end

