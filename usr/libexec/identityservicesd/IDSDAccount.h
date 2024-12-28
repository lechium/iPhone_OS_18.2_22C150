//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUTDeferredTaskQueue, IDSGameCenterData, IDSRegistration, IDSRegistrationPushHandler, IDSServiceProperties, MISSING_TYPE, NSArray, NSDate, NSDictionary, NSHashTable, NSMutableDictionary, NSMutableSet, NSString;

@interface IDSDAccount : NSObject
{
    NSMutableDictionary *_accountInfo;	// 8 = 0x8
    IDSRegistration *_registrationInfo;	// 16 = 0x10
    IDSServiceProperties *_service;	// 24 = 0x18
    NSString *_uniqueID;	// 32 = 0x20
    MISSING_TYPE *_setupHandlers;	// 40 = 0x28
    NSHashTable *_registrationListeners;	// 48 = 0x30
    IDSRegistrationPushHandler *_pushHandler;	// 56 = 0x38
    NSDate *_dateOfLastHandlesCheck;	// 64 = 0x40
    NSMutableSet *_localServices;	// 72 = 0x48
    unsigned int _disabledAutomatically:1;	// 80 = 0x50
    unsigned int _duringInit:1;	// 80 = 0x50
    unsigned int _shouldRequeryHandles:1;	// 80 = 0x50
    unsigned int _issuingDependentCheck:1;	// 80 = 0x50
    unsigned int _issuingHandlesCheck:1;	// 80 = 0x50
    unsigned int _pendingDependentCheck:1;	// 80 = 0x50
    unsigned int _pendingHandlesCheck:1;	// 80 = 0x50
    unsigned int _pendingReIdentify:1;	// 80 = 0x50
    unsigned int _pendingReRegister:1;	// 81 = 0x51
    unsigned int _isRegistrationActive:1;	// 81 = 0x51
    unsigned int _pendingAccountInfoBroadcast:1;	// 81 = 0x51
    unsigned int _isBeingRemoved:1;	// 81 = 0x51
    CUTDeferredTaskQueue *_broadcastAccountInfoChangedTask;	// 88 = 0x58
}

