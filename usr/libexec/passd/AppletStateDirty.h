//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AppletStateDirty
{
}

+ (id)_predicateForPaymentApplications:(id)arg1;	// IMP=0x004000000044ec8d
+ (id)_predicateForSetOfAppletStateDirtyPIDs:(id)arg1;	// IMP=0x001000000044ec6a
+ (id)_predicateForAppletStateDirtyPID:(long long)arg1;	// IMP=0x001000000044ebf9
+ (id)_predicateForPaymentApplication:(id)arg1;	// IMP=0x001000000044eb75
+ (id)_predicateForPassWithUniqueIdentifier:(id)arg1;	// IMP=0x001000000044eb52
+ (id)_predicateForTransitAppletStatesDirty:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000044eae3
+ (id)_predicateForTransitAppletStateDirty:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000044e9ba
+ (id)_propertySettersForAppletStateDirty;	// IMP=0x001000000044e8ae
+ (id)dirtyAppletStatesInDatabase:(id)arg1;	// IMP=0x001000000044e539
+ (id)dirtyAppletStatesInDatabase:(id)arg1 fromSetOfTransitAppletStatesDirty:(id)arg2;	// IMP=0x001000000044e339
+ (id)anyInDatabase:(id)arg1 forTransitAppletStateDirty:(id)arg2;	// IMP=0x001000000044e2aa
+ (long long)countInDatabase:(id)arg1;	// IMP=0x001000000044e296
+ (void)deleteEntitiesForAppletState:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000044e1fa
+ (void)deleteEntitiesForSetOfAppletStates:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000044e15e
+ (void)deleteEntitiesForSetOfAppletStateDirtyPIDs:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000044e0c5
+ (void)deleteEntitiesForAppletStateDirtyPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000044e02c
+ (id)insertOrUpdateAppletStateDirtyForPassUniqueIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000044df98
+ (id)insertAppletStateDirtyForPassUniqueIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000044df2a
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x001000000044de3d
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x001000000044de0e
+ (id)databaseTable;	// IMP=0x001000000044de01
- (id)dirtyAppletState;	// IMP=0x004000000044e779
- (long long)paymentApplicationPID;	// IMP=0x001000000044e72e
- (id)passUniqueIdentifier;	// IMP=0x001000000044e715
- (id)initWithTransitAppletStateDirty:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000044dc62

@end
