//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MapsBrand
{
}

+ (id)_propertySetters;	// IMP=0x00400000004d5ea5
+ (id)_propertyValuesForMapsBrand:(id)arg1;	// IMP=0x00100000004d5a53
+ (id)_predicateForEndDate:(id)arg1;	// IMP=0x00100000004d59da
+ (id)_predicateForStartDate:(id)arg1;	// IMP=0x00100000004d5961
+ (id)_predicateForPIDs:(id)arg1;	// IMP=0x00100000004d593e
+ (id)_predicateForPID:(id)arg1;	// IMP=0x00100000004d591b
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x00100000004d58f8
+ (id)_mapsBrandsMatchingQuery:(id)arg1;	// IMP=0x00100000004d5737
+ (id)insertOrUpdateMapsBrand:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004d52bb
+ (id)insertMapsBrand:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004d524d
+ (void)associateMapsBrandsToPaymentTransactions:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004d4e8f
+ (id)_mapsBrandsWithQuery:(id)arg1;	// IMP=0x00100000004d4cc8
+ (id)mapsBrandsWithLastUpdatedDateFromStartDate:(id)arg1 endDate:(id)arg2 limit:(long long)arg3 inDatabase:(id)arg4;	// IMP=0x00100000004d4b2f
+ (id)mapsBrandsInDatabase:(id)arg1;	// IMP=0x00100000004d4ace
+ (id)anyInDatabase:(id)arg1 withPID:(id)arg2;	// IMP=0x00100000004d4a42
+ (id)anyInDatabase:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x00100000004d49b6
+ (id)databaseTable;	// IMP=0x00100000004d490f
- (id)mapsBrand;	// IMP=0x00400000004d55c8
- (void)updateWithMapsBrand:(id)arg1;	// IMP=0x00100000004d53ca
- (id)initWithMapsBrand:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004d491c

@end

