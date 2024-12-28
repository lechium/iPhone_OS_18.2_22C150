//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAccountManager, AKAuthenticationTrafficController, AKAuthenticationUILiaison, AKClient, AKEducationEnterpriseController, AKFidoDaemonServerHandler, AKPasswordResetPresenter, AKTokenManager, CUTReachability, NSString;
@protocol AKAppleIDAuthSupportProxy, _TtP3akd28ProximityAuthServiceProvider_;

@interface AKAppleIDAuthenticationService : NSObject
{
    AKClient *_client;	// 8 = 0x8
    NSObject<AKAppleIDAuthSupportProxy> *_authProxy;	// 16 = 0x10
    AKAccountManager *_accountManager;	// 24 = 0x18
    AKTokenManager *_tokenManager;	// 32 = 0x20
    AKAuthenticationTrafficController *_authTrafficController;	// 40 = 0x28
    AKAuthenticationUILiaison *_authUILiaison;	// 48 = 0x30
    id <_TtP3akd28ProximityAuthServiceProvider_> proximityServiceProvider;	// 56 = 0x38
    CUTReachability *_reachability;	// 64 = 0x40
    AKFidoDaemonServerHandler *_fidoHandler;	// 72 = 0x48
    AKEducationEnterpriseController *_eduController;	// 80 = 0x50
    AKPasswordResetPresenter *_passwordResetPresenter;	// 88 = 0x58
}

