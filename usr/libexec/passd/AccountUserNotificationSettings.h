//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AccountUserNotificationSettings
{
}

+ (id)_propertySettersForAccountUserNotificationSettings;	// IMP=0x00400000003ec89a
+ (id)_propertyValuesForAccountUserNotificationSettings:(id)arg1;	// IMP=0x00100000003ec767
+ (id)_predicateForAccountUserPID:(id)arg1;	// IMP=0x00100000003ec744
+ (id)anyInDatabase:(id)arg1 forAccountUserPID:(id)arg2;	// IMP=0x00100000003ec549
+ (id)insertOrUpdateAccountUserNotificationSettings:(id)arg1 forAccountUserPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003ec32c
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000003ec2fd
+ (id)databaseTable;	// IMP=0x00100000003ec2f0
- (id)accountUserNotificationSettings;	// IMP=0x00400000003ec5d5
- (void)updateWithAccountUserNotificationSettings:(id)arg1;	// IMP=0x00100000003ec4cf
- (id)initWithAccountUserNotificationSettings:(id)arg1 accountUserPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003ec3f3

@end
