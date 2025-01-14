//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class InAppReceiptDatabaseStore, NSDate, NSLock, NSOperationQueue, _TtC9storekitd6Client;

@interface ReceiptManager : NSObject
{
    InAppReceiptDatabaseStore *_databaseStore;	// 8 = 0x8
    _TtC9storekitd6Client *_client;	// 16 = 0x10
    NSOperationQueue *_readQueue;	// 24 = 0x18
    NSLock *_syncLock;	// 32 = 0x20
    NSOperationQueue *_syncQueue;	// 40 = 0x28
}

+ (void)handleAppUninstallForBundleIDs:(id)arg1;	// IMP=0x0040000000010182
+ (id)managerForClient:(id)arg1;	// IMP=0x001000000000fea5
- (void).cxx_destruct;	// IMP=0x002000000001cb30
@property(readonly, nonatomic) NSOperationQueue *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(readonly, nonatomic) NSLock *syncLock; // @synthesize syncLock=_syncLock;
@property(readonly, nonatomic) NSOperationQueue *readQueue; // @synthesize readQueue=_readQueue;
@property(readonly, nonatomic) _TtC9storekitd6Client *client; // @synthesize client=_client;
- (void)_syncTransactionsWithReason:(long long)arg1 logKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001be0a
- (void)_syncTransactionsAndSubscriptionStatusWithReason:(long long)arg1 logKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001ba85
- (void)_syncSubscriptionStatusWithReason:(long long)arg1 logKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001aadc
- (_Bool)_needsSubscriptionStatusSyncForStatusDictionary:(id)arg1 logKey:(id)arg2;	// IMP=0x001000000001a73d
- (void)_checkTransactionAgeOnReadQueueForStatusWithGroupID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001a3f4
- (void)_setUnfinishedForTransactionIDs:(id)arg1 logKey:(id)arg2;	// IMP=0x001000000001a261
- (_Bool)_setTransactionInfo:(id)arg1 unfinishedIDs:(id)arg2 includesFinishedConsumables:(_Bool)arg3 forRevision:(id)arg4 logKey:(id)arg5 containsSubscriptions:(_Bool *)arg6;	// IMP=0x0010000000019a5b
- (_Bool)_resetLastUpdatedForLegacyTransactionsWithLogKey:(id)arg1;	// IMP=0x00100000000196ac
- (id)_configureMetricsEventWithBeforeTransactionCount:(unsigned long long)arg1 beforeTransactions:(id)arg2 beforeStatuses:(id)arg3;	// IMP=0x0010000000019292
- (void)_manualSyncWithLogKey:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000018d16
- (_Bool)_includeFinishedConsumables;	// IMP=0x00100000000188eb
- (_Bool)_clearCachedLegacyTransactionsWithLogKey:(id)arg1;	// IMP=0x0010000000018524
- (void)_checkTransactionAgeAndSyncWithLogKey:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000016e6e
- (void)_authenticateWithDialogContext:(id)arg1 logKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000016227
- (void)_appTransactionSyncWithDialogContext:(id)arg1 logKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000015c20
- (void)syncSubscriptionStatusWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015ac0
- (void)syncReceiptsWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015960
- (void)setTransactionInfo:(id)arg1 unfinishedIDs:(id)arg2 forRevision:(id)arg3;	// IMP=0x001000000001574c
- (void)enumerateSubscriptionStatusUsingBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001504f
- (void)subscriptionStatusForSubscriptionGroupID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014a15
- (void)setFinishedForTransactionID:(id)arg1;	// IMP=0x0010000000014812
- (void)requestUnifiedAppReceiptWithDialogContext:(id)arg1 logKey:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000014138
@property(readonly, nonatomic) NSDate *lastUpdated;
- (_Bool)isTransactionFinishedForID:(id)arg1;	// IMP=0x0010000000013db4
- (void)isEligibleForIntroductoryOfferForSubscriptionGroupID:(id)arg1 storefrontID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000132d8
- (_Bool)invalidateLegacyTransactionCache;	// IMP=0x001000000001314f
- (void)enumerateUnfinishedTransactionsUsingBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012abc
- (void)enumerateReceiptsForProductID:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001239f
- (void)enumerateCurrentReceiptsForProductID:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000011af9
- (void)clearTransactions;	// IMP=0x0010000000011858
- (void)authenticateAndSyncWithDialogContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000115ea
- (void)appTransactionWithDialogContext:(id)arg1 ignoreCache:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000010b43
- (id)databaseStore;	// IMP=0x0010000000010a57
- (id)initWithClient:(id)arg1;	// IMP=0x001000000001057c

@end

