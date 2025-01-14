//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, PDAssertionManager, PDCardFileManager, PDDatabaseManager, PDDeviceRegistrationServiceCoordinator, PDFamilyCircleManager, PDNotificationStreamManager, PDPaymentWebServiceCoordinator, PDPendingProvisioningManager, PDUserNotificationManager, PKSecureElement;
@protocol OS_dispatch_queue, PKCloudStoreCoordinatorDelegate;

@interface PDPushProvisioningManager : NSObject
{
    PDAssertionManager *_assertionManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_replyQueue;	// 24 = 0x18
    NSMutableSet *_availableSharingMetaData;	// 32 = 0x20
    _Bool _isUpdatingPushProvisioningSharingIdentifier;	// 40 = 0x28
    _Bool _shouldFetchSharingIdentifiersFromServer;	// 41 = 0x29
    _Bool _didDeferUpdatingSharingIdentifiers;	// 42 = 0x2a
    PDDatabaseManager *_databaseManager;	// 48 = 0x30
    PDCardFileManager *_cardFileManager;	// 56 = 0x38
    PDPaymentWebServiceCoordinator *_webServiceCoordinator;	// 64 = 0x40
    PKSecureElement *_secureElement;	// 72 = 0x48
    PDUserNotificationManager *_userNotificationManager;	// 80 = 0x50
    PDFamilyCircleManager *_familyCircleManager;	// 88 = 0x58
    id <PKCloudStoreCoordinatorDelegate> _cloudStoreCoordinator;	// 96 = 0x60
    PDDeviceRegistrationServiceCoordinator *_deviceRegistrationServiceCoordinator;	// 104 = 0x68
    PDNotificationStreamManager *_notificationStreamManager;	// 112 = 0x70
    PDPendingProvisioningManager *_pendingProvisioningManager;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x002000000012cb9d
@property(retain, nonatomic) PDPendingProvisioningManager *pendingProvisioningManager; // @synthesize pendingProvisioningManager=_pendingProvisioningManager;
@property(retain, nonatomic) PDNotificationStreamManager *notificationStreamManager; // @synthesize notificationStreamManager=_notificationStreamManager;
@property(retain, nonatomic) PDDeviceRegistrationServiceCoordinator *deviceRegistrationServiceCoordinator; // @synthesize deviceRegistrationServiceCoordinator=_deviceRegistrationServiceCoordinator;
@property(retain, nonatomic) id <PKCloudStoreCoordinatorDelegate> cloudStoreCoordinator; // @synthesize cloudStoreCoordinator=_cloudStoreCoordinator;
@property(retain, nonatomic) PDFamilyCircleManager *familyCircleManager; // @synthesize familyCircleManager=_familyCircleManager;
@property(retain, nonatomic) PDUserNotificationManager *userNotificationManager; // @synthesize userNotificationManager=_userNotificationManager;
@property(retain, nonatomic) PKSecureElement *secureElement; // @synthesize secureElement=_secureElement;
@property(retain, nonatomic) PDPaymentWebServiceCoordinator *webServiceCoordinator; // @synthesize webServiceCoordinator=_webServiceCoordinator;
@property(retain, nonatomic) PDCardFileManager *cardFileManager; // @synthesize cardFileManager=_cardFileManager;
@property(retain, nonatomic) PDDatabaseManager *databaseManager; // @synthesize databaseManager=_databaseManager;
- (void)_webServiceForTargetDevice:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000012c9c8
- (_Bool)_companionHasProvisionedPassForCredentialHash:(id)arg1;	// IMP=0x001000000012c79c
- (_Bool)_hasProvisionedPassForCredentialHash:(id)arg1;	// IMP=0x001000000012c723
- (void)_handleExpectedPassUpdateForEligibilityResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000012c1ec
- (void)_handleUnsupportedDeviceResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000012bf5c
- (void)redeemPaymentShareableCredential:(id)arg1 provisioningRequestForEligibilityResponse:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000012ae6a
- (void)redeemProvisioningMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000012acaf
- (void)redeemProvisioningSharingIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000012ab44
- (void)redeemPaymentShareableCredential:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000012a68b
- (id)_encryptProvisioningTarget:(id)arg1 devSigned:(_Bool)arg2 certificateChain:(id)arg3 error:(id *)arg4;	// IMP=0x001000000012a2cf
- (void)_prepareProvisioningTarget:(id)arg1 checkFamilyCircle:(_Bool)arg2 determineTargetDevice:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000128bd1
- (void)prepareProvisioningTarget:(id)arg1 checkFamilyCircle:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000128bb6
- (void)encryptProvisioningTarget:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000128b00
- (void)_queue_checkAvailablePushProvisioningSharingIdentifiersAndProvisionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000012802c
- (void)_queue_performBackgroundPushProvisioningWithTransaction:(id)arg1;	// IMP=0x0010000000127d94
- (void)provisionAvailablePushProvisioningSharingIdentifiers;	// IMP=0x0010000000127c94
- (void)_queue_insertOrUpdatePushProvisioningSharingMetadata:(id)arg1;	// IMP=0x0010000000127b61
- (void)configurePushProvisioningConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001269a8
- (void)pushProvisioningNoncesWithCredentialCount:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001264d9
- (void)provideEncryptedPushProvisioningTarget:(id)arg1 sharingInstanceIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000012631b
- (void)statusForShareableCredentials:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000125891
- (void)pushProvisioningSharingIdentifiers:(CDUnknownBlockType)arg1;	// IMP=0x00100000001256e6
- (_Bool)_isPushProvisioningSupportedForCurrentDeviceRequiresSimultaneousRequestRouting:(_Bool)arg1 checkPassCount:(_Bool)arg2 passCount:(unsigned long long)arg3;	// IMP=0x00100000001254f7
- (void)_isPushProvisioningSupportedForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001248d7
- (void)isPushProvisioningSupportedForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000124754
- (id)initWithDataBaseManager:(id)arg1 cardFileManager:(id)arg2 userNotificationManager:(id)arg3 paymentWebServiceCoordinator:(id)arg4 familyCircleManager:(id)arg5 secureElement:(id)arg6 assertionManager:(id)arg7 deviceRegistrationServiceCoordinator:(id)arg8 notificationStreamManager:(id)arg9 pendingProvisioningManager:(id)arg10;	// IMP=0x0010000000124499

@end

