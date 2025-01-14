//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PayLaterAccountProduct
{
}

+ (id)_commonDictionaryForProduct:(id)arg1;	// IMP=0x00400000004b981f
+ (id)_propertySettersForPayLaterProductSetters;	// IMP=0x00100000004b9757
+ (id)anyInDatabase:(id)arg1 forProductType:(unsigned long long)arg2 accountDetailsPID:(long long)arg3;	// IMP=0x00100000004b9615
+ (id)_predicateForProductType:(unsigned long long)arg1;	// IMP=0x00100000004b95a4
+ (id)_predicateForAccountDetailsPID:(long long)arg1;	// IMP=0x00100000004b9533
+ (id)_payLaterProductsWithQuery:(id)arg1;	// IMP=0x00100000004b9110
+ (id)_payLaterProductsInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x00100000004b90aa
+ (id)payLaterProductsForPayLaterAccountDetailsPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004b901e
+ (void)deletePayLaterAccountProductForPayLaterAccountDetailsPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004b8ee1
+ (void)insertOrUpdatePayLaterAccountProducts:(id)arg1 forPayLaterAccountDetailsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000004b8b16
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000004b8932
+ (id)databaseTable;	// IMP=0x00100000004b8925
- (void)updateWithProduct:(id)arg1;	// IMP=0x00400000004b93da
- (_Bool)deleteFromDatabase;	// IMP=0x00100000004b8f7a
- (id)initWithAccountProduct:(id)arg1 forAccountDetailsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000004b8961

@end

