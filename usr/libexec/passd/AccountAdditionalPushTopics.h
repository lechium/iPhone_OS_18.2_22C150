//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AccountAdditionalPushTopics
{
}

+ (id)_propertySettersForAccountAdditionalPushTopics;	// IMP=0x00400000001303a2
+ (id)_predicateForAccountPID:(long long)arg1;	// IMP=0x0010000000130331
+ (void)updateAccountAdditionalPushTopics:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000012ff67
+ (void)deleteAccountAdditionalPushTopicsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000012fece
+ (id)insertAccountAdditionalPushTopics:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000012fe51
+ (id)accountAdditionalPushTopicsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000012fa38
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x001000000012fa09
+ (id)databaseTable;	// IMP=0x001000000012f9fc
- (id)accountAdditionalPushTopics;	// IMP=0x004000000013060f
- (void)updateWithAccountAdditionalPushTopics:(id)arg1;	// IMP=0x0010000000130059
- (id)initWithAccountAdditionalPushTopics:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000012fae2

@end
