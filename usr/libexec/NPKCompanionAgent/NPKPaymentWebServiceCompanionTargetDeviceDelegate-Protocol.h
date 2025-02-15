//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSSet, NSString, PKPaymentBalance, PKPaymentBalanceReminder, PKPaymentPass, PKPaymentWebServiceBackgroundContext, PKPaymentWebServiceContext, PKPeerPaymentAccount, PKPeerPaymentWebServiceContext, PKTransitAppletState, PKVerificationChannel;

@protocol NPKPaymentWebServiceCompanionTargetDeviceDelegate <NSObject>
- (void)noteForegroundVerificationObserverActive:(_Bool)arg1;
- (void)startBackgroundVerificationObserverForPass:(PKPaymentPass *)arg1 verificationMethod:(PKVerificationChannel *)arg2;
- (void)checkCompanionPeerPaymentRegistrationState;
- (void)handleDownloadAllPaymentPasses;
- (void)handleUpdatedPeerPaymentWebServiceContext:(PKPeerPaymentWebServiceContext *)arg1 account:(PKPeerPaymentAccount *)arg2;
- (void)sendPaymentOptionsDefaultsToWatch;
- (void)showPaymentSetupForAppDisplayName:(NSString *)arg1;
- (void)sendWebServiceContextToWatch;
- (void)handlePaymentWebServiceContextFromWatch:(PKPaymentWebServiceContext *)arg1;
- (void)setNewAuthRandom:(void (^)(_Bool))arg1;
- (void)archiveWebServiceBackgroundContext:(PKPaymentWebServiceBackgroundContext *)arg1;
- (void)archiveWebServiceContext:(PKPaymentWebServiceContext *)arg1;
- (void)handleCredentialsUpdate:(NSSet *)arg1 forUniqueID:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)handleBalanceReminderUpdate:(PKPaymentBalanceReminder *)arg1 balance:(PKPaymentBalance *)arg2 forUniqueID:(NSString *)arg3;
- (void)handleBalanceUpdate:(NSSet *)arg1 forUniqueID:(NSString *)arg2;
- (void)handleRemoveTransactionsWithIdentifiers:(NSArray *)arg1;
- (void)handleAppletState:(PKTransitAppletState *)arg1 forUniqueID:(NSString *)arg2;
- (void)handlePaymentTransactions:(NSArray *)arg1 appletStates:(NSDictionary *)arg2 forUniqueIDs:(NSArray *)arg3;
- (void)handlePreferredAID:(NSString *)arg1 forPassWithUniqueID:(NSString *)arg2;
- (void)handleUpdatePaymentPassWithTypeIdentifier:(NSString *)arg1;
- (void)handlePushToken:(NSString *)arg1;
- (void)handlePreconditionNotMetWithUniqueIDs:(NSArray *)arg1 preconditionDescription:(NSString *)arg2 shouldUnregister:(_Bool)arg3;
@end

