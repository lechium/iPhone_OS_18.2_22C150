//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@class NSString;

@interface NSError (MTAdditions)
- (void)createErrorStackTraceForErrorCodes:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c879
- (void)collectErrorsAndThrow:(id)arg1;	// IMP=0x002000000003c54c
- (void)_NSPersistentHistoryTokenExpiredError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c539
- (void)_NSExternalRecordImportError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c526
- (void)_NSInferredMappingModelError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c513
- (void)_NSSQLiteError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c500
- (void)_NSEntityMigrationPolicyError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c4ed
- (void)_NSMigrationManagerDestinationStoreError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c4da
- (void)_NSMigrationManagerSourceStoreError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c4c7
- (void)_NSMigrationMissingMappingModelError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c4b4
- (void)_NSMigrationMissingSourceModelError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c4a1
- (void)_NSMigrationCancelledError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c48e
- (void)_NSMigrationConstraintViolationError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c47b
- (void)_NSMigrationError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c468
- (void)_NSPersistentStoreIncompatibleVersionHashError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c455
- (void)_NSPersistentStoreUnsupportedRequestTypeError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c442
- (void)_NSPersistentStoreTimeoutError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c42f
- (void)_NSPersistentStoreOpenError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c41c
- (void)_NSPersistentStoreOperationError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c409
- (void)_NSCoreDataError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c3f6
- (void)_NSPersistentStoreSaveConflictsError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c3e3
- (void)_NSPersistentStoreIncompleteSaveError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c3d0
- (void)_NSPersistentStoreSaveError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c3bd
- (void)_NSPersistentStoreIncompatibleSchemaError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c3aa
- (void)_NSPersistentStoreTypeMismatchError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c397
- (void)_NSPersistentStoreInvalidTypeError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c384
- (void)_NSManagedObjectConstraintMergeError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c371
- (void)_NSManagedObjectMergeError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c35e
- (void)_NSManagedObjectExternalRelationshipError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c34b
- (void)_NSManagedObjectReferentialIntegrityError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c338
- (void)_NSPersistentStoreCoordinatorLockingError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c325
- (void)_NSManagedObjectContextLockingError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c312
- (void)_NSValidationInvalidURIError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c2ff
- (void)_NSValidationStringPatternMatchingError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c2ec
- (void)_NSValidationStringTooShortError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c2d9
- (void)_NSValidationStringTooLongError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c2c6
- (void)_NSValidationInvalidDateError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c2b3
- (void)_NSValidationDateTooSoonError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c2a0
- (void)_NSValidationDateTooLateError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c28d
- (void)_NSValidationNumberTooSmallError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c27a
- (void)_NSValidationNumberTooLargeError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c267
- (void)_NSValidationRelationshipDeniedDeleteError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c254
- (void)_NSValidationRelationshipExceedsMaximumCountError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c241
- (void)_NSValidationRelationshipLacksMinimumCountError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c22e
- (void)_NSValidationMissingMandatoryPropertyError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c21b
- (void)_NSValidationMultipleErrorsError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c208
- (void)_NSManagedObjectConstraintValidationError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c1f5
- (void)_NSManagedObjectValidationError:(id)arg1 andThrow:(id)arg2;	// IMP=0x002000000003c1e2
- (void)logAndThrow:(_Bool)arg1;	// IMP=0x002000000003c1cb
- (void)logAndThrow:(_Bool)arg1 printStackTrace:(_Bool)arg2;	// IMP=0x002000000003bbae
- (id)metricsAdditionalData;	// IMP=0x00200000000500f2
- (id)metricsContentIdentifier;	// IMP=0x0020000000050071
- (void)recordMetrics;	// IMP=0x002000000005004e
- (id)im_jsonSerializableValue;	// IMP=0x0020000000053d8a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

