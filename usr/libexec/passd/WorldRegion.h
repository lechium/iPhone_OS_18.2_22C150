//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface WorldRegion
{
}

+ (id)_predicateForTransaction:(id)arg1;	// IMP=0x00400000003c68a9
+ (id)_predicateForLocaleIdentifier:(id)arg1;	// IMP=0x00100000003c6886
+ (id)_predicateForNamePattern:(id)arg1;	// IMP=0x00100000003c66c4
+ (id)_predicateForName:(id)arg1;	// IMP=0x00100000003c66a1
+ (id)_predicateForLocalizedContent;	// IMP=0x00100000003c667a
+ (id)_predicateForCode:(id)arg1;	// IMP=0x00100000003c6657
+ (id)_predicateForLongitude:(double)arg1;	// IMP=0x00100000003c65e6
+ (id)_predicateForLatitude:(double)arg1;	// IMP=0x00100000003c6575
+ (id)_predicateForType:(unsigned long long)arg1;	// IMP=0x00100000003c6504
+ (id)_predicateForMUID:(id)arg1;	// IMP=0x00100000003c64e1
+ (id)_predicateForParentPID:(id)arg1;	// IMP=0x00100000003c64be
+ (id)_predicateForPID:(id)arg1;	// IMP=0x00100000003c649b
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x00100000003c6478
+ (id)disambiguatedSQLForProperty:(id)arg1;	// IMP=0x00100000003c6386
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x00100000003c61b4
+ (void)deleteRegionsWithNoMatchingTransactionsInDatabase:(id)arg1;	// IMP=0x00100000003c61a0
+ (void)resetCoordinatesForAllRegionsInDatabase:(id)arg1;	// IMP=0x00100000003c6103
+ (void)deleteAllRegionsInDatabase:(id)arg1;	// IMP=0x00100000003c6069
+ (void)failedToAssociateTransaction:(id)arg1 error:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003c5fe8
+ (void)associateTransaction:(id)arg1 withWorldRegion:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003c5f67
+ (id)lastRegionErrorForTransaction:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003c5eef
+ (id)regionsFromQuery:(id)arg1 additionalProperties:(id)arg2;	// IMP=0x00100000003c591b
+ (id)regionsFromQuery:(id)arg1;	// IMP=0x00100000003c5907
+ (id)regionWithIdentifier:(id)arg1 localeIdentifier:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003c5757
+ (id)regionsForTransactionPID:(long long)arg1 localeIdentifier:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003c5547
+ (id)regionsMissingLocalizedContentForLocaleIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003c52ca
+ (_Bool)hasRegionsMissingLocalizedContentForLocaleIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003c514f
+ (id)insertOrUpdateRegion:(id)arg1 single:(_Bool)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003c42ea
+ (id)insertOrUpdateRegion:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003c42d3
+ (id)updateSingleRegion:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003c42b9
+ (id)regionsOfType:(unsigned long long)arg1 localeIdentifier:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003c4124
+ (_Bool)hasMultipleRegionsOfType:(unsigned long long)arg1 localeIdentifier:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003c3f9e
+ (id)regionsMatchingName:(id)arg1 types:(id)arg2 localeIdentifier:(id)arg3 inDatabase:(id)arg4;	// IMP=0x00100000003c3a86
+ (id)anyInDatabase:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x00100000003c39fa
+ (id)anyInDatabase:(id)arg1 withPID:(id)arg2;	// IMP=0x00100000003c396e
+ (id)databaseTable;	// IMP=0x00100000003c3961

@end
