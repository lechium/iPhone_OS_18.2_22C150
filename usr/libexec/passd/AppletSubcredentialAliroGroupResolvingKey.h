//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AppletSubcredentialAliroGroupResolvingKey
{
}

+ (id)_predicateForAppletSubcredentialPID:(long long)arg1;	// IMP=0x0040000000419527
+ (id)insertAliroGroupResolvingKeys:(id)arg1 withAppletSubcredential:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000004191c3
+ (void)deleteEntitiesInDatabase:(id)arg1 forAppletSubcredentialPID:(long long)arg2;	// IMP=0x001000000041912a
+ (id)_aliroGroupResolvingKeysInDatabase:(id)arg1 withPredicate:(id)arg2;	// IMP=0x0010000000418fde
+ (id)aliroGroupResolvingKeysInDatabase:(id)arg1 forAppletSubcredentialPID:(long long)arg2;	// IMP=0x0010000000418f52
+ (id)databaseTable;	// IMP=0x0010000000418f45
- (id)initWithData:(id)arg1 forAppletSubcredentialPID:(long long)arg2 database:(id)arg3;	// IMP=0x004000000041940e

@end

