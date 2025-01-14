//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AccountPaymentFundingDetailsBankAccount
{
}

+ (id)_propertySetters;	// IMP=0x004000000042c788
+ (id)_propertyValuesForFundingDetails:(id)arg1;	// IMP=0x001000000042c609
+ (id)_predicateForPersistentID:(long long)arg1;	// IMP=0x001000000042c3b0
+ (id)_predicateForAccountFundingSourcePID:(long long)arg1;	// IMP=0x001000000042c33f
+ (_Bool)deleteFundingDetailsForAccountFundingSourcePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000042c264
+ (id)fundingDetailsForAccountFundingSourcePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000042c1ba
+ (id)insertOrUpdateFundingDetails:(id)arg1 forAccountFundingSourcePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000042be46
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x001000000042be17
+ (id)databaseTable;	// IMP=0x001000000042be0a
- (id)_fundingDetails;	// IMP=0x004000000042c421
- (void)updateFundingDetails:(id)arg1;	// IMP=0x001000000042c0c8
- (id);	// IMP=0x001000000042bf77

@end

