//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PDApplicationMessageManager, PDPaymentWebServiceCoordinator, PDUserNotificationManager;
@protocol PKApplicationMessageSink;

@interface PDPaymentUserCommunicationManager : NSObject
{
    PDUserNotificationManager *_notificationManager;	// 8 = 0x8
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;	// 16 = 0x10
    id <PKApplicationMessageSink> _applicationMessageSink;	// 24 = 0x18
    PDApplicationMessageManager *_applicationMessageManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000514935
- (id)_keychainItemWithIdentifier:(id)arg1;	// IMP=0x00100000005148ad
- (id)_notifiedIdentifierForCredential:(id)arg1;	// IMP=0x0010000000514829
- (void)_addNotifiedIdentifier:(id)arg1 forKeychainItemIdentifier:(id)arg2;	// IMP=0x00100000005146c7
- (id)_notifiedIdentifiersForKeychainItemIdentifier:(id)arg1;	// IMP=0x0010000000514550
- (void)_addSafariCredentialImportNotifiedForCredential:(id)arg1;	// IMP=0x0010000000514502
- (_Bool)_safariCredentialImportNotifiedForCredential:(id)arg1;	// IMP=0x0010000000514463
- (id)_safariIconImage;	// IMP=0x00100000005142c2
- (id)_networkNameFromSafariImportCardApplicationMessageIdentifier:(id)arg1;	// IMP=0x0010000000514216
- (id)_fpanSuffixFromSafariImportCardApplicationMessageIdentifier:(id)arg1;	// IMP=0x001000000051419c
- (id)_safariImportCardApplicationMessageIdentifierForCredential:(id)arg1;	// IMP=0x00100000005140cf
- (id)_applicationMessageContentForSafariImportCardWithSink:(id)arg1 registration:(id)arg2;	// IMP=0x0010000000513e48
- (id)_applicationMessageContentForSafariImportConsentWithSink:(id)arg1 registration:(id)arg2;	// IMP=0x0010000000513c6a
- (void)_handlePossibleVPANIssued:(id)arg1 fromPreviousApplications:(id)arg2;	// IMP=0x0010000000513523
- (void)_notificationsSupportedForType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000513344
- (void)connectApplicationMessageSink:(id)arg1;	// IMP=0x0010000000513333
- (void)applicationMessageSink:(id)arg1 tappedMessageWithRegistration:(id)arg2;	// IMP=0x0010000000513290
- (void)applicationMessageSink:(id)arg1 removedMessageWithRegistration:(id)arg2;	// IMP=0x001000000051328a
- (id)applicationMessageSink:(id)arg1 createContentForMessageWithRegistration:(id)arg2;	// IMP=0x0010000000513185
- (void)clearSafariCredentialImportNotifiedIdentifiers;	// IMP=0x0010000000513141
- (void)clearSafariCredentialImportMessages;	// IMP=0x0010000000512efe
- (void)handlePaymentPassDidUpdatePaymentApplications:(id)arg1 fromPaymentApplications:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000512dd4
- (void)sendVirtualCardNumberIssuedDueToTransactionNotificationForPaymentPass:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000512bdd
- (void)sendSafariCredentialImportNotificationForCredentials:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000005121a9
- (void)sendSafariCredentialImportConsentNotificationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000511fad
- (id)initWithNotificationManager:(id)arg1 paymentWebServiceCoordinator:(id)arg2 applicationMessageManager:(id)arg3;	// IMP=0x0010000000511ee1
- (id)init;	// IMP=0x0010000000511ed3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
