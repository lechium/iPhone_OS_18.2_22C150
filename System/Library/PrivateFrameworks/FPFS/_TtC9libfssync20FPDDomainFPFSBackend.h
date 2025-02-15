//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FPDDomain, MISSING_TYPE, NSArray, NSData, NSError, NSFileProviderDomainVersion, NSString;

__attribute__((visibility("hidden")))
@interface _TtC9libfssync20FPDDomainFPFSBackend : NSObject
{
    MISSING_TYPE *domain;	// 8 = 0x8
    MISSING_TYPE *purposeIdentifier;	// 16 = 0x10
    MISSING_TYPE *log;	// 32 = 0x20
    MISSING_TYPE *providerDomainID;	// 40 = 0x28
    MISSING_TYPE *nsDomain;	// 48 = 0x30
    MISSING_TYPE *pathsManager;	// 56 = 0x38
    MISSING_TYPE *__cachedURLs;	// 64 = 0x40
    MISSING_TYPE *__fpfs;	// 80 = 0x50
    MISSING_TYPE *backingStoreIdentity;	// 88 = 0x58
    MISSING_TYPE *queue;	// 104 = 0x68
    MISSING_TYPE *startupQueue;	// 112 = 0x70
    MISSING_TYPE *itemChangedQueue;	// 120 = 0x78
    MISSING_TYPE *workingSetChangedQueue;	// 128 = 0x80
    MISSING_TYPE *pendingSetWatchingQueue;	// 136 = 0x88
    MISSING_TYPE *startStatus;	// 144 = 0x90
    MISSING_TYPE *itemsChangedSource;	// 152 = 0x98
    MISSING_TYPE *enumerationAnchorChangedSource;	// 160 = 0xa0
    MISSING_TYPE *runningEnumerator;	// 168 = 0xa8
    MISSING_TYPE *pendingSetSource;	// 176 = 0xb0
    MISSING_TYPE *initializationGroup;	// 184 = 0xb8
    MISSING_TYPE *started;	// 192 = 0xc0
    MISSING_TYPE *invalidated;	// 193 = 0xc1
    MISSING_TYPE *observedDefaults;	// 200 = 0xc8
    MISSING_TYPE *observation;	// 208 = 0xd0
    MISSING_TYPE *progressMonitor;	// 216 = 0xd8
    MISSING_TYPE *periodicFPCKRunner;	// 224 = 0xe0
    MISSING_TYPE *pendingSetState;	// 0 = 0x0
    MISSING_TYPE *onActivatePendingSetNotification;	// 0 = 0x0
    MISSING_TYPE *pendingSetStateURL;	// 0 = 0x0
    MISSING_TYPE *rtcReporter;	// 0 = 0x0
    MISSING_TYPE *userAllowedDBDrop;	// 0 = 0x0
    MISSING_TYPE *errorGenerationRecord;	// 0 = 0x0
    MISSING_TYPE *_signaledErrorGenerationDebouncer;	// 0 = 0x0
    MISSING_TYPE *urlsAreInTransientState;	// 0 = 0x0
}

