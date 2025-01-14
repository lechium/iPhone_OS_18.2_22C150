//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLPlatformObject.h>

@class CPLChangeSessionUpdate, CPLPrequeliteClientCacheMigrator, CPLPrequeliteTable, CPLPrequeliteVariable, CPLSimpleUpgradeHistory, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, NSURL, PQLConnection;
@protocol OS_dispatch_queue;

@interface CPLPrequeliteStore : CPLPlatformObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_writeQueue;	// 16 = 0x10
    struct os_unfair_lock_s _emergencyCloseLock;	// 24 = 0x18
    _Bool _emergencyClose;	// 28 = 0x1c
    PQLConnection *_db;	// 32 = 0x20
    NSURL *_dbURL;	// 40 = 0x28
    _Bool _configuringDB;	// 48 = 0x30
    NSMutableSet *_modifiedVariables;	// 56 = 0x38
    id _globalVariableCacheIdentifier;	// 64 = 0x40
    CPLPrequeliteTable *_globals;	// 72 = 0x48
    CPLPrequeliteVariable *_libraryVersionVar;	// 80 = 0x50
    CPLPrequeliteVariable *_userIdentifierVar;	// 88 = 0x58
    CPLPrequeliteVariable *_lastQuarantineCountReportDateVar;	// 96 = 0x60
    CPLPrequeliteVariable *_clientCacheIdentifierVar;	// 104 = 0x68
    CPLPrequeliteVariable *_clientCacheIdentifierAsKnownByClient;	// 112 = 0x70
    CPLPrequeliteVariable *_libraryCreationDateVar;	// 120 = 0x78
    CPLPrequeliteVariable *_changeSessionUpdateVar;	// 128 = 0x80
    CPLPrequeliteVariable *_pushPullGatekeepersVar;	// 136 = 0x88
    _Bool _hasCachedChangeSessionUpdate;	// 144 = 0x90
    CPLChangeSessionUpdate *_cachedChangeSessionUpdate;	// 152 = 0x98
    _Bool _hasCachedPushPullGatekeepers;	// 160 = 0xa0
    _Bool _hasModifiedPushPullGatekeepers;	// 161 = 0xa1
    NSArray *_cachedPushPullGatekeepers;	// 168 = 0xa8
    CPLPrequeliteVariable *_libraryOptionsVar;	// 176 = 0xb0
    CPLPrequeliteVariable *_shouldUpdateDisabledFeaturesVar;	// 184 = 0xb8
    CPLPrequeliteVariable *_disabledFeaturesDataVar;	// 192 = 0xc0
    CPLSimpleUpgradeHistory *_history;	// 200 = 0xc8
    CPLPrequeliteVariable *_derivativesFilterVar;	// 208 = 0xd0
    CPLPrequeliteVariable *_deactivatedVar;	// 216 = 0xd8
    CPLPrequeliteVariable *_mainScopeIdentifierVar;	// 224 = 0xe0
    Class _userIdentifierClass;	// 232 = 0xe8
    NSObject<OS_dispatch_queue> *_isClientInSyncWithClientCacheQueue;	// 240 = 0xf0
    _Bool _isClientInSyncWithClientCache;	// 248 = 0xf8
    unsigned long long _resetOption;	// 256 = 0x100
    NSString *_resetReason;	// 264 = 0x108
    NSString *_wipeReason;	// 272 = 0x110
    _Bool _failInsteadOfWipe;	// 280 = 0x118
    _Bool _needsToReset;	// 281 = 0x119
    _Bool _reentrencyGuard;	// 282 = 0x11a
    _Bool _didWipeLibrary;	// 283 = 0x11b
    int _upgradeEventJournal;	// 284 = 0x11c
    _Bool _mustFix22666940;	// 288 = 0x120
    _Bool _mustMigratePushQueue;	// 289 = 0x121
    NSMutableArray *_postUpgradeMigrations;	// 296 = 0x128
    CPLPrequeliteClientCacheMigrator *_clientCacheMigrator;	// 304 = 0x130
    _Bool _hasScheduledClientCacheDrop;	// 312 = 0x138
    NSObject<OS_dispatch_queue> *_vacuumQueue;	// 320 = 0x140
    _Bool _executingVacuum;	// 328 = 0x148
    NSMutableArray *_vacuumCompletionHandlers;	// 336 = 0x150
    _Bool _shouldProfile;	// 344 = 0x158
    _Bool _showStatsForAllTransactions;	// 345 = 0x159
    double _lastLongTransactionDate;	// 352 = 0x160
    NSMutableDictionary *_transactionStatistics;	// 360 = 0x168
    NSDate *_libraryCreationDate;	// 368 = 0x170
}

