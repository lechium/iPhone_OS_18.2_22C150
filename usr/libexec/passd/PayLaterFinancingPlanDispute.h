//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PayLaterFinancingPlanDispute
{
}

+ (id)_propertySettersForFinancingPlanDispute;	// IMP=0x00400000004b0d05
+ (id)_propertyValuesForFinancingPlanDispute:(id)arg1;	// IMP=0x00100000004b0b08
+ (id)_predicateForDisputeState:(unsigned long long)arg1;	// IMP=0x00100000004b09cc
+ (id)_predicateForDisputeIdentifier:(id)arg1;	// IMP=0x00100000004b09a9
+ (id)_predicateForFinancingPlanPID:(long long)arg1;	// IMP=0x00100000004b0938
+ (id)_predicateForFinancingPlanPID:(long long)arg1 disputeIdentifier:(id)arg2;	// IMP=0x00100000004b0823
+ (void)deleteFinancingPlanDisputesForFinancingPlanPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004b06fa
+ (id)_diputesForQuery:(id)arg1;	// IMP=0x00100000004b043b
+ (id)financingPlanDisputesForFinancingPlanPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004b02e1
+ (id)disputeIdentifiersWithState:(unsigned long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004b0120
+ (id)insertOrUpdateFinancingPlanDisputes:(id)arg1 forFinancingPlanPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000004afe61
+ (id)insertOrUpdateFinancingPlanDispute:(id)arg1 forFinancingPlanPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000004afcd8
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000004afbb6
+ (id)databaseTable;	// IMP=0x00100000004afba9
- (id)disputeIdentifier;	// IMP=0x00400000004b0aef
- (id)planIdentifier;	// IMP=0x00100000004b0a3d
- (_Bool)deleteFromDatabase;	// IMP=0x00100000004b0793
- (void)updateWithFinancingPlanDispute:(id)arg1;	// IMP=0x00100000004b00a6
- (id)initWithFinancingPlanDispute:(id)arg1 forFinancingPlanPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000004afbe5

@end
