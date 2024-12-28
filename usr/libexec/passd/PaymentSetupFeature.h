//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PaymentSetupFeature
{
}

+ (id)_propertySettersForPaymentSetupFeature;	// IMP=0x00400000001e8fd8
+ (id)_predicateForProductIdentifier:(id)arg1;	// IMP=0x00100000001e8fb5
+ (void)deletePaymentSetupFeatureWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001e8efc
+ (void)deleteAllPaymentSetupFeaturesInDatabase:(id)arg1;	// IMP=0x00100000001e8e62
+ (void)deletePaymentSetupFeaturesNotIncludingIdentifiers:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001e8dbe
+ (id)databaseTable;	// IMP=0x00100000001e8db1
+ (id)insertOrUpdatePaymentSetupFeature:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001e83ce
+ (id)paymentSetupFeatureWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001e8342
+ (id)paymentSetupFeaturesInDatabase:(id)arg1;	// IMP=0x00100000001e8138
- (id)paymentSetupFeature;	// IMP=0x00400000001e8c7c
- (void)updateWithPaymentSetupFeature:(id)arg1;	// IMP=0x00100000001e88b6
- (id)initWithPaymentSetupFeature:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001e84a5

@end
