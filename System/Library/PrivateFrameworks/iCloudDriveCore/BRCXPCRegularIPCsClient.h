//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCXPCRegularIPCsClient
{
}

- (void)waitUntilIdle:(id)arg1 timeout:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002d87ce
- (void)corruptDatabase:(CDUnknownBlockType)arg1;	// IMP=0x00000000002d8374
- (void)queryTelemetryEnablementWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002d7f54
- (oneway void)updatePrivilegesDescriptor;	// IMP=0x00000000002d7f3e
- (void)lookupMinFileSizeForThumbnailTransferWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002d7a71
- (void)lookupExcludedExtensionsForLogoutWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002d7633
- (void)lookupExcludedFilenamesForLogoutWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002d71f5
- (void)_t_extractMetadataForAllContainersWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002d66f2
- (void)_t_getEntitledContainerIDsForBundleID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002d65f7
- (void)_t_getEntitlementsForBundleID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002d64fc
- (void)verifyAccountLoaded:(CDUnknownBlockType)arg1;	// IMP=0x00000000002d612f
- (void)setEnhancedDrivePrivacyEnabled:(_Bool)arg1 forContainer:(id)arg2 onServer:(_Bool)arg3 onClient:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00000000002d5240
- (_Bool)_saveOrDeleteContainerMetadataRecordName:(id)arg1 saveRecord:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000002d4ebc
- (void)keepDataLocalOnSignOut:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002d48a0
- (void)handleCloudKitShareMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002d409b
- (oneway void)willAcceptShareAtURL:(id)arg1;	// IMP=0x00000000002d4095
- (void)_presentAcceptDialogsWithMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002d3956
- (void)presentAcceptDialogsForShareMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002d3944
- (void)getShareOptionsOfItemIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002d2b53
- (void)startOperation:(id)arg1 toCopyShareURLForShare:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002d22cc
- (void)startOperation:(id)arg1 toAcceptShareLink:(id)arg2 skipAcceptDialogs:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000002d1a59
- (void)startOperation:(id)arg1 toProcessSubitemsWithItemID:(id)arg2 maxSubsharesFailures:(unsigned long long)arg3 processType:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00000000002d13e1
- (void)_startOperation:(id)arg1 toProcessSubitemsWithLocalItem:(id)arg2 maxSubsharesFailures:(unsigned long long)arg3 processType:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00000000002d0f36
- (void)startOperation:(id)arg1 toPrepFolderForSharingWithItemID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002d08f4
- (void)_startOperation:(id)arg1 toPrepFolderForSharingWithLocalItem:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002cfba7
- (void)startOperation:(id)arg1 toCopyParticipantTokenWithItemID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002cf531
- (void)_startOperation:(id)arg1 toCopyParticipantTokenWithLocalItem:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002cefff
- (void)startOperation:(id)arg1 toModifyRecordAccessWithItemID:(id)arg2 allowAccess:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000002ce970
- (void)_startOperation:(id)arg1 toModifyRecordAccessWithLocalItem:(id)arg2 allowAccess:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000002ce3ae
- (void)startOperation:(id)arg1 toLookupShareParticipants:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002cdb4e
- (void)startOperation:(id)arg1 toUnshareShare:(id)arg2 forceDelete:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000002cccbe
- (void)startOperation:(id)arg1 toSaveSharingInfo:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002cb691
- (void)_bumpLastUsedTimeOfSharedItem:(id)arg1 clientZone:(id)arg2;	// IMP=0x00000000002cb68b
- (void)createSharingInfoForItemID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002caff2
- (void)_createSharingInfoForLocalItem:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002ca6b6
- (void)copyCollaborationIdentifierForFileObjectID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002c9ecc
- (void)copyCurrentUserNameAndDisplayHandleWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002c9622
- (void)copyCurrentUserIdentifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002c8f54
- (void)startOperation:(id)arg1 toUploadAllFilesInContainer:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002c8720
- (void)startOperation:(id)arg1 toCopyAvailableQuotaWithReply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002c815c
- (void)startOperation:(id)arg1 toCopyDocumentURLForRecordID:(id)arg2 syncIfNeeded:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000002c5ebd
- (void)startOperation:(id)arg1 toCopySharingWebAuthTokenForContainerID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002c5852
- (void)startOperation:(id)arg1 toCopyShortTokenOfItemID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002c4f5b
- (void)startOperation:(id)arg1 toCopySharingAccessTokenOfItemID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002c48a9
- (void)startOperation:(id)arg1 toCopySharingInfoWithItemID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002c4233
- (void)_startOperation:(id)arg1 toCopySharingInfoWithLocalItem:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002c3901
- (void)_startOperation:(id)arg1 toCopySharingAccessTokenWithLocalItem:(id)arg2 itemIdentifier:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000002c3378
- (void)_launchItemCountMismatchChecksForLocalItem:(id)arg1 itemIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002c2c58
- (void)_getiWorkNeedsShareMigrateForLocalItem:(id)arg1 itemIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002c2654
- (void)_getiWorkPublishingBadgingStatusForLocalItem:(id)arg1 itemIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002c205e
- (void)_setiWorkPublishingInfoForLocalItem:(id)arg1 itemIdentifier:(id)arg2 publish:(_Bool)arg3 readonly:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00000000002c18c0
- (void)_getiWorkPublishingInfoForLocalItem:(id)arg1 itemIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002c0932
- (void)_getPublishedURLForLocalItem:(id)arg1 forStreaming:(_Bool)arg2 requestedTTL:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000002c01c1
- (void)enumerateWorkingSetChangesFromChangeToken:(id)arg1 limit:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002bf82f
- (void)enumerateItemsInFolder:(id)arg1 sortOrder:(unsigned char)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000002be700
- (void)currentNotifRankWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002be21e
- (void)getContainerLastServerUpdateWithID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002bdae5
- (void)getContainerStatusWithID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002bd46d
- (void)getLocalizedLastSyncWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002bc992
- (void)getLastSyncDateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002bc49d
- (void)getApplicationStatusForProcess:(CDStruct_4c969caf)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002bc02e
- (void)getApplicationStatus:(CDUnknownBlockType)arg1;	// IMP=0x00000000002bbc21
- (void)resolveBookmarkDataToURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002ba11e
- (void)resolveFileObjectIDsToContentRecordIDsForThumbnails:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002b9321
- (void)getSyncState:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002b8989
- (void)setMigrationStatus:(BOOL)arg1 forDSID:(id)arg2 shouldUpdateAccount:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000002b7f9d
- (void)getContainersNeedingUpload:(CDUnknownBlockType)arg1;	// IMP=0x00000000002b77c4
- (void)jetsamCloudDocsAppsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002b7301
- (void)invalidateAccountCacheWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002b6eff
- (void)userVerifiedTermsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002b6964
- (void)updateAccountDisplayName:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002b638e
- (void)logoutAccountWithACAccountID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002b5d8f
- (void)_unregisterPrematurely;	// IMP=0x00000000002b5d13
- (void)createAccountWithACAccountID:(id)arg1 dsid:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002b5557
- (void)validateCloudDocsSupported:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002b4e72
- (void)waitForAccountToLoadWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002b4a47
- (void)cancelTreeConsistencyCheckWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002b4612
- (void)resumeSyncConsistencyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002b3fe2
- (void)pauseSyncConsistencyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002b3bad
- (void)launchSyncConsistencyChecksWithContainerIDs:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002b2f28
- (void)dropSpotlightIndexWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002b2f0f
- (void)reclaimAmount:(long long)arg1 withUrgency:(int)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002b2aee
- (void)purgeAmount:(long long)arg1 withUrgency:(int)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002b26aa
- (void)computePurgeableSpaceForAllUrgenciesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002b2049
- (void)createContainerWithID:(id)arg1 ownerName:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002b1b8f
- (void)iWorkForceSyncContainerID:(id)arg1 ownedByMe:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002b137c
- (void)forceSyncContainerID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002b0097
- (void)forceSyncWithBarrierContainerID:(id)arg1 timeout:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002aec15
- (void)forceSyncZoneHealthWithBarrierWithTimeout:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002adffa
- (void)zoneNameForContainer:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002ad6af
- (void)healthStatusStringForContainer:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002acbcd
- (void)simulateHealthIssueWithContainer:(id)arg1 status:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002ab9a1
- (void)dumpCoordinationInfoTo:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002ab22a
- (void)backupDatabaseWithURLWrapper:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002aabd7
- (void)dumpDatabaseTo:(id)arg1 containerID:(id)arg2 personaID:(id)arg3 includeAllItems:(_Bool)arg4 verbose:(_Bool)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x00000000002a9c86
- (void)dumpFPFSMigrationStatusTo:(id)arg1 personaID:(id)arg2 includeNonMigratedItems:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000002a90eb
- (void)printStatus:(id)arg1 containerID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002a893c
- (void)performSelfCheck:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002a833e
- (void)resetBudgets:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002a7c26
- (void)setupInstanceWithDict:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002a78d4
- (void)getLoggedInUserPropertyValuesForKeys:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002a7437
- (id)_loggedInUserPropertyValuesForKeys:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002a6e9c
- (void)didReceiveHandoffRequestForBundleID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002a68d5
- (void)getContainerForMangledID:(id)arg1 personaID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002a6150
- (void)getContainersByID:(CDUnknownBlockType)arg1;	// IMP=0x00000000002a5b43
- (void)iCloudDesktopSettingsChangedWithAttributes:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002a59d7
- (void)evictOldDocumentsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002a5504
- (void)setStorageOpimizationEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002a50e7
- (void)hasOptimizeStorageWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002a4cab
- (void)getApplicationDocumentUsageInfoForBundleID:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002a421f
- (void)getTotalApplicationDocumentUsageWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002a39d7
- (void)queryEligibleAccountDescriptorsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002a387f
- (void)queryPathsForPersona:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002a33f5
- (void)getItemUpdateSenderWithReceiver:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002a289d
- (id)_removeSandboxedAttributes:(id)arg1;	// IMP=0x00000000002a26a1
- (void)registerInitialSyncBarrierForID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002a215f
- (void)deleteAllContentsOfContainerID:(id)arg1 onClient:(_Bool)arg2 onServer:(_Bool)arg3 wait:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00000000002a13ba
- (oneway void)updateContainerMetadataForID:(id)arg1;	// IMP=0x00000000002a0a1f
- (void)getContainerURLForID:(id)arg1 forProcess:(CDStruct_4c969caf)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002a028f
- (void)presyncContainerWithID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000029fd1e
- (void)getContainerURLForID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000029fd07
- (void)getContainerURLForID:(id)arg1 recreateDocumentsIfNeeded:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000029f740
- (oneway void)checkinAskClientIfUsingUbiquity:(_Bool)arg1;	// IMP=0x000000000029f73a
- (id)uploadItemIdentifier:(id)arg1 withContents:(id)arg2 baseVersion:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000001903cf
- (void)waitForStabilizationWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000018ff25
- (void)getServerContentSignatureAtItemIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000018efcc
- (void)getServerSaltingKeysAtItemIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000018df81
- (void)getClientSaltingVerificationKeysAtItemIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000018d438
- (void)startOperation:(id)arg1 toWaitForFPFSMigrationWithReply:(CDUnknownBlockType)arg2;	// IMP=0x000000000018cd63
- (void)validateConnectionDomainWithDomainIdentifier:(id)arg1 databaseID:(id)arg2 backChannel:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000018c176
- (void)getCreatorNameComponentsForItemIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000018b7b5
- (void)checkIfItemIsShareableWithItemIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000018b081
- (void)copyShareIDForItemIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000018a53e
- (void)launchItemCountMismatchChecksForItemIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000189ec5
- (void)refreshSharingStateForItemIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000018996e
- (void)cloneLatestContentRevisionForItemIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000001893ff
- (void)calculateSignatureForItemIdentifier:(id)arg1 forURL:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000188912
- (void)fetchLatestContentRevisionForItemIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000188900
- (void)_fetchLatestContentRevisionAndSharingStateForItemIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000018838c
- (void)_refreshLatestRevisionAndSharingStateForItemIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000018704b
- (void)getiWorkNeedsShareMigrateForItemIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000001869c3
- (void)getiWorkPublishingBadgingStatusForItemIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000018633b
- (void)setiWorkPublishingInfoForItemIdentifier:(id)arg1 isForPublish:(_Bool)arg2 readonly:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000185c60
- (void)getiWorkPublishingInfoForItemIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000001855a4
- (void)getAttributeValues:(id)arg1 forItemIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000018518f
- (void)getPublishedURLForItemIdentifier:(id)arg1 forStreaming:(_Bool)arg2 requestedTTL:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000184b71
- (void)getBookmarkDataForItemIdentifier:(id)arg1 onlyAllowItemKnowByServer:(_Bool)arg2 allowAccessByBundleID:(id)arg3 documentID:(id)arg4 isDirectory:(_Bool)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x000000000018447a
- (void)capabilityWhenTryingToReparentItemIdentifier:(id)arg1 toNewParent:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000001839a6
- (void)unboostFilePresenterForItemIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000183340
- (void)_unboostFilePresenterForItemIdentifier:(id)arg1 handledAppLibrarys:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000183016
- (void)boostFilePresenterForItemIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000001828f3
- (void)notifyReimportCompleted:(CDUnknownBlockType)arg1;	// IMP=0x0000000000182466
- (void)enumerateTrashItemsFromRank:(unsigned long long)arg1 limit:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000181ae7
- (void)reimportItemIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000001810b5
- (void)modifyItem:(id)arg1 baseVersion:(id)arg2 changedFields:(unsigned long long)arg3 contents:(id)arg4 options:(unsigned long long)arg5 additionalAttrs:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000017fb77
- (void)deleteItemWithIdentifier:(id)arg1 baseVersion:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000017efbb
- (id)startDownloadFileObject:(id)arg1 options:(unsigned long long)arg2 etagIfLoser:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000017d4b7
- (void)generateSmallItemThumbnailForFileObject:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000017ca34
- (void)_createFileProvidingRequestOperationOfFileObject:(id)arg1 localItem:(id)arg2 etagIfLoser:(id)arg3 etagToDownload:(id)arg4 progress:(id)arg5 options:(unsigned long long)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x000000000017a93b
- (void)listNonLocalVersionsWithItemIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000017a050
- (void)createItemBasedOnTemplate:(id)arg1 fields:(unsigned long long)arg2 contents:(id)arg3 options:(unsigned long long)arg4 additionalItemAttributes:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000001780e6
- (void)_queueOrCallCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000017805a
- (void)getDefaultAppContainerItemForContainerID:(id)arg1 recreateDocumentsIfNeeded:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000017766c
- (void)getQueryItemForBRFileObjectID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000176c8e
- (void)getPathForRecordID:(id)arg1 forContainer:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000176104
- (void)removeFPFSDomain:(CDUnknownBlockType)arg1;	// IMP=0x000000000017529a
- (void)accessItemIdentifierServerItem:(id)arg1 dbAccessKind:(long long)arg2 synchronouslyIfPossible:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000175278
- (void)accessItemIdentifierLocalItem:(id)arg1 dbAccessKind:(long long)arg2 synchronouslyIfPossible:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000175255
- (void)accessItemIdentifier:(id)arg1 dbAccessKind:(long long)arg2 synchronouslyIfPossible:(_Bool)arg3 LocalItemHandler:(CDUnknownBlockType)arg4 ServerItemHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000174692

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly) Class superclass;

@end
