//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MapsMerchant
{
}

+ (id)_propertySetters;	// IMP=0x00400000003e4615
+ (id)_propertyValuesForMapsMerchant:(id)arg1;	// IMP=0x00100000003e4108
+ (id)_predicateForEndDate:(id)arg1;	// IMP=0x00100000003e408f
+ (id)_predicateForStartDate:(id)arg1;	// IMP=0x00100000003e4016
+ (id)_predicateForPIDs:(id)arg1;	// IMP=0x00100000003e3ff3
+ (id)_predicateForPID:(id)arg1;	// IMP=0x00100000003e3fd0
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x00100000003e3fad
+ (id)_mapsMerchantsMatchingQuery:(id)arg1;	// IMP=0x00100000003e3df3
+ (id)insertOrUpdateMapsMerchant:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003e3977
+ (id)insertMapsMerchant:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003e3909
+ (void)associateMapsMerchantsToPaymentTransactions:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003e354b
+ (id)_mapsMerchantsWithQuery:(id)arg1;	// IMP=0x00100000003e3384
+ (id)mapsMerchantsWithLastUpdatedDateFromStartDate:(id)arg1 endDate:(id)arg2 limit:(long long)arg3 inDatabase:(id)arg4;	// IMP=0x00100000003e31eb
+ (id)mapsMerchantsInDatabase:(id)arg1;	// IMP=0x00100000003e318a
+ (id)anyInDatabase:(id)arg1 withPID:(id)arg2;	// IMP=0x00100000003e30fe
+ (id)anyInDatabase:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x00100000003e3072
+ (id)databaseTable;	// IMP=0x00100000003e2fcb
- (id)mapsMerchant;	// IMP=0x00400000003e3c84
- (void)updateWithMapsMerchant:(id)arg1;	// IMP=0x00100000003e3a86
- (id)initWithMapsMerchant:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003e2fd8

@end

