//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PassLocationSource
{
}

+ (id)queryWithDatabase:(id)arg1 passPID:(unsigned long long)arg2 locationSourcePID:(unsigned long long)arg3;	// IMP=0x0040000000516a90
+ (id)queryWithDatabase:(id)arg1 locationSourcePID:(unsigned long long)arg2;	// IMP=0x00100000005169df
+ (id)queryWithDatabase:(id)arg1 passPID:(unsigned long long)arg2;	// IMP=0x0010000000516953
+ (id)locationSourcePIDPredicate:(id)arg1;	// IMP=0x0010000000516930
+ (id)passPIDPredicate:(unsigned long long)arg1;	// IMP=0x00100000005168bf
+ (id)insertPassLocationSourceWithPass:(id)arg1 locationSource:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000516805
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000005166a2
+ (id)databaseTable;	// IMP=0x0010000000516695
- (_Bool)deleteFromDatabase;	// IMP=0x0040000000516bf8
- (id)initWithPassPID:(unsigned long long)arg1 locationSourcePID:(unsigned long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000005166eb

@end