+ (_Bool)dependentRegistration:(id)arg1 hasDependentRegistrationWithURI:(id)arg2 token:(id)arg3;	// IMP=0x00200000001a886c
+ (void)dependentRegistration:(id)arg1 findDeviceUniqueID:(id *)arg2 btID:(id *)arg3 forURI:(id)arg4 token:(id)arg5 supportsLiveDelivery:(_Bool *)arg6;	// IMP=0x00100000001a7e8d
+ (void)sendMessageWithSendParameters:(id)arg1 service:(id)arg2 threadContext:(id)arg3 willSendBlock:(CDUnknownBlockType)arg4 progressBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x001000000035dda2
+ (void)_sendLocallyWithSendParameters:(id)arg1 service:(id)arg2 uriToLocalDestination:(id)arg3 data:(id)arg4 protobuf:(id)arg5 threadContext:(id)arg6 progressBlock:(CDUnknownBlockType)arg7 completionBlock:(CDUnknownBlockType)arg8;	// IMP=0x001000000035ab4e
+ (void)_splitDestinations:(id)arg1 intoLocalDestinations:(id *)arg2 remoteDestinations:(id *)arg3 threadContext:(id)arg4 sendParameters:(id)arg5;	// IMP=0x0010000000358040
- (void).cxx_destruct;	// IMP=0x00200000001b19ca
@property(readonly, nonatomic) CUTDeferredTaskQueue *broadcastAccountInfoChangedTask; // @synthesize broadcastAccountInfoChangedTask=_broadcastAccountInfoChangedTask;
@property(nonatomic) _Bool isBeingRemoved; // @synthesize isBeingRemoved=_isBeingRemoved;
@property(readonly, nonatomic) _Bool issuingDependentCheck; // @synthesize issuingDependentCheck=_issuingDependentCheck;
@property(nonatomic) _Bool pendingDependentCheck; // @synthesize pendingDependentCheck=_pendingDependentCheck;
@property(nonatomic) _Bool wasDisabledAutomatically; // @synthesize wasDisabledAutomatically=_disabledAutomatically;
@property(readonly, nonatomic) NSDictionary *accountInfo; // @synthesize accountInfo=_accountInfo;
@property(readonly, nonatomic) IDSRegistration *registration; // @synthesize registration=_registrationInfo;
- (void)didUpdateProtocolForPairedDevice:(id)arg1;	// IMP=0x00100000001b165e
- (void)didUpdatePairedDevice:(id)arg1;	// IMP=0x00100000001b132b
- (void)didRemovePairedDevice:(id)arg1;	// IMP=0x00100000001b0fd5
- (void)didAddPairedDevice:(id)arg1;	// IMP=0x00100000001b0f50
- (void)_notifyDelegatesAddedLocalDevice:(id)arg1;	// IMP=0x00100000001b0bb3
- (void)_notifyClientDelegatesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b0a91
@property(readonly, retain, nonatomic) NSDictionary *accountSetupInfo;
- (id)smallDescription;	// IMP=0x00100000001b07e5
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *linkedAccounts;
- (id)adHocAccounts;	// IMP=0x00100000001afb8e
- (_Bool)forEachAdhocAccount:(CDUnknownBlockType)arg1;	// IMP=0x00100000001af233
- (id)accountAndAdHocAccounts;	// IMP=0x00100000001af1bd
- (void)_updateAccountWithAccountInfo:(id)arg1;	// IMP=0x00100000001ae97d
- (void)writeAccountDefaults:(id)arg1;	// IMP=0x00100000001ae969
- (void)_writeAccountDefaults:(id)arg1 force:(_Bool)arg2 interestedSubservices:(id)arg3;	// IMP=0x00100000001ade59
- (void)_writeAccountDefaults:(id)arg1 force:(_Bool)arg2;	// IMP=0x00100000001ade44
- (void)_broadcastAccountInfoChanged;	// IMP=0x00100000001adcaf
- (void)_notifyListenersWithChanges:(id)arg1;	// IMP=0x00100000001acc66
- (void)_broadcastAccountMessageBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001acb28
- (_Bool)isAdHocAccount;	// IMP=0x00100000001acaac
- (id)primaryServiceName;	// IMP=0x00100000001aca0c
@property(readonly, nonatomic) IDSRegistration *primaryRegistration;
- (id)primaryAccountUniqueID;	// IMP=0x00100000001ac8d2
- (id)primaryAccount;	// IMP=0x00100000001ac836
@property(readonly, nonatomic) long long lastRegistrationFailureError;
@property(readonly, nonatomic) NSDate *lastRegistrationFailureDate;
@property(readonly, nonatomic) NSDate *lastRegistrationSuccessDate;
@property(readonly, nonatomic) NSDate *lastGDRDate;
- (id)dependentRegistrationMatchingUUID:(id)arg1;	// IMP=0x00100000001ac763
- (id)dependentRegistrationMatchingUUID:(id)arg1 includingTinker:(_Bool)arg2;	// IMP=0x00100000001ac494
@property(readonly, nonatomic) NSArray *registeredDevices;
@property(readonly, nonatomic) NSArray *dependentRegistrationsIncludingCurrentDevice;
- (id)dependentRegistrationsIncludingTinker:(_Bool)arg1;	// IMP=0x00100000001ac2a4
@property(readonly, nonatomic) NSArray *dependentRegistrations;
- (id)_dependentRegistrationsForDefaultPairedDevice:(_Bool)arg1 includingCurrentDevice:(_Bool)arg2 includingTinker:(_Bool)arg3;	// IMP=0x00100000001aa88b
- (id)_dependentRegistrationsForDefaultPairedDevice:(_Bool)arg1 includingTinker:(_Bool)arg2;	// IMP=0x00100000001aa835
@property(readonly, nonatomic) IDSDAccount *superAccount;
@property(readonly, nonatomic) NSDictionary *defaultPairedDependentRegistration;
- (id)defaultPairedDependentRegistrationIncludingTinker:(_Bool)arg1;	// IMP=0x00100000001aa1b2
- (id)_fromIDFromDevice:(id)arg1 withCBUUID:(id)arg2 uniqueID:(id)arg3;	// IMP=0x00100000001a9d8c
- (id)fromIDForCBUUID:(id)arg1 deviceID:(id)arg2;	// IMP=0x00100000001a9037
- (_Bool)hasDependentRegistrationWithURI:(id)arg1 token:(id)arg2;	// IMP=0x00100000001a8ec5
- (void)findDeviceUniqueID:(id *)arg1 btID:(id *)arg2 forURI:(id)arg3 token:(id)arg4 supportsLiveDelivery:(_Bool *)arg5;	// IMP=0x00100000001a8592
@property(readonly, nonatomic) _Bool isUsableForSending;
@property(readonly, nonatomic) _Bool hasEverRegistered;
- (id)_registrationCert;	// IMP=0x00100000001a7c2c
- (_Bool)hasVettedAliasURI:(id)arg1;	// IMP=0x00100000001a7bb6
- (_Bool)hasAliasURI:(id)arg1;	// IMP=0x00100000001a7b15
@property(readonly, nonatomic) NSArray *prefixedURIStringsFromRegistration;
@property(readonly, nonatomic) NSArray *unprefixedURIStringsFromRegistration;
- (void)setupAccountWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a74ba
@property(readonly, nonatomic) _Bool isEnabled;
@property(readonly, nonatomic) _Bool shouldRegisterUsingDSHandle;
@property(readonly, nonatomic) _Bool shouldAutoRegisterAllHandles;
@property(readonly, nonatomic) _Bool isRegistered;
- (void)authenticationChanged;	// IMP=0x00100000001a7369
@property(retain, nonatomic) NSDate *expirationDate;
@property(nonatomic) _Bool isTemporary;
@property(readonly, nonatomic) long long registrationError;
@property(readonly, nonatomic) int registrationErrorReason;
@property(readonly, nonatomic) int registrationStatus;
@property(retain, nonatomic) NSString *loginID;
@property(readonly, nonatomic) NSString *dsID;
@property(readonly, nonatomic) NSString *dsHandle;
@property(readonly, nonatomic) int accountType;
@property(nonatomic) _Bool isUserDisabled;
- (void)clearDisplayName;	// IMP=0x00100000001a6753
@property(retain, nonatomic) NSString *displayName;
@property(retain, nonatomic) IDSGameCenterData *gameCenterData;
@property(retain, nonatomic) NSString *userUniqueIdentifier;
@property(readonly, nonatomic) NSString *uniqueID;
@property(readonly, nonatomic) IDSServiceProperties *service;
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000001a5fb4
- (void)dealloc;	// IMP=0x00100000001a5c67
- (void)cleanupAccount;	// IMP=0x00100000001a5c51
- (id)initWithLoginID:(id)arg1 service:(id)arg2 uniqueID:(id)arg3 accountType:(int)arg4 accountConfig:(id)arg5;	// IMP=0x00100000001a5c2f
- (id)initAdHocAccountWithLoginID:(id)arg1 service:(id)arg2 uniqueID:(id)arg3 accountType:(int)arg4 accountConfig:(id)arg5 primaryAccount:(id)arg6;	// IMP=0x00100000001a5c04
- (id)_initWithLoginID:(id)arg1 service:(id)arg2 uniqueID:(id)arg3 accountType:(int)arg4 accountConfig:(id)arg5 primaryAccount:(id)arg6 isAdHocAccount:(_Bool)arg7;	// IMP=0x00100000001a5620
- (id)initWithDictionary:(id)arg1 service:(id)arg2 uniqueID:(id)arg3;	// IMP=0x00100000001a4fad
- (void)_setupAccount;	// IMP=0x00100000001a443c
- (void)_resetVariables;	// IMP=0x00100000001a442e
- (void)_cleanupAccount;	// IMP=0x00100000001a2d7a
- (void)sendSenderKeyMessageToDestinations:(id)arg1 fromURI:(id)arg2 guid:(id)arg3 messageData:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x001000000025d0b3
- (void)_notifyRegistrationListenersAccountDidUpdateRegisteredDevices;	// IMP=0x001000000025ceef
- (void)removeRegistrationListener:(id)arg1;	// IMP=0x001000000025ce89
- (void)addRegistrationListener:(id)arg1;	// IMP=0x001000000025ce0c
- (void)systemDidLeaveFirstDataProtectionLock;	// IMP=0x001000000025cb57
- (id)pushHandler;	// IMP=0x001000000025cb3f
- (id)serviceType;	// IMP=0x001000000025caf8
- (void)reportClientEvent:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000025ca48
- (void)reportMessage:(id)arg1 toURI:(id)arg2;	// IMP=0x001000000025c998
- (void)reportAction:(long long)arg1 ofTempURI:(id)arg2 fromURI:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x001000000025c8e1
- (void)reportiMessageUnknownSender:(id)arg1 messageID:(id)arg2 isBlackholed:(_Bool)arg3 isJunked:(_Bool)arg4 messageServerTimestamp:(id)arg5 toURI:(id)arg6;	// IMP=0x001000000025c7e7
- (void)reportSpamWithMessages:(id)arg1 toURI:(id)arg2;	// IMP=0x001000000025c74a
- (long long)validationStatusForAlias:(id)arg1;	// IMP=0x001000000025c738
- (id)aliases;	// IMP=0x001000000025c726
- (double)_maxSelectedButVettedGracePeriod;	// IMP=0x001000000025c57d
- (id)_allUserIntentWithDefaultReason:(_Bool)arg1;	// IMP=0x001000000025c04c
- (void)_stopTrackingUserIntentOfAlias:(id)arg1;	// IMP=0x001000000025be28
- (void)_setUserIntentState:(unsigned char)arg1 forAlias:(id)arg2 withReason:(unsigned char)arg3;	// IMP=0x001000000025b957
- (id)_userIntentDictForAlias:(id)arg1;	// IMP=0x001000000025b63f
- (unsigned char)unselectReasonForAlias:(id)arg1;	// IMP=0x001000000025b57b
- (void)loadAliasUserIntentMetadataIfNeeded;	// IMP=0x001000000025b55b
- (unsigned char)currentAliasState:(id)arg1;	// IMP=0x001000000025b4e2
- (_Bool)wasRecentlySelectedAlias:(id)arg1;	// IMP=0x001000000025b4ca
- (void)markAsWasSelectedAlias:(id)arg1;	// IMP=0x001000000025b4aa
- (void)markAsVettedAlias:(id)arg1;	// IMP=0x001000000025b441
- (void)markAsUnvettedAlias:(id)arg1;	// IMP=0x001000000025b3c8
- (void)markAsUnselectedAlias:(id)arg1 withReason:(unsigned char)arg2;	// IMP=0x001000000025b3ab
- (void)markAsSelectedAlias:(id)arg1;	// IMP=0x001000000025b38b
- (id)invisibleAliases;	// IMP=0x001000000025b331
- (id)vettedAliases;	// IMP=0x001000000025b2d7
- (void)reIdentify;	// IMP=0x001000000025b2c0
- (void)reregister;	// IMP=0x001000000025b2ac
- (void)_refreshRegistration;	// IMP=0x001000000025afeb
- (void)validateProfile;	// IMP=0x001000000025abde
- (void)askPeersToClearCacheWithURIs:(id)arg1 fromURI:(id)arg2 forService:(id)arg3;	// IMP=0x001000000025a80a
- (void)_handleKTOptInStatusUpdateError:(long long)arg1;	// IMP=0x001000000025a7b3
- (_Bool)updateKTOptInStatusWithRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002598a6
- (_Bool)updateKTOptInStatus:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000258a7d
@property(readonly, nonatomic) NSDictionary *pseudonymURIMap;
@property(readonly, nonatomic) NSArray *pseudonyms;
- (id)pseudonymForPseudonymURIString:(id)arg1;	// IMP=0x0010000000257c37
- (void)_removePseudonyms:(id)arg1;	// IMP=0x0010000000257672
- (void)_removePseudonym:(id)arg1;	// IMP=0x00100000002575ca
- (void)_addPseudonym:(id)arg1;	// IMP=0x0010000000256fe4
- (void)_removeAllPseudonyms;	// IMP=0x0010000000256f1c
- (_Bool)revokePseudonym:(id)arg1 requestProperties:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000256b1e
- (_Bool)renewPseudonym:(id)arg1 forUpdatedExpiryEpoch:(double)arg2 requestProperties:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000256711
- (_Bool)provisionPseudonymForURI:(id)arg1 properties:(id)arg2 requestProperties:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000256115
- (void)_handlePseudonymProvisionError:(long long)arg1;	// IMP=0x0010000000256037
- (void)updateFeatureToggleStateWithOptions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000255e7d
- (void)retrieveFeatureToggleStateForOptions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000255c06
- (unsigned long long)_handleAndConvertFeatureToggleError:(long long)arg1;	// IMP=0x0010000000255b12
- (void)resetErrorState;	// IMP=0x0010000000255a70
- (void)refreshVettedAliases;	// IMP=0x0010000000255942
- (void)validateCredentialsWithDeliveryCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000002558b8
- (void)deactivateAndPurgeIdentify;	// IMP=0x00100000002556a2
- (void)unvalidateAliases:(id)arg1;	// IMP=0x0010000000255492
- (void)_unvalidateAliases:(id)arg1;	// IMP=0x0010000000254ef8
- (void)validateAliases:(id)arg1;	// IMP=0x0010000000254ce8
- (void)_validateAliases:(id)arg1;	// IMP=0x0010000000254aaa
- (void)_validateAliases:(id)arg1 validateAlreadyValid:(_Bool)arg2;	// IMP=0x0010000000253f71
- (void)addAliases:(id)arg1;	// IMP=0x0010000000253e74
- (void)_addAliases:(id)arg1;	// IMP=0x0010000000253673
- (void)removeAliases:(id)arg1;	// IMP=0x00100000002535a0
- (void)_removeAliases:(id)arg1 withReason:(unsigned char)arg2;	// IMP=0x0010000000252bfc
- (void)_setValidationStatus:(long long)arg1 error:(int)arg2 forAlias:(id)arg3 info:(id)arg4 addToCurrentHandlesIfNeeded:(_Bool)arg5 forceAdd:(_Bool)arg6;	// IMP=0x0010000000252bd1
- (void)_setValidationStatus:(long long)arg1 error:(int)arg2 forAlias:(id)arg3 info:(id)arg4 addToCurrentHandlesIfNeeded:(_Bool)arg5 forceAdd:(_Bool)arg6 aliasProperties:(id)arg7;	// IMP=0x0010000000252703
- (long long)_validationStatusForAlias:(id)arg1;	// IMP=0x001000000025245b
- (id)_uriDictionariesFromAccountInfo;	// IMP=0x0010000000252364
- (id)_unprefixedURIStringsFromAccountInfo;	// IMP=0x0010000000252143
- (void)_ignoreIncomingPushes;	// IMP=0x0010000000252121
- (void)_acceptIncomingPushes;	// IMP=0x00100000002520fc
- (void)center:(id)arg1 failedRegionValidation:(id)arg2 error:(long long)arg3 info:(id)arg4;	// IMP=0x0010000000251d2e
- (void)center:(id)arg1 succeededRegionValidation:(id)arg2 regionID:(id)arg3 phoneNumber:(id)arg4 extraContext:(id)arg5 verified:(_Bool)arg6;	// IMP=0x0010000000251883
- (void)center:(id)arg1 succeededCurrentEmailsRequest:(id)arg2 emailInfo:(id)arg3;	// IMP=0x00100000002515e8
- (void)center:(id)arg1 failedAuthentication:(id)arg2 error:(long long)arg3 info:(id)arg4;	// IMP=0x0010000000251219
- (void)center:(id)arg1 succeededAuthentication:(id)arg2;	// IMP=0x0010000000250eb7
- (void)center:(id)arg1 startedAuthenticating:(id)arg2;	// IMP=0x0010000000250cc0
- (void)registrationControllerNeedsNewRegistration:(id)arg1;	// IMP=0x0010000000250ae4
- (void)registrationController:(id)arg1 deregistrationSucceeded:(id)arg2;	// IMP=0x00100000002508d9
- (void)registrationController:(id)arg1 deregistrationWillStart:(id)arg2;	// IMP=0x0010000000250794
- (void)registrationController:(id)arg1 registrationFailed:(id)arg2 error:(long long)arg3 info:(id)arg4;	// IMP=0x001000000024f473
- (void)registrationController:(id)arg1 registrationSucceeded:(id)arg2;	// IMP=0x001000000024e242
- (void)registrationController:(id)arg1 registrationUpdated:(id)arg2;	// IMP=0x001000000024e052
- (void)registrationController:(id)arg1 registrationWillStart:(id)arg2;	// IMP=0x001000000024de37
- (void)centerNeedsNewIdentification:(id)arg1;	// IMP=0x001000000024de31
- (void)center:(id)arg1 failedIdentification:(id)arg2 error:(long long)arg3;	// IMP=0x001000000024de2b
- (void)center:(id)arg1 succeededIdentification:(id)arg2 phoneNumber:(id)arg3 token:(id)arg4;	// IMP=0x001000000024dbce
- (unsigned long long)_unregistered130RetryInterval;	// IMP=0x001000000024dbb8
- (void)_updateSessionsWithRegisteredURIs:(id)arg1 retryIfNotRegistered:(_Bool)arg2;	// IMP=0x001000000024d27c
- (void)_updateSessionsWithRegisteredURIs:(id)arg1;	// IMP=0x001000000024d265
- (void)_updateSessionsForAllRegisteredURIs;	// IMP=0x001000000024d1f7
- (void)_flushTokensForRegisteredURIs:(id)arg1;	// IMP=0x001000000024c763
- (void)_processReceivedDependentRegistration:(id)arg1 oldDependentRegistrations:(id)arg2;	// IMP=0x001000000024b9ad
- (void)_issueDependentCheck;	// IMP=0x001000000024ab7d
- (void)_issueCriticalDependentCheck;	// IMP=0x001000000024ab4f
- (_Bool)_issueForcedDependentCheckIfPossible;	// IMP=0x001000000024ab07
- (void)_saveAndNotifyGDRUpdate;	// IMP=0x001000000024a5f9
- (void)_notifyListenersAndSetDependentRegistrations:(id)arg1 onRegistrationInfo:(id)arg2;	// IMP=0x001000000024a36a
- (void)gdrReAuthenticateIfNecessary;	// IMP=0x0010000000249ed9
- (void)_clearGDRState;	// IMP=0x0010000000249ddf
- (void)handler:(id)arg1 flushCacheForURIs:(id)arg2;	// IMP=0x00100000002499dc
- (void)handler:(id)arg1 profileHandlesUpdated:(id)arg2 status:(id)arg3 allowGDR:(id)arg4;	// IMP=0x00100000002491c0
- (void)handler:(id)arg1 profile:(id)arg2 deviceUpdated:(id)arg3 service:(id)arg4;	// IMP=0x00100000002488d5
- (void)_updateHandles:(_Bool)arg1;	// IMP=0x0010000000248086
- (void)_parseHandlesInfo:(id)arg1 currentAliases:(id)arg2 currentVettedAliases:(id)arg3;	// IMP=0x0010000000246560
- (void)handler:(id)arg1 reloadBag:(id)arg2;	// IMP=0x0010000000245fe1
- (void)handler:(id)arg1 pushTokenChanged:(id)arg2;	// IMP=0x0010000000245b7e
- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;	// IMP=0x0010000000245814
- (void)passwordUpdated;	// IMP=0x001000000024555d
- (void)unregisterAccount;	// IMP=0x0010000000245345
- (void)_unregisterAccount;	// IMP=0x0010000000244f47
- (void)registerAccount;	// IMP=0x0010000000244d5d
- (void)_registerAccount;	// IMP=0x0010000000244184
- (_Bool)_migrateRegistrationIfNeeded;	// IMP=0x0010000000243a2a
- (void)_retryRegister;	// IMP=0x0010000000243890
- (void)authenticateAccount;	// IMP=0x0010000000243678
- (_Bool)_isPasswordPromptPermissibleDuringAuthentication;	// IMP=0x0010000000243586
- (void)_authenticateAccount;	// IMP=0x001000000024314c
- (void)deactivateRegistration;	// IMP=0x0010000000242969
- (void)activateRegistration;	// IMP=0x0010000000241c74
- (void)systemRestoreStateDidChange;	// IMP=0x0010000000241af8
- (void)systemDidStartBackup;	// IMP=0x0010000000241a5b
- (void)systemDidFinishMigration;	// IMP=0x00100000002419c0
- (void)_reregister;	// IMP=0x00100000002419ac
- (void)_reregisterAndReidentify:(_Bool)arg1;	// IMP=0x001000000024157d
- (void)_removeAuthenticationCredentialsIncludingAuthToken:(_Bool)arg1;	// IMP=0x00100000002411b0
- (void)_removeAuthenticationCredentials;	// IMP=0x0010000000241199
- (void)_reregisterAndReProvision;	// IMP=0x0010000000240f30
- (void)_reAuthenticate;	// IMP=0x0010000000240ecb
- (_Bool)_stopRegistrationAgent;	// IMP=0x0010000000240cce
- (void)_updateRegistrationStatusWithError:(long long)arg1 info:(id)arg2;	// IMP=0x001000000023fbf4
- (void)setRegistrationStatus:(int)arg1 error:(long long)arg2 alertInfo:(id)arg3;	// IMP=0x001000000023f71c
- (void)_checkRegistration;	// IMP=0x001000000023ea74
- (void)_updateVettedAliases:(id)arg1 emailInfo:(id)arg2 addToCurrentHandlesIfNeeded:(_Bool)arg3;	// IMP=0x001000000023e0b7
- (void)_updatePseudonymsFromEmailInfo:(id)arg1;	// IMP=0x001000000023d79a
- (void)_keychainMigrationComplete:(id)arg1;	// IMP=0x001000000023d38b
- (void)_needsEncryptionIdentityRoll:(id)arg1;	// IMP=0x001000000023d326
- (void)_identityGenerated:(id)arg1;	// IMP=0x001000000023d279
- (void)_identityRebuilt:(id)arg1;	// IMP=0x001000000023d214
- (void)_deregisterDeviceCenterNotifications;	// IMP=0x001000000023d0b7
- (void)_registerForDeviceCenterNotifications;	// IMP=0x001000000023cf1e
- (void)_registrationAbilityChanged:(id)arg1;	// IMP=0x001000000023cd91
- (_Bool)isRegistrationActive;	// IMP=0x001000000023cd7a
- (_Bool)isDeviceAuthenticated;	// IMP=0x001000000023cd31
- (_Bool)isDeviceRegistered;	// IMP=0x001000000023cc94
- (void)refreshAdHocServiceNames;	// IMP=0x001000000023c70f
- (_Bool)_rebuildRegistrationInfo:(_Bool)arg1;	// IMP=0x0010000000239bec
- (int)_neededRegistrationType;	// IMP=0x0010000000239baf
- (void)_updateCallerIDToTemporaryPhone;	// IMP=0x00100000002398ed
- (void)_updatePhoneNumberCallerID;	// IMP=0x001000000023944b
- (_Bool)_hasBudgetForForcedGDR;	// IMP=0x0010000000239055
- (void)_updatePerformedForcedGDRDate;	// IMP=0x0010000000238f32
- (id)_performedForcedGDRDatePeriod;	// IMP=0x0010000000238e37
- (void)_clearForcedGDRDate;	// IMP=0x0010000000238df3
- (void)_clearForcedGDRCount;	// IMP=0x0010000000238daf
- (void)_incrementForcedGDRCount;	// IMP=0x0010000000238d20
- (int)_currentForcedGDRCount;	// IMP=0x0010000000238cab
- (_Bool);	// IMP=0x0010000000238c92
- (id)userDefaults;	// IMP=0x0010000000238c79
- (id)senderKeyDistributionManager;	// IMP=0x0010000000238c22
- (id)systemMonitor;	// IMP=0x0010000000238c09
- (id)peerIDManager;	// IMP=0x0010000000238bf0
- (id)serviceController;	// IMP=0x0010000000238bd7
- (id)accountController;	// IMP=0x0010000000238bbe
- (id)appleIDNotificationCenter;	// IMP=0x0010000000238ba5
- (id)registrationCenter;	// IMP=0x0010000000238b8c
- (_Bool)shouldIncludeDefaultDeviceAsDestinationForMessageWithParams:(id)arg1;	// IMP=0x0010000000373f78
- (id)pairingManager;	// IMP=0x0010000000373f5f
- (void)decryptMessageData:(id)arg1 guid:(id)arg2 localURI:(id)arg3 remoteURI:(id)arg4 pushToken:(id)arg5 groupID:(id)arg6 encryptionType:(long long)arg7 isLiveRetry:(_Bool)arg8 replayKey:(id)arg9 completionBlock:(CDUnknownBlockType)arg10;	// IMP=0x0010000000373741
- (void)sendMessage:(id)arg1 params:(id)arg2 bulkedPayload:(id)arg3 fromID:(id)arg4 toDestinations:(id)arg5 useDictAsTopLevel:(_Bool)arg6 dataToEncrypt:(id)arg7 encryptPayload:(_Bool)arg8 wantsResponse:(_Bool)arg9 expirationDate:(id)arg10 command:(id)arg11 wantsDeliveryStatus:(_Bool)arg12 wantsCertifiedDelivery:(_Bool)arg13 deliveryStatusContext:(id)arg14 messageUUID:(id)arg15 priority:(long long)arg16 localDelivery:(_Bool)arg17 disallowRefresh:(_Bool)arg18 willSendBlock:(CDUnknownBlockType)arg19 completionBlock:(CDUnknownBlockType)arg20;	// IMP=0x001000000037328d
- (void)sendMessageWithSendParameters:(id)arg1 willSendBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000036f953
- (void)_rapportSendWithSendParameters:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000036f604
- (void)_sendRemotelyWithSendParameters:(id)arg1 data:(id)arg2 protobuf:(id)arg3 willSendBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x001000000036a8bb
- (void)_sendLocallyWithSendParameters:(id)arg1 uriToLocalDestination:(id)arg2 data:(id)arg3 protobuf:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x0010000000367a79
- (id)utunDeliveryController;	// IMP=0x0010000000367a60
- (void)_splitDestinations:(id)arg1 intoLocalDestinations:(id *)arg2 remoteDestinations:(id *)arg3 rapportDestinations:(id *)arg4 sendParameters:(id)arg5;	// IMP=0x0010000000364bf2
- (void)sendServerMessage:(id)arg1 command:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000036465e
- (void)_sendMessageWithSendParametersOnMainThread:(id)arg1 filteredDestinations:(id)arg2 data:(id)arg3 compressedData:(id)arg4 protobufToSend:(id)arg5 willSendBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x0010000000362fc2
- (id)newSendMessageContext;	// IMP=0x0010000000362a8a
- (long long)maxRemoteMessagingPayloadSize;	// IMP=0x0010000000362a02

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
