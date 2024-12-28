//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMapTable, NSMutableDictionary, NSString, PDClient, PDDaemon, PDDatabase, PDRing, UNUserNotificationCenter;
@protocol OS_dispatch_queue;

@interface PDEndpointServer : NSObject
{
    UNUserNotificationCenter *_userNotificationCenter;	// 8 = 0x8
    NSDate *_lastProgressRecordingBannerTime;	// 16 = 0x10
    PDDaemon *_daemon;	// 24 = 0x18
    PDClient *_client;	// 32 = 0x20
    NSMapTable *_observers;	// 40 = 0x28
    PDRing *_previousCommands;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000003a0bf
@property(readonly, nonatomic) NSMapTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) PDClient *client;
@property(readonly, nonatomic) __weak PDDaemon *daemon;
@property(readonly, nonatomic) NSMutableDictionary *statusReport;
- (id)_clientScopedPredicate:(id)arg1 forEntityClass:(Class)arg2;	// IMP=0x0010000000039aa8
- (long long)_authorizationStatusForObject:(id)arg1;	// IMP=0x0010000000039702
- (long long)_authorizationStatusForHandoutAssignedItem:(id)arg1;	// IMP=0x0010000000039492
- (long long)_authorizationStatusForContext:(id)arg1;	// IMP=0x0010000000039279
- (long long)_authorizationStatusForContextWithObjectID:(id)arg1;	// IMP=0x0010000000039166
- (long long)_authorizationStatusActivityWithID:(id)arg1;	// IMP=0x001000000003903d
- (oneway void)remote_saveInsightEvents:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000038997
- (oneway void)remote_relayRequestWithData:(id)arg1 requestType:(unsigned long long)arg2 fileHandle:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000383ff
- (oneway void)remote_fetchOrphanedAssetsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000038316
- (oneway void)remote_deleteAdminRequestID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003817e
- (oneway void)remote_publishAdminRequests:(id)arg1 withRequestor:(id)arg2 adminRequestAccounts:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000003797f
- (oneway void)remote_fetchSurveyAnswer:(id)arg1 responderIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000375f5
- (oneway void)remote_publishSurveyAnswers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000036f56
- (oneway void)remote_publishClass:(id)arg1 membersToInsert:(id)arg2 membersToDelete:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000036594
- (oneway void)remote_triggerUserNotificationWithTitle:(id)arg1 message:(id)arg2 wrappedImageURL:(id)arg3;	// IMP=0x00100000000364e4
- (oneway void)remote_triggerUserNotificationHandoutAssignedWithHandoutID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000036133
- (oneway void)remote_triggerUserNotificationRevisedSubmissionWithAttachmentID:(id)arg1 studentName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000035abd
- (oneway void)remote_triggerUserNotificationRevisionRequestedWithAttachmentID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000355e3
- (oneway void)remote_triggerUserNotificationHandoutPastDueSummaryWithReferenceDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000035447
- (oneway void)remote_triggerUserNotificationHandoutDueSoonWithReferenceDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000352ab
- (oneway void)remote_triggerUserNotificationReviewDueHandoutsWithReferenceDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003510f
- (void)entitled_publishCollaborationStateChanges:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000034927
- (oneway void)remote_publishCollaborationStateChanges:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000034838
- (oneway void)remote_collaborationStatesForObjectWithID:(id)arg1 classID:(id)arg2 forOwnersWithRole:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000346fa
- (oneway void)remote_collaborationStatesForObjectWithID:(id)arg1 ownerPersonID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000345c7
- (oneway void)remote_deleteCollectionRelatedObjectsWithCompletion:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000034111
- (oneway void)remote_fetchCollectionItemsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000033e94
- (oneway void)remote_fetchCollectionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000033c63
- (oneway void)remote_repairHandoutAttachments:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000337b3
- (oneway void)remote_fetchDeletedObjectIDsNewerThanDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000033607
- (oneway void)remote_publishHandoutGraph:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000032fb9
- (oneway void)remote_fetchAppBasedAssignmentUsage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000032e85
- (oneway void)remote_startActivityFailed:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000032c87
- (oneway void)remote_startAppActivity:(id)arg1 bundleID:(id)arg2 activityType:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000322f6
- (oneway void)remote_studentActivityForAttachmentsWithIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000031da0
- (oneway void)remote_canSearchRostersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000031a6a
- (oneway void)remote_currentUserContentStoreCacheDirectoryURLWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003198b
- (oneway void)remote_topLevelContentStoreCacheDirectoryURLWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000318ac
- (oneway void)remote_uploadAsset:(id)arg1 createThumbnailIfNeeded:(_Bool)arg2 uploadObserver:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000315e2
- (oneway void)remote_createShareIfNeededForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003136f
- (oneway void)remote_deleteBackingStoreForAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000031196
- (oneway void)remote_cloudKitUrlSuitableForStreamingAsset:(id)arg1 downloadObserver:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000030f79
- (oneway void)remote_cloudKitUrlSuitableForOpeningForAsset:(id)arg1 downloadObserver:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000030d13
- (oneway void)remote_cloudKitThumbnailUrlSuitableForOpeningForAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000030b38
- (oneway void)remote_urlSuitableForOpeningForExpectedURL:(id)arg1 itemID:(id)arg2 ownerName:(id)arg3 zoneName:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000003072a
- (oneway void)remote_removeAuthorizationStatus:(unsigned long long)arg1 forHandoutAssignedItem:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000305fb
- (oneway void)remote_addAuthorizationStatus:(unsigned long long)arg1 forHandoutAssignedItem:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000304cc
- (oneway void)remote_setUserDefaultValue:(id)arg1 forDefaultNamed:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000303af
- (oneway void)remote_getUserDefaultForDefaultNamed:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000302c2
- (oneway void)remote_getUserDefaultsConfigurationDictionaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000030210
- (oneway void)remote_featureIsEnabled:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000030075
- (void)_invalidateObserver:(id)arg1;	// IMP=0x0010000000030068
- (oneway void)remote_deregisterDataObserverWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002ff29
- (oneway void)remote_registerDataObserver:(id)arg1 withID:(id)arg2 querySpecification:(id)arg3 oldChangeTag:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000002fa6d
- (oneway void)remote_getCurrentUseriCloudQuotaInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002f941
- (oneway void)remote_currentUserWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002f0d1
- (oneway void)saveObjects:(id)arg1 saveResponse:(id)arg2 isRemoteClient:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000002cc9a
- (oneway void)remote_saveObjects:(id)arg1 saveResponse:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002cc09
- (oneway void)remote_authTreeForAttachment:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002caca
- (oneway void)remote_authTreeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002c95c
- (oneway void)remote_fetchCountOfActivitiesForContextID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002c819
- (oneway void)remote_getServerInternalStateInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002c55e
- (oneway void)remote_getServerSyncStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002c3e2
- (oneway void)remote_fetchContextsForContextIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002c272
- (oneway void)remote_deleteProgressReportingCapabilitiesForContextID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002c165
- (oneway void)remote_fetchProgressReportingCapabilitiesForContextID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002bfd1
- (oneway void)remote_deleteThumbnailBlobForContextID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002bec4
- (oneway void)remote_fetchThumbnailBlobForContextID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002bdab
- (oneway void)remote_contextsMatchingIdentifierPath:(id)arg1 parentContextID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002b9b8
- (oneway void)remote_executeQuery:(id)arg1 querySpecification:(id)arg2 searchSpecification:(id)arg3 issueServerRequest:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000002ab39
- (void)_performQuery:(id)arg1 querySpecification:(id)arg2 issueServerRequest:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000002a371
- (oneway void)remote_mainAppContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002a2cc
- (oneway void)remote_deleteOrganization:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002a0f6
- (oneway void)remote_addOrganization:(id)arg1 withLocations:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000029ebc
- (oneway void)remote_addAdminRequestor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000029d3b
- (id)_createMainAppContext:(id *)arg1;	// IMP=0x001000000002968c
- (oneway void)remote_fetchAndCompleteActiveAssignedActivitiesForContextPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000028732
- (id)_createHandoutAssignedItemFrom:(id)arg1 withError:(id *)arg2;	// IMP=0x001000000002808f
- (oneway void)remote_validateAndCreateHandoutAssignedItem:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000279b1
- (oneway void)remote_fetchHandoutAttachmentForDocumentURL:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000026e00
- (oneway void)remote_fetchTransparencyMessageInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000252dd
- (oneway void)remote_fetchTransparencyMessageInfoForAttachmentID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000024b38
- (oneway void)remote_setShouldSyncTeacherBrowsedContexts:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000249e0
- (oneway void)remote_shouldSyncTeacherBrowsedContextsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002483a
- (oneway void)remote_getClassKitCatalogEnvironmentWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000024776
- (oneway void)remote_setClassKitCatalogEnvironment:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000246b2
- (oneway void)remote_setBootstrapMode:(int)arg1 url:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000243e0
- (oneway void)remote_getBootstrapMode:(CDUnknownBlockType)arg1;	// IMP=0x0010000000024298
- (oneway void)remote_getDevModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000241a7
- (oneway void)remote_setDevMode:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000240cf
- (oneway void)remote_recreateDevelopmentDatabaseWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000024003
- (oneway void);	// IMP=0x0010000000023ed4
- (oneway void)remote_authorizationStatusForHandoutAssignedItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000023dc5
- (oneway void)remote_authorizationStatusForContextAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000023cb6
- (oneway void)remote_addAuthorizationStatus:(unsigned long long)arg1 forContextAtPath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000023b87
- (oneway void)remote_renewCredentialsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000023a28
- (oneway void)remote_statusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000023946
- (oneway void)remote_fetchReportsWithPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000237a4
- (oneway void)remote_syncBootstrapWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000235cb
- (oneway void)remote_syncFetchWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000233c2
- (oneway void)remote_syncPushWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000023263
- (oneway void)remote_syncStatsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000023164
- (oneway void)remote_recreateDatabase:(_Bool)arg1 andTerminateDaemonWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002308e
- (oneway void)remote_recreateDatabaseWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000022fad
- (oneway void)remote_databasePathWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000022e3e
- (oneway void)remote_accountChanged;	// IMP=0x0010000000022c6b
- (oneway void)remote_deleteAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000022878
- (oneway void)remote_setOverrideBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000022773
- (oneway void)remote_listAppsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000022293
- (void)databaseChanged:(id)arg1;	// IMP=0x0010000000021cd1
- (_Bool)isInternalWithError:(id *)arg1;	// IMP=0x0010000000021b7e
- (id)userNotificationCenter;	// IMP=0x0010000000021b2c
@property(readonly, nonatomic) PDDatabase *database;
- (void)dealloc;	// IMP=0x0010000000021a67
- (void)invalidate;	// IMP=0x001000000002186b
- (id)initWithClient:(id)arg1 daemon:(id)arg2;	// IMP=0x0010000000021685

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