+ (void)wipeStoreAtNextOpeningWithCloudLibraryStorageURL:(id)arg1 reason:(id)arg2;	// IMP=0x002000000019165f
+ (void)_writeStoreMarkerAtURL:(id)arg1 reason:(id)arg2;	// IMP=0x00100000001913cf
+ (id)_wipeStoreMarkerURLWithCloudLibraryStateStorageURL:(id)arg1;	// IMP=0x0010000000191308
+ (_Bool)shouldDoCleanUpImmediately;	// IMP=0x0010000000186634
+ (void)setShouldDoCleanUpImmediately:(_Bool)arg1;	// IMP=0x0010000000186628
+ (void)setShouldWarnUserBeforeWipeOnUpgrade:(_Bool)arg1;	// IMP=0x001000000018661c
+ (_Bool)shouldWarnUserBeforeWipeOnUpgrade;	// IMP=0x0010000000186610
+ (void)setShouldPreventWipeOnUpgrade:(_Bool)arg1;	// IMP=0x00100000001865fd
+ (_Bool)shouldPreventWipeOnUpgrade;	// IMP=0x0010000000186576
- (void).cxx_destruct;	// IMP=0x00200000001940d4
@property(readonly) NSDate *libraryCreationDate; // @synthesize libraryCreationDate=_libraryCreationDate;
- (id)redactedDescription;	// IMP=0x0010000000193fb7
@property(readonly, copy) NSString *description;
- (_Bool)deleteDynamicallyCreatedStorages:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000193b04
- (_Bool)createStoragesDynamically:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001937d0
- (void)markAsCorrupted;	// IMP=0x001000000019359e
- (void)emergencyClose;	// IMP=0x00100000001930ca
- (void)stopVacuum;	// IMP=0x0010000000192fe8
- (void)startVacuumWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000192d05
- (void)_vacuum:(long long)arg1 withInitialDatabaseSize:(long long)arg2;	// IMP=0x00100000001926f8
- (long long)_sizeInBytes;	// IMP=0x001000000019262a
- (void)_notifyVacuumDidComplete;	// IMP=0x00100000001924e0
- (id)transientPullRepository;	// IMP=0x0010000000192466
- (id)cloudCache;	// IMP=0x00100000001923ec
- (id)clientCache;	// IMP=0x00100000001923b8
- (_Bool)hasTable:(id)arg1;	// IMP=0x0010000000192365
- (_Bool)table:(id)arg1 hasColumnWithName:(id)arg2;	// IMP=0x0010000000192258
- (void)table:(id)arg1 enumerateCountGroupedByProperty:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0010000000192139
- (void)table:(id)arg1 enumerateCountGroupedByUnsignedIntegerProperty:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x001000000019202b
- (unsigned long long)table:(id)arg1 countOfRecordsMatchingQuery:(id)arg2;	// IMP=0x0010000000191f83
- (unsigned long long)tableCountOfRecords:(id)arg1;	// IMP=0x0010000000191efd
- (_Bool)table:(id)arg1 hasRecordsMatchingQuery:(id)arg2;	// IMP=0x0010000000191e64
- (_Bool)tableHasRecords:(id)arg1;	// IMP=0x0010000000191deb
- (void)recordUpgradeEvent:(id)arg1 arguments:(struct __va_list_tag [1])arg2;	// IMP=0x0010000000191d0f
- (void)recordUpgradeEvent:(id)arg1;	// IMP=0x0010000000191c6b
- (id)status;	// IMP=0x0010000000191b9b
- (void)transactionDidFinish;	// IMP=0x0010000000191b95
- (void)writeTransactionDidFail;	// IMP=0x00100000001919ee
- (void)writeTransactionDidSucceed;	// IMP=0x00100000001919d1
- (void)wipeStoreAtNextOpeningWithReason:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000019193c
- (void)_deleteWipeReason;	// IMP=0x0010000000191791
- (id)wipeReason;	// IMP=0x00100000001916da
- (id)_wipeStoreMarkerURL;	// IMP=0x0010000000191324
- (_Bool)storeDerivativesFilter:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000191263
- (id)derivativesFilter;	// IMP=0x00100000001911e6
- (id)disabledFeatures;	// IMP=0x001000000019112c
- (_Bool)storeDisabledFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000191041
- (_Bool)setShouldUpdateDisabledFeaturesWithError:(id *)arg1;	// IMP=0x001000000019101a
@property(readonly, nonatomic) _Bool shouldUpdateDisabledFeatures;
- (_Bool)storeChangeSessionUpdate:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000190e47
@property(readonly, nonatomic) CPLChangeSessionUpdate *storedChangeSessionUpdate;
@property(readonly, nonatomic) _Bool hasStoredChangeSessionUpdate;
@property(readonly, nonatomic) NSArray *pushPullGatekeepers;
- (_Bool)storePushPullGatekeepers:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000190415
- (_Bool)isClientInSyncWithClientCache;	// IMP=0x0010000000190361
- (_Bool)storeClientIsNotInSyncWithClientCacheWithError:(id *)arg1;	// IMP=0x00100000001901db
- (_Bool)storeClientIsInSyncWithClientCacheWithError:(id *)arg1;	// IMP=0x001000000019001d
- (id)createNewClientCacheIdentifier;	// IMP=0x001000000018ffc6
- (_Bool)storeClientCacheIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000018ffa6
- (id)clientCacheIdentifier;	// IMP=0x001000000018ff89
- (_Bool)storeLastQuarantineCountReportDate:(id)arg1 error:(id *)arg2;	// IMP=0x001000000018ff69
- (id)lastQuarantineCountReportDate;	// IMP=0x001000000018fefb
- (_Bool)storeUserIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000018fd63
- (id)userIdentifier;	// IMP=0x001000000018fafb
- (Class)_userIdentifierClass;	// IMP=0x001000000018fa0f
- (_Bool)resetValueForGlobalVariable:(id)arg1 error:(id *)arg2;	// IMP=0x001000000018f991
- (id)valueForGlobalVariable:(id)arg1;	// IMP=0x001000000018f861
- (_Bool)setValue:(id)arg1 forGlobalVariable:(id)arg2 error:(id *)arg3;	// IMP=0x001000000018f75c
- (_Bool)addGlobalVariable:(id)arg1 defaultValue:(id)arg2 error:(id *)arg3;	// IMP=0x001000000018f3ab
- (void)_cacheValue:(id)arg1 forVariable:(id)arg2;	// IMP=0x001000000018f31e
- (id)pqlConnection;	// IMP=0x001000000018f309
- (id)createNewLibraryVersion;	// IMP=0x001000000018f2b2
- (_Bool)storeLibraryVersion:(id)arg1 withError:(id *)arg2;	// IMP=0x001000000018f292
- (id)libraryVersion;	// IMP=0x001000000018f275
- (_Bool)updateLibraryOptions:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x001000000018efde
- (unsigned long long)libraryOptions;	// IMP=0x001000000018ef8f
- (void)performBarrier;	// IMP=0x001000000018ef6d
- (void)performBarrierTransaction:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000018ee65
- (_Bool)closeWithError:(id *)arg1;	// IMP=0x001000000018ee1d
- (void)blockWriteTransactionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000018ecc0
- (void)performWriteTransaction:(id)arg1 withBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000018e774
- (void)performReadTransaction:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000018e294
- (_Bool)executePostOpenWithError:(id *)arg1;	// IMP=0x001000000018e1ce
- (_Bool)openWithError:(id *)arg1;	// IMP=0x001000000018df77
- (_Bool)_openWithError:(id *)arg1;	// IMP=0x001000000018cb05
- (void)_markLibraryAsCorruptedWithInfo:(id)arg1;	// IMP=0x001000000018ca45
- (_Bool)_setupPragmasAndFunctions;	// IMP=0x001000000018ca28
- (_Bool)markDatabaseAsDeactivatedWithError:(id *)arg1;	// IMP=0x001000000018ca01
- (void)_deleteCorruptionInfo;	// IMP=0x001000000018c856
@property(readonly, nonatomic) id corruptionInfo;
- (id)_corruptionMarkerURL;	// IMP=0x001000000018c6b0
- (_Bool)_setupDBIfNeeded;	// IMP=0x001000000018c183
- (void)_closeUpgradeJournal;	// IMP=0x001000000018c157
- (void)_openUpgradeJournal;	// IMP=0x001000000018c045
- (_Bool)_upgradeDB:(long long)arg1;	// IMP=0x001000000018b349
- (_Bool)_wipeIfDeactivated:(long long)arg1 didWipeDatabase:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x001000000018b230
- (void)_wipeBeforeOpeningIfNecessary;	// IMP=0x001000000018b05e
- (id)_wipeReasonFromCorruptionInfo:(id)arg1;	// IMP=0x001000000018afc7
- (_Bool)_closeWipeAndReOpenWithReason:(id)arg1 warnUserIfPossible:(_Bool)arg2 createRadar:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000000018a9a1
- (_Bool)_hasDeactivateMarker;	// IMP=0x001000000018a8ff
@property(readonly, nonatomic) NSURL *deactivateMarkerURL;
- (void)_wipeWithReason:(id)arg1;	// IMP=0x001000000018a655
- (_Bool)performPostUpgradeMigrationsWithError:(id *)arg1;	// IMP=0x0010000000189fcb
- (_Bool)_fixStoreAfterAnyVersionChange;	// IMP=0x0010000000189a0d
- (_Bool)_postUpgradeToVersion:(long long)arg1;	// IMP=0x00100000001896c0
- (_Bool)_upgradeToVersion:(long long)arg1;	// IMP=0x0010000000189348
- (void)_scheduleClientCacheDropIfNecessary;	// IMP=0x0010000000189271
- (void)_scheduleClientCacheDrop;	// IMP=0x00100000001890f2
- (_Bool)_fix22666940;	// IMP=0x00100000001888ac
- (_Bool)_performWithFlags:(unsigned int)arg1 action:(CDUnknownBlockType)arg2;	// IMP=0x001000000018852a
- (void)_unsetupProfilingHooks;	// IMP=0x00100000001884ae
- (void)_setupProfilingHooks;	// IMP=0x0010000000187d70
- (id)_transactionStatsDescription;	// IMP=0x0010000000187b32
- (_Bool)_initializeDB;	// IMP=0x0010000000187115
- (void)triggerResetAfterUpgrade:(unsigned long long)arg1 withReason:(id)arg2;	// IMP=0x0010000000186f6f
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x0010000000186640
- (void)_addPostUpgradeMigration:(id)arg1;	// IMP=0x00100000001864be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

