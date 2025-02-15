//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSSet, NSString, PKPaymentBalance, PKPaymentBalanceReminder, PKPaymentTransaction, PKTransitAppletState;

@protocol NPKRemoteAdminConnectionServiceAgentDelegate <NSObject>
- (void)didReceiveCheckCompanionPeerPaymentState;
- (void)didReceivePaymentSetupRequestForApplicationName:(NSString *)arg1;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didUpdateWithCredentials:(NSSet *)arg2 completion:(void (^)(NSError *))arg3;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didUpdateBalanceReminder:(PKPaymentBalanceReminder *)arg2 forBalance:(PKPaymentBalance *)arg3;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didUpdateWithBalances:(NSSet *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didUpdateWithTransitAppletState:(PKTransitAppletState *)arg2;
- (void)transactionSourceIdentifier:(NSString *)arg1 didRemoveTransactionWithIdentifier:(NSString *)arg2;
- (void)transactionSourceIdentifier:(NSString *)arg1 didReceiveTransaction:(PKPaymentTransaction *)arg2;
@end

