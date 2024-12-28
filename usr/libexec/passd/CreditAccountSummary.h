//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CreditAccountSummary
{
}

+ (id)_propertySettersForCreditAccountSummary;	// IMP=0x00400000001b927d
+ (id)_predicateForCreditAccountDetailsPID:(long long)arg1;	// IMP=0x00100000001b920c
+ (void)updateCreditAccountSummary:(id)arg1 forCreditAccountDetailsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001b8882
+ (id)creditAccountSummaryForCreditAccountDetailsPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001b87d8
+ (void)deleteCreditAccountSummaryForCreditAccountDetailsPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001b8612
+ (id)insertAccountSummary:(id)arg1 forCreditAccountDetailsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001b8595
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000001b7c64
+ (id)databaseTable;	// IMP=0x00100000001b7c57
- (id)creditAccountSummary;	// IMP=0x00400000001b9d18
- (void)updateWithCreditAccountSummary:(id)arg1;	// IMP=0x00100000001b8974
- (_Bool)deleteFromDatabase;	// IMP=0x00100000001b86ab
- (id)initWithCreditAccountSummary:(id)arg1 forCreditAccountDetailsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001b7c93

@end
