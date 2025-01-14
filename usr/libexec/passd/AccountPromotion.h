//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AccountPromotion
{
}

+ (id)_propertyValuesForPromotion:(id)arg1 accountPID:(long long)arg2;	// IMP=0x0040000000053b81
+ (void)populateAssociatedCompletionStepsForPromotion:(id)arg1 promotionPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000053adc
+ (id)_propertySettersForAccountPromotion;	// IMP=0x00100000000535f0
+ (id)_queryForPredicate:(id)arg1 database:(id)arg2;	// IMP=0x00100000000534d8
+ (id)_predicateForProgramIdentifier:(id)arg1 accountPID:(long long)arg2;	// IMP=0x00100000000533da
+ (id)_predicateForAccountPID:(long long)arg1;	// IMP=0x0010000000053369
+ (id)_predicateForProgramIdentifier:(id)arg1;	// IMP=0x001000000005332a
+ (void)updateImpressionCount:(long long)arg1 promotionProgramIdentifier:(id)arg2 accountPID:(long long)arg3 inDatabase:(id)arg4;	// IMP=0x00100000000531f9
+ (void)updateImpressionCountsForPromotions:(id)arg1 accountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000005301a
+ (void)deleteAccountPromotion:(id)arg1 accountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000052ef1
+ (void)deleteAccountPromotionsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000052e58
+ (id)_insertAccountPromotion:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000052ddb
+ (void)insertOrUpdateAccountPromotion:(id)arg1 accountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000052cee
+ (void)insertOrUpdateAccountPromotions:(id)arg1 accountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000052b5a
+ (id)accountPromotionForProgramIdentifier:(id)arg1 accountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000052afe
+ (id)_anyInDatabase:(id)arg1 withProgramIdentifier:(id)arg2 accountPID:(long long)arg3;	// IMP=0x0010000000052a6f
+ (id)_promotionsWithPredicate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000052850
+ (id)promotionPIDsForProgramIdentifier:(id)arg1 accountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000526af
+ (id)accountPromotionsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000052626
+ (id)databaseTable;	// IMP=0x0010000000052517
- (void)updateWithPromotionCompletionSteps:(id)arg1;	// IMP=0x0040000000053a4d
- (id)accountPromotion;	// IMP=0x001000000005387f
- (void)_updateWithAccountPromotion:(id)arg1 accountPID:(long long)arg2;	// IMP=0x001000000005327a
- (_Bool)deleteFromDatabase;	// IMP=0x0010000000052f8a
- (id)initWithAccountPromotion:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000052524

@end

