//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PaymentTransaction
{
}

+ (id)transactionsThatNeedSyncToFinanceWithAccountIdentifiers:(id)arg1 withLimit:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0040000000556dc2
+ (void)setNeedsSyncWithFinanceForTransactionsWithAccountIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000556bc0
+ (_Bool)setNeedsSyncWithFinanceForAllTransactionsInDatabase:(id)arg1;	// IMP=0x00100000005569dd
+ (void)resetNeedsSyncWithFinanceForTransactionWithPID:(id)arg1 updateSequenceNumber:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000055683f
+ (unsigned long long)suppressionBehaviorForTransactionSourceIdentifier:(id)arg1 serviceIdentifier:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000554530
+ (id)rewardsTierSummaryForTransactionSourceIdentifiers:(id)arg1 currencyCode:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 inDatabase:(id)arg5;	// IMP=0x001000000054fa71
+ (id)rewardsValuesForUnit:(unsigned long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000054f858
+ (void)updateTransactionsWithTransactionSource:(id)arg1 toTransactionSource:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000054f542
+ (id)paymentTransactionsInDatabase:(id)arg1 forTransactionSourceIdentifiers:(id)arg2;	// IMP=0x001000000054f400
+ (void)allPassTransactionIdentifiersWithAccountIdentifiers:(id)arg1 inDatabase:(id)arg2 batchHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000054e989
+ (void)allPassTransactionIdentifiersInDatabase:(id)arg1 batchHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000054e96f
+ (id)transactionsInDatabase:(id)arg1 forInstallmentPlanIdentifier:(id)arg2;	// IMP=0x001000000054e7d1
+ (id)transactionsRequiringMerchantCleanupInDatabase:(id)arg1 forTransactionSourceIdentifiers:(id)arg2 withLastReprocessingDateBeforeDate:(id)arg3 transactionDateWithinWindow:(double)arg4;	// IMP=0x001000000054e1fd
+ (_Bool)hasPaymentTransactionInDatabase:(id)arg1 forTransactionSourceIdentifiers:(id)arg2 withTransactionSource:(unsigned long long)arg3;	// IMP=0x001000000054e086
+ (id)transactionReceiptUniqueIDsInDatabase:(id)arg1;	// IMP=0x001000000054ddeb
+ (unsigned long long)numberOfPaymentTransactionsInDatabaseWithAssociatedReceipt:(id)arg1;	// IMP=0x001000000054dc84
+ (unsigned long long)numberOfPaymentTransactionsInDatabase:(id)arg1 forTransactionSourceIdentifiers:(id)arg2 withNotificationServiceData:(unsigned long long)arg3 newerThanDate:(id)arg4;	// IMP=0x001000000054da5d
+ (id)paymentTransactionsInDatabase:(id)arg1 originatedOnDevice:(_Bool)arg2 forTransactionSourceIdentifiers:(id)arg3;	// IMP=0x001000000054d874
+ (id)regionIdentifiersInDatabase:(id)arg1 matchingName:(id)arg2 types:(id)arg3 localeIdentifier:(id)arg4 withRequest:(id)arg5 limit:(unsigned long long)arg6;	// IMP=0x001000000054cfdc
+ (id)paymentTransactionsForTokenizedTransactionsWithRegionsInDatabase:(id)arg1;	// IMP=0x001000000054cacc
+ (_Bool)hasTransactionsMissingWorldRegionEligibleForProcessingInDatabase:(id)arg1;	// IMP=0x001000000054ca20
+ (id)paymentTransactionsInDatabase:(id)arg1 missingWorldRegionWithLimit:(unsigned long long)arg2 onlyEligibleForProcessing:(_Bool)arg3;	// IMP=0x001000000054c1e6
+ (id)paymentTransactionsRequiringReviewInDatabase:(id)arg1 forAccountIdentifier:(id)arg2;	// IMP=0x001000000054be26
+ (id)installmentTransactionsInDatabase:(id)arg1 forTransactionSourceIdentifiers:(id)arg2 installmentPlan:(id)arg3 redeemed:(_Bool)arg4 withRedemptionType:(unsigned long long)arg5 startDate:(id)arg6 endDate:(id)arg7;	// IMP=0x001000000054b951
+ (id)installmentPlanTransactionsInDatabase:(id)arg1 forTransactionSourceIdentifiers:(id)arg2;	// IMP=0x001000000054b7cb
+ (id)predicateForRequest:(id)arg1;	// IMP=0x001000000054956b
+ (void)totalAmount:(id *)arg1 forTransactionsWithRequest:(id)arg2 count:(unsigned long long *)arg3 inDatabase:(id)arg4;	// IMP=0x00100000005494ab
+ (id)paymentTransactionsInDatabase:(id)arg1 forPredicate:(id)arg2 limit:(long long)arg3;	// IMP=0x001000000054927e
+ (unsigned long long)countInDatabase:(id)arg1 forRequest:(id)arg2;	// IMP=0x0010000000548fe8
+ (id)paymentTransactionsInDatabase:(id)arg1 forRequest:(id)arg2;	// IMP=0x0010000000548f9d
+ (id)paymentTransactionsInDatabase:(id)arg1 forTransactionSourceIdentifiers:(id)arg2 withRedemptionType:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5;	// IMP=0x0010000000548997
+ (id)transactionServiceIdentifiersInDatabase:(id)arg1 withTransactionType:(long long)arg2 withPeerPaymentSubtype:(long long)arg3 forTransactionSourceIdentifiers:(id)arg4 withTransactionSource:(unsigned long long)arg5 withBackingData:(unsigned long long)arg6 startDate:(id)arg7 endDate:(id)arg8;	// IMP=0x00100000005484ee
+ (id)paymentTransactionsInDatabase:(id)arg1 withTransactionType:(long long)arg2 forTransactionSourceIdentifiers:(id)arg3 withTransactionSource:(unsigned long long)arg4 withBackingData:(unsigned long long)arg5 startDate:(id)arg6 endDate:(id)arg7 limit:(long long)arg8;	// IMP=0x0010000000548174
+ (id)paymentTransactionsInDatabase:(id)arg1 withMerchantCategory:(long long)arg2 forTransactionSourceIdentifiers:(id)arg3 withTransactionSource:(unsigned long long)arg4 withBackingData:(unsigned long long)arg5 startDate:(id)arg6 endDate:(id)arg7 limit:(long long)arg8;	// IMP=0x0010000000547ad4
+ (id)peerPaymentCounterpartHandlesforSource:(id)arg1 excludingPaymentMode:(unsigned long long)arg2 startDate:(id)arg3 endDate:(id)arg4 inDatabase:(id)arg5;	// IMP=0x00100000005476f8
+ (id)peerPaymentCounterpartHandlesforSource:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 inDatabase:(id)arg4;	// IMP=0x0010000000547357
+ (unsigned long long)countInDatabase:(id)arg1 forTransactionSourceIdentifiers:(id)arg2 withPeerPaymentCounterpartHandles:(id)arg3 forPeerPaymentSubtype:(long long)arg4 startDate:(id)arg5 endDate:(id)arg6;	// IMP=0x00100000005470ba
+ (unsigned long long)countInDatabase:(id)arg1 forTransactionSourceIdentifiers:(id)arg2 withPeerPaymentCounterpartHandles:(id)arg3 startDate:(id)arg4 endDate:(id)arg5;	// IMP=0x0010000000546e50
+ (id)paymentTransactionsInDatabase:(id)arg1 matchingMerchant:(id)arg2 forTransactionSourceIdentifiers:(id)arg3 withTransactionSource:(unsigned long long)arg4 withBackingData:(unsigned long long)arg5 limit:(long long)arg6;	// IMP=0x0010000000546360
+ (id)paymentTransactionsInDatabase:(id)arg1 matchingMapsMerchantIdentifierWithoutRegion:(unsigned long long)arg2 limit:(unsigned long long)arg3;	// IMP=0x00100000005461c1
+ (id)paymentTransactionsInDatabase:(id)arg1 matchingMapsMerchantIdentifier:(unsigned long long)arg2 forTransactionSourceIdentifiers:(id)arg3;	// IMP=0x0010000000545fcb
+ (id)paymentTransactionsInDatabase:(id)arg1 matchingMapsBrandIdentifier:(unsigned long long)arg2 forTransactionSourceIdentifiers:(id)arg3;	// IMP=0x0010000000545dd5
+ (id)paymentTransactionsInDatabase:(id)arg1 matchingPeerPaymentCounterpartHandles:(id)arg2 forPeerPaymentSubtype:(long long)arg3 forTransactionSourceIdentifiers:(id)arg4 withTransactionSource:(unsigned long long)arg5 withBackingData:(unsigned long long)arg6 limit:(long long)arg7;	// IMP=0x0010000000545a29
+ (id)paymentTransactionsInDatabase:(id)arg1 matchingPeerPaymentCounterpartHandles:(id)arg2 forTransactionSourceIdentifiers:(id)arg3 withTransactionSource:(unsigned long long)arg4 withBackingData:(unsigned long long)arg5 limit:(long long)arg6;	// IMP=0x001000000054553b
+ (id)paymentTransactionsInDatabase:(id)arg1 withTransactionTypes:(id)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 limit:(long long)arg5;	// IMP=0x00100000005450e5
+ (id)paymentTransactionsInDatabase:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(long long)arg4;	// IMP=0x0010000000544e3c
+ (long long)countInDatabase:(id)arg1 forTransactionSourceIdentifiers:(id)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6;	// IMP=0x0010000000544db4
+ (id)pendingPaymentTransactionsInDatabase:(id)arg1 forTransactionSourceIdentifiers:(id)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 orderedByDate:(long long)arg7 limit:(long long)arg8;	// IMP=0x00100000005449b5
+ (id)approvedPaymentTransactionsInDatabase:(id)arg1 forTransactionSourceIdentifiers:(id)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 orderedByDate:(long long)arg7 limit:(long long)arg8;	// IMP=0x0010000000544519
+ (id)paymentTransactionsInDatabase:(id)arg1 forTransactionSourceIdentifiers:(id)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 orderedByDate:(long long)arg7 limit:(long long)arg8;	// IMP=0x0010000000544354
+ (id)paymentTransactionsInDatabase:(id)arg1 withPIDs:(id)arg2;	// IMP=0x00100000005441f7
+ (id)transactionsForAdjustmentType:(long long)arg1 limit:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0000000000543f18
+ (id)paymentTransactionsInDatabase:(id)arg1 withServiceIdentifier:(id)arg2;	// IMP=0x0010000000543e41
+ (id)closestPendingTransactionInDatabase:(id)arg1 fromTransactionDate:(id)arg2 withNotificationServiceData:(unsigned long long)arg3 forMerchantName:(id)arg4 forTransactionSourceIdentifiers:(id)arg5;	// IMP=0x0010000000543865
+ (id)closestTransactionInDatabase:(id)arg1 fromTransaction:(id)arg2 forTransactionSourceIdentifiers:(id)arg3;	// IMP=0x0010000000542c11
+ (id)paymentTransactionsInDatabase:(id)arg1 withFullPaymentHashes:(id)arg2 transactionSourceIdentifiers:(id)arg3;	// IMP=0x0010000000542a53
+ (id)paymentTransactionsInDatabase:(id)arg1 withIdentifiers:(id)arg2 regions:(id *)arg3 tags:(id *)arg4;	// IMP=0x00100000005426d9
+ (id)issuerInstallmentTransactionsInDatabase:(id)arg1 transactionSourceIdentifiers:(id)arg2 transactionPaymentHashes:(id)arg3;	// IMP=0x00100000005424df
+ (id)issuerInstallmentTransactionsInDatabase:(id)arg1 transactionSourceIdentifiers:(id)arg2;	// IMP=0x00100000005422e3
+ (void)deleteIssuerInstallmentTransactionsInDatabase:(id)arg1 transactionSourceIdentifiers:(id)arg2;	// IMP=0x0010000000542155
+ (id)anyInDatabase:(id)arg1 withPaymentHash:(id)arg2 withTransactionSource:(unsigned long long)arg3 withNotificationServiceData:(unsigned long long)arg4 transactionSourceIdentifiers:(id)arg5;	// IMP=0x0010000000541ac3
+ (id)mostRecentActiveTransactionInDatabase:(id)arg1;	// IMP=0x001000000054155d
+ (_Bool)hasAnyTransactionsInDatabase:(id)arg1 withTransactionType:(long long)arg2;	// IMP=0x001000000054143b
+ (_Bool)hasAnyTransactionsInDatabase:(id)arg1 withMapsBrandIdentifiers:(id)arg2 forTransactionSourceIdentifiers:(id)arg3 startDate:(id)arg4 endDate:(id)arg5;	// IMP=0x00100000005410e5
+ (_Bool)hasAnyTransactionsInDatabase:(id)arg1 withMapsBrandIdentifiers:(id)arg2 forTransactionSourceIdentifiers:(id)arg3;	// IMP=0x00100000005410bf
+ (_Bool)hasAnyTransactionsInDatabase:(id)arg1 withMapsBrandIdentifiers:(id)arg2;	// IMP=0x00100000005410aa
+ (_Bool)hasAnyTransactionsInDatabase:(id)arg1 withMapsIdentifiers:(id)arg2 forTransactionSourceIdentifiers:(id)arg3 startDate:(id)arg4 endDate:(id)arg5;	// IMP=0x0010000000540d54
+ (_Bool)hasAnyTransactionsInDatabase:(id)arg1 withMapsIdentifiers:(id)arg2 forTransactionSourceIdentifiers:(id)arg3;	// IMP=0x0010000000540d2e
+ (_Bool)hasAnyTransactionsInDatabase:(id)arg1 withMapsIdentifiers:(id)arg2;	// IMP=0x0010000000540d19
+ (_Bool)hasAnyTransactionsInDatabase:(id)arg1 withMerchantIdentifiers:(id)arg2 forTransactionSourceIdentifiers:(id)arg3 startDate:(id)arg4 endDate:(id)arg5;	// IMP=0x001000000054087f
+ (_Bool)hasAnyTransactionsInDatabase:(id)arg1 withMerchantIdentifiers:(id)arg2 forTransactionSourceIdentifiers:(id)arg3;	// IMP=0x0010000000540859
+ (_Bool)hasAnyTransactionsInDatabase:(id)arg1 withMerchantIdentifiers:(id)arg2;	// IMP=0x0010000000540844
+ (_Bool)hasAnyTransactionsInDatabase:(id)arg1;	// IMP=0x0010000000540793
+ (id)anyInDatabase:(id)arg1 withReferenceIdentifier:(id)arg2;	// IMP=0x00100000005406c0
+ (id)anyInDatabase:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x00100000005405ed
+ (id)anyInDatabase:(id)arg1 withServiceIdentifier:(id)arg2 forTransactionSourceIdentifier:(id)arg3;	// IMP=0x00100000005404a8
+ (id)anyInDatabase:(id)arg1 withServiceIdentifier:(id)arg2 accountIdentifier:(id)arg3 accountType:(long long)arg4;	// IMP=0x0010000000540202
+ (id)anyInDatabase:(id)arg1 withTransactionSourceIdentifier:(id)arg2;	// IMP=0x001000000054010c
+ (id)anyInDatabase:(id)arg1 withPID:(id)arg2;	// IMP=0x0010000000540039
+ (void)deleteEntitiesWithPIDs:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000053f33e
+ (void)deleteEntitiesForTransactionSource:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000053f221
+ (id)truncateEntitiesForTransactionSourceIdentifiers:(id)arg1 withNotificationServiceData:(unsigned long long)arg2 suppressedFromUI:(unsigned long long)arg3 inDatabase:(id)arg4 toCount:(long long)arg5;	// IMP=0x001000000053ea6c
+ (id)insertPaymentTransaction:(id)arg1 withTransactionSource:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000053e9e4
+ (id)disambiguatedSQLForProperty:(id)arg1;	// IMP=0x001000000053e8f2
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x001000000053dbcf
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x001000000053db52
+ (id)databaseTable;	// IMP=0x001000000053db45
- (id)transactionAuthenticationResult;	// IMP=0x004000000055637d
- (long long)accountType;	// IMP=0x0010000000556332
- (id)passUniqueIdentifier;	// IMP=0x001000000055616b
- (long long)transactionType;	// IMP=0x0010000000556120
- (id)dbPaymentTransactionArchive;	// IMP=0x00100000005560f6
- (id)transactionSourceIdentifier;	// IMP=0x00100000005560af
- (id)paymentApplication;	// IMP=0x0010000000555f5c
- (id)accountIdentifier;	// IMP=0x0010000000555f43
- (id)transactionDate;	// IMP=0x0010000000555efd
- (id)serviceIdentifier;	// IMP=0x0010000000555ee4
- (id)identifier;	// IMP=0x0010000000555ecb
- (id)paymentTransaction;	// IMP=0x0010000000555631
- (void)removeMapsDataForIssueReportIdentifier:(id)arg1;	// IMP=0x0010000000555595
- (void)updateWithMerchant:(id)arg1;	// IMP=0x001000000055480d
- (void)updateRedemptionType:(unsigned long long)arg1;	// IMP=0x00100000005547b3
- (void)updateRequiresMerchantReprocessing:(_Bool)arg1;	// IMP=0x00100000005544d6
- (void)updateSuppressBehavior:(unsigned long long)arg1;	// IMP=0x001000000055447c
- (void)updateWithPaymentTransactionSource:(id)arg1;	// IMP=0x0010000000554185
- (void)updateWithPaymentTransaction:(id)arg1;	// IMP=0x0010000000551380
- (void)replaceWithPaymentTransaction:(id)arg1;	// IMP=0x0010000000551137
- (_Bool)deleteFromDatabase;	// IMP=0x001000000053f3e2

@end

