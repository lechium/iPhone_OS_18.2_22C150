//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LAContext, NSData, NSString, NSURL, WBSAutoFillPasskey, WBSGlobalFrameIdentifier, WBSPasskeyAutoFillFromNearbyDeviceOptions, WBSSavedAccountContext;

@protocol WBSAuthenticationServicesAgentInterface
- (void)isOrigin:(NSString *)arg1 relatedToRelyingPartyIdentifier:(NSString *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)didFillCredentialForUsername:(NSString *)arg1 forURL:(NSURL *)arg2 fromProviderWithBundleIdentifier:(NSString *)arg3 inBrowserWithBundleIdentifier:(NSString *)arg4;
- (void)didFillCredentialForUsername:(NSString *)arg1 forHost:(NSString *)arg2 fromProviderWithBundleIdentifier:(NSString *)arg3 inAppWithBundleIdentifier:(NSString *)arg4;
- (void)getIsPasskeyAssertionRequestRunningForWebFrameIdentifier:(WBSGlobalFrameIdentifier *)arg1 orApplicationIdentifier:(NSString *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)getPasskeyAssertionRequestParametersForCABLEWithCompletionHandler:(void (^)(ASPasskeyCredentialRequestParameters *))arg1;
- (void)getPasskeyAssertionRequestParametersForApplicationIdentifier:(NSString *)arg1 completionHandler:(void (^)(ASPasskeyCredentialRequestParameters *))arg2;
- (void)getPasskeyAssertionRequestParametersForWebFrameIdentifier:(WBSGlobalFrameIdentifier *)arg1 completionHandler:(void (^)(ASPasskeyCredentialRequestParameters *))arg2;
- (void)completeAssertionWithExternalPasskeyForApplicationIdentifier:(NSString *)arg1 relyingPartyIdentifier:(NSString *)arg2 authenticatorData:(NSData *)arg3 signature:(NSData *)arg4 userHandle:(NSData *)arg5 credentialID:(NSData *)arg6;
- (void)completeAssertionWithExternalPasskeyForWebFrameIdentifier:(WBSGlobalFrameIdentifier *)arg1 relyingPartyIdentifier:(NSString *)arg2 authenticatorData:(NSData *)arg3 signature:(NSData *)arg4 userHandle:(NSData *)arg5 credentialID:(NSData *)arg6;
- (void)getExternalPasskeyRequestForApplicationIdentifier:(NSString *)arg1 relyingPartyIdentifier:(NSString *)arg2 credentialID:(NSString *)arg3 completionHandler:(void (^)(ASPasskeyCredentialRequest *))arg4;
- (void)getExternalPasskeyRequestForWebFrameIdentifier:(WBSGlobalFrameIdentifier *)arg1 relyingPartyIdentifier:(NSString *)arg2 credentialID:(NSString *)arg3 completionHandler:(void (^)(ASPasskeyCredentialRequest *))arg4;
- (void)test_createPasskeyWithUserName:(NSString *)arg1 displayName:(NSString *)arg2 relyingPartyIdentifier:(NSString *)arg3 userHandle:(NSData *)arg4 completionHandler:(void (^)(_Bool))arg5;
- (void)userSelectedAutoFillNearbyDevice:(WBSPasskeyAutoFillFromNearbyDeviceOptions *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)userSelectedAutoFillPasskey:(WBSAutoFillPasskey *)arg1 authenticatedLAContext:(LAContext *)arg2 savedAccountContext:(WBSSavedAccountContext *)arg3 completionHandler:(void (^)(void))arg4;
- (void)getPasskeysForRunningAssertionWithWebFrameIdentifier:(WBSGlobalFrameIdentifier *)arg1 completionHandler:(void (^)(NSArray *, WBSPasskeyAutoFillFromNearbyDeviceOptions *))arg2;
- (void)getPasskeysForRunningAssertionWithApplicationIdentifier:(NSString *)arg1 withCompletionHandler:(void (^)(NSArray *, WBSPasskeyAutoFillFromNearbyDeviceOptions *))arg2;
@end
