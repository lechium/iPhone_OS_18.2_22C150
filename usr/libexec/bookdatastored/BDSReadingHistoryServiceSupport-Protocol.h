//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BDSCRDTModelSyncVersionInfo, BDSReadingHistoryUpdateInfo, MISSING_TYPE;

@protocol BDSReadingHistoryServiceSupport
- (void)mergeMovedReadingHistoryDataWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (void)bookWidgetReadingHistoryStateInfoWithCompletionHandler:(void (^)(BDSReadingHistoryStateInfo *, _Bool))arg1;
- (void)setEnableCloudSync:(_Bool)arg1;
- (void)handleSyncFileChangeWithSyncVersionInfo:(BDSCRDTModelSyncVersionInfo *)arg1 updateInfo:(BDSReadingHistoryUpdateInfo *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (MISSING_TYPE *)clearDefaultsCachedDataWithCompletionHandler: /* Error: Ran out of types for this method. */;
@end

