//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectID, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MicroPaymentQueue : NSObject
{
    NSManagedObjectID *_activePaymentID;	// 8 = 0x8
    long long _aliveState;	// 16 = 0x10
    long long _changeSetCount;	// 24 = 0x18
    NSMutableArray *_clients;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
    _Bool _observingNetworkChanges;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_purchaseActionsDBQueue;	// 56 = 0x38
}

+ (id)paymentQueue;	// IMP=0x004000000003505b
- (void)_startFirstReadyPayment;	// IMP=0x002000000003f75e
- (void)_setActivePaymentID:(id)arg1;	// IMP=0x001000000003f6b6
- (void)_sendPurchaseIntentsForApp:(id)arg1 storeKitClient:(id)arg2 force:(_Bool)arg3;	// IMP=0x001000000003f0e7
- (id)_newPaymentQueueClientWithMessage:(id)arg1 connection:(id)arg2 parameter:(const char *)arg3;	// IMP=0x001000000003f061
- (id)_firstReadyPaymentInContext:(id)arg1;	// IMP=0x001000000003ef28
- (void)_finishPaymentOperationForPaymentID:(id)arg1 result:(_Bool)arg2 error:(id)arg3;	// IMP=0x001000000003ee3a
- (void)_enumerateDownloadsForIdentifiers:(id)arg1 context:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000003eb6a
- (void)_dispatchAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000003eaa6
- (id)_copyDownloadsIDsFromMessage:(id)arg1 key:(const char *)arg2;	// IMP=0x001000000003e9a1
- (id)_clients;	// IMP=0x001000000003de65
- (id)_clientForPayment:(id)arg1;	// IMP=0x001000000003de17
- (id)_clientForObjectID:(id)arg1;	// IMP=0x001000000003dc5d
- (id)_clientForConnection:(id)arg1 paymentQueueClient:(id)arg2;	// IMP=0x001000000003da65
- (id)_beginManagedContextSession;	// IMP=0x001000000003d8df
- (void)_refreshDidFinishNotification:(id)arg1;	// IMP=0x001000000003d87d
- (void)_networkTypeChanged:(id)arg1;	// IMP=0x001000000003d790
- (void)_clientDisconnectNotification:(id)arg1;	// IMP=0x001000000003d4ae
- (_Bool)_inAppReviewEnabled;	// IMP=0x001000000003d471
- (void)resetInAppReviewRequestsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003d201
- (void)updateInAppReviewRequestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003ceb2
- (id)_inAppReviewRequestConstants;	// IMP=0x001000000003cc2c
- (void)addInAppReviewRequestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003be91
- (void)getPromotedIAPInfoInternalWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003b8d2
- (void)setPromotedIAPVisibilityWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003b18b
- (void)getPromotedIAPVisibilityWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003ab66
- (void)setPromotedIAPOrderWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003a37b
- (void)getPromotedIAPOrderWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000039d3f
- (void)updateDeferredPaymentWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000039318
- (void)startDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003921f
- (void)resumeDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000039126
- (void)restoreCompletedTransactionsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000039033
- (void)registerClientWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000038cd0
- (void)productsRequestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000038c89
- (void)pauseDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000038b90
- (void)installSheetStateUpdatedWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000038afd
- (void)getTransactionsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003897e
- (void)finishPaymentWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000388a5
- (void)forceSandboxWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000038785
- (void)connectedAppEnteredForegroundWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000038540
- (void)checkQueueForClientWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000038475
- (void)cancelRequestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003843d
- (void)cancelDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000038344
- (void)addPurchaseIntentWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000381d9
- (void)addPaymentWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000038024
- (void)updateWithPurchaseResponse:(id)arg1;	// IMP=0x0010000000037bf8
- (void)startFirstReadyPayment;	// IMP=0x0010000000037b96
- (void)start;	// IMP=0x0010000000037b2b
- (void)observeXPCServer:(id)arg1;	// IMP=0x0010000000037891
- (void)notifyClientsOfExternalPropertyChanges:(id)arg1 ofDownloadID:(long long)arg2;	// IMP=0x00100000000374e4
- (void)finishDownloadsWithIdentifiers:(id)arg1;	// IMP=0x0010000000036574
- (void)failDownloadsWithIdentifiers:(id)arg1;	// IMP=0x0010000000035c73
- (void)checkQueueForClientWithIdentifier:(id)arg1 URLBagContext:(id)arg2;	// IMP=0x00100000000357dd
- (void)addPurchaseIntentWithProductIdentifier:(id)arg1 productName:(id)arg2 appBundleId:(id)arg3 appName:(id)arg4;	// IMP=0x00100000000350d8
- (void)dealloc;	// IMP=0x0010000000034f8b
- (id)init;	// IMP=0x0010000000034e87

@end
