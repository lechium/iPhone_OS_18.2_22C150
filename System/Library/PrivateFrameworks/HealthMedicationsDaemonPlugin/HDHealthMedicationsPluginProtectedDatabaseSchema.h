//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface HDHealthMedicationsPluginProtectedDatabaseSchema : NSObject
{
}

- (long long)_setInvalidSchedulesAsLocallyIncompatibleWithMaximumIntegerValue:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004f331
- (long long)_createRemoteScheduleUnavailableRecordsTableWithTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004f2d2
- (long long)_createMedicationDismissedPregnancyLactationInteractionsTableWithTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004f273
- (long long)_addDisplayOptionsToMedicationScheduleTable:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004f214
- (long long)_addScheduleTypeToMedicationScheduleTable:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004f1b5
- (long long)_addUniqueConstraintToScheduleMedicationIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004eebf
- (long long)_moveLifestyleFactorsFromUserDefaultsToKeyValueDomain:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004ea2a
- (long long)_addCompatibilityVersionColumnsWithTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004e9cb
- (long long)_sydney_addSyncIdentityToMedicationScheduleEntityWithTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004e7a7
- (long long)_sydney_createMedicationDismissedInteractionsTableWithTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004e748
- (long long)_sydney_dropAndReAddMedicationScheduleTableWithTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004e6e9
- (long long)_sydney_dropMedicationIngredientsTableWithTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004e68a
- (id)_getLegacySyncIdentityWithTransaction:(id)arg1 errorOut:(id *)arg2;	// IMP=0x000000000004e4f5
- (void)registerMigrationStepsWithMigrator:(id)arg1 schemaName:(id)arg2;	// IMP=0x000000000004dfd9
@property(readonly, copy, nonatomic) NSArray *databaseEntities;
@property(readonly, nonatomic) long long currentSchemaVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