+ (id)_verificationQueue;	// IMP=0x002000000004778f
- (void).cxx_destruct;	// IMP=0x00200000000687b3
@property(retain, nonatomic) AKPasswordResetPresenter *passwordResetPresenter; // @synthesize passwordResetPresenter=_passwordResetPresenter;
- (void)performRemoveEdpTokenWithAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000068644
- (void)performEdpCompleteKeyDropWithAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000684f0
- (void)performEdpMigrationWithAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006839c
- (void)_edpRequestWithAltDSID:(id)arg1 URLKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000682ef
- (void)fetchBirthdayForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000067ec3
- (void)deleteTokensFromCacheWithAltDSID:(id)arg1 tokenIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000067c48
- (void)fetchTokensWithAltDSID:(id)arg1 tokenIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000067999
- (void)deleteDeviceListCacheWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000677c2
- (void)deleteDeviceListCacheWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000674d3
- (void)_fetchDeviceListWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000066f7c
- (void)teardownFollowUpWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000066ea8
- (void)synchronizeFollowUpItemsForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000066e04
- (_Bool)_shouldSkipAccountUpdatesForAuthWithContext:(id)arg1;	// IMP=0x0010000000066b13
- (_Bool)_updateAuthKitAccount:(id)arg1 withServerResponse:(id)arg2 context:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000066933
- (void)piggyback:(id)arg1 handleVerificationWithError:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000668a5
- (void)piggyback:(id)arg1 handleEscapeHatchError:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000661b3
- (void)piggyback:(id)arg1 shouldContinueWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000065ecc
- (void)piggyback:(id)arg1 validateSecurityCode:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000065bd3
- (void)piggyback:(id)arg1 promptForRandomCodeWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000065af4
- (void)performCircleRequestWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000065a06
- (id)_authenticationParametersForUsername:(id)arg1 altDSID:(id)arg2 context:(id)arg3;	// IMP=0x001000000006592d
- (void)_beginChangePasswordFlowWithAccount:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006540d
- (void)_changePasswordAndAuthenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000064f29
- (void)_beginAppleIDCreationFlowWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000064ca5
- (void)_handleCreateNewAppleIDError:(id)arg1 withContext:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000064b57
- (void)_createNewAppleIDAndAuthenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000064336
- (void)_repairAppleIDWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000063daf
- (id)_addAccountNameParameterToURL:(id)arg1 withContext:(id)arg2;	// IMP=0x0010000000063b94
- (void)_beginiForgotFlowWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000063739
- (void)_handleRecoverCredentialsError:(id)arg1 withContext:(id)arg2 event:(id)arg3 andCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000635ca
- (void)_recoverCredentialsAndAuthenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000062c25
- (void)_sendAnalyticsEvent:(id)arg1 withError:(id)arg2;	// IMP=0x0010000000062b72
- (oneway void)_initiateEDPRepairForAuthenticationContext:(id)arg1 authResults:(id)arg2;	// IMP=0x0010000000062a85
- (void)persistRecoveryKeyWithContext:(id)arg1 authContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006294b
- (void)verifyMasterKey:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000062898
- (void)renewRecoveryTokenWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000062801
- (void)_fetchTokensForServiceIDs:(id)arg1 withUsername:(id)arg2 altDSID:(id)arg3 masterToken:(id)arg4 context:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000006152b
- (void)_performSilentServiceTokenAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000061070
- (void)serverUIContext:(id)arg1 processAdditionalData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000060d29
- (_Bool)shouldProcessAdditionalServerUIData:(id)arg1;	// IMP=0x0010000000060d10
- (void)_showServerUIWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000060c76
- (void)_showServerUIWithURLRequest:(id)arg1 context:(id)arg2 initialAuthResponse:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000060be7
- (void)_showServerUIWithURLRequest:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000060bcf
- (void)_beginServerDrivenSecondaryActionWithURLKey:(id)arg1 context:(id)arg2 initialAuthResponse:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000060612
- (void)_handleStartFidoAuthWithContext:(id)arg1 fidoContext:(id)arg2 serverResponse:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000006037a
- (void)_performFidoStartAuthActionWithContext:(id)arg1 serverResponse:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000060098
- (id)fidoHandler;	// IMP=0x001000000006005d
- (void)fetchGlobalConfigurationUsingPolicy:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005ffd8
- (void)clearSessionCacheWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000005ff14
- (void)_handleGrandslamResponse:(id)arg1 data:(id)arg2 error:(id)arg3 serverResponse:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000005fd58
- (void)_performGrandslamEndpointActionWithContext:(id)arg1 serverResponse:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005f9b2
- (void)_attemptPasswordlessAuthAfterBiometricOrPasscodeValidationWithContext:(id)arg1 promptType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005f522
- (void)_showAlertForLoginCodeValidationError:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005f370
- (void)_processValidationCodeSuccessResponse:(id)arg1 authResponse:(id)arg2 results:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000005f230
- (void)_handleSecondFactorUICompletionWithCode:(id)arg1 error:(id)arg2 idmsData:(id)arg3 piggybacking:(_Bool)arg4 initialAuthResponse:(id)arg5 context:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x001000000005edac
- (void)_handleSecondFactorUICompletionWithCode:(id)arg1 error:(id)arg2 idmsData:(id)arg3 initialAuthResponse:(id)arg4 context:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000005ed81
- (void)_performSecondaryActionWithServerResponse:(id)arg1 context:(id)arg2 client:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000005e4df
- (void)_performSecondaryActionWithServerResponse:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005e4c6
- (void)_persistGrandSlamServiceTokens:(id)arg1 forAltDSID:(id)arg2 DSID:(id)arg3 appleID:(id)arg4 forContext:(id)arg5 error:(id *)arg6;	// IMP=0x001000000005e399
- (void)_completeAuthenticationWithServiceTokens:(id)arg1 tokenFetchError:(id)arg2 altDSID:(id)arg3 authenticationResults:(id)arg4 context:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000005e0bb
- (void)_provideServiceTokensIfRequiredForContext:(id)arg1 authenticationResults:(id)arg2 serverResponse:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000005d711
- (id)_authKitAccountFromContext:(id)arg1;	// IMP=0x001000000005d4aa
- (void)_handleSuccessfulVerificationForContext:(id)arg1 withResults:(id)arg2 serverResponse:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000005d08b
- (void)_shouldContinueAuthenticatingForUsername:(id)arg1 password:(id)arg2 serverResponse:(id)arg3 didShowServerUI:(_Bool)arg4 continuationData:(id)arg5 error:(id)arg6 context:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x001000000005b1fc
- (void)_handleVerificationCompletionForUsername:(id)arg1 password:(id)arg2 serverResponse:(id)arg3 didShowServerUI:(_Bool)arg4 continuationData:(id)arg5 error:(id)arg6 context:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x001000000005b026
- (void)_performSafeSRPAuthenticationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005ad4f
- (void)_performSRPAuthenticationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005ab45
- (id)_srpAuthContextHelperWithContext:(id)arg1;	// IMP=0x001000000005aa9a
- (void)_performPasswordlessSRPAuthWithAccount:(id)arg1 context:(id)arg2 client:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000059ce8
- (void)_performPasswordlessSRPAuthWithAccount:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000059ccf
- (void)_performPasswordlessSRPAuthWithContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000059cb2
- (void)_performPasswordlessSRPAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000059c99
- (void)_verifyUsername:(id)arg1 password:(id)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000005948b
- (void)_checkFreshnessAndVerifyWithPassword:(id)arg1 serverResponse:(id)arg2 additionalData:(id)arg3 secondaryActionError:(id)arg4 context:(id)arg5 newServerResponse:(id)arg6 username:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00100000000592a2
- (void)_showAlertForLoginError:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000590c9
- (void)_titleAndMessageForBadNetworkRelatedErrorWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000058fbf
- (void)_titleAndMessageForError:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005803f
- (_Bool)_incrementAttemptsForContext:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000057e20
- (void)_showAlertForVerificationError:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000057c70
- (void)_handleVerificationError:(id)arg1 forContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000057ae2
- (void)_handleMissingUsernameOrPasswordForContext:(id)arg1 password:(id)arg2 username:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000576b7
- (void)_keepLoginAliveWithContext:(id)arg1 error:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000575bd
- (void)_handleBasicLoginUICompletionWithUsername:(id)arg1 password:(id)arg2 context:(id)arg3 additionalData:(id)arg4 collectionError:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000056268
- (void)_refreshAuthModeFromServerForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000056155
- (void)_refreshAuthModeIfNecessaryForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000055dd9
- (void)_refreshLocalAccountAndUpdateContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005561f
- (void)_updateAltDSIDAndUsername:(id)arg1;	// IMP=0x001000000005507b
- (void)_correlateContext:(id)arg1 withAuthModeInformation:(CDStruct_5577c19c)arg2;	// IMP=0x0010000000054fdb
- (void)_performInteractiveFederatedAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000054c3c
- (_Bool)_shouldBroadcastForProximity:(id)arg1;	// IMP=0x0010000000054a6e
- (void)_performInteractiveAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000544bb
- (void)refreshAuthMetadataWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000054214
- (void)_attemptInteractiveAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000053d2f
- (id)_accountForContinuationWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000053922
- (void)_showContinueUsingUIWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000053383
- (void)_accountForContinuationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000005324d
- (void)_attemptPasswordlessAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000052cb8
- (void)_attemptPasswordlessAuthOptionsWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000052778
- (void)_showBiometricOrPasscodeAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000523db
- (void)_attemptBiometricOrPasscodeAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000522f7
- (void)performPasswordResetWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000051efd
- (void)_finishAnalyticsEvent:(id)arg1 authenticationResults:(id)arg2 authenticationContext:(id)arg3 error:(id)arg4;	// IMP=0x0010000000051ded
- (id)_createProxAnalyticsForAuthenticationContextIfNeeded:(id)arg1;	// IMP=0x0010000000051ba6
- (_Bool)_isInteractiveAuthRequiredForContext:(id)arg1;	// IMP=0x001000000005160a
- (void)_handlePasswordlessAuthResults:(id)arg1 context:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000005112f
- (void)_performAuthenticationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000050d12
- (void)_upgradeSecurityLevelWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005087e
- (void)_authenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000050669
- (void)authenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004fc42
- (void)reportSignOutForAllAppleIDsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000004f6a5
- (void)reportSignOutForAppleID:(id)arg1 service:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004f3e7
- (void)performCheckInForAccountWithAltDSID:(id)arg1 event:(id)arg2 reason:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000004f108
- (void)performCheckInForAccountWithAltDSID:(id)arg1 event:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004ee3b
- (void)checkSecurityUpgradeEligibilityForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004ea4d
- (oneway void)isCreateAppleIDAllowedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000004e87a
- (void)validateVettingToken:(id)arg1 forAltDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004d6f0
- (void)_validateLoginCode:(unsigned long long)arg1 forAltDSID:(id)arg2 masterToken:(id)arg3 idmsData:(id)arg4 authContext:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000004d068
- (void)validateLoginCode:(unsigned long long)arg1 forAppleID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004ca76
- (void)generateLoginCodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000004c970
- (void)updateStateWithExternalAuthenticationResponse:(id)arg1 forContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004b79f
- (void)updateStateWithExternalAuthenticationResponse:(id)arg1 forAppleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004b6ef
- (void)getServerUILoadDelegateForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004b65d
- (void)getServerUILoadDelegateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004b48c
- (void)activeLoginCode:(CDUnknownBlockType)arg1;	// IMP=0x001000000004b333
- (void)isDevicePasscodeProtected:(CDUnknownBlockType)arg1;	// IMP=0x001000000004b2ba
- (void)configurationInfoWithIdentifiers:(id)arg1 forAltDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004b0cb
- (void)setConfigurationInfo:(id)arg1 forIdentifier:(id)arg2 forAltDSID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000004af0a
- (void)warmUpVerificationSessionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000004adba
- (void)performSilentTTRFor:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004ad3f
- (void)revokeAuthorizationForApplicationWithClientID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004ac2f
- (void)deleteAuthorizationDatabaseWithAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004aad6
- (void)fetchAppListWithAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004a9bf
- (void)_configureDeviceListCacheInBackgroundWithContext:(id)arg1 response:(id)arg2;	// IMP=0x001000000004a6de
- (void)_handleDeviceListResponseRequestContext:(id)arg1 responseError:(id)arg2 responseData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000004a36a
- (id)_deviceListProviderWithContext:(id)arg1;	// IMP=0x001000000004a294
- (void)_performDeviceListRequestWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000049f8e
- (void)deviceListWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000049a14
- (void)_updateDeviceListResponseWithDeviceInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000496f8
- (void)_fetchDeviceSafetyRestrictionStateForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000049228
- (_Bool)_shouldShowAlertForAuthModeError:(id)arg1;	// IMP=0x00100000000491c1
- (void)_fetchAuthModeInfoWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000048f9e
- (void)fetchAuthModeWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000048ef4
- (void)updateUserInformationForAltDSID:(id)arg1 userInformation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000048db3
- (void)getUserInformationForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000048bed
- (void)getUserInformationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000048a1b
- (void)fetchUserInformationForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000048855
- (void)_setAuthKitAccount:(id)arg1 inUse:(_Bool)arg2 forService:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000048066
- (void)setAppleIDWithDSID:(id)arg1 inUse:(_Bool)arg2 forService:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000047e10
- (void)setAppleIDWithAltDSID:(id)arg1 inUse:(_Bool)arg2 forService:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000047bb8
- (void)forceURLBagUpdateForAltDSID:(id)arg1 urlSwitchData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000047b17
- (void)fetchURLBagFromCache:(_Bool)arg1 altDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000047a85
- (void)fetchURLBagForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000479f6
- (void)endProximityAuthenticationForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000479d6
- (void)accountNamesForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000047810
- (id)init;	// IMP=0x001000000004760b
- (id)initWithProxy:(id)arg1;	// IMP=0x00100000000475b1
- (id)initWithClient:(id)arg1 passwordResetPresenter:(id)arg2;	// IMP=0x0010000000047510

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
