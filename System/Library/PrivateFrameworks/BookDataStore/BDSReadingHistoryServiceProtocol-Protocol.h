//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BookDataStore/BDSReadingHistoryBackupServiceProtocol-Protocol.h>
#import <BookDataStore/NSObject-Protocol.h>

@class BDSCRDTModelSyncVersionInfo, BDSReadingHistoryUpdateInfo, NSDate;

@protocol BDSReadingHistoryServiceProtocol <NSObject, BDSReadingHistoryBackupServiceProtocol>
- (void)readingHistoryServiceStatusInfoWithCompletion:(void (^)(BDSReadingHistoryServiceStatusInfo *, NSError *))arg1;
- (void)readingHistoryReadingHistoryStateInfoWithRangeStart:(NSDate *)arg1 rangeEnd:(NSDate *)arg2 currentTime:(NSDate *)arg3 withCompletion:(void (^)(BDSReadingHistoryStateInfo *, _Bool))arg4;
- (void)readingHistoryIncrementWithDate:(NSDate *)arg1 by:(long long)arg2 withCompletion:(void (^)(_Bool))arg3;
- (void)readingHistoryHandleSyncFileChangeWithSyncVersionInfo:(BDSCRDTModelSyncVersionInfo *)arg1 updateInfo:(BDSReadingHistoryUpdateInfo *)arg2 completion:(void (^)(_Bool))arg3;
- (void)readingHistoryClearTodayWithCompletion:(void (^)(_Bool))arg1;
- (void)readingHistoryClearDate:(NSDate *)arg1 withCompletion:(void (^)(_Bool))arg2;
- (void)readingHistoryClearDefaultsCachedDataWithCompletion:(void (^)(_Bool))arg1;
- (void)readingHistoryClearDataWithCompletion:(void (^)(_Bool))arg1;
@end

