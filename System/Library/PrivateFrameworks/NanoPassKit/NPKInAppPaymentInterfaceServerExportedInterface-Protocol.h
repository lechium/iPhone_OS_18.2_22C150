//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NSError, NSNumber, NSString, PKPaymentRequest, PKPeerPaymentQuote, PKRemotePaymentRequest;
@protocol NPKBalanceField;

@protocol NPKInAppPaymentInterfaceServerExportedInterface <NSObject>
- (void)presentTransitTopUpValueSelectionForPassWithUniqueIdentifier:(NSString *)arg1 balanceField:(id <NPKBalanceField>)arg2 completion:(void (^)(_Bool))arg3;
- (void)presentProvisioningContinuityInterfaceForPassWithUniqueIdentifier:(NSString *)arg1 continuityType:(NSString *)arg2 transferToken:(NSString *)arg3 completion:(void (^)(_Bool))arg4;
- (void)presentContactlessInterfaceForPassWithUniqueIdentifier:(NSString *)arg1 fromSource:(long long)arg2 completion:(void (^)(_Bool))arg3;
- (void)tearDownPasscodeUpgradeRequestWithPasscodeChanged:(_Bool)arg1 error:(NSError *)arg2;
- (void)presentPasscodeUpgradeRequestWithChangeType:(unsigned long long)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)clearInAppInterfaceForSkeletonPeerPaymentQuote:(PKPeerPaymentQuote *)arg1 withError:(NSError *)arg2;
- (void)showInAppInterfaceWithSkeletonPeerPaymentQuote:(PKPeerPaymentQuote *)arg1 activationHandler:(void (^)(_Bool))arg2;
- (void)showInAppInterfaceWithRemotePaymentRequest:(PKRemotePaymentRequest *)arg1 activationHandler:(void (^)(_Bool))arg2;
- (void)showInAppInterfaceWithPaymentRequest:(PKPaymentRequest *)arg1 forHostApplicationName:(NSString *)arg2 hostBundleIdentifier:(NSString *)arg3 hostProcessIdentifier:(int)arg4 hostIdentifier:(NSString *)arg5 orientation:(NSNumber *)arg6 activationHandler:(void (^)(_Bool, NSError *))arg7;
@end
