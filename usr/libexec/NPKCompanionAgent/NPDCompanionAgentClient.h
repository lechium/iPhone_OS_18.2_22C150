//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PDXPCService.h>

@class MISSING_TYPE, NSObject, NSString;
@protocol NPDCompanionAgentClientDataSource, NPDCompanionAgentClientDelegate, OS_dispatch_source;

@interface NPDCompanionAgentClient : PDXPCService
{
    NSObject<OS_dispatch_source> *_watchOfferTimeoutTimer;	// 8 = 0x8
    id <NPDCompanionAgentClientDataSource> _dataSource;	// 16 = 0x10
    id <NPDCompanionAgentClientDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000033027
@property(nonatomic) __weak id <NPDCompanionAgentClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <NPDCompanionAgentClientDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_removePendingAppleCardNotification;	// IMP=0x0010000000032e7e
- (void)_updateLocalCommutePlanReminderForCommutePlan:(id)arg1 pass:(id)arg2;	// IMP=0x0010000000032bc6
- (void)_updateLocalBalanceReminderForBalance:(id)arg1 pass:(id)arg2;	// IMP=0x00100000000328f2
- (id)_commutePlanReminderIdentifierWithCommutePlan:(id)arg1 pass:(id)arg2;	// IMP=0x00100000000327ce
- (void)_applyIngestionDateToPass:(id)arg1;	// IMP=0x00100000000326cf
- (void)_selectNewDefaultCardForUserAfterDeletionOfDefaultCardWithUniqueID:(id)arg1;	// IMP=0x0010000000031fe3
- (void)handlePeerPaymentTermsAndConditionsRequestFromGizmo;	// IMP=0x0010000000031ded
- (void)trustedDeviceEnrollmentSignatureWithAccountDSID:(id)arg1 sessionData:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000031ad6
- (void)isIssuerAppProvisioningSupported:(CDUnknownBlockType)arg1;	// IMP=0x001000000003193f
- (void)updateCredentials:(id)arg1 forUniqueID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000317b1
- (void)expressModeEnabledForPassIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000315b9
- (void)hasActiveExternallySharedPassesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000031456
- (void)presentStandaloneTransaction:(long long)arg1 forPassUniqueIdentifier:(id)arg2 terminalReaderIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000311c7
- (void)markPendingTransactionAsProcessedForPassWithUniqueID:(id)arg1;	// IMP=0x001000000003115e
- (void)fetchPendingTransactionForPassWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000310d3
- (void)noteForegroundVerificationObserverActive:(_Bool)arg1;	// IMP=0x0010000000030fac
- (void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2;	// IMP=0x0010000000030e3e
- (void)setCommutePlanReminder:(id)arg1 forCommutePlan:(id)arg2 pass:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000030a0d
- (void)commutePlanReminderForCommutePlan:(id)arg1 pass:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000308da
- (void)setBalanceReminder:(id)arg1 forBalance:(id)arg2 pass:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000303e0
- (void)balanceReminderForBalance:(id)arg1 pass:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003028b
- (void)balancesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000030139
- (void)transitStateWithPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002ffc6
- (void)deletePaymentTransactionWithIdentifier:(id)arg1 fromDeviceWithPairingID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002fb52
- (void)transactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 orderedByDate:(long long)arg6 limit:(long long)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x001000000002f589
- (void)markAllAppletsForDeletionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002f502
- (MISSING_TYPE *)initiateLostModeExitAuthWithCompletion: /* Error: Ran out of types for this method. */;	// IMP=0x001000000002f13f
- (void)deviceIDSIdentifierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002ef95
- (void)passesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002eb58
- (void)countOfPassesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002e9d4
- (void)updateSettings:(unsigned long long)arg1 forPassWithUniqueID:(id)arg2;	// IMP=0x001000000002e903
- (void)peerPaymentAccountForPairingID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002e6a7
- (void)setPeerPaymentAccount:(id)arg1 forPairingID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002e5fa
- (void)sharedPeerPaymentWebServiceContextForPairingID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002e3ca
- (void)setSharedPeerPaymentWebServiceContext:(id)arg1 forPairingID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002e328
- (void)sharedPaymentWebServiceContextForPairingID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002e312
- (void)setSharedPaymentWebServiceContext:(id)arg1 forPairingID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002e2ff
- (void)handlePendingiCloudSignoutWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002e2f9
- (void)handlePendingUnpairingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002e2f3
- (void)redownloadAllPaymentPassesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002e2ed
- (void)initiateConsistencyCheckWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002e2e7
- (void)setDefaultPaymentApplication:(id)arg1 forPassWithUniqueID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002db3d
- (void)defaultPaymentApplicationForPassWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002d97b
- (_Bool)_isPassQualifiedToBeDefaultWithUniqueID:(id)arg1;	// IMP=0x001000000002d716
- (void)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002d670
- (id)_defaultCard;	// IMP=0x001000000002d58c
- (void)defaultCard:(CDUnknownBlockType)arg1;	// IMP=0x001000000002d526
- (void)setDefaultCard:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002d088
- (_Bool)_isGizmoConnected;	// IMP=0x001000000002cfce
- (void)removePaymentPassWithUniqueID:(id)arg1 forPairingID:(id)arg2 waitForConfirmation:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000002c035
- (void)savePaymentPassData:(id)arg1 withUniqueID:(id)arg2 forPairingID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000002b7bb
- (void)credentialedPassUniqueIDsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000002b2a5
- (void)paymentPassWithPairedTerminalIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002acfa
- (void)paymentPassWithDeviceAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002a805
- (void)paymentPassesWithPrimaryAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002a2ae
- (id)paymentPassWithUniqueID:(id)arg1;	// IMP=0x0010000000029d05
- (void)paymentPassWithUniqueID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000029c96
- (void)paymentPassUniqueIDsExcludingDeactivated:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000298f7
- (void)registerDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000029794
- (void)_invokeWatchOfferProvisioningCompletionHandlersWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x0010000000029642
- (void)noteProvisioningPreflightCompleteWithSuccess:(_Bool)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000029508
- (void)_invalidateWatchOfferTimer;	// IMP=0x0010000000029442
- (void)_setOrResetWatchOfferTimerForProvisioningURL:(id)arg1;	// IMP=0x0010000000028f8b
- (void)beginProvisioningFromWatchOfferForPaymentPasses:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000028ac0
- (void)handleProvisioningErrorForAccountIdentifier:(id)arg1 error:(id)arg2;	// IMP=0x0010000000028520
- (void)handleDeviceUnlockedForPendingProvisioningRequestFromGizmo;	// IMP=0x0010000000027d81
- (void)provisionPassForRemoteCredentialWithType:(long long)arg1 andIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000027c57
- (void)provisionPassForAccountIdentifier:(id)arg1 makeDefault:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002720b
- (void)noteWatchOfferDisplayedForPaymentPassWithUniqueID:(id)arg1;	// IMP=0x00100000000270de
- (void)connect;	// IMP=0x00100000000270d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

