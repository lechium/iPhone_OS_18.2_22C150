//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLRecordTargetMapping, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, _CPLCloudKitDownloadGroup;
@protocol CPLEngineStoreUserIdentifier, CPLEngineTransportGroup;

@interface CPLCloudKitResourcesDownloadTask
{
    _CPLCloudKitDownloadGroup *_downloadGroup;	// 8 = 0x8
    long long _currentOperationType;	// 16 = 0x10
    NSMutableDictionary *_remainingTasksPerOperationType;	// 24 = 0x18
    NSMutableArray *_currentRemainingTasks;	// 32 = 0x20
    CPLRecordTargetMapping *_targetMapping;	// 40 = 0x28
    NSArray *_scopedIdentifiersNeedingPlaceholderRecords;	// 48 = 0x30
    NSDictionary *_additionalPlaceholderRecords;	// 56 = 0x38
    NSArray *_downloadTasks;	// 64 = 0x40
    CDUnknownBlockType _completionHandler;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000009a3fc
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSArray *downloadTasks; // @synthesize downloadTasks=_downloadTasks;
- (void)runOperations;	// IMP=0x0010000000099e8a
- (void)_downloadNextGroup;	// IMP=0x0010000000099810
- (void)_downloadNextOperationType;	// IMP=0x001000000009970e
- (void)_downloadCurrentGroup;	// IMP=0x00100000000982bf
- (id)_recordIDForResourcesWithItemScopedIdentifier:(id)arg1;	// IMP=0x0010000000098072
- (id)_cloudKitScopeForTask:(id)arg1;	// IMP=0x0010000000097d98
- (id)_downloadOperationWithRecordIDsAndTasks:(id)arg1 keys:(id)arg2 perRecordProgressBlock:(CDUnknownBlockType)arg3 perRecordCompletionBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00100000000976c2
- (void)_finishRemainingTasksWithError:(id)arg1;	// IMP=0x0010000000097485
- (void)cancelDownloadTask:(id)arg1;	// IMP=0x001000000009726f
- (id)initWithController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000096c04

// Remaining properties
@property(nonatomic) _Bool allowsFetchCache;
@property(nonatomic, getter=isBackgroundTask) _Bool backgroundTask;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id fetchCache;
@property(nonatomic, getter=isForcedTask) _Bool forcedTask;
@property(nonatomic) _Bool foreground;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighPriorityBackground) _Bool highPriorityBackground;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup;
@property(retain, nonatomic) id <CPLEngineStoreUserIdentifier> transportUserIdentifier;

@end

