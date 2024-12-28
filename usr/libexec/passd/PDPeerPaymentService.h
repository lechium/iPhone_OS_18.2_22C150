//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PDXPCService.h>

@class NSString, PDDatabaseManager, PDPeerPaymentAccountManager, PDPeerPaymentWebServiceCoordinator, PDRemoteInterfacePresenter, PDUserNotificationManager, PKEntitlementWhitelist, PKSharingIDSManager;

@interface PDPeerPaymentService : PDXPCService
{
    PKEntitlementWhitelist *_whitelist;	// 8 = 0x8
    PDRemoteInterfacePresenter *_remoteInterfacePresenter;	// 16 = 0x10
    PDPeerPaymentAccountManager *_peerPaymentAccountManager;	// 24 = 0x18
    PDPeerPaymentWebServiceCoordinator *_peerPaymentWebServiceCoordinator;	// 32 = 0x20
    PDDatabaseManager *_databaseManager;	// 40 = 0x28
    PDUserNotificationManager *_userNotificationManager;	// 48 = 0x30
    PKSharingIDSManager *_idsSharingManager;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000174d4b
@property(retain, nonatomic) PKSharingIDSManager *idsSharingManager; // @synthesize idsSharingManager=_idsSharingManager;
@property(retain, nonatomic) PDUserNotificationManager *userNotificationManager; // @synthesize userNotificationManager=_userNotificationManager;
@property(retain, nonatomic) PDDatabaseManager *databaseManager; // @synthesize databaseManager=_databaseManager;
@property(retain, nonatomic) PDPeerPaymentWebServiceCoordinator *peerPaymentWebServiceCoordinator; // @synthesize peerPaymentWebServiceCoordinator=_peerPaymentWebServiceCoordinator;
@property(retain, nonatomic) PDPeerPaymentAccountManager *peerPaymentAccountManager; // @synthesize peerPaymentAccountManager=_peerPaymentAccountManager;
- (void)peerPaymentWebServiceCoordinatorRecurringPaymentsChanged;	// IMP=0x0010000000174cbc
- (void)peerPaymentWebServiceCoordinatorPendingRequestsChanged;	// IMP=0x0010000000174caa
- (void)peerPaymentAccountManagerRecurringPaymentsChanged;	// IMP=0x0010000000174c98
- (void)peerPaymentAccountManagerPendingRequestsChanged;	// IMP=0x0010000000174c86
- (void)_notifyRecurringPaymentsChangedObservers;	// IMP=0x0010000000174b6b
- (void)_notifyPendingRequestsChangedObservers;	// IMP=0x0010000000174a50
- (void)_removeNotificationsForPeerPaymentPendingRequestWithRequestTokens:(id)arg1;	// IMP=0x0010000000174847
- (void)_removeAllNotificationsForPeerPaymentPendingRequests;	// IMP=0x0010000000174595
- (void)_scheduleNotificationsForPeerPaymentPendingRequests:(id)arg1;	// IMP=0x0010000000173a07
- (id)_displayNameForAddress:(id)arg1;	// IMP=0x001000000017393c
- (void)reportFailureDiagnostic:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000017371b
- (void)deleteAllCounterpartImageDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000173521
- (void)counterpartImageDataForTransactionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001732e3
- (void)counterpartImageDataWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001730a5
- (void)counterpartImageDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000172e96
- (void)insertOrUpdateNearbyPeerPaymentSetupNotificationWithTransactionIdentifier:(id)arg1 amount:(id)arg2 currency:(id)arg3 senderName:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000172a8f
- (void)insertOrUpdateDeviceOriginatedNearbyPeerPaymentTransactionWithIdentifier:(id)arg1 memo:(id)arg2 counterpartAppearanceData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001727e3
- (void)presentReceiverFlowWithOrientation:(id)arg1 host:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001725a1
- (void)presentSenderFlowWithHost:(unsigned long long)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000172364
- (void)encryptData:(id)arg1 usingCertificateWithDestination:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000172133
- (void)encryptionCertificateForDestination:(unsigned long long)arg1 forceUpdate:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000171f22
- (void)_removeAllNotificationsForPeerPaymentRecurringPayments;	// IMP=0x0010000000171e9a
- (void)_removeNotificationsForPeerPaymentRecurringPaymentsWithIdentifiers:(id)arg1;	// IMP=0x0010000000171c8e
- (void)hasRecurringPayments:(CDUnknownBlockType)arg1;	// IMP=0x0010000000171a7e
- (void)updateRecurringPaymentStatus:(unsigned long long)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000017182f
- (void)updateRecurringPaymentMemo:(id)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001715b5
- (void)performRecurringPaymentAction:(unsigned long long)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000171364
- (void)deleteAllRecurringPaymentsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000017113d
- (void)deleteRecurringPaymentsForIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000170ee3
- (void)insertOrUpdateRecurringPayments:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000170ca6
- (void)updateRecurringPaymentsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000170a94
- (void)updateAutoReloadAmount:(id)arg1 threshold:(id)arg2 identifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001707e8
- (void)recurringPaymentsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001705d6
- (void)deletePeerPaymentPendingRequestsForPeerPaymentAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001703af
- (void)deletePeerPaymentPendingRequestsForRequestTokens:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000170155
- (void)insertOrUpdatePeerPaymentPendingRequests:(id)arg1 shouldScheduleNotifications:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000016fef0
- (void)peerPaymentPendingRequestsForPeerPaymentAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000016fce0
- (void)peerPaymentPendingRequestsForRequestTokens:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000016faa1
- (void)remoteRegistrationRequest:(id)arg1 forHandle:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000016f85c
- (void)resetApplePayManateeViewWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000016f685
- (void)checkTLKsMissingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000016f4ae
- (void)cloudStoreStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000016f2d6
- (void)initalizeCloudStoreIfNecessaryWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000016f0ff
- (void)unregisterDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000016ef28
- (void)registerDeviceWithRegistrationURL:(id)arg1 pushToken:(id)arg2 forceReregister:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000016ed2c
- (void)registerDeviceWithForceReregister:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000016eb36
- (void)registerDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000016e95b
- (void)downloadPassIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000016e7eb
- (void)setLastUsedAlternateFundingSourcePassUniqueIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000016e5a6
- (void)lastUsedAlternateFundingSourcePassUniqueIdentifier:(CDUnknownBlockType)arg1;	// IMP=0x001000000016e3ce
- (void)balanceForPass:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000016e1d2
- (void)updateMessageReceivedDate:(id)arg1 forTransactionWithIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000016de4d
- (void)receivedPeerPaymentMessageData:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000016d703
- (void)presentPeerPaymentTermsAndConditionsWithTermsURL:(id)arg1 termsIdentifier:(id)arg2 passUniqueID:(id)arg3 orientation:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000016d406
- (void)presentRegistrationFlowWithAccount:(id)arg1 amount:(id)arg2 state:(unsigned long long)arg3 senderAddress:(id)arg4 orientation:(id)arg5 hostSceneIdentifier:(id)arg6 hostSceneBundleIdentifier:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x001000000016d04c
- (void)presentIdentityVerificationFlowWithResponseData:(id)arg1 orientation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000016cc65
- (void)registrationStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000016ca50
- (void)setPreferences:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000016c80f
- (void)deletePreferencesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000016c601
- (void)deleteAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000016c3f3
- (void)updateMockAccountBalanceByAddingAmount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000016c1bc
- (void)updatePreferencesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000016bfa7
- (void)updateAccountAndAssociatedAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000016bd92
- (void)updateAssociatedAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000016bb7d
- (void)updateAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000016b968
- (void)preferencesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000016b753
- (void)accountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000016b53c
- (void)usingSynchronousProxy:(_Bool)arg1 setSharedPeerPaymentWebServiceContext:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000016b327
- (void)usingSynchronousProxy:(_Bool)arg1 fetchSharedPeerPaymentWebServiceContextWithHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000016b0d5
- (void)dealloc;	// IMP=0x001000000016af32
- (id)initWithConnection:(id)arg1 server:(id)arg2;	// IMP=0x001000000016adca
- (id)initWithConnection:(id)arg1;	// IMP=0x001000000016adbc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
