//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKAccountOverrideInfo, CKContainerID, CKDLogicalDeviceContext, CKDPCSMemoryCache, CKDPCSSQLCache, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CKDPCSCache : NSObject
{
    _Bool _contentDiscarded;	// 8 = 0x8
    CKDPCSSQLCache *_sqlCache;	// 16 = 0x10
    CKDPCSMemoryCache *_recordMemoryCache;	// 24 = 0x18
    CKDPCSMemoryCache *_zoneMemoryCache;	// 32 = 0x20
    CKDPCSMemoryCache *_shareMemoryCache;	// 40 = 0x28
    CKDLogicalDeviceContext *_deviceContext;	// 48 = 0x30
    CKContainerID *_containerID;	// 56 = 0x38
    CKAccountOverrideInfo *_accountOverrideInfo;	// 64 = 0x40
    NSString *_accountID;	// 72 = 0x48
    NSString *_encryptionServiceName;	// 80 = 0x50
    unsigned long long _accessCount;	// 88 = 0x58
    NSMutableDictionary *_outstandingFetches;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_fetchQueue;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000000497cf
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue; // @synthesize fetchQueue=_fetchQueue;
@property(retain, nonatomic) NSMutableDictionary *outstandingFetches; // @synthesize outstandingFetches=_outstandingFetches;
@property(nonatomic) unsigned long long accessCount; // @synthesize accessCount=_accessCount;
@property(readonly, nonatomic) NSString *encryptionServiceName; // @synthesize encryptionServiceName=_encryptionServiceName;
@property(readonly, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) CKAccountOverrideInfo *accountOverrideInfo; // @synthesize accountOverrideInfo=_accountOverrideInfo;
@property(readonly, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
@property(readonly, nonatomic) CKDLogicalDeviceContext *deviceContext; // @synthesize deviceContext=_deviceContext;
@property(readonly, nonatomic) CKDPCSMemoryCache *shareMemoryCache; // @synthesize shareMemoryCache=_shareMemoryCache;
@property(readonly, nonatomic) CKDPCSMemoryCache *zoneMemoryCache; // @synthesize zoneMemoryCache=_zoneMemoryCache;
@property(readonly, nonatomic) CKDPCSMemoryCache *recordMemoryCache; // @synthesize recordMemoryCache=_recordMemoryCache;
@property(readonly, nonatomic) CKDPCSSQLCache *sqlCache; // @synthesize sqlCache=_sqlCache;
@property(readonly, nonatomic, getter=isContentDiscarded) _Bool contentDiscarded; // @synthesize contentDiscarded=_contentDiscarded;
- (void)discardContentIfPossible;	// IMP=0x0000000000049662
- (void)endContentAccess;	// IMP=0x00000000000495fc
- (_Bool)beginContentAccess;	// IMP=0x000000000004958f
- (id)CKStatusReportArray;	// IMP=0x0000000000048fc4
- (_Bool)hasStatusToReport;	// IMP=0x0000000000048eee
- (void)removePCSDataForItemsInShareWithID:(id)arg1;	// IMP=0x0000000000048cc6
- (void)removePCSDataForItemsInZoneWithID:(id)arg1;	// IMP=0x0000000000048a9e
- (void)updateMemoryCacheWithSharePCSData:(id)arg1 forShareWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000048937
- (void)updateMemoryCacheWithRecordPCSData:(id)arg1 forRecordWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000487d0
- (void)updateMemoryCacheWithZonePCSData:(id)arg1 forZoneWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000048669
- (void)_updateMemoryCacheWithPCSData:(id)arg1 forItemWithID:(id)arg2 inMemoryCache:(id)arg3 databaseScope:(long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000485cb
- (void)_setPCSData:(id)arg1 forFetchedShareID:(id)arg2 withScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000047ed7
- (void)_setPCSData:(id)arg1 forFetchedZoneID:(id)arg2 withScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000477c2
- (void)_setPCSData:(id)arg1 forFetchedRecordID:(id)arg2 withScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000470f1
- (void)fetchPCSForShareWithID:(id)arg1 forOperation:(id)arg2 options:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000046c61
- (void)fetchPCSForZoneWithID:(id)arg1 forOperation:(id)arg2 options:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000467d1
- (void)fetchPCSForRecordWithID:(id)arg1 forOperation:(id)arg2 options:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000462c3
- (void)_lockedFetchPCSForItem:(id)arg1 memoryCache:(id)arg2 forOperation:(id)arg3 options:(unsigned long long)arg4 fetchCreator:(CDUnknownBlockType)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000045fd8
- (void)_lockedCreatePCSCacheFetchOfItem:(id)arg1 forOperation:(id)arg2 options:(unsigned long long)arg3 fetchCreator:(CDUnknownBlockType)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000045133
- (void)_lockedInvalidateAllOutstandingPCSFetchesForItemIDString:(id)arg1 databaseScope:(long long)arg2;	// IMP=0x0000000000044f41
- (void)_lockedAddOutstandingFetch:(id)arg1 forItemIDString:(id)arg2 databaseScope:(long long)arg3;	// IMP=0x0000000000044dde
- (id)_lockedGetOutstandingFetchForOperation:(id)arg1 options:(unsigned long long)arg2 itemIDString:(id)arg3;	// IMP=0x0000000000044b4f
- (void)_lockedRemoveOutstandingFetch:(id)arg1 forItemIDString:(id)arg2 databaseScope:(long long)arg3;	// IMP=0x00000000000449d8
- (void)_lockedHandleMemoryFetchOfItem:(id)arg1 pcsData:(id)arg2 forOperation:(id)arg3 options:(unsigned long long)arg4 fetchCreator:(CDUnknownBlockType)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000044163
- (void)getSQLCache:(CDUnknownBlockType)arg1;	// IMP=0x0000000000043cdc
- (void)_discardSQLCache;	// IMP=0x0000000000043c50
- (void)_lockedGetSQLCacheWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000043add
- (void)runMemoryCacheEviction;	// IMP=0x0000000000043a98
- (void)dealloc;	// IMP=0x00000000000439c7
- (id)initWithDeviceContext:(id)arg1 containerID:(id)arg2 accountOverrideInfo:(id)arg3 accountID:(id)arg4 encryptionServiceName:(id)arg5;	// IMP=0x00000000000436cb
- (void)clearInvalidatedPCSSQLCacheEntriesWithSkipZonePCS:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000049bcd
- (void)clearPCSMemoryCaches;	// IMP=0x0000000000049aa8
- (void)clearPCSCaches;	// IMP=0x0000000000049865

@end

