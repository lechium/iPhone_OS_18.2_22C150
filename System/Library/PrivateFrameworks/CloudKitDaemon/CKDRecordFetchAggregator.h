//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDFetchRecordsOperation, CKDRecordCache, NSDictionary, NSMutableDictionary, NSObject, NSSet;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface CKDRecordFetchAggregator
{
    CKDRecordCache *_recordCache;	// 8 = 0x8
    _Bool _useRecordCache;	// 16 = 0x10
    _Bool _fetchAssetContents;	// 17 = 0x11
    _Bool _fetchMergeableValues;	// 18 = 0x12
    _Bool _preserveOrdering;	// 19 = 0x13
    _Bool _started;	// 20 = 0x14
    _Bool _markedToFinishByParent;	// 21 = 0x15
    _Bool _forceDecryptionAttempt;	// 22 = 0x16
    CDUnknownBlockType _fetchAggregatorCompletionBlock;	// 24 = 0x18
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;	// 32 = 0x20
    NSSet *_desiredKeys;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_recordReadySource;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_fetchQueue;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_fetchSource;	// 64 = 0x40
    NSObject<OS_dispatch_group> *_fetchGroup;	// 72 = 0x48
    NSMutableDictionary *_fetchInfosByOrder;	// 80 = 0x50
    unsigned long long _curFetchOrder;	// 88 = 0x58
    unsigned long long _highestReturnedOrder;	// 96 = 0x60
    CKDFetchRecordsOperation *_currentFetchOp;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000270240
@property(nonatomic) _Bool forceDecryptionAttempt; // @synthesize forceDecryptionAttempt=_forceDecryptionAttempt;
@property(getter=isMarkedToFinishByParent) _Bool markedToFinishByParent; // @synthesize markedToFinishByParent=_markedToFinishByParent;
@property _Bool started; // @synthesize started=_started;
@property(nonatomic) __weak CKDFetchRecordsOperation *currentFetchOp; // @synthesize currentFetchOp=_currentFetchOp;
@property unsigned long long highestReturnedOrder; // @synthesize highestReturnedOrder=_highestReturnedOrder;
@property unsigned long long curFetchOrder; // @synthesize curFetchOrder=_curFetchOrder;
@property(readonly, nonatomic) NSMutableDictionary *fetchInfosByOrder; // @synthesize fetchInfosByOrder=_fetchInfosByOrder;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *fetchGroup; // @synthesize fetchGroup=_fetchGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *fetchSource; // @synthesize fetchSource=_fetchSource;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue; // @synthesize fetchQueue=_fetchQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *recordReadySource; // @synthesize recordReadySource=_recordReadySource;
@property(retain, nonatomic) NSSet *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(nonatomic) _Bool preserveOrdering; // @synthesize preserveOrdering=_preserveOrdering;
@property(retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // @synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey;
@property(nonatomic) _Bool fetchMergeableValues; // @synthesize fetchMergeableValues=_fetchMergeableValues;
@property(nonatomic) _Bool fetchAssetContents; // @synthesize fetchAssetContents=_fetchAssetContents;
@property(copy, nonatomic) CDUnknownBlockType fetchAggregatorCompletionBlock; // @synthesize fetchAggregatorCompletionBlock=_fetchAggregatorCompletionBlock;
@property(nonatomic) _Bool useRecordCache; // @synthesize useRecordCache=_useRecordCache;
- (_Bool)supportsClearAssetEncryption;	// IMP=0x000000000026ffe3
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x000000000026ff26
- (void)_finishRecordFetchAggregator;	// IMP=0x000000000026fb1e
- (void)finishIfAppropriate;	// IMP=0x000000000026f9db
- (void)fetchRecords:(id)arg1 withPerRecordCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000026f6bd
- (id)_fetchRecord:(id)arg1 recordReadyHandle:(_Bool *)arg2 withRecordCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000026eafb
- (void)main;	// IMP=0x000000000026e84c
- (void)_addRecordFetchInfos:(id)arg1;	// IMP=0x000000000026e3f7
- (void)_recordFetchesAvailable;	// IMP=0x000000000026e32d
- (void)_lockedSendFetchRequest;	// IMP=0x000000000026c702
- (void)_flushFetchedRecordsToConsumerLocked;	// IMP=0x000000000026c692
- (void)_flushFetchedRecordsToConsumerNoOrderingLocked;	// IMP=0x000000000026c4d0
- (void)_flushFetchedRecordsToConsumerOrderedLocked;	// IMP=0x000000000026c260
- (void)_performCallbackForFetchInfoLocked:(id)arg1;	// IMP=0x000000000026bfef
- (int)operationType;	// IMP=0x000000000026bfe7
- (id)description;	// IMP=0x000000000026bfd5
- (id)CKPropertiesDescription;	// IMP=0x000000000026ba72
- (void)dealloc;	// IMP=0x000000000026ba17
- (id)activityCreate;	// IMP=0x000000000026b9ee
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x000000000026b40f

@end

