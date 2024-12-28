//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSURL, NSUUID;
@protocol ACXRemoteAppListCommunications, OS_dispatch_queue, OS_dispatch_source;

@interface ACXRemoteAppList : NSObject
{
    _Bool _remoteIsConnected;	// 8 = 0x8
    _Bool _performingResync;	// 9 = 0x9
    _Bool _syncPending;	// 10 = 0xa
    NSDictionary *_appList;	// 16 = 0x10
    NSUUID *_currentDBUUID;	// 24 = 0x18
    unsigned long long _lastSequenceNumber;	// 32 = 0x20
    NSURL *_storageBaseURL;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_syncTimeout;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_resyncThrottleTimer;	// 56 = 0x38
    id <ACXRemoteAppListCommunications> _delegate;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 72 = 0x48
    NSDictionary *_appInstallRecordsToFetch;	// 80 = 0x50
    NSSet *_bundleIDsToFetch;	// 88 = 0x58
    NSMutableSet *_observers;	// 96 = 0x60
    NSMutableDictionary *_attemptsPerBundleID;	// 104 = 0x68
    unsigned long long _resyncAttempts;	// 112 = 0x70
    CDUnknownBlockType _resumeOnReconnect;	// 120 = 0x78
}

+ (id)remoteAppListForStorageBaseURL:(id)arg1 delegate:(id)arg2 queue:(id)arg3;	// IMP=0x002000000004a090
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000049b3e
- (void).cxx_destruct;	// IMP=0x0020000000052bdf
@property(nonatomic) _Bool syncPending; // @synthesize syncPending=_syncPending;
@property(copy, nonatomic) CDUnknownBlockType resumeOnReconnect; // @synthesize resumeOnReconnect=_resumeOnReconnect;
@property(nonatomic) unsigned long long resyncAttempts; // @synthesize resyncAttempts=_resyncAttempts;
@property(retain, nonatomic) NSMutableDictionary *attemptsPerBundleID; // @synthesize attemptsPerBundleID=_attemptsPerBundleID;
@property(retain, nonatomic) NSMutableSet *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool performingResync; // @synthesize performingResync=_performingResync;
@property(retain, nonatomic) NSSet *bundleIDsToFetch; // @synthesize bundleIDsToFetch=_bundleIDsToFetch;
@property(retain, nonatomic) NSDictionary *appInstallRecordsToFetch; // @synthesize appInstallRecordsToFetch=_appInstallRecordsToFetch;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <ACXRemoteAppListCommunications> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *resyncThrottleTimer; // @synthesize resyncThrottleTimer=_resyncThrottleTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *syncTimeout; // @synthesize syncTimeout=_syncTimeout;
@property(nonatomic) _Bool remoteIsConnected; // @synthesize remoteIsConnected=_remoteIsConnected;
@property(retain, nonatomic) NSURL *storageBaseURL; // @synthesize storageBaseURL=_storageBaseURL;
@property(nonatomic) unsigned long long lastSequenceNumber; // @synthesize lastSequenceNumber=_lastSequenceNumber;
@property(retain, nonatomic) NSUUID *currentDBUUID; // @synthesize currentDBUUID=_currentDBUUID;
@property(retain, nonatomic) NSDictionary *appList; // @synthesize appList=_appList;
- (void)getCurrentDBUUID:(id *)arg1 sequenceNumber:(unsigned long long *)arg2;	// IMP=0x00100000000528a5
- (id)appBundleIDForCounterpartBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000524d8
- (_Bool)applicationIsInstalledWithCounterpartBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000052131
- (id)applicationWithCounterpartBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000051d6c
- (_Bool)applicationIsInstalledWithBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000051a96
- (id)applicationForBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000051798
- (id)bundleIDsTrackedWithError:(id *)arg1;	// IMP=0x001000000005151d
@property(readonly, nonatomic) _Bool databaseIsSynced;
- (_Bool)_onQueue_databaseIsSynced;	// IMP=0x00100000000513af
- (_Bool)startDatabaseSyncIfNeeded;	// IMP=0x0010000000051200
- (void)appsRemoved:(id)arg1 currentRemoteDBUUID:(id)arg2 lastSequenceNumber:(unsigned long long)arg3;	// IMP=0x0010000000050c62
- (void)appsAdded:(id)arg1 currentRemoteDBUUID:(id)arg2 lastSequenceNumber:(unsigned long long)arg3;	// IMP=0x00100000000502b3
- (void)reportAppEvents:(id)arg1 forDBUUID:(id)arg2 startingSequenceNumber:(unsigned long long)arg3;	// IMP=0x001000000004f974
- (void)updateAppInfoWithRecords:(id)arg1 currentRemoteDBUUID:(id)arg2;	// IMP=0x001000000004e6b7
- (void)updateBundleIDList:(id)arg1 currentRemoteDBUUID:(id)arg2 lastSequenceNumber:(unsigned long long)arg3;	// IMP=0x001000000004e4db
- (void)reportCurrentDBUUID:(id)arg1 lastSequenceNumber:(unsigned long long)arg2;	// IMP=0x001000000004e192
- (void)remoteDeviceConnected;	// IMP=0x001000000004e05d
- (void)remoteDeviceDisconnected;	// IMP=0x001000000004df88
- (void)removeObserver:(id)arg1 queue:(id)arg2;	// IMP=0x001000000004dbfb
- (void)addObserver:(id)arg1 queue:(id)arg2;	// IMP=0x001000000004da73
- (void)_onQueue_databaseResynced;	// IMP=0x001000000004d825
- (void)_onQueue_appsRemoved:(id)arg1;	// IMP=0x001000000004d56b
- (void)_onQueue_appsUpdated:(id)arg1;	// IMP=0x001000000004d2b1
- (void)_onQueue_appsAdded:(id)arg1;	// IMP=0x001000000004cff7
- (void)_onQueue_acknowledgeAppEvents;	// IMP=0x001000000004cd05
- (void)_onQueue_fetchOutstandingAppEvents;	// IMP=0x001000000004ca34
- (void)_onQueue_fetchAppsForAppInstallRecords;	// IMP=0x001000000004c3c6
- (void)_onQueue_fetchRemainingBundleIDs;	// IMP=0x001000000004bc94
- (void)reportTotalSyncFailureForError:(id)arg1;	// IMP=0x001000000004bba0
- (void)_onQueue_reSync;	// IMP=0x001000000004b934
- (void)_onQueue_stopResyncThrottleTimer;	// IMP=0x001000000004b87e
- (void)_onQueue_startResyncThrottleTimer;	// IMP=0x001000000004b596
- (void)_onQueue_stopSyncTimer;	// IMP=0x001000000004b4e0
- (void)_onQueue_startSyncTimer;	// IMP=0x001000000004b200
- (void)_onQueue_saveData;	// IMP=0x001000000004af35
- (void)_onQueue_purgeSavedData;	// IMP=0x001000000004ad16
- (void)_resetLastSequenceNumberTo:(unsigned long long)arg1;	// IMP=0x001000000004ab71
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (void)_serializeToDisk;	// IMP=0x001000000004a009
- (id)initWithStorageBaseURL:(id)arg1 delegate:(id)arg2 queue:(id)arg3;	// IMP=0x0010000000049f16
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000049e53
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000049b9d
- (void)_initCommonReliabilityState;	// IMP=0x0010000000049b46

@end
