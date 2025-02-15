//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUTDeferredTaskQueue, IDSGetDependentRegistrationsCenter, IDSKeyTransparencyVerifier, IDSPushHandler, IDSValidationQueue, NSDate, NSMutableArray, NSMutableDictionary, NSString;
@protocol IDSRegistrationCenterMessageDelivery;

@interface IDSRegistrationCenter : NSObject
{
    NSMutableArray *_queuedRegistrations;	// 8 = 0x8
    NSMutableArray *_queuedAuthentications;	// 16 = 0x10
    NSMutableArray *_currentAuthentications;	// 24 = 0x18
    NSMutableArray *_currentRegistrations;	// 32 = 0x20
    NSMutableArray *_handlers;	// 40 = 0x28
    _Bool _pendingDequeue;	// 48 = 0x30
    _Bool _pendingDeregistration;	// 49 = 0x31
    NSMutableDictionary *_currentGetHandlesBlocks;	// 56 = 0x38
    NSMutableDictionary *_currentGetHandlesRegistrations;	// 64 = 0x40
    NSMutableArray *_successfulRegistrations;	// 72 = 0x48
    NSDate *_dateSentLastHTTPMessage;	// 80 = 0x50
    NSDate *_dateLastRegistered;	// 88 = 0x58
    NSDate *_accountingHour;	// 96 = 0x60
    unsigned long long _registrations;	// 104 = 0x68
    id <IDSRegistrationCenterMessageDelivery> _httpMessageDelivery;	// 112 = 0x70
    IDSPushHandler *_pushHandler;	// 120 = 0x78
    IDSGetDependentRegistrationsCenter *_gdrCenter;	// 128 = 0x80
    IDSKeyTransparencyVerifier *_keyTransparencyVerifier;	// 136 = 0x88
    IDSValidationQueue *_validationQueue;	// 144 = 0x90
    CUTDeferredTaskQueue *_sendAuthenticateRegistrationTask;	// 152 = 0x98
    CUTDeferredTaskQueue *_sendRegistrationTask;	// 160 = 0xa0
    CUTDeferredTaskQueue *_sendDeregistrationTask;	// 168 = 0xa8
    CUTDeferredTaskQueue *_cleanupAbsintheTask;	// 176 = 0xb0
}

