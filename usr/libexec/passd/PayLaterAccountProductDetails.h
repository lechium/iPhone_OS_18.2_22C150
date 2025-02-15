//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PayLaterAccountProductDetails
{
}

+ (id)_commonDictionaryForProductDetails:(id)arg1;	// IMP=0x004000000024f184
+ (id)_propertySettersForPayLaterAccountProductDetails;	// IMP=0x001000000024ea93
+ (id)_predicateForProductPID:(long long)arg1;	// IMP=0x001000000024ea22
+ (id)payLaterProductDetailsForProductPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000024e8fe
+ (void)deletePayLaterProductDetailsForPayLaterProductPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000024e865
+ (id)insertOrUpdatePayLaterProductDetails:(id)arg1 forPayLaterAccountProductPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000024e758
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x001000000024e639
+ (id)databaseTable;	// IMP=0x001000000024e62c
- (id)_amountPaid;	// IMP=0x004000000024f0ca
- (id)_totalFinanced;	// IMP=0x001000000024f010
- (id)_currentBalance;	// IMP=0x001000000024ef56
- (id)_maximumSinglePurchaseAmount;	// IMP=0x001000000024ee9c
- (id)_minimumSinglePurchaseAmount;	// IMP=0x001000000024ede2
- (id)productDetails;	// IMP=0x001000000024eb85
- (void)updateWitProductDetails:(id)arg1;	// IMP=0x001000000024e9a8
- (id)initWithAccountProductDetails:(id)arg1 forPayLaterAccountProductPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000024e668

@end

