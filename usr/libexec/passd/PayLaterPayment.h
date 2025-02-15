//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PayLaterPayment
{
}

+ (id)_propertySettersForPayLaterPayment;	// IMP=0x00400000001d1298
+ (id)_propertyValuesForPayLaterPayment:(id)arg1;	// IMP=0x00100000001d0e9a
+ (id)_predicateForAssociatedTransactionPaymentHash:(id)arg1;	// IMP=0x00100000001d0e77
+ (id)_predicateForPaymentIdentifiers:(id)arg1;	// IMP=0x00100000001d0c19
+ (id)_predicateForPaymentIdentifier:(id)arg1;	// IMP=0x00100000001d0bf6
+ (id)_predicateForScheduleSummaryPID:(long long)arg1;	// IMP=0x00100000001d0b85
+ (id);	// IMP=0x00100000001d0a70
+ (id)_predicateForScheduleSummaryPID:(long long)arg1 paymentIdentifier:(id)arg2;	// IMP=0x00100000001d095b
+ (void)deletePayLaterPaymentsForScheduleSummaryPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001d05eb
+ (id)_paymentsWithPredicate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001d01c1
+ (id)payLaterFinancingPlanIdentifierForPaymentWithPaymentAssociatedTransactionPaymentHash:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001d0117
+ (id)payLaterPaymentsForScheduleSummaryPID:(long long)arg1 paymentIdentifiers:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001d0088
+ (id)payLaterPaymentsForScheduleSummaryPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001cfffc
+ (id)insertOrUpdatePayLaterPayments:(id)arg1 forScheduleSummaryPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001cfd3d
+ (id)insertOrUpdatePayLaterPayment:(id)arg1 forScheduleSummaryPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001cfb6e
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x00100000001cf9c7
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000001cf998
+ (id)databaseTable;	// IMP=0x00100000001cf98b
- (id)planIdentifier;	// IMP=0x00400000001d0942
- (id)_principalPaid;	// IMP=0x00100000001d0888
- (id)_interestPaid;	// IMP=0x00100000001d07ce
- (id)_amount;	// IMP=0x00100000001d0714
- (_Bool)deleteFromDatabase;	// IMP=0x00100000001d0684
- (void)updateWithPayLaterPayment:(id)arg1;	// IMP=0x00100000001cff82
- (id)initWithPayLaterPayment:(id)arg1 forScheduleSummaryPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001cfa7b

@end