+ (void)registerXPCActivities;	// IMP=0x00100000001e4ba0
- (void).cxx_destruct;	// IMP=0x00000000001e4800
- (id)init;	// IMP=0x00000000001e47a0
- (void)queryDiskImportSchedulerLabelWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001e45e0
- (void)didChangeDomainConfiguration:(id)arg1;	// IMP=0x00000000001e42d0
- (void)copyDatabaseToURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e37b0
- (_Bool)updateRootAfterDomainChangeWithError:(id *)arg1;	// IMP=0x00000000001d0bf0
- (void)removeEbihilSymlink;	// IMP=0x00000000001cfb10
@property(nonatomic, readonly) _Bool backgroundActivityIsPaused;
@property(nonatomic, readonly) long long errorGenerationCount;
@property(nonatomic, readonly) NSFileProviderDomainVersion *domainVersion;
- (id)rootURLsWithTransientState:(_Bool *)arg1;	// IMP=0x00000000001c9560
@property(nonatomic, readonly) NSArray *checkableURLs;
@property(nonatomic, readonly) NSArray *rootURLs;
@property(nonatomic, readonly) NSArray *coordinationRootURLs;
- (id)initWithDomain:(id)arg1;	// IMP=0x00000000001c8f20
@property(nonatomic, copy) NSData *backingStoreIdentity;
- (void)fetchLatestVersionForURL:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000024a3c0
- (void)resumeSyncForItemAtURL:(id)arg1 bundleID:(id)arg2 behavior:(unsigned long long)arg3 request:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000248100
- (void)pauseSyncForItemAtURL:(id)arg1 bundleID:(id)arg2 behavior:(unsigned long long)arg3 request:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000244f90
- (void)getDiagnosticAttributesForItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000243b00
- (void)didUpdateAlternateContentsDocumentForDocumentWithURL:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000241e80
- (void)fetchAlternateContentsURLWrapperForDocumentWithURL:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000240fc0
- (void)setAlternateContentsURLWrapper:(id)arg1 forDocumentWithURL:(id)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000240cb0
- (void)hasNonUploadedFilesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000240a60
- (void)resetCountersWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002404d0
- (void)getCountersArrayWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000023fdb0
- (void)subscribeToDownloadProgressUpdates:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000023fb00
- (void)subscribeToUploadProgressUpdates:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000023f630
- (void)importProgressForItemsPendingScanningProviderWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000023f160
- (void)importProgressForItemsPendingScanningDiskWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000023e9e0
- (void)importProgressForItemsPendingReconciliationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000023e500
- (void)runTestingOperations:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000023df20
- (void)listAvailableTestingOperationsWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000023d2d0
- (void)updateShouldRetryThrottledOperations:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000023cee0
- (void)signalErrorResolved:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000023c820
- (void)didChangeNeedsAuthentification:(_Bool)arg1;	// IMP=0x000000000023a2d0
- (void)fetchVendorEndpointWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000239cc0
- (void)fetchServicesForItemID:(id)arg1 allowRestrictedSources:(_Bool)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000239890
- (void)fetchOperationServiceOrEndpointWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000238fd0
- (void)fetchThumbnailsAtURL:(id)arg1 versions:(id)arg2 size:(struct CGSize)arg3 perThumbnailCompletionHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000238c50
- (void)listRemoteVersionsOfItemAtURL:(id)arg1 includeCachedVersions:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000238070
- (void)resolveConflictAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000236420
- (void)trashItemAtURL:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000235910
- (void)bulkItemChanges:(id)arg1 changedFields:(unsigned long long)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000234650
- (void)ingestFromCacheItemWithID:(id)arg1 requestedFields:(unsigned long long)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000022d8c0
- (void)getKnownFolderLocations:(unsigned long long)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000022cc00
- (void)attachKnownFolders:(id)arg1 options:(unsigned long long)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000022c920
- (void)detachKnownFolders:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000229550
- (void)unpinItemWithID:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000221570
- (void)pinItemWithID:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000220ff0
- (void)forceIngestionAtURL:(id)arg1;	// IMP=0x0000000000220950
- (void)forceFSIngestionForItemID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002207e0
- (void)forceIngestionForItemID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000021fa90
- (void)createItemBasedOnTemplate:(id)arg1 fields:(unsigned long long)arg2 urlWrapper:(id)arg3 options:(unsigned long long)arg4 bounceOnCollision:(_Bool)arg5 request:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000021ed80
- (_Bool)isItemDataless:(id)arg1;	// IMP=0x000000000021c3c0
- (id)materializedURLForItemID:(id)arg1;	// IMP=0x000000000021c170
- (void)valuesForAttributes:(id)arg1 forURL:(id)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000021afa0
- (id)createIndexerWithExtension:(id)arg1 enabled:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000021a7a0
- (void)importProgressWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000021a770
- (void)reimportItemsBelowItemWithID:(id)arg1 markItemDataless:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002180b0
- (void)hierarchyForURL:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002152f0
- (id)providerVersion;	// IMP=0x0000000000214cb0
- (void)fetchTelemetryReportWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000214a80
- (id)accumulatedSizeOfItems;	// IMP=0x0000000000211230
- (long long)accumulatedSizeOfPinnedItems;	// IMP=0x0000000000210960
- (long long)nonEvictableSpace;	// IMP=0x00000000002102d0
- (void)decorateItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000020f900
- (void)fetchFSItemsForItemIdentifiers:(id)arg1 materializingIfNeeded:(_Bool)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000020f280
- (void)enumerateWithSettings:(id)arg1 lifetimeExtender:(id)arg2 observer:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000020dc50
- (void)workingSetDidChangeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000020b760
- (void)didChangeItemID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000020b200
- (void)wakeForPushWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000020ab50
- (void)stateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000020a620
- (void)currentPendingSetSyncAnchorWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000208350
- (void)enumeratePendingSetFromSyncAnchor:(id)arg1 suggestedBatchSize:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000207650
- (void)currentMaterializedSetSyncAnchorWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000204a80
- (void)enumerateMaterializedSetFromSyncAnchor:(id)arg1 suggestedBatchSize:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002041c0
- (void)fakeFSEventAtURL:(id)arg1;	// IMP=0x0000000000202ae0
- (void)URLForItemID:(id)arg1 creatingPlaceholderIfMissing:(_Bool)arg2 ignoreAlternateContentsURL:(_Bool)arg3 forBookmarkResolution:(_Bool)arg4 request:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000202380
- (void)itemChangedAtURL:(id)arg1 request:(id)arg2;	// IMP=0x00000000002014b0
- (void)materializeItemWithID:(id)arg1 requestedRange:(struct _NSRange)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000201400
- (void)evictItemWithID:(id)arg1 evictionReason:(unsigned int)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000200740
- (id)evictItemAtURL:(id)arg1 evictionReason:(unsigned int)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001fffc0
- (void)movingItemAtURL:(id)arg1 withInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ffbb0
- (void)forceUpdateBlockedProcessNamesFromDomain:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x00000000001feaa0
- (void)downloadVersionWithItemID:(id)arg1 version:(id)arg2 originalURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001fe5c0
- (void)downloadItemWithItemID:(id)arg1 request:(id)arg2 progress:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001fd9a0
- (id)startProvidingItemAtURL:(id)arg1 readerID:(id)arg2 readingOptions:(unsigned long long)arg3 request:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000001fcf20
- (void)setPutBackInfoOnItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001f8e00
- (void)putBackURLForTrashedItemAtURL:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001f8260
- (void)itemForURL:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001f4980
- (void)itemForItemID:(id)arg1 creatingPlaceholderIfMissing:(_Bool)arg2 ignoreAlternateContentsURL:(_Bool)arg3 request:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000001f2870
- (void)itemIDForURL:(id)arg1 requireProviderItemID:(_Bool)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001f20f0
- (void)waitForStabilizationForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ef6c0
- (void)waitForChangesOnItemsBelowItemWithIdentifier:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ef0c0
- (void)dumpStateTo:(id)arg1 options:(unsigned long long)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001eeb00
- (void)saveFPCKTelemetryReport:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ee240
- (_Bool)isProviderForRealPathURL:(id)arg1;	// IMP=0x00000000001eda70
- (id)cleanupDomainWithMode:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000001ed790
- (void)invalidate;	// IMP=0x00000000001e9170
- (id)createRootByImportingURL:(id)arg1 knownFolders:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001e87d0
- (_Bool)isDeadEndBackend;	// IMP=0x00000000001e7d20
- (_Bool)needsRootsCreation;	// IMP=0x00000000001e7ce0
- (_Bool)startWithReason:(id)arg1 userAllowedDBDrop:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000001e70c0
- (void)reindexItemsWithIndexReason:(long long)arg1 identifiers:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001e6880
- (void)reindexAllItemsWithDropReason:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e5c50
- (void)sharedSchedulerIsDeferred:(id)arg1;	// IMP=0x00000000001e5630
- (void)sharedSchedulerCanRun:(id)arg1;	// IMP=0x00000000001e55e0
@property(nonatomic, readonly) NSString *watcherLabel;
- (void)launchFeedbackForDomain:(FPDDomain *)arg1 itemIdentifier:(NSString *)arg2 triggeringError:(NSError *)arg3 completionHandler:(void (^)(NSError *))arg4;	// IMP=0x000000000024d5a0
- (void)triggerFeedbackApprovalRequestForItemURL:(id)arg1 domain:(id)arg2 uiOnly:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000024d2d0
- (void)sendDiagnosticsFromFPCKForItemIDs:(id)arg1;	// IMP=0x000000000024c100
- (void)getDBQueryStatisticsWithQueryPlan:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000024b4f0
- (void)resetDBQueryStatisticsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000024b1c0
- (void)disableDBQueryStatisticsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000024ad50

@end

