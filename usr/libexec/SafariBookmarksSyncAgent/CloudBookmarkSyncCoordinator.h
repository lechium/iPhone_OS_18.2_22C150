//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, CKOperationGroup, CKRecordZoneID, CloudBookmark, CloudBookmarkAccountPropertiesStore, CloudBookmarkExpiredChangeTokenHandler, CloudBookmarkMovedBookmarkManager, CloudBookmarkPendingReferenceManager, CloudBookmarkStore, MISSING_TYPE, NSArray, NSMutableArray, NSMutableSet, NSString, WBSCRDTPosition, WBSCRDTPositionGenerator;
@protocol CloudBookmarkDatabaseCoordinating, OS_dispatch_queue;

@interface CloudBookmarkSyncCoordinator : NSObject
{
    CKOperationGroup *_operationGroupForFetching;	// 8 = 0x8
    CKOperationGroup *_operationGroupForSaving;	// 16 = 0x10
    NSMutableArray *_syncingCompletionHandlers;	// 24 = 0x18
    id _changeToken;	// 32 = 0x20
    NSMutableSet *_movedRecordNames;	// 40 = 0x28
    NSMutableArray *_unsavedChanges;	// 48 = 0x30
    CloudBookmark *_unsavedBookmarkFromLastBatch;	// 56 = 0x38
    NSMutableArray *_unsavedReparentedRecordNames;	// 64 = 0x40
    WBSCRDTPosition *_lastKnownPositionOfLastItemInRootFolder;	// 72 = 0x48
    NSMutableSet *_namesOfRecordsSavedToTheServer;	// 80 = 0x50
    NSMutableSet *_namesOfRecordsMissingFromPreviousSyncDown;	// 88 = 0x58
    NSMutableSet *_namesOfRecordsExpectedOnSyncDown;	// 96 = 0x60
    CloudBookmarkAccountPropertiesStore *_accountPropertiesStore;	// 104 = 0x68
    CloudBookmarkMovedBookmarkManager *_movedBookmarkManager;	// 112 = 0x70
    CloudBookmarkPendingReferenceManager *_pendingReferenceManager;	// 120 = 0x78
    WBSCRDTPositionGenerator *_positionGenerator;	// 128 = 0x80
    CloudBookmarkExpiredChangeTokenHandler *_expiredChangeTokenHandler;	// 136 = 0x88
    ACAccountStore *_accountStore;	// 144 = 0x90
    _Bool _isSynchronizing;	// 152 = 0x98
    _Bool _didReceiveSyncRequestWhileSyncing;	// 153 = 0x99
    _Bool _didResetSyncData;	// 154 = 0x9a
    MISSING_TYPE *_retryTimer;	// 160 = 0xa0
    long long _numberOfRetries;	// 168 = 0xa8
    NSObject<OS_dispatch_queue> *_internalQueue;	// 176 = 0xb0
    CloudBookmarkStore *_bookmarkStore;	// 184 = 0xb8
    id <CloudBookmarkDatabaseCoordinating> _databaseCoordinator;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x002000000007eee0
@property(readonly, nonatomic) id <CloudBookmarkDatabaseCoordinating> databaseCoordinator; // @synthesize databaseCoordinator=_databaseCoordinator;
@property(readonly, nonatomic) CloudBookmarkStore *bookmarkStore; // @synthesize bookmarkStore=_bookmarkStore;
- (void)readingListBookmarkDidUpdate;	// IMP=0x001000000007ee4d
- (void)saveAssetAtURL:(id)arg1 toURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007eb1d
- (_Bool)shouldApplyReference:(id)arg1 withGeneration:(id)arg2 toAttribute:(id)arg3 inRecordWithName:(id)arg4;	// IMP=0x001000000007eb07
@property(readonly, copy, nonatomic) NSArray *itemConfigurations;
- (id)positionForCloudBookmarkWithRecordName:(id)arg1;	// IMP=0x001000000007e9b2
- (id)generateIdentityHashWithComponents:(id)arg1;	// IMP=0x001000000007e934
@property(readonly, nonatomic) CKRecordZoneID *bookmarksRecordZoneID;
- (id)positionGenerator:(id)arg1 recordNameOfBookmarksAfterRecordWithName:(id)arg2;	// IMP=0x001000000007e885
- (id)positionGenerator:(id)arg1 recordNameOfBookmarksBeforeRecordWithName:(id)arg2;	// IMP=0x001000000007e7ef
- (id)positionGenerator:(id)arg1 positionForRecordName:(id)arg2;	// IMP=0x001000000007e747
- (long long)nextChangeIDForPositionInPositionGenerator:(id)arg1;	// IMP=0x001000000007e735
- (id)deviceIdentifierForPositionGenerator:(id)arg1;	// IMP=0x001000000007e723
- (long long)_nextChangeID;	// IMP=0x001000000007e637
- (void)_continueSyncingAfterSyncDown:(_Bool)arg1;	// IMP=0x001000000007e4e0
- (id)_bookmarkForRemoteRecord:(id)arg1 isNewBookmark:(_Bool *)arg2;	// IMP=0x001000000007e31b
- (id)_existingBookmarkForRemoteRecord:(id)arg1;	// IMP=0x001000000007e22b
- (void)_updateBookmarkWithRecord:(id)arg1;	// IMP=0x001000000007def2
- (void)_didCompleteSyncDownAfterExpiredChangeTokenError;	// IMP=0x001000000007dcf1
- (void)_handleExpiredChangeTokenError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000007dbb7
- (void)_performSyncDownWithLastServerChangeToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000007d189
- (void)_performSyncDownWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000007d07e
- (void)_performSyncDown;	// IMP=0x001000000007cf6d
- (void)_saveRecordBatch:(id)arg1 recordNamesToCloudBookmarks:(id)arg2 successCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007c792
- (id)_nextRecordBatchGetRecordNamesToCloudBookmarks:(id *)arg1 withCloudBookmarkAllocationBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000007c271
- (void)_saveNextReparentedRecordBatch;	// IMP=0x001000000007c08f
- (void)_reparentAndSaveUnrootedBookmarks;	// IMP=0x001000000007beb9
- (void)_saveNextChangedRecordBatch;	// IMP=0x001000000007bbb6
- (void)_processChanges;	// IMP=0x001000000007b96d
- (void)_didSaveRecordsLocally;	// IMP=0x001000000007b885
- (id)_recordNameOfLastRecordInRoot;	// IMP=0x001000000007b738
- (id)_rebuildUndeletedBookmark:(id)arg1;	// IMP=0x001000000007b5f0
- (void)_cleanUpAndCallCompletionHandlersWithError:(id)arg1;	// IMP=0x001000000007b322
- (void)_didFailToSyncWithError:(id)arg1 didOpenDatabase:(_Bool)arg2;	// IMP=0x001000000007b1e3
- (void)_finishSyncing;	// IMP=0x001000000007b0bb
- (void)reorderAllBookmarksUsingSyncPosition;	// IMP=0x001000000007af37
- (void)_bookmarkStoreDidFinishSetUp;	// IMP=0x001000000007ab49
- (void)_resetSyncData;	// IMP=0x001000000007aa52
- (void)_scheduleRetryIfAbleWithOperationGroupForFetching:(id)arg1 operationGroupForSaving:(id)arg2 completionHandlers:(id)arg3;	// IMP=0x001000000007a7ca
- (void)_beginSyncingWithOperationGroupForFetching:(id)arg1 operationGroupForSaving:(id)arg2 completionHandlers:(id)arg3;	// IMP=0x0010000000079594
- (void)beginSyncingWithOperationGroupForFetching:(id)arg1 operationGroupForSaving:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000794c0
@property(readonly, nonatomic) NSString *deviceIdentifier;
- (id)initWithBookmarkStore:(id)arg1 databaseCoordinator:(id)arg2 accountStore:(id)arg3;	// IMP=0x001000000007930a
- (id)init;	// IMP=0x00100000000792fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

