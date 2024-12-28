//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CreditInstallmentPlanPayment
{
}

+ (id)_propertySetters;	// IMP=0x004000000000450d
+ (id)_propertyValuesForInstallmentPlanPayment:(id)arg1;	// IMP=0x001000000000420e
+ (id)_paymentsWithQuery:(id)arg1;	// IMP=0x0010000000003ec6
+ (id)_predicateForInstallmentPlanPID:(id)arg1;	// IMP=0x0010000000003ea3
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x0010000000003e80
+ (void)deletePaymentsForInstallmentPlanPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000003d31
+ (id)insertOrUpdatePayments:(id)arg1 forInstallmentPlanPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000000352b
+ (id)paymentWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000003481
+ (id)paymentsForInstallmentPlanPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000033ce
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x001000000000323d
+ (id)databaseTable;	// IMP=0x0010000000003230
- (_Bool)deleteFromDatabase;	// IMP=0x0040000000003dca
- (id)payment;	// IMP=0x0010000000003aa1
- (void)updateWithPayment:(id)arg1;	// IMP=0x0010000000003987
- (id)initWithInstallmentPlanPayment:(id)arg1 forInstallmentPlanPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000000326c

@end
