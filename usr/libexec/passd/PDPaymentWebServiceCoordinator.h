//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableArray, NSMutableSet, NSString, PDAccountManager, PDAppletSubcredentialManager, PDApplyManager, PDAssertionManager, PDAuxiliaryCapabilityManager, PDCardFileManager, PDCloudStoreNotificationCoordinator, PDDatabaseManager, PDDefaultPassManager, PDDevicePasscodeManager, PDDeviceRegistrationServiceCoordinator, PDDiscoveryManager, PDExpressPassManager, PDFamilyCircleManager, PDISO18013Manager, PDPassUpgradeController, PDPaymentSafariCardImportManager, PDPaymentSetupFeaturesCoordinator, PDPaymentWebServiceArchiver, PDPeerPaymentWebServiceCoordinator, PDPendingProvisioningManager, PDProvisioningRequirementsChecker, PDPushNotificationManager, PDPushProvisioningManager, PDSharingManager, PDTransactionReceiptFileManager, PDUserNotificationManager, PKIDSManager, PKPaymentVerificationObserver, PKPaymentWebService, PKPaymentWebServiceContext, PKSecureElement, PKSecureElementConsistencyChecker;
@protocol OS_dispatch_queue, PKTapToRadarDelegate;

@interface PDPaymentWebServiceCoordinator : NSObject
{
    PDPushNotificationManager *_pushNotificationManager;	// 8 = 0x8
    PDDatabaseManager *_databaseManager;	// 16 = 0x10
    PDCardFileManager *_passStore;	// 24 = 0x18
    PKSecureElement *_secureElement;	// 32 = 0x20
    PKPaymentWebService *_sharedWebService;	// 40 = 0x28
    PDPaymentWebServiceArchiver *_archiver;	// 48 = 0x30
    PDAssertionManager *_assertionManager;	// 56 = 0x38
    PDFamilyCircleManager *_familyCircleManager;	// 64 = 0x40
    PDPassUpgradeController *_upgradeController;	// 72 = 0x48
    PKPaymentVerificationObserver *_verificationObserver;	// 80 = 0x50
    PDCloudStoreNotificationCoordinator *_cloudStoreCoordinator;	// 88 = 0x58
    PDTransactionReceiptFileManager *_receiptFileManager;	// 96 = 0x60
    PDExpressPassManager *_expressPassManager;	// 104 = 0x68
    PDPaymentSetupFeaturesCoordinator *_paymentSetupFeaturesCoordinator;	// 112 = 0x70
    PKSecureElementConsistencyChecker *_activeConsistencyChecker;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_sharedWebServiceQueue;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_replyQueue;	// 136 = 0x88
    PKIDSManager *_idsManager;	// 144 = 0x90
    NSHashTable *_observers;	// 152 = 0x98
    struct os_unfair_lock_s _observersLock;	// 160 = 0xa0
    NSMutableArray *_deviceCheckInTasks;	// 168 = 0xa8
    _Bool _deviceCheckInRunning;	// 176 = 0xb0
    id <PKTapToRadarDelegate> _tapToRadarDelegate;	// 184 = 0xb8
    NSMutableSet *_fetchingReceiptUniqueIDs;	// 192 = 0xc0
    PDPaymentSafariCardImportManager *_safariCardImportManager;	// 200 = 0xc8
    struct os_unfair_lock_s _lock;	// 208 = 0xd0
    PDAccountManager *_accountManager;	// 216 = 0xd8
    PDApplyManager *_applyManager;	// 224 = 0xe0
    PDAppletSubcredentialManager *_credentialManager;	// 232 = 0xe8
    PDPushProvisioningManager *_pushProvisioningManager;	// 240 = 0xf0
    PDUserNotificationManager *_userNotificationManager;	// 248 = 0xf8
    PDDiscoveryManager *_discoveryManager;	// 256 = 0x100
    PDDeviceRegistrationServiceCoordinator *_deviceRegistrationServiceCoordinator;	// 264 = 0x108
    PDDefaultPassManager *_defaultPassManager;	// 272 = 0x110
    PDDevicePasscodeManager *_devicePasscodeManager;	// 280 = 0x118
    PDPeerPaymentWebServiceCoordinator *_peerPaymentWebServiceCoordinator;	// 288 = 0x120
    PDISO18013Manager *_isoManager;	// 296 = 0x128
    PDPendingProvisioningManager *_pendingProvisioningManager;	// 304 = 0x130
    PDSharingManager *_sharingManager;	// 312 = 0x138
    PDProvisioningRequirementsChecker *_provisioningRequirementsChecker;	// 320 = 0x140
    PDAuxiliaryCapabilityManager *_auxiliaryCapabilityManager;	// 328 = 0x148
}

