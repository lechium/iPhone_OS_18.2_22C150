//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PhysicalCard
{
}

+ (id)_propertySettersForPhysicalCard;	// IMP=0x004000000042f353
+ (id)_physicalCardsWithQuery:(id)arg1;	// IMP=0x001000000042f070
+ (id)_predicateForPhysicalCardIdentifier:(id)arg1;	// IMP=0x001000000042ee18
+ (id)_predicateForPhysicalCardStatusUpdatePID:(long long)arg1;	// IMP=0x001000000042eda7
+ (id)_predicateForAccountPID:(long long)arg1 physicalCardIdentifier:(id)arg2;	// IMP=0x001000000042ec92
+ (id)_predicateForAccountPID:(long long)arg1;	// IMP=0x001000000042ec21
+ (id)physicalCardsForPhysicalCardStatusUpdatePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000042eb6e
+ (id)physicalCardsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000042eabb
+ (void)deletePhysicalCardsForPhysicalCardStatusUpdatePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000042e992
+ (void)deletePhysicalCardsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000042e8f9
+ (id)insertPhysicalCards:(id)arg1 forPhysicalCardStatusUpdatePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000042e2d4
+ (id)insertOrUpdatePhysicalCard:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000042e180
+ (id)insertOrUpdatePhysicalCards:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000042df64
+ (id)replacePhysicalCards:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000042dd8f
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x001000000042d4ce
+ (id)databaseTable;	// IMP=0x001000000042d4c1
- (id)physicalCard;	// IMP=0x004000000042ee3b
- (_Bool)deleteFromDatabase;	// IMP=0x001000000042ea2b
- (void)updateWithPhysicalCard:(id)arg1;	// IMP=0x001000000042e4ef
- (id)initWithPhysicalCard:(id)arg1 forPhysicalCardStatusUpdatePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000042d97f
- (id)initWithPhysicalCard:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000042d517

@end
