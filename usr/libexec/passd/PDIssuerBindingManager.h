//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSHashTable, NSString, PDCardFileManager, PDDatabaseManager, PDNotificationStreamManager, PDPaymentWebServiceCoordinator, PDUserNotificationManager, PDWebServicesCoordinator, PKSecureElement;

@interface PDIssuerBindingManager : NSObject
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
    PDCardFileManager *_cardFileManager;	// 16 = 0x10
    PKSecureElement *_secureElement;	// 24 = 0x18
    PDWebServicesCoordinator *_webServiceCoordinator;	// 32 = 0x20
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;	// 40 = 0x28
    PDUserNotificationManager *_notificationMananger;	// 48 = 0x30
    PDNotificationStreamManager *_notificationStreamManager;	// 56 = 0x38
    NSHashTable *_observers;	// 64 = 0x40
    struct os_unfair_lock_s _observersLock;	// 72 = 0x48
    NSDate *_lastAccountAddedDate;	// 80 = 0x50
    _Bool _isVerifyingActivatingPasses;	// 88 = 0x58
    _Bool _isVerifyingAllPasses;	// 89 = 0x59
    _Bool _didDeferWork;	// 90 = 0x5a
    _Bool _isIssuerBindingSupported;	// 91 = 0x5b
    struct os_unfair_lock_s _lock;	// 92 = 0x5c
}

- (void).cxx_destruct;	// IMP=0x00200000004aaa71
- (void)paymentWebServiceCoordinatorWebServiceDidChange:(id)arg1;	// IMP=0x00100000004aaa5f
- (void)handleNotificationWithName:(id)arg1 event:(id)arg2 forStream:(long long)arg3;	// IMP=0x00100000004aa9a8
- (id)createCurrentNotificationRegistrationState;	// IMP=0x00100000004aa930
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x00100000004aa8b3
- (void)_updateActivatingCheckSchedule;	// IMP=0x00100000004aa63f
- (void)_updateIssuerBindingAvailability;	// IMP=0x00100000004aa03a
- (void)_verifyActivatingPasses;	// IMP=0x00100000004a9b43
- (void)_sendGenericUserNotificationForStateUpdate:(unsigned long long)arg1;	// IMP=0x00100000004a9a94
- (void)_sendUserNotificationForStateUpdate:(unsigned long long)arg1 forPass:(id)arg2;	// IMP=0x00100000004a992f
- (void)_updateNFCPayloadState:(unsigned long long)arg1 forPassUniqueIdentifier:(id)arg2 notify:(_Bool)arg3;	// IMP=0x00100000004a96f4
- (void)updateNFCPayloadState:(unsigned long long)arg1 forPass:(id)arg2;	// IMP=0x00100000004a969a
- (void)_verifyIssuerBindingInformationForPassUniqueIdentifier:(id)arg1 passIngestionDate:(id)arg2 fidoProfile:(id)arg3 signedChallenge:(id)arg4 forFirstTime:(_Bool)arg5;	// IMP=0x00100000004a8eaa
- (_Bool)_isIssuerBindingAvailable;	// IMP=0x00100000004a8cde
- (void)unregisterObserver:(id)arg1;	// IMP=0x00100000004a8c84
- (void)registerObserver:(id)arg1;	// IMP=0x00100000004a8c2a
- (void)noteAccountRemoved;	// IMP=0x00100000004a88f0
- (void)noteAccountAdded;	// IMP=0x00100000004a8831
- (void)passRemoved:(id)arg1;	// IMP=0x00100000004a881f
- (void)passAddedOrUpdated:(id)arg1 passAdded:(_Bool)arg2;	// IMP=0x00100000004a85ec
- (void)_verifyAllPasses;	// IMP=0x00100000004a814d
- (void)scheduleVerifyAllIssuerBoundPassesActivity;	// IMP=0x00100000004a8023
- (void)requestIssuerBoundPassesWithBindingWithData:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000004a66a5
- (void)dealloc;	// IMP=0x00100000004a6647
- (id)initWithDatabaseManager:(id)arg1 cardFileManager:(id)arg2 notificationMananger:(id)arg3 notificationStreamManager:(id)arg4 webServiceCoordinator:(id)arg5 paymentWebServiceCoordinator:(id)arg6 secureElement:(id)arg7;	// IMP=0x00100000004a63f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

