//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface BDSReadingHistoryServiceManager : NSObject
{
    MISSING_TYPE *readingGoalsService;	// 8 = 0x8
    MISSING_TYPE *readingHistoryCloudDataManager;	// 16 = 0x10
    MISSING_TYPE *readingHistoryCoherenceContext;	// 24 = 0x18
    MISSING_TYPE *readingHistoryServiceContext;	// 32 = 0x20
    MISSING_TYPE *transactionProvider;	// 40 = 0x28
    MISSING_TYPE *viewStateChangeHandler;	// 48 = 0x30
    MISSING_TYPE *_readingHistoryService;	// 56 = 0x38
    MISSING_TYPE *_readingHistoryServiceEnableCloudSync;	// 64 = 0x40
    MISSING_TYPE *_readingHistoryServiceAccessQueue;	// 72 = 0x48
    MISSING_TYPE *outstandingTransactionCount;	// 80 = 0x50
    MISSING_TYPE *outstandingTransactionCountAccessQueue;	// 88 = 0x58
    MISSING_TYPE *serviceDirty;	// 96 = 0x60
    MISSING_TYPE *teardownServiceTimer;	// 104 = 0x68
    MISSING_TYPE *teardownServiceTimout;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x002000000009acc0
- (id)init;	// IMP=0x001000000009c640
- (void)setEnableCloudSync:(_Bool)arg1;	// IMP=0x001000000009c5c0
- (id)serviceStatusInfo;	// IMP=0x001000000009c310
- (void)readingHistoryStateInfoWithRangeStart:(id)arg1 rangeEnd:(id)arg2 currentTime:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000009bd10
- (void)incrementWithDate:(id)arg1 by:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009ba50
- (void)handleSyncFileChangeWithSyncVersionInfo:(id)arg1 updateInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009b880
- (void)clearTodayWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000009b570
- (void)clearDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009b3b0
- (void)clearDefaultsCachedDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000009b150
- (void)clearDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000009aec0
- (void)dealloc;	// IMP=0x001000000009ac70
- (id)initWithReadingGoalsService:(id)arg1 transactionProvider:(id)arg2 viewStateChangeHandler:(id)arg3;	// IMP=0x001000000009abd0
- (void)transactionWillEndWithName:(const char *)arg1;	// IMP=0x001000000009d580
- (void)transactionDidBeginWithName:(const char *)arg1;	// IMP=0x001000000009d0b0
- (void)bookWidgetReadingHistoryStateInfoWithCompletionHandler:(void (^)(BDSReadingHistoryStateInfo *, _Bool))arg1;	// IMP=0x001000000009d780
- (void)mergeMovedReadingHistoryDataWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;	// IMP=0x001000000009dbd0
- (void)restoreWithName:(NSString *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;	// IMP=0x001000000009e8e0
- (void)listBackupWithCompletionHandler:(void (^)(NSArray *, _Bool, NSError *))arg1;	// IMP=0x001000000009e4b0
- (void)backupWithName:(NSString *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;	// IMP=0x001000000009e010

@end