- (void).cxx_destruct;	// IMP=0x002000000004b664
@property(retain, nonatomic) PDAuxiliaryCapabilityManager *auxiliaryCapabilityManager; // @synthesize auxiliaryCapabilityManager=_auxiliaryCapabilityManager;
@property(retain, nonatomic) PDAssertionManager *assertionManager; // @synthesize assertionManager=_assertionManager;
@property(retain, nonatomic) PDProvisioningRequirementsChecker *provisioningRequirementsChecker; // @synthesize provisioningRequirementsChecker=_provisioningRequirementsChecker;
@property(retain, nonatomic) PDSharingManager *sharingManager; // @synthesize sharingManager=_sharingManager;
@property(retain, nonatomic) PDPendingProvisioningManager *pendingProvisioningManager; // @synthesize pendingProvisioningManager=_pendingProvisioningManager;
@property(retain, nonatomic) PDISO18013Manager *isoManager; // @synthesize isoManager=_isoManager;
@property(retain, nonatomic) PDPeerPaymentWebServiceCoordinator *peerPaymentWebServiceCoordinator; // @synthesize peerPaymentWebServiceCoordinator=_peerPaymentWebServiceCoordinator;
@property(retain, nonatomic) PDDevicePasscodeManager *devicePasscodeManager; // @synthesize devicePasscodeManager=_devicePasscodeManager;
@property(retain, nonatomic) PDDefaultPassManager *defaultPassManager; // @synthesize defaultPassManager=_defaultPassManager;
@property(retain, nonatomic) PDDeviceRegistrationServiceCoordinator *deviceRegistrationServiceCoordinator; // @synthesize deviceRegistrationServiceCoordinator=_deviceRegistrationServiceCoordinator;
@property(retain, nonatomic) PDPaymentSetupFeaturesCoordinator *paymentSetupFeaturesCoordinator; // @synthesize paymentSetupFeaturesCoordinator=_paymentSetupFeaturesCoordinator;
@property(retain, nonatomic) PDDiscoveryManager *discoveryManager; // @synthesize discoveryManager=_discoveryManager;
@property(nonatomic) __weak PDUserNotificationManager *userNotificationManager; // @synthesize userNotificationManager=_userNotificationManager;
@property(nonatomic) __weak PDPushProvisioningManager *pushProvisioningManager; // @synthesize pushProvisioningManager=_pushProvisioningManager;
@property(nonatomic) __weak PDAppletSubcredentialManager *credentialManager; // @synthesize credentialManager=_credentialManager;
@property(retain, nonatomic) PDApplyManager *applyManager; // @synthesize applyManager=_applyManager;
@property(retain, nonatomic) PDAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(readonly, nonatomic) PDFamilyCircleManager *familyCircleManager;
@property(readonly, nonatomic) PDDeviceRegistrationServiceCoordinator *registrationCoordinator;
@property(readonly, nonatomic) PDPassUpgradeController *upgradeController;
@property(readonly, nonatomic) PDExpressPassManager *expressPassManager;
@property(readonly, nonatomic) PDAppletSubcredentialManager *subcredentialManager;
@property(readonly, nonatomic) PDPaymentWebServiceCoordinator *paymentWebServiceCoordinator;
@property(readonly, nonatomic) PDDatabaseManager *databaseManager;
@property(readonly, nonatomic) PDCardFileManager *cardFileManager;
- (void)receivedXPCEvent:(id)arg1 forEventStream:(id)arg2;	// IMP=0x001000000004b399
- (void)_queue_performContactInformationFetchTaskWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000004aff5
- (void)setDeviceUpgradeTasksContextBuildVersion:(id)arg1 upgradeTaskVersion:(long long)arg2 retryCount:(long long)arg3;	// IMP=0x001000000004ae6b
- (void)_runDeviceUpgradeTasks;	// IMP=0x001000000004a16d
- (void)_queue_completeDeviceUpgradeTasks;	// IMP=0x001000000004a08d
- (void)unscheduleDeviceUpgradeTaskActivity;	// IMP=0x0010000000049f95
- (void)_scheduleDeviceUpgradeTaskActivityWithRandomizeStartDate:(_Bool)arg1;	// IMP=0x0010000000049ca7
- (void)scheduleDeviceUpgradeTasksIfNecessaryWithRandomizeStartDate:(_Bool)arg1;	// IMP=0x00100000000498f7
- (void)scheduleDeviceUpgradeTasksIfNecessary;	// IMP=0x00100000000498e0
- (void)checkSafariCredentialEligibility:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000497e7
- (void)_queue_performOwnershipTokensRequestWithUserInfo:(id)arg1;	// IMP=0x0010000000049696
- (void)_queue_provisionPushProvisioningSharingIdentifiers;	// IMP=0x001000000004963f
- (void)_queue_recreateCloudStoreTransactionZoneWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000004961c
- (void)noteWebServiceDidChange;	// IMP=0x001000000004957e
- (void)noteAccountChanged;	// IMP=0x0010000000049541
- (void)_queue_setupBackgroundWebServiceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000004947f
- (void)_handleDownloadedPass:(id)arg1;	// IMP=0x001000000004921b
- (void)_fetchPassesIfNecessaryForPushTopic:(id)arg1;	// IMP=0x0010000000048d05
- (id)_userNotificationFromResponse:(id)arg1;	// IMP=0x001000000004889b
- (void)_performNotificationActionWithUserInfo:(id)arg1;	// IMP=0x0010000000048679
- (void)_processValueAddedServiceTransaction:(id)arg1;	// IMP=0x00100000000481bf
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x0010000000047dcd
- (void)handleRequestedActions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004685f
- (_Bool)shouldStartConsistencyCheck;	// IMP=0x001000000004681d
- (void)scheduleConsistencyCheck:(id)arg1 pluggedIn:(_Bool)arg2 backoffLevel:(id)arg3;	// IMP=0x001000000004640e
- (void)deviceStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000045c1f
- (id)paymentPasses;	// IMP=0x0010000000045bc6
- (void)didDownloadPaymentPass:(id)arg1;	// IMP=0x0010000000045afb
- (_Bool)synchronizeWithTSM;	// IMP=0x00100000000458a8
- (void)assertionManager:(id)arg1 didAcquireAssertion:(id)arg2;	// IMP=0x0010000000045708
- (_Bool)allowAcquisitionOfAssertionOfType:(unsigned long long)arg1;	// IMP=0x00100000000456f8
- (_Bool)interestedInAssertionOfType:(unsigned long long)arg1;	// IMP=0x00100000000456e8
- (void)handleDeletionForPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;	// IMP=0x00100000000456a3
- (void)handleInsertionForPaymentPass:(id)arg1;	// IMP=0x0010000000045625
- (void)verificationObserverDidTimeout:(id)arg1;	// IMP=0x00100000000454eb
- (void)verificationObserver:(id)arg1 didObserveVerificationCode:(id)arg2;	// IMP=0x0010000000045102
- (void)setDeviceCheckInContextBuildVersion:(id)arg1 outstandingAction:(long long)arg2 forRegion:(id)arg3;	// IMP=0x0010000000044eab
- (void)_handleDeviceCheckInAction:(long long)arg1 region:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000044364
- (void)_queue_handleCheckInForRegion:(id)arg1 action:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000043f30
- (void)_queue_checkContextForDeviceCheckInAuthRequirement:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000439f9
- (void)_queue_completeDeviceCheckInTask:(id)arg1 success:(_Bool)arg2 error:(id)arg3;	// IMP=0x001000000004362b
- (void)_performDeviceCheckInTask:(id)arg1;	// IMP=0x0010000000042827
- (void)_queue_cancelAllDeviceCheckInTasks;	// IMP=0x00100000000426f3
- (void)_queue_coeleaseDeviceCheckInCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000425f9
- (void)_queue_enqueueDeviceCheckInTask:(id)arg1;	// IMP=0x0010000000042504
- (void)performDeviceCheckInWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000422ae
- (void)_queue_unscheduleDeviceCheckIn;	// IMP=0x0010000000042220
- (void)unscheduleDeviceCheckIn;	// IMP=0x00100000000421a1
- (double)_queue_deviceCheckInRepeatInterval;	// IMP=0x00100000000420c0
- (_Bool)_queue_automaticDeviceCheckInRequiredForRegion:(id)arg1;	// IMP=0x0010000000041e36
- (void)_queue_scheduleDeviceCheckInWithStartTimeOffset:(double)arg1 repeatInterval:(double)arg2 randomizeTimes:(_Bool)arg3;	// IMP=0x0010000000041baf
- (void)scheduleDeviceCheckInWithStartTimeOffset:(double)arg1;	// IMP=0x0000000000041aa0
- (void)scheduleDeviceCheckInIfNecessary;	// IMP=0x001000000004166a
- (void)_queue_registerDeviceAtBrokerURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000411f1
- (void)_queue_performRegistrationForBrokerURL:(id)arg1 force:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000040e5d
- (void)performRegistrationForBrokerURL:(id)arg1 force:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000040d72
- (void)_queue_performRegistrationForRegion:(id)arg1 force:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000040660
- (void)performRegistrationForRegion:(id)arg1 force:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000040575
- (void)performPrimaryRegionRegistrationForce:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004055c
- (void)performRegistrationForMemberOfRegions:(id)arg1 force:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003fa88
- (void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2;	// IMP=0x001000000003f8b7
- (void)paymentWebServiceBackgroundSessionDidBecomeInvalid:(id)arg1;	// IMP=0x001000000003f737
- (void)paymentWebService:(id)arg1 didRegisterCredentialWithIdentifier:(id)arg2 response:(id)arg3 error:(id)arg4;	// IMP=0x001000000003f5fb
- (void)paymentWebService:(id)arg1 didDownloadSerialNumbersForInstalledPasses:(id)arg2 inRegion:(id)arg3;	// IMP=0x001000000003ee60
- (void)paymentWebService:(id)arg1 didDownloadPassRemoteAssets:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003ec89
- (void)paymentWebService:(id)arg1 didDownloadPass:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3;	// IMP=0x001000000003eb7a
- (void)paymentWebService:(id)arg1 didDownloadPass:(id)arg2;	// IMP=0x001000000003eb64
- (void)passAdded:(id)arg1;	// IMP=0x001000000003e5ba
- (void)passWillBeRemoved:(id)arg1 withDiagnosticReason:(id)arg2;	// IMP=0x001000000003e3a2
- (void)applyPushNotificationToken:(id)arg1;	// IMP=0x001000000003de45
- (void)handlePushNotificationForTopic:(id)arg1 userInfo:(id)arg2;	// IMP=0x001000000003d4c4
- (id)pushNotificationTopics;	// IMP=0x001000000003d427
- (void)backgroundRegisterCredentialWithRequest:(id)arg1;	// IMP=0x001000000003d25f
- (void)registerCredentialWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003d150
- (void)setAccountAttestationAnonymizationSalt:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003d051
- (void)accountAttestationAnonymizationSaltWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003cf57
- (void)validatePreconditionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003ce2f
- (void)_paymentHardwareStatusWithType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003cbaa
- (void)paymentHardwareStatusWithType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003cae6
- (void)downloadReceiptForTransaction:(id)arg1;	// IMP=0x001000000003bf14
- (id)paymentOffersServicePushTopics;	// IMP=0x001000000003bec4
- (id)accountServicePushTopics;	// IMP=0x001000000003be74
- (id)applyServicePushTopics;	// IMP=0x001000000003be24
- (void)processValueAddedServiceTransaction:(id)arg1;	// IMP=0x001000000003bb90
- (void)initiateDevicePassesDownload;	// IMP=0x001000000003ba60
- (void)performConsistencyCheck;	// IMP=0x001000000003b826
- (void)initiateConsistencyCheck;	// IMP=0x001000000003b814
- (void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forPass:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x001000000003b13d
- (void)deleteSharedWebServiceWithDiagnosticReason:(id)arg1;	// IMP=0x001000000003aa78
- (void)startTasksIfNecessary;	// IMP=0x001000000003aa4a
- (void)performHandlerOnSharedWebServiceQueue:(CDUnknownBlockType)arg1;	// IMP=0x001000000003a973
- (void)updateSharedWebServiceContext:(id)arg1;	// IMP=0x001000000003a63a
@property(readonly, nonatomic) PKPaymentWebServiceContext *sharedWebServiceContext;
- (void)setSharedWebService:(id)arg1;	// IMP=0x001000000003a5a9
- (id)sharedWebService;	// IMP=0x001000000003a56f
- (void)_updateWebServiceConfigurationWithSupportedRegionTimeInterval:(double)arg1 unsupportedRegionTimeInterval:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003a3ad
- (void)_updateWebServiceConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003a1fc
- (void)updateWebServiceConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003a11e
- (void)scheduleConsistencyCheckIfNecessary;	// IMP=0x001000000003a01b
- (void)connect;	// IMP=0x0010000000039f2f
- (void)_accessObserversWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000039dc1
- (void)unregisterObserver:(id)arg1;	// IMP=0x0010000000039d61
- (void)registerObserver:(id)arg1;	// IMP=0x0010000000039d01
- (void)dealloc;	// IMP=0x0010000000039c20
- (id)initWithPushNotificationManager:(id)arg1 databaseManager:(id)arg2 passStore:(id)arg3 assertionManager:(id)arg4 cloudStoreCoordinator:(id)arg5 idsManager:(id)arg6 tapToRadarDelegate:(id)arg7 receiptFileManager:(id)arg8 expressPassManager:(id)arg9 familyCircleManager:(id)arg10;	// IMP=0x001000000003979e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

