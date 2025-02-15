//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBCloudDatabase, HMBLocalDatabase, HMBLocalZone, HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel, NAFuture, NAPromise, NSObject, NSString;
@protocol HMBLocalZoneID, NAScheduler, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirror : HMFObject
{
    _Bool _shuttingDown;	// 8 = 0x8
    _Bool _useAnonymousRequests;	// 9 = 0x9
    id <HMBLocalZoneID> _zoneID;	// 16 = 0x10
    HMBLocalZone *_localZone;	// 24 = 0x18
    NAFuture *_lastAsyncFuture;	// 32 = 0x20
    HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel *_internalState;	// 40 = 0x28
    HMBCloudDatabase *_cloudDatabase;	// 48 = 0x30
    HMBLocalDatabase *_localDatabase;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_workQueue;	// 64 = 0x40
    NAPromise *_startupPromise;	// 72 = 0x48
    NAPromise *_shutdownPromise;	// 80 = 0x50
    id <NAScheduler> _workQueueScheduler;	// 88 = 0x58
}

+ (id)logCategory;	// IMP=0x0010000000b61cf7
+ (id)publicKeysFromCertificateRecord:(id)arg1;	// IMP=0x001000000069c56a
+ (id)__publicKeyFromCertificateRecord:(id)arg1 dataKey:(id)arg2 assetKey:(id)arg3;	// IMP=0x001000000069b9e6
+ (id)__recordKeyCertificatePrefix:(id)arg1;	// IMP=0x001000000069b8f5
+ (id)__certificatesRecordID;	// IMP=0x001000000069b8c5
+ (id)__createSignatureVerificationPolicy;	// IMP=0x001000000069b89e
+ (unsigned long long)__maxSizeForCKRecordSignatureVerificationCertificateChain;	// IMP=0x001000000069b7b8
+ (_Bool)__errorIsNotFound:(id)arg1;	// IMP=0x00100000009226f4
+ (id)__overrideParentModelID;	// IMP=0x00100000009226c4
- (void).cxx_destruct;	// IMP=0x0000000000b5e4a2
@property(readonly, nonatomic) id <NAScheduler> workQueueScheduler; // @synthesize workQueueScheduler=_workQueueScheduler;
@property(readonly, nonatomic) NAPromise *shutdownPromise; // @synthesize shutdownPromise=_shutdownPromise;
@property(readonly, nonatomic) NAPromise *startupPromise; // @synthesize startupPromise=_startupPromise;
@property(readonly, nonatomic) _Bool useAnonymousRequests; // @synthesize useAnonymousRequests=_useAnonymousRequests;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) HMBLocalDatabase *localDatabase; // @synthesize localDatabase=_localDatabase;
@property(readonly, nonatomic) HMBCloudDatabase *cloudDatabase; // @synthesize cloudDatabase=_cloudDatabase;
@property(nonatomic, getter=isShuttingDown) _Bool shuttingDown; // @synthesize shuttingDown=_shuttingDown;
@property(retain, nonatomic) HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel *internalState; // @synthesize internalState=_internalState;
@property(retain, nonatomic) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(readonly, nonatomic) id <HMBLocalZoneID> zoneID; // @synthesize zoneID=_zoneID;
- (void)__saveInternalStateWithActivity:(id)arg1;	// IMP=0x0000000000b5df40
- (_Bool)_removeOverridesForZoneName:(id)arg1 recordName:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000b5dce7
- (_Bool)removeOverridesForZoneName:(id)arg1 recordName:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000b5dc2d
- (_Bool)removeAllOverridesWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000b5dba4
- (_Bool)removeOverridesForRecordIDs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000b5d974
- (_Bool)addOverrides:(id)arg1 replace:(_Bool)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000b5d739
- (id)_fetchOverridesForZoneName:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000b5d4cd
- (id)fetchOverridesForZoneName:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000b5d4bb
- (id)fetchAllOverridesWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000b5d4a1
- (id)fetchOverridesForRecordIDs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000b5d11e
- (_Bool)removeAllLocalRulesWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000b5cefe
- (id)fetchAllDataForZoneName:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000b5ce50
- (id)fetchAllDataWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000b5cdb8
- (id)_fetchAllDataForZoneName:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000b5cb4c
- (id)fetchAllDataForRecordIDs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000b5c7c9
- (void)fetchCloudRecordsForZoneID:(id)arg1 recordID:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000b5c6d1
- (id)desiredKeys;	// IMP=0x0000000000b5c5f1
- (void)fetchCloudRecordIDsForZoneID:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000b5c4f6
- (void)_fetchCloudRecordsForZoneID:(id)arg1 recordID:(id)arg2 options:(id)arg3 desiredKeys:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000b5c307
- (void)fetchCloudChangesForRecordIDs:(id)arg1 options:(id)arg2 ignoreLastSynchronizedRecords:(_Bool)arg3 xpcActivity:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000b5c121
- (id)cloudFetchNeededForRecordIDs:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000b5bfe2
@property(readonly, nonatomic) NAFuture *shutdownFuture;
@property(readonly, nonatomic) NAFuture *startupFuture;
- (id)shutdown;	// IMP=0x0000000000b5be0d
- (id)flush;	// IMP=0x0000000000b5bcd8
- (id)triggerOutputForOutputRow:(unsigned long long)arg1 options:(id)arg2;	// IMP=0x0000000000b5bc69
- (id)destroy;	// IMP=0x0000000000b5bbfa
- (void)startUpWithLocalZone:(id)arg1;	// IMP=0x0000000000b5bb1f
@property(readonly, nonatomic) NAFuture *startUp;
- (id)__asyncFutureWithActivity:(id)arg1 ignoreErrors:(_Bool)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000b5b92c
@property(retain, nonatomic) NAFuture *lastAsyncFuture; // @synthesize lastAsyncFuture=_lastAsyncFuture;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
- (id)initWithLocalDatabase:(id)arg1 cloudDatabase:(id)arg2 useAnonymousRequests:(_Bool)arg3 ownerQueue:(id)arg4;	// IMP=0x0000000000b5b46f
- (void)__startQueryOperation:(id)arg1 operation:(id)arg2;	// IMP=0x0000000000174bda
- (void)__fetchRecordsByQuery:(id)arg1;	// IMP=0x00000000001746b5
- (void)__fetchRecordByID:(id)arg1;	// IMP=0x0000000000174169
- (void)__fetchCloudRecordsWithFetchInfo:(id)arg1;	// IMP=0x00000000001740c0
- (_Bool)__shouldFailCloudRecordFetchError:(id)arg1 error:(id)arg2;	// IMP=0x0000000000173ad4
- (void)__shutdownWithActivity:(id)arg1;	// IMP=0x0000000000226ba4
- (void)__startupWithLocalZone:(id)arg1 activity:(id)arg2;	// IMP=0x0000000000226896
- (id)__loadOrCreateInternalStateModelWithLocalZone:(id)arg1 activity:(id)arg2;	// IMP=0x00000000002264e2
- (void)__retryFetchVerificationCertificatesWithFetchInfo:(id)arg1;	// IMP=0x000000000069acec
- (_Bool)__canRecoverFromVerificationCertificatesError:(id)arg1 fetchInfo:(id)arg2;	// IMP=0x000000000069aafa
- (void)__fetchVerificationCertificatesCompleted:(id)arg1 record:(id)arg2 error:(id)arg3;	// IMP=0x000000000069a6cd
- (void)__fetchVerificationCertificatesWithFetchInfo:(id)arg1;	// IMP=0x000000000069a536
- (void)fetchVerificationCertificatesRecordWithOperationGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000069a31c
- (_Bool)__removeOverridesForZoneName:(id)arg1 recordName:(id)arg2 options:(id)arg3 activity:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000921d82
- (_Bool)__removeOverridesForZoneName:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000920d19
- (_Bool)__removeOverridesForRecordIDs:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id *)arg4;	// IMP=0x00000000009204c5
- (_Bool)__removeAllOverridesWithOptions:(id)arg1 activity:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000920102
- (_Bool)__addOverrides:(id)arg1 replace:(_Bool)arg2 options:(id)arg3 activity:(id)arg4 error:(id *)arg5;	// IMP=0x000000000091fb4e
- (id)__fetchOverridesForZoneName:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id *)arg4;	// IMP=0x000000000091f08f
- (id)__fetchOverridesForRecordIDs:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id *)arg4;	// IMP=0x000000000091e95d
- (_Bool)__removeAllLocalRulesWithOptions:(id)arg1 activity:(id)arg2 error:(id *)arg3;	// IMP=0x000000000091e601
- (id)__fetchAllDataForZoneName:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id *)arg4;	// IMP=0x000000000091dd03
- (id)__fetchAllDataForZoneID:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id *)arg4;	// IMP=0x000000000091ca2b
- (id)__fetchAllDataForRecordIDs:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id *)arg4;	// IMP=0x000000000091bfed
- (id)__localZonesForRecordIDs:(id)arg1 activity:(id)arg2 error:(id *)arg3;	// IMP=0x000000000091b7c8
- (void)__shutdownLocalZones:(id)arg1 activity:(id)arg2;	// IMP=0x000000000091b47d
- (id)__openLocalZoneForCloudZoneID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000091b3a7
- (id)__createCloudZoneIDForZoneID:(id)arg1;	// IMP=0x000000000091b2b3
- (void)__updateChangeTokenWithFetchInfo:(id)arg1;	// IMP=0x0000000000a7656f
- (void)__removeDeletedZonesWithFetchInfo:(id)arg1;	// IMP=0x0000000000aaf459
- (void)__retryFetchDatabaseChangesWithFetchInfo:(id)arg1;	// IMP=0x0000000000c569ab
- (_Bool)__canRecoverFromFetchDatabaseChangesError:(id)arg1 fetchInfo:(id)arg2;	// IMP=0x0000000000c56691
- (void)__fetchDatabaseChangesCompleted:(id)arg1 error:(id)arg2;	// IMP=0x0000000000c56586
- (void)__fetchDatabaseChangesWithFetchInfo:(id)arg1;	// IMP=0x0000000000c55f7e
- (void)__fetchZoneChangesWithFetchInfo:(id)arg1;	// IMP=0x0000000000ec1486
- (void)__performCloudZonePullsWithFetchInfo:(id)arg1;	// IMP=0x0000000000ec0f33
- (void)__startUpCloudZonesWithFetchInfo:(id)arg1;	// IMP=0x0000000000ec09e0
- (_Bool)__createCloudZonesForFetchInfo:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000ec0644

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

