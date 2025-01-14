//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PayLaterFinancingPlanFundingSource
{
}

+ (id)_propertySettersForFundingSource;	// IMP=0x0040000000122f10
+ (id)_propertyValuesForFundingSource:(id)arg1;	// IMP=0x0010000000122e23
+ (id)_predicateForPlanPID:(long long)arg1;	// IMP=0x0010000000122db2
+ (void)deleteFinancingPlanFundingSourceForPlanPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000122a25
+ (id)anyInDatabase:(id)arg1 forPlanPID:(long long)arg2;	// IMP=0x0010000000122999
+ (void)insertOrUpdateFinancingPlanFundingSource:(id)arg1 forPlanPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001226e6
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000001225aa
+ (id)databaseTable;	// IMP=0x001000000012259d
- (id)fundingSource;	// IMP=0x0040000000122b85
- (_Bool)deleteFromDatabase;	// IMP=0x0010000000122abe
- (void)updateWithFundingSource:(id)arg1;	// IMP=0x001000000012291f
- (id)initWithFundingSource:(id)arg1 forPlanPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001225f3

@end

