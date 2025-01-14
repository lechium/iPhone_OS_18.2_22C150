//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AccountHistoricalBalance
{
}

+ (id)_propertySettersForBalance;	// IMP=0x00400000005176b9
+ (id)_predicateForEndDate:(id)arg1;	// IMP=0x0010000000517640
+ (id)_predicateForStartDate:(id)arg1;	// IMP=0x00100000005175c7
+ (id)_predicateForType:(unsigned long long)arg1;	// IMP=0x0010000000517556
+ (id)_predicateForAccountPID:(long long)arg1;	// IMP=0x00100000005174e5
+ (id)balancesForAccountPID:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 type:(unsigned long long)arg4 limit:(unsigned long long)arg5 inDatabase:(id)arg6;	// IMP=0x0010000000517071
+ (void)deleteBalancesForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000516fd8
+ (id)insertBalance:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000516f5b
+ (id)databaseTable;	// IMP=0x0010000000516d7a
- (id)initWithBalance:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0040000000516d87

@end

