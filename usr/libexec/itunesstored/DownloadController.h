//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISOperationQueue, MISSING_TYPE, NSCountedSet, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, WorkspaceDownloadObserver;
@protocol OS_dispatch_queue;

@interface DownloadController : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_externalQueue;	// 16 = 0x10
    NSMutableArray *_managerClients;	// 24 = 0x18
    NSCountedSet *_networkKinds;	// 32 = 0x20
    NSMutableSet *_rescuingBundleIdentifiers;	// 40 = 0x28
    ISOperationQueue *_thumbnailOperationQueue;	// 48 = 0x30
    NSMutableDictionary *_thumbnailRequestsByDownloadID;	// 56 = 0x38
    WorkspaceDownloadObserver *_workspaceDownloadObserver;	// 64 = 0x40
}

+ (MISSING_TYPE *)controller;	// IMP=0x002000000015a4ef
- (void).cxx_destruct;	// IMP=0x002000000016cb90
- (void)_sendDownloadKindsUsingNetwork:(id)arg1;	// IMP=0x001000000016c9eb
- (void)_retryRestoreIfNecessaryForTransaction:(id)arg1;	// IMP=0x001000000016c743
- (_Bool)_restartDownloads:(id)arg1 client:(id)arg2;	// IMP=0x001000000016bf87
- (_Bool)_resumeDownloads:(id)arg1 client:(id)arg2;	// IMP=0x001000000016b7b7
- (void)_rescueStuckPlaceholderWithBundleID:(id)arg1;	// IMP=0x001000000016b02c
- (_Bool)_prioritizeDownload:(id)arg1 aboveDownload:(id)arg2 client:(id)arg3 error:(id *)arg4;	// IMP=0x001000000016aa96
- (_Bool)_pauseDownloads:(id)arg1 isForced:(_Bool)arg2 client:(id)arg3;	// IMP=0x0010000000169d08
- (id)_managerClientForConnection:(id)arg1;	// IMP=0x0010000000169b0f
- (void)_handleSessionMessage:(id)arg1 connection:(id)arg2 usingReplyBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000169a00
- (void)_handleSessionMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000169966
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingReplyBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000016980a
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000016970c
- (void)_filterAndTranslateProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000169586
- (id)_downloadPersistentIDsFromBundleIDs:(id)arg1;	// IMP=0x0010000000169064
- (void)_dispatchAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000168f45
- (_Bool)_cancelDownloads:(id)arg1 client:(id)arg2;	// IMP=0x00100000001686ef
- (void)_clientDisconnectNotification:(id)arg1;	// IMP=0x001000000016835d
- (void)setSessionStatusDescriptionWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001681ec
- (void)setSessionPropertiesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000167ebb
- (void)setSessionProgressWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000167d40
- (void)setHandlerPropertiesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000016782c
- (void)setClientDownloadHandlerWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001676ad
- (void)resetDisavowedSessionsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001675af
- (void)getSessionPropertiesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000167184
- (void)finishSessionWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000166ad6
- (void)connectDownloadHandlerWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000166422
- (void)setCellularNetworkAllowed:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001662f6
- (void)getCellularNetworkAllowed:(id)arg1 connection:(id)arg2;	// IMP=0x001000000016624b
- (void)setDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000016462e
- (void)setDownloadPropertiesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001640ea
- (void)setDownloadHandlerWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000016381e
- (void)setAssetPropertiesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000016341f
- (void)retryRestoreDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000163280
- (void)restartDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000163020
- (void)resumeDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000162dc0
- (void)removePersistenceIDWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000162bd7
- (void)registerClientDownloadManager:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000162010
- (void)prioritizeDownloadWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000161e26
- (void)pauseDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000161cbd
- (void)notifyClientsOfExternalPropertyChanges:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000161b09
- (void)notifyClientsOfExternalStateChanges:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000161444
- (void)moveDownloadWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001611c4
- (void)insertDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000015fcd1
- (void)getEntityExistsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000015fa00
- (void)getDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000015ec8e
- (void)getDownloadPropertiesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000015e759
- (void)getDownloadKindsUsingNetworkWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000015e6b7
- (void)getDownloadAssetsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000015e280
- (void)getDownloadAssetPropertiesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000015dd49
- (void)getActiveDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000015d9fd
- (void)finishDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000015d464
- (void)cancelDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000015d30f
- (void)cancelAllDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000015cec7
- (void)applicationInstallsDidPrioritize:(id)arg1;	// IMP=0x001000000015c09d
- (void)applicationInstallsDidCancel:(id)arg1;	// IMP=0x001000000015bda7
- (void)applicationInstallsDidResume:(id)arg1;	// IMP=0x001000000015ba76
- (void)applicationInstallsDidPause:(id)arg1;	// IMP=0x001000000015b77b
- (void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;	// IMP=0x001000000015b775
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x001000000015b76f
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x001000000015b769
- (void)applicationInstallsDidUpdateIcon:(id)arg1;	// IMP=0x001000000015b763
- (void)applicationInstallsDidChange:(id)arg1;	// IMP=0x001000000015b75d
- (void)applicationInstallsDidStart:(id)arg1;	// IMP=0x001000000015b757
- (void)start;	// IMP=0x001000000015b593
- (void)observeXPCServer:(id)arg1;	// IMP=0x001000000015b16d
- (void)notifyClientsOfPropertyChanges:(id)arg1 forDownloadID:(long long)arg2 downloadKind:(id)arg3;	// IMP=0x001000000015aebc
- (void)notifyClientsOfExternalPropertyChanges:(id)arg1 forDownloadID:(long long)arg2 downloadKind:(id)arg3;	// IMP=0x001000000015ac0a
- (void)notifyClientsOfChangeset:(id)arg1;	// IMP=0x001000000015a79c
- (void)endUsingNetworkForDownloadKind:(id)arg1;	// IMP=0x001000000015a697
- (void)beginUsingNetworkForDownloadKind:(id)arg1;	// IMP=0x001000000015a57c
- (void)dealloc;	// IMP=0x001000000015a44f
- (id)init;	// IMP=0x001000000015a300

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
