//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CreditAccountDetails
{
}

+ (id)_propertySettersForCreditAccountDetails;	// IMP=0x004000000045658c
+ (id)_predicateForAccountPID:(long long)arg1;	// IMP=0x001000000045651b
+ (void)updateCreditAccountDetails:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000455ec0
+ (id)anyInDatabase:(id)arg1 withAccountPID:(long long)arg2;	// IMP=0x0010000000455e34
+ (id)creditAccountDetailsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000455d8a
+ (void)deleteVirtualCardEncryptedDataForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000455bd5
+ (void)deleteCreditAccountDetailsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000455b3c
+ (id)insertCreditAccountDetails:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000455abf
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000004554a0
+ (id)databaseTable;	// IMP=0x0010000000455493
- (id)accountDetails;	// IMP=0x0040000000456b04
- (void)updateWithCreditAccountDetails:(id)arg1;	// IMP=0x0010000000455fb2
- (_Bool)deleteFromDatabase;	// IMP=0x0010000000455c88
- (id)initWithCreditAccountDetails:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000004554cf

@end
