//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PendingStatefulTransferProvisioning
{
}

+ (id)_propertySetters;	// IMP=0x00400000002556ad
+ (id)_properties;	// IMP=0x001000000025561a
+ (id)databaseTable;	// IMP=0x001000000025560d
+ (id)_predicateForBasePendingProvisioningPID:(long long)arg1;	// IMP=0x001000000025559c
+ (void)deleteEntitiesForBasePendingProvisioningPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000255485
+ (void)inflatePendingProvisioning:(id)arg1 forBasePendingProvisioningPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000255195
+ (id)insertPendingProvisioning:(id)arg1 forBasePendingProvisioning:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000254e25
- (id)initWithPendingProvisioning:(id)arg1 forBasePendingProvisioning:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0040000000254c14

@end

