//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDHH2MigratorRecord : HMFObject
{
    _Bool _isMigrationInProgress;	// 8 = 0x8
    _Bool _dryRun;	// 9 = 0x9
    _Bool _shouldSkipKeyRollOperations;	// 10 = 0xa
    _Bool _forceMigrationFailureForTesting;	// 11 = 0xb
    _Bool _migrateFromTestDirectory;	// 12 = 0xc
    unsigned int _currentMigrationAttempt;	// 16 = 0x10
    NSString *_hh2MigratorRecordDataStorePath;	// 24 = 0x18
}

+ (void)removeMigrationFailureRecord;	// IMP=0x00100000008747a2
+ (id)lastMigrationFailure;	// IMP=0x001000000087473f
+ (_Bool)recordMigrationFailureWithError:(id)arg1;	// IMP=0x0010000000874397
+ (id)unarchiveMigratorDict:(id)arg1;	// IMP=0x00100000008740c2
+ (id)archiveMigratorDict:(id)arg1;	// IMP=0x0010000000873fa5
+ (id)prepareDictionary:(_Bool)arg1 attempt:(unsigned int)arg2 skipKeyRoll:(_Bool)arg3 forceFailForTesting:(_Bool)arg4 migrateFromTestDirectory:(_Bool)arg5 dryRun:(_Bool)arg6;	// IMP=0x0010000000873dbc
+ (id)prepareDictionary:(id)arg1;	// IMP=0x0010000000873ce9
+ (id)logCategory;	// IMP=0x0010000000873cb9
+ (id)singleRecord;	// IMP=0x0010000000873c89
- (void).cxx_destruct;	// IMP=0x0000000000873c76
@property(retain, nonatomic) NSString *hh2MigratorRecordDataStorePath; // @synthesize hh2MigratorRecordDataStorePath=_hh2MigratorRecordDataStorePath;
@property(nonatomic) _Bool migrateFromTestDirectory; // @synthesize migrateFromTestDirectory=_migrateFromTestDirectory;
@property(nonatomic) _Bool forceMigrationFailureForTesting; // @synthesize forceMigrationFailureForTesting=_forceMigrationFailureForTesting;
@property(nonatomic) _Bool shouldSkipKeyRollOperations; // @synthesize shouldSkipKeyRollOperations=_shouldSkipKeyRollOperations;
@property(nonatomic) _Bool dryRun; // @synthesize dryRun=_dryRun;
@property(nonatomic) unsigned int currentMigrationAttempt; // @synthesize currentMigrationAttempt=_currentMigrationAttempt;
@property(nonatomic) _Bool isMigrationInProgress; // @synthesize isMigrationInProgress=_isMigrationInProgress;
- (_Bool)finishMigration;	// IMP=0x00000000008739e4
- (_Bool)isMaximumMigrationAttemptReached;	// IMP=0x00000000008739cc
- (_Bool)beginMigration;	// IMP=0x0000000000873699
- (_Bool)writeToDisk;	// IMP=0x00000000008734e3
- (_Bool)writeMigratorRecord:(id)arg1;	// IMP=0x00000000008731ec
- (_Bool)writeNewMigrationRecord;	// IMP=0x0000000000873024
- (id)attributeDescriptions;	// IMP=0x0000000000872da9
- (void)updateValuesFromDict:(id)arg1;	// IMP=0x0000000000872bb6
- (void)unarchiveRecordFromData:(id)arg1;	// IMP=0x00000000008729ac
- (void)readMigratorRecord;	// IMP=0x0000000000872740
- (id)initWithLocalStorePath:(id)arg1;	// IMP=0x00000000008726b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
