//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSError, NSMutableOrderedSet, NSMutableSet, NSString, PDCloudStoreContainerManager, PDCloudStoreRecordsRequest, PDCloudStoreResetRequest, PDNotificationStreamManager, PDSetupAssistantCompleteMonitor;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source, PDCloudStoreContainerDelegate, PDCloudStoreDataSource;

@interface PDCloudStoreContainer : NSObject
{
    NSMutableSet *_initializationCompletionHandlers;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_backgroundQueue;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_batchUpdateGroup;	// 24 = 0x18
    MISSING_TYPE *_shouldInvalidateCloudStore;	// 32 = 0x20
    NSDate *_lastInvalidationDate;	// 40 = 0x28
    _Bool _shouldCancelAllTasks;	// 48 = 0x30
    _Bool _isSetup;	// 49 = 0x31
    NSObject<OS_dispatch_source> *_timeoutTimer;	// 56 = 0x38
    struct os_unfair_lock_s _lock;	// 64 = 0x40
    unsigned long long _setupAssistantState;	// 72 = 0x48
    PDSetupAssistantCompleteMonitor *_setupAssistantMonitor;	// 80 = 0x50
    PDNotificationStreamManager *_notificationStreamManager;	// 88 = 0x58
    NSMutableOrderedSet *_fetchRequests;	// 96 = 0x60
    PDCloudStoreRecordsRequest *_currentRequest;	// 104 = 0x68
    NSMutableOrderedSet *_resetRequests;	// 112 = 0x70
    PDCloudStoreResetRequest *_currentResetRequest;	// 120 = 0x78
    _Bool _accountChangedNotificationReceived;	// 128 = 0x80
    _Bool _cloudContainerSetupInProgress;	// 129 = 0x81
    id <PDCloudStoreContainerDelegate> _delegate;	// 136 = 0x88
    id <PDCloudStoreDataSource> _dataSource;	// 144 = 0x90
    PDCloudStoreContainerManager *_containerManager;	// 152 = 0x98
    NSObject<OS_dispatch_queue> *_workQueue;	// 160 = 0xa0
    NSError *_operationError;	// 168 = 0xa8
    unsigned long long _nextExpectedState;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0020000000231402
@property(nonatomic) _Bool cloudContainerSetupInProgress; // @synthesize cloudContainerSetupInProgress=_cloudContainerSetupInProgress;
@property(nonatomic) _Bool accountChangedNotificationReceived; // @synthesize accountChangedNotificationReceived=_accountChangedNotificationReceived;
@property(nonatomic) unsigned long long nextExpectedState; // @synthesize nextExpectedState=_nextExpectedState;
@property(retain, nonatomic) NSError *operationError; // @synthesize operationError=_operationError;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) PDCloudStoreContainerManager *containerManager; // @synthesize containerManager=_containerManager;
@property(readonly, nonatomic) __weak id <PDCloudStoreDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <PDCloudStoreContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_markEndCloudStoreDatabaseSetupWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x0010000000231123
- (id)_cannotPerformActionErrorWithFailureReason:(id)arg1;	// IMP=0x0010000000231017
@property(readonly, copy) NSString *description;
- (void)_queue_cloudStoreInitializationTimerFired;	// IMP=0x0010000000230e98
- (void)_queue_cancelCloudStoreInitializationTimer;	// IMP=0x0010000000230e09
- (void)_queue_startCloudStoreInitializationTimer;	// IMP=0x0010000000230c95
- (id)setupAssistantNotCompleteError;	// IMP=0x0010000000230bf3
- (id)errorWithCode:(long long)arg1 description:(id)arg2;	// IMP=0x0010000000230aea
- (void)_queue_addOperation:(id)arg1 forDatabase:(id)arg2;	// IMP=0x0010000000230939
- (void)_queue_cancelAllOperations;	// IMP=0x0010000000230552
- (void)_queue_cancelOperationsForDatabse:(id)arg1 underlyingError:(id)arg2;	// IMP=0x00100000002302cb
- (void)_queue_retryContainerStateWithError:(id)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000022ff78
- (void)_fetchAllSubscriptionsIfNeccessaryWithOperationGroupNameSuffix:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000022f66c
- (void)_recordZonesWithOperationGroupNameSuffix:(id)arg1 containerDatabaseIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000022e842
- (void)_fetchAndSaveRecordZonesWithContainerDatabaseIdentifiers:(id)arg1 operationGroupNameSuffix:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000022e334
- (void)_fetchRecordZonesIfNeccessaryWithOperationGroupNameSuffix:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000022e1c9
- (void)_forceFetchRecordZonesForContainerDatabase:(id)arg1 operationGroupNameSuffix:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000022e074
- (void)_zoneOperationWithZonesToSaveByDatabaseIdentifier:(id)arg1 recordZoneIDsToDeleteByDatabaseIdentifier:(id)arg2 operationGroupNameSuffix:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000022cccb
- (void)_deleteSubscriptions:(id)arg1 operationGroupNameSuffix:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000022c99d
- (void)_deleteAllSubscriptionsWithOperationGroupNameSuffix:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000022c893
- (void)_deleteZones:(id)arg1 operationGroupNameSuffix:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000022c4c2
- (void)_deleteAllZonesWithOperationGroupNameSuffix:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000022c3bb
- (void)_deleteZonesAndSubscriptionsWithResetRequest:(id)arg1 operationGroupNameSuffix:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000022bd55
- (void)_subscriptionOperationWithSubscriptionsToSaveByDatabaseIdentifier:(id)arg1 subscriptionIDsToDeleteByDatabase:(id)arg2 operationGroupNameSuffix:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000022ac65
- (void)_fetchRecordsWithQuery:(id)arg1 cursor:(id)arg2 batchLimit:(long long)arg3 operationGroupName:(id)arg4 operationGroupNameSuffix:(id)arg5 qualityOfService:(long long)arg6 zone:(id)arg7 containerDatabase:(id)arg8 batchHandler:(CDUnknownBlockType)arg9 completion:(CDUnknownBlockType)arg10;	// IMP=0x0010000000229359
- (void)fetchRecordsWithQuery:(id)arg1 batchLimit:(long long)arg2 operationGroupName:(id)arg3 operationGroupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 zone:(id)arg6 containerDatabase:(id)arg7 batchHandler:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x0010000000229314
- (void)modifyRecordsOperationWithRecordsToSaveByDatabaseIdentifier:(id)arg1 recordIDsToDeleteByDatabaseIdentifier:(id)arg2 recordModificationOperationConfiguration:(id)arg3 emitErrorIfConflictDetected:(_Bool)arg4 isModifyingShare:(_Bool)arg5 operationGroupName:(id)arg6 operationGroupNameSuffix:(id)arg7 qualityOfService:(long long)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x00100000002261e3
- (id)reportContainerChangeEvent:(id)arg1;	// IMP=0x0010000000226147
- (void)reportContainerChangeSignpostEventType:(unsigned long long)arg1 stateName:(id)arg2 objectNames:(id)arg3 changeToken:(id)arg4 error:(id)arg5 operationGroupName:(id)arg6 operationGroupNameSuffix:(id)arg7;	// IMP=0x0010000000225fc3
- (void)reportContainerChangeIntervalEndEventWithBeginUniqueIdentifier:(id)arg1 error:(id)arg2;	// IMP=0x0010000000225f68
- (id)reportContainerChangeIntervalBeginEventWithType:(unsigned long long)arg1 stateName:(id)arg2 objectNames:(id)arg3 changeToken:(id)arg4 operationGroupName:(id)arg5 operationGroupNameSuffix:(id)arg6;	// IMP=0x0010000000225e0c
- (id)reportContainerChangeIntervalBeginEventWithType:(unsigned long long)arg1 stateName:(id)arg2 objectNames:(id)arg3 operationGroupName:(id)arg4 operationGroupNameSuffix:(id)arg5;	// IMP=0x0010000000225deb
- (_Bool)supportsContainerChangeEventReports;	// IMP=0x0010000000225de3
- (void)_zoneWideShareForCloudStoreZone:(id)arg1 createIfNotExists:(_Bool)arg2 operationGroupName:(id)arg3 operationGroupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000225138
- (void)_fetchParticipantWithRecipientHandle:(id)arg1 cloudStoreZone:(id)arg2 operationGroupName:(id)arg3 operationGroupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000224928
- (void)_shareMetadataWithInvitationTokensByShareURL:(id)arg1 operationGroupName:(id)arg2 operationGroupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000224206
- (void)_updateShare:(id)arg1 cloudStoreZone:(id)arg2 operationGroupName:(id)arg3 operationGroupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000223a3b
- (void)removedFromCloudStoreZoneInvitation:(id)arg1 fromHandle:(id)arg2;	// IMP=0x00100000002237c8
- (void)_queue_completedRecordFetchFromNewSharedZone:(id)arg1;	// IMP=0x00100000002237c2
- (void)_queue_aliasesForRecipientHandle:(id)arg1 zoneName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002237ac
- (void)_queue_cloudStoreZoneInvitationDataForInvitation:(id)arg1 toRecipient:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000223792
- (void)cloudStoreZoneInvitationDataForInvitation:(id)arg1 toRecipient:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000223685
- (void)_queue_lockShareCreationForRecipientHandle:(id)arg1 cloudStoreZone:(id)arg2 operationGroupName:(id)arg3 operationGroupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000022245f
- (void)createShareInvitationForRecipientHandle:(id)arg1 zoneName:(id)arg2 permission:(long long)arg3 operationGroupName:(id)arg4 operationGroupNameSuffix:(id)arg5 qualityOfService:(long long)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x001000000021ec1d
- (void)shareForZoneName:(id)arg1 operationGroupName:(id)arg2 operationGroupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000021e627
- (void)declineInvitationForRecipientHandle:(id)arg1 zoneName:(id)arg2 operationGroupName:(id)arg3 operationGroupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000021da66
- (void)fetchRecordsInAcceptedZoneShare:(id)arg1 databaseIdentifier:(id)arg2 operationGroupName:(id)arg3 operationGroupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000021d772
- (void)acceptShareInvitation:(id)arg1 operationGroupName:(id)arg2 operationGroupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000021c6c9
- (void)_queue_ensureZoneShareIntegrity;	// IMP=0x001000000021c6c3
- (void)ensureZoneShareIntegrity;	// IMP=0x001000000021c65f
- (void)createZone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000021c321
- (void)deleteZone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000021bafe
- (void)containerResetCompletedWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x001000000021baf8
- (void)_executeNextResetRequestIfPossible;	// IMP=0x001000000021b755
- (void)executeResetRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000021b396
- (void)willResetContainerWithAdditionalZoneIDsByDatabaseIdentifiers:(id)arg1 includedCachedZoneForDatabaseIdentifiers:(id)arg2;	// IMP=0x001000000021b390
- (void)resetContainerWithAdditionalZoneIDsByDatabaseIdentifiers:(id)arg1 includedCachedZoneForDatabaseIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000021b263
- (void)resetContainerWithZoneNames:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000021ae67
- (void)removeRecordWithRecordName:(id)arg1 zoneName:(id)arg2 groupName:(id)arg3 groupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000021a659
- (void)removeItems:(id)arg1 groupName:(id)arg2 groupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000219990
- (void)itemOfItemType:(unsigned long long)arg1 recordName:(id)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000021906a
- (void)fetchItemsWithQueryConfigurations:(id)arg1 returnRecords:(_Bool)arg2 storeRecords:(_Bool)arg3 groupName:(id)arg4 groupSuffix:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000218680
- (void)cloudStoreRecordArrayWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000021850d
- (void)itemOfItemTypeFromAllZones:(unsigned long long)arg1 recordName:(id)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000002180c0
- (void)removeAllItems:(unsigned long long)arg1 inZoneName:(id)arg2 storeLocally:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000216e5d
- (void)applePayContainerItemsFromDate:(id)arg1 toDate:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000216071
- (void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000215230
- (void)fetchRecordsWithRecordIDsByDatabaseIdentifier:(id)arg1 operationGroupName:(id)arg2 operationGroupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000213a4b
- (void)_queue_processOperationError:(id)arg1 forZoneID:(id)arg2 containerDatabaseIdentifier:(id)arg3 operationGroupName:(id)arg4 operationGroupNameSuffix:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000002120cc
- (void)_updateFetchNewestChangesFirstFlagForConfiguration:(id)arg1 request:(id)arg2;	// IMP=0x0010000000211f22
- (void)_queue_fetchAllRecordsUsingConfiguration:(id)arg1 operationGroupName:(id)arg2 operationGroupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 batchHandler:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000020e25e
- (void)_queue_fetchInitialRecordsUsingConfiguration:(id)arg1 operationGroupName:(id)arg2 operationGroupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 batchHandler:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000020c25b
- (_Bool)shouldForwardErrorsToRequestCompletionHandlers;	// IMP=0x001000000020c253
- (_Bool)shouldContinueWithRequest:(id)arg1;	// IMP=0x001000000020c24b
- (void)coalesceRequest:(id)arg1 withNewRequest:(id)arg2;	// IMP=0x001000000020c245
- (_Bool)canCoalesceRequest:(id)arg1 withNewRequest:(id)arg2;	// IMP=0x001000000020c23d
- (void)_queue_executeNextFecthRequestIfPossible;	// IMP=0x0010000000206eb2
- (void)executeRecordsRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000206ad8
- (void)_queue_createSubscriptionsByDatabaseIdentifier:(id)arg1 operationGroupNameSuffix:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002066bc
- (void)_queue_createZonesByDatabaseIdentifier:(id)arg1 shouldFetchData:(_Bool)arg2 operationGroupNameSuffix:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000205d24
- (void)updateCloudStoreWithLocalItemsWithConfigurations:(id)arg1 groupName:(id)arg2 groupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000002046bc
- (void)_queue_createZoneAndSubscriptionsByDatabaseIdentifier:(id)arg1 groupSuffix:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000204097
- (void)_keychainSyncFinishedFired;	// IMP=0x0010000000203c52
- (void)_queue_cloudStoreAccountChanged:(id)arg1;	// IMP=0x0010000000203c4c
- (void)cloudStoreAccountChanged:(id)arg1;	// IMP=0x0010000000203af4
- (void)didUpdateSetupAssistantStateFrom:(unsigned long long)arg1 toState:(unsigned long long)arg2;	// IMP=0x0010000000203868
- (_Bool)isCloudStoreSetupAssistantComplete;	// IMP=0x0010000000203724
- (unsigned long long)_setupAssistantState;	// IMP=0x00100000002036fa
- (void)_updateSetupAssistantStateFrom:(unsigned long long)arg1 toState:(unsigned long long)arg2;	// IMP=0x00100000002036b0
- (void)_updateSetupAssistantStateIfNecessary;	// IMP=0x00100000002035e2
- (void)_queue_processResultWithError:(id)arg1 nextExpectedState:(unsigned long long)arg2 operationGroupNameSuffix:(id)arg3 retryCount:(unsigned long long)arg4 shouldRetry:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000202ffb
- (void)processFetchedCloudStoreDataWithModifiedRecordsByDatabaseIdentifier:(id)arg1 deletedRecordsByDatabaseIdentifier:(id)arg2 carriedOverRecordsByDatabaseIdentifier:(id)arg3 conflictingRecordsByDatabaseIdentifier:(id)arg4 request:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000202fdf
- (void)_queue_setContainerState:(unsigned long long)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000201e53
- (void)_setContainerState:(unsigned long long)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000201d57
- (void)_queue_cloudStoreAccountInformationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000201a9d
- (void)cloudStoreAccountInformationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002019f0
- (void)_queue_detachFromContainerWithState:(unsigned long long)arg1;	// IMP=0x001000000020194c
- (void)_queue_attachToContainer;	// IMP=0x00100000002018c6
- (void)_queue_didInvalidateContainer:(_Bool)arg1;	// IMP=0x00100000002018c0
- (void)invalidateCloudStoreWithOperationGroupNameSuffix:(id)arg1 clearCache:(_Bool)arg2 resultOfZoneRecreation:(_Bool)arg3 zoneNames:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000200c81
- (void)invalidateCloudStoreWithOperationGroupNameSuffix:(id)arg1 clearCache:(_Bool)arg2 resultOfZoneRecreation:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000200c5f
- (void)invalidateCloudStoreWithOperationGroupNameSuffix:(id)arg1 clearCache:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000200c3a
- (void)invalidateCloudStoreIfPossibleWithOperationGroupNameSuffix:(id)arg1 clearCache:(_Bool)arg2;	// IMP=0x0010000000200c11
- (id)filterCloudStoreZones:(id)arg1 action:(unsigned long long)arg2 inContainerDatabase:(id)arg3;	// IMP=0x0010000000200bfb
- (id)recordTypeFromRecordName:(id)arg1;	// IMP=0x0010000000200b38
- (id)identifierFromRecord:(id)arg1;	// IMP=0x0010000000200ae5
- (unsigned long long)itemTypeFromRecord:(id)arg1;	// IMP=0x0010000000200a43
- (id)primaryRecordTypesForCloudStoreItemType:(unsigned long long)arg1;	// IMP=0x0010000000200a31
- (id)recordTypesForCloudStoreItemType:(unsigned long long)arg1;	// IMP=0x00100000002009bd
- (double)_queue_initializationTimeout;	// IMP=0x00100000002009af
- (_Bool)_queue_canInvalidateContainer;	// IMP=0x00100000002009a7
- (void)canInitializeContainerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002008dd
- (_Bool)_queue_canInitializeContainer;	// IMP=0x00100000002008d5
- (void)setIsSetup:(_Bool)arg1;	// IMP=0x00100000002008a4
- (_Bool)isSetup;	// IMP=0x001000000020087c
- (_Bool)_queue_ensureContainerState:(unsigned long long)arg1;	// IMP=0x0010000000200777
- (void)initialCloudDatabaseSetupWithOperationGroupNameSuffix:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ffa0a
- (void)_cloudStoreContainerCommonInit;	// IMP=0x00100000001ff880
- (id)initWithDataSource:(id)arg1 notificationStreamManager:(id)arg2;	// IMP=0x00100000001ff7da
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00100000001ff726
- (void)_setupManagerWithConfiguration:(id)arg1;	// IMP=0x00100000001ff54c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
