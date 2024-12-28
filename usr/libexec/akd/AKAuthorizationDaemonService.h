//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAccountManager, AKAuthorizationEndorserRapportDiscovery, AKAuthorizationRapportClient, AKAuthorizationSessionManager, AKAuthorizationStoreManager, AKClient, AKCredentialRequestContext, AKSharedAccountsStorageController, MISSING_TYPE, NSArray, NSString;
@protocol AKAuthorizationClientProtocol, AKAuthorizationDaemonServiceDelegate;

@interface AKAuthorizationDaemonService : NSObject
{
    struct os_unfair_lock_s _authorizationRealUserLock;	// 8 = 0x8
    id <AKAuthorizationClientProtocol> _clientProxy;	// 16 = 0x10
    AKAuthorizationSessionManager *_authSessionManager;	// 24 = 0x18
    NSString *_realUserVerificationResults;	// 32 = 0x20
    AKAccountManager *_accountManager;	// 40 = 0x28
    AKClient *_client;	// 48 = 0x30
    id <AKAuthorizationDaemonServiceDelegate> _delegate;	// 56 = 0x38
    AKAuthorizationRapportClient *_rapportClient;	// 64 = 0x40
    MISSING_TYPE *_endorserRapportDiscovery;	// 72 = 0x48
    NSArray *_safariPasswordCredentials;	// 80 = 0x50
    AKCredentialRequestContext *_originalRequestContext;	// 88 = 0x58
    AKAuthorizationStoreManager *_localAccountsStorageController;	// 96 = 0x60
    AKSharedAccountsStorageController *_sharedAccountsStorageController;	// 104 = 0x68
    NSArray *_sharedAccounts;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00200000000b8487
@property(copy, nonatomic) NSArray *sharedAccounts; // @synthesize sharedAccounts=_sharedAccounts;
@property(retain, nonatomic) AKSharedAccountsStorageController *sharedAccountsStorageController; // @synthesize sharedAccountsStorageController=_sharedAccountsStorageController;
@property(retain, nonatomic) AKAuthorizationStoreManager *localAccountsStorageController; // @synthesize localAccountsStorageController=_localAccountsStorageController;
@property(retain, nonatomic) AKCredentialRequestContext *originalRequestContext; // @synthesize originalRequestContext=_originalRequestContext;
@property(copy, nonatomic) NSArray *safariPasswordCredentials; // @synthesize safariPasswordCredentials=_safariPasswordCredentials;
@property(retain, nonatomic) AKAuthorizationEndorserRapportDiscovery *endorserRapportDiscovery; // @synthesize endorserRapportDiscovery=_endorserRapportDiscovery;
@property(retain, nonatomic) AKAuthorizationRapportClient *rapportClient; // @synthesize rapportClient=_rapportClient;
@property(nonatomic) __weak id <AKAuthorizationDaemonServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) AKClient *client; // @synthesize client=_client;
- (id)_accountDisplayNameWithPresentationContext:(id)arg1;	// IMP=0x00100000000b827b
- (void)_sendPermissionRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b81f7
- (void)_processUserResponse:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b7c13
- (void)_validateAndProcessUserResponse:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b7920
- (void)performAuthorizationWithContext:(id)arg1 withUserProvidedInformation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b770f
- (void)presentAuthorizationUIForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b74c6
- (void)_extractWebSessionAuthorizationFromResponse:(id)arg1;	// IMP=0x00100000000b7195
- (id)authorizationContextWithUserResponse:(id)arg1 client:(id)arg2;	// IMP=0x00100000000b69f5
- (id)authorizationContextHelperWithContext:(id)arg1 client:(id)arg2;	// IMP=0x00100000000b6928
- (void)_completeAuthorizationWithServerResponse:(id)arg1 userResponse:(id)arg2 client:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b5fcd
- (void)_fetchAuthContextWithUserResponse:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b5a57
- (void)_performSRPAuthorizationForUserResponse:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b5764
- (void)_safePerformSRPWithUserResponse:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b55a6
- (void)_requestUserAuthorizationForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b523a
- (void)_fetchCredentialsForAssociatedDomains:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b50e9
- (void)_fetchSafariCredentialsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b4f62
- (void)_setupLoginChoicesForPresentationContext:(id)arg1 sharedAccounts:(id)arg2;	// IMP=0x00100000000b470c
- (long long)_credentialStateForRequestContext:(id)arg1;	// IMP=0x00100000000b469e
- (void)_prepareRequestContext:(id)arg1 forCredentialState:(long long)arg2;	// IMP=0x00100000000b4220
- (_Bool)_isPCSAccessForContext:(id)arg1;	// IMP=0x00100000000b412d
- (_Bool)_shouldAllowPCSKeyAccessForContext:(id)arg1;	// IMP=0x00100000000b40ff
- (void)_getPresentationContextForRequestContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b366c
- (void)storeAuthorization:(id)arg1 forProxiedRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b33b3
- (_Bool)_shouldStartSatoriVerificationForRequestContext:(id)arg1;	// IMP=0x00100000000b3343
- (void)_initiateRapportAuthorizationWithRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b318c
- (void)_initiateAuthorizationWithRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b3014
- (_Bool)_verifyEntitlementsForRequest:(id)arg1;	// IMP=0x00100000000b2b17
- (void)_performSilentRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b279e
- (void)_performRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b26a3
- (void)_determineUIAndPerformRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b25d3
- (_Bool)_shouldEarlyReturnRequest:(id)arg1 forCredentialState:(long long)arg2;	// IMP=0x00100000000b2550
- (void)_createAndPerformRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b1f6a
- (id)_clientForContext:(id)arg1;	// IMP=0x00100000000b1e60
- (id)_credentialStateController;	// IMP=0x00100000000b1dc2
- (void)getPresentationContextForRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b1a7b
- (void)establishConnectionWithStateBroadcastHandlerEndpoint:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b181b
- (void)establishConnectionWithNotificationHandlerEndpoint:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b143c
- (void)continueFetchingIconForRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b1327
- (void)fetchPrimaryApplicationInformationForWebServiceWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b1165
- (void)fetchAppleIDAuthorizeHTMLResponseTemplateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b0d8d
- (void)revokeUpgradeWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b0ad4
- (void)fetchAppleOwnedDomainSetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b09b3
- (void)fetchNativeTakeoverURLSetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b0578
- (void)fetchAppleIDAuthorizationURLSetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b04e6
- (void)startDiscoveryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b036c
- (void)getCredentialStateForClientID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b02e1
- (void)getCredentialStateForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b00e9
- (void)performAuthorization:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000af5e7
- (void)dealloc;	// IMP=0x00100000000af57b
- (id)initWithClient:(id)arg1;	// IMP=0x00100000000af361
- (id)init;	// IMP=0x00100000000af336

@end
