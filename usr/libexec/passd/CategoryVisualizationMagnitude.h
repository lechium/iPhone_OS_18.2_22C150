//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CategoryVisualizationMagnitude
{
}

+ (id)_propertySetters;	// IMP=0x004000000005ae0e
+ (id)_propertyValuesForMagnitude:(id)arg1;	// IMP=0x001000000005acce
+ (id)_predicateForBucket:(long long)arg1;	// IMP=0x001000000005ac5d
+ (id)_predicateForPID:(id)arg1;	// IMP=0x001000000005ac3a
+ (id)_predicateForPassUniqueID:(id)arg1 bucket:(long long)arg2;	// IMP=0x001000000005ab4c
+ (id)_predicateForPassUniqueID:(id)arg1;	// IMP=0x001000000005ab29
+ (id)_magnitudesMatchingQuery:(id)arg1;	// IMP=0x001000000005a973
+ (void)deleteAnyInDatabase:(id)arg1 forPassUniqueID:(id)arg2;	// IMP=0x001000000005a6f1
+ (id)insertOrUpdateMagnitude:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000005a5bf
+ (id)insertMagnitude:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000005a551
+ (id)magnitudesForPassUniqueIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000005a49e
+ (id)anyInDatabase:(id)arg1 withPID:(id)arg2;	// IMP=0x001000000005a412
+ (id)databaseTable;	// IMP=0x001000000005a36b
- (id)magnitude;	// IMP=0x004000000005a804
- (void)updateWithMagnitude:(id)arg1;	// IMP=0x001000000005a78a
- (id)initWithMagnitude:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000005a378

@end

