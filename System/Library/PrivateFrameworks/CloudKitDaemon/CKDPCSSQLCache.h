//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainerID, CKDPCSSQLCacheTable, CKDPCSSQLCacheTableGroup, CKSQLiteDatabase, NSString;
@protocol OS_dispatch_queue;

@interface CKDPCSSQLCache : NSObject
{
    CKContainerID *_containerID;	// 8 = 0x8
    NSString *_accountID;	// 16 = 0x10
    NSString *_encryptionServiceName;	// 24 = 0x18
    CKDPCSSQLCacheTableGroup *_cacheGroup;	// 32 = 0x20
    CKDPCSSQLCacheTable *_table;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_asyncQueue;	// 48 = 0x30
    _Atomic unsigned int _cacheRequestCount;	// 56 = 0x38
    _Atomic unsigned int _cacheHitCount;	// 60 = 0x3c
    NSString *_cacheGroupName;	// 64 = 0x40
    CKSQLiteDatabase *_db;	// 72 = 0x48
}

+ (void)evictPCSSQLCachesForKnownContainers;	// IMP=0x0060000000360e54
- (void).cxx_destruct;	// IMP=0x0000000000362125
- (id)CKStatusReportArray;	// IMP=0x0000000000362085
- (void)clearInvalidatedCacheEntriesWithSkipZonePCS:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000361fef
- (void)clearCache;	// IMP=0x0000000000361f88
- (void)removePCSDataForItemsInShareWithID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000361dd1
- (void)removePCSDataForItemsInZoneWithID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000361c90
- (void)setSharePCSData:(id)arg1 forShareWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000361c6b
- (void)setRecordPCSData:(id)arg1 forRecordWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000361c46
- (void)setZonePCSData:(id)arg1 forZoneWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000361c21
- (void)_setPCSData:(id)arg1 forItemWithID:(id)arg2 databaseScope:(long long)arg3 itemType:(unsigned long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000361ade
- (void)_lockedSetPCSData:(id)arg1 databaseScope:(long long)arg2 itemType:(unsigned long long)arg3 forID:(id)arg4;	// IMP=0x00000000003616c7
- (void)fetchPCSDataForShareWithID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000361582
- (void)fetchPCSDataForZoneWithID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000036143d
- (void)fetchPCSDataForRecordWithID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000003612f8
- (id)_lockedFetchPCSDataForID:(id)arg1 databaseScope:(long long)arg2 itemType:(unsigned long long)arg3;	// IMP=0x00000000003612be
- (_Bool)hasStatusToReport;	// IMP=0x00000000003612b0
- (id)initWithDeviceContext:(id)arg1 containerID:(id)arg2 accountOverrideInfo:(id)arg3 accountID:(id)arg4 encryptionServiceName:(id)arg5;	// IMP=0x0000000000360f15

@end
