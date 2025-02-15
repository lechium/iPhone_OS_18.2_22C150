//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PassType
{
}

+ (id)anyInDatabase:(id)arg1 withPassTypeIdentifierHash:(id)arg2;	// IMP=0x004000000031e5fc
+ (id)anyInDatabase:(id)arg1 withPassTypeID:(id)arg2;	// IMP=0x001000000031e570
+ (id)_passTypeIdentifierHashPredicate:(id)arg1;	// IMP=0x001000000031e54d
+ (id)_passTypeIDPredicate:(id)arg1;	// IMP=0x001000000031e52a
+ (id)insertPassTypeWithPassTypeID:(id)arg1 teamID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000031e49e
+ (id)_insertionDictionaryWithPassTypeID:(id)arg1 teamID:(id)arg2;	// IMP=0x001000000031e060
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x001000000031df6e
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x001000000031df25
+ (id)databaseTable;	// IMP=0x001000000031df18
- (void)updateIdentifierHash;	// IMP=0x004000000031e3dc
- (void)updateFrequencyScore:(double)arg1;	// IMP=0x001000000031e382
- (void)updateLastUpdateDate:(id)arg1;	// IMP=0x001000000031e369
- (void)updateLastPushDate:(id)arg1;	// IMP=0x001000000031e350
- (id)identifierHash;	// IMP=0x001000000031e337
- (id)teamID;	// IMP=0x001000000031e31e
- (id)passTypeID;	// IMP=0x001000000031e305
- (double)frequencyScore;	// IMP=0x001000000031e2ae
- (id)lastUpdateDate;	// IMP=0x001000000031e268
- (id)lastPushDate;	// IMP=0x001000000031e222
- (id)initWithPassTypeID:(id)arg1 teamID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000031e196

@end