+ (id)sharedInstance;	// IMP=0x0020000000277c1c
- (void).cxx_destruct;	// IMP=0x002000000029717c
@property(readonly, nonatomic) CUTDeferredTaskQueue *cleanupAbsintheTask; // @synthesize cleanupAbsintheTask=_cleanupAbsintheTask;
@property(readonly, nonatomic) CUTDeferredTaskQueue *sendDeregistrationTask; // @synthesize sendDeregistrationTask=_sendDeregistrationTask;
@property(readonly, nonatomic) CUTDeferredTaskQueue *sendRegistrationTask; // @synthesize sendRegistrationTask=_sendRegistrationTask;
@property(readonly, nonatomic) CUTDeferredTaskQueue *sendAuthenticateRegistrationTask; // @synthesize sendAuthenticateRegistrationTask=_sendAuthenticateRegistrationTask;
@property(readonly) IDSValidationQueue *validationQueue; // @synthesize validationQueue=_validationQueue;
- (void)sendDeactivationRequestWithSIM:(id)arg1 Info:(id)arg2;	// IMP=0x0010000000296a67
- (void)buildValidationCredentialsIfNeeded;	// IMP=0x0010000000296a61
- (void)sendValidateCredential:(id)arg1 withDeliveryCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000296701
- (id)dateLastRegistered;	// IMP=0x00100000002966f3
- (void)_noteRegistration;	// IMP=0x0010000000296547
- (_Bool)_checkOverRegistrations;	// IMP=0x0010000000296421
- (void)handler:(id)arg1 pushTokenChanged:(id)arg2;	// IMP=0x0000000000296387
- (void)removeListener:(id)arg1;	// IMP=0x001000000029633a
- (void)addListener:(id)arg1;	// IMP=0x00100000002962b8
- (id)activeRegistrations;	// IMP=0x001000000029621b
- (void)cancelActionsForRegistrationInfo:(id)arg1;	// IMP=0x0010000000295fab
- (void)cancelRegisterActionsForRegistrationInfo:(id)arg1;	// IMP=0x0010000000295b8a
- (_Bool)sendDeregistration:(id)arg1;	// IMP=0x00100000002959d0
- (_Bool)sendRegistration:(id)arg1;	// IMP=0x00100000002955f4
- (void)__reallySendRegistration;	// IMP=0x001000000029556d
- (_Bool)authenticateRegistration:(id)arg1;	// IMP=0x0010000000294f54
- (void)__reallySendAuthenticateRegistration;	// IMP=0x0010000000294ea2
- (_Bool)queryValidatedEmailsForRegistration:(id)arg1 allowPasswordPrompt:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000294d08
- (_Bool)_sendKTOptInStatusUpdateForRegistration:(id)arg1 withOptInStatus:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002946b8
- (_Bool)_sendKTOptInStatusForRegistration:(id)arg1 withOptInOutRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000293ac8
- (_Bool)updateKTOptInStatusForRegistration:(id)arg1 withOptInOutRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002939b2
- (_Bool)updateKTOptInStatusForRegistration:(id)arg1 withOptInStatus:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000293892
- (_Bool)_sendPseudonymMessageOperation:(unsigned long long)arg1 forURI:(id)arg2 pseudonymURI:(id)arg3 properties:(id)arg4 requestProperties:(id)arg5 forRegistration:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x0010000000292cf4
- (double)_updatePseudonymExpiryEpoch:(double)arg1;	// IMP=0x0010000000292ae6
- (_Bool)revokePseudonym:(id)arg1 forRegistration:(id)arg2 requestProperties:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000292936
- (_Bool)renewPseudonym:(id)arg1 forRegistration:(id)arg2 forUpdatedExpiryEpoch:(double)arg3 requestProperties:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x0010000000292751
- (_Bool)provisionPseudonymFor:(id)arg1 withURI:(id)arg2 properties:(id)arg3 requestProperties:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00100000002923a2
- (void)updateFeatureToggleState:(unsigned long long)arg1 forFeatureID:(id)arg2 registration:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000291fbd
- (void)retrieveFeatureToggleStateForFeatureID:(id)arg1 registration:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000291bff
- (_Bool)_queryValidatedEmailsForRegistration:(id)arg1 allowPasswordPrompt:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000290fdf
- (void)_processGetHandlesMessage:(id)arg1 registrations:(id)arg2 deliveredWithError:(id)arg3 resultCode:(long long)arg4 resultDictionary:(id)arg5 allowPasswordPrompt:(_Bool)arg6;	// IMP=0x001000000029030d
- (_Bool)isRegistering:(id)arg1;	// IMP=0x00100000002902a7
- (id)_geoRegion;	// IMP=0x001000000029029a
- (void)reportiMessageSpamCheckUnknown:(id)arg1 count:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000028ff8c
- (void)reportAction:(long long)arg1 ofTempURI:(id)arg2 fromURI:(id)arg3 registration:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x001000000028fbe7
- (void)reportiMessageUnknownSender:(id)arg1 messageID:(id)arg2 isBlackholed:(_Bool)arg3 isJunked:(_Bool)arg4 messageServerTimestamp:(id)arg5 selfURI:(id)arg6 registration:(id)arg7;	// IMP=0x001000000028f88f
- (void)reportClientEvent:(id)arg1 registration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000028f2df
- (void)reportSpamWithMessages:(id)arg1 selfURI:(id)arg2 registration:(id)arg3;	// IMP=0x001000000028f008
- (void)reportUnknownSenderMessage:(id)arg1 selfURI:(id)arg2 registration:(id)arg3;	// IMP=0x001000000028ec3d
- (void)reportSpamMessage:(id)arg1 selfURI:(id)arg2 registration:(id)arg3;	// IMP=0x001000000028e966
- (void)_sendIDSAuthRequest:(id)arg1 forInfo:(id)arg2;	// IMP=0x001000000028e75f
- (void)_sendAuthenticateRegistration:(id)arg1;	// IMP=0x001000000028e334
- (id)_authMessageForRegistration:(id)arg1;	// IMP=0x001000000028df9f
- (id)_provTemporaryPhoneMessageForRegistration:(id)arg1;	// IMP=0x001000000028cef1
- (id)_authUsersMessageForRegistration:(id)arg1 realm:(id)arg2;	// IMP=0x001000000028b7f9
- (id)_authDSMessageForRegistration:(id)arg1 realm:(id)arg2;	// IMP=0x001000000028acd1
- (long long)_authSubsystemForInfo:(id)arg1;	// IMP=0x001000000028acc6
- (CDUnknownBlockType)_authMessageCompletionWithRegistration:(id)arg1 withOverallSuccessBlock:(CDUnknownBlockType)arg2 overallFailure:(CDUnknownBlockType)arg3;	// IMP=0x001000000028a610
- (void)sendHardDeregisterCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000289bd3
- (void)_sendDeregistration:(id)arg1;	// IMP=0x0010000000289a6a
- (void)__reallySendDeregistration;	// IMP=0x00100000002899dc
- (void)_sendRegistrationAsDeregister:(_Bool)arg1;	// IMP=0x001000000028560e
- (id)privateDeviceDataForKVSSuccess:(_Bool)arg1;	// IMP=0x0010000000284d01
- (id)_trustedDeviceForRegistrations:(id)arg1 transparencyLoggableDatasByServiceType:(id)arg2 transparencyDeviceSignaturesByServiceType:(id)arg3;	// IMP=0x0010000000284640
- (id)_URIsToRegisterForRegistration:(id)arg1;	// IMP=0x00100000002843bd
- (void)_processRegistrationMessage:(id)arg1 sentRegistrations:(id)arg2 descriptionString:(id)arg3 actionID:(id)arg4 actionString:(id)arg5 isDeregister:(_Bool)arg6 deliveredWithError:(id)arg7 resultCode:(long long)arg8 resultDictionary:(id)arg9;	// IMP=0x001000000027e7bf
- (id)_keyTransparencyDeviceSignatureFromRegistrationMessage:(id)arg1 service:(id)arg2 URI:(id)arg3;	// IMP=0x001000000027e315
- (id)_keyTransparencyLoggableDataFromRegistrationMessage:(id)arg1 service:(id)arg2 URI:(id)arg3;	// IMP=0x001000000027de94
- (id)_keyTransparencyAccountKeyFromRegistrationMessage:(id)arg1 service:(id)arg2 URI:(id)arg3;	// IMP=0x001000000027da13
- (long long)_countOfMessagesQueuedOfType:(Class)arg1 matchingCriteria:(CDUnknownBlockType)arg2;	// IMP=0x001000000027d880
- (_Bool)_hasRegistration:(id)arg1 inQueue:(id)arg2;	// IMP=0x001000000027d39c
- (void)_notifyRegistrationIdentitiesUpdated;	// IMP=0x001000000027d139
- (void)_notifyEmailQuerySuccess:(id)arg1 emailInfo:(id)arg2;	// IMP=0x001000000027cd64
- (void)_notifyEmailQueryFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 info:(id)arg5;	// IMP=0x001000000027c5e1
- (void)_notifyAllSuccessfulRegistrations:(id)arg1;	// IMP=0x001000000027c345
- (void)_notifyRegistrationSuccess:(id)arg1;	// IMP=0x001000000027bc6b
- (void)_notifyRegistrationFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 info:(id)arg5;	// IMP=0x001000000027aa42
- (void)_notifyIDSAuthenticationSuccess:(id)arg1;	// IMP=0x001000000027a382
- (void)_notifyProvisionFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 fatal:(_Bool)arg5 info:(id)arg6;	// IMP=0x00100000002798ae
- (void)_dequeuePendingRequestsIfNecessary;	// IMP=0x0010000000279175
- (unsigned long long)_disableSecondaryRegistrationPercentage;	// IMP=0x00100000002790ce
- (void)_shouldDisableSecondaryRegistration;	// IMP=0x0010000000278fb5
- (_Bool)_hasCurrentAuthenticationsOrRegistrations;	// IMP=0x0010000000278f75
- (_Bool)_hasOngoingAuthentications;	// IMP=0x0010000000278f35
- (void)__sendMessage:(id)arg1;	// IMP=0x0010000000278e3e
- (void)logState;	// IMP=0x0010000000278ce8
- (void)__dumpState;	// IMP=0x0010000000278720
- (void)engramKeyStoreDidUpdateIdentities:(id)arg1;	// IMP=0x001000000027849e
- (id)registrationReasonTracker;	// IMP=0x0010000000278485
- (id)keyTransparencyVerifier;	// IMP=0x0010000000278474
- (id)gdrCenter;	// IMP=0x0010000000278463
- (void)dealloc;	// IMP=0x001000000027839d
- (id)init;	// IMP=0x001000000027828e
- (id)initWithMessageDelivery:(id)arg1 pushHandler:(id)arg2 keyTransparencyVerifier:(id)arg3;	// IMP=0x0010000000277c71

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

