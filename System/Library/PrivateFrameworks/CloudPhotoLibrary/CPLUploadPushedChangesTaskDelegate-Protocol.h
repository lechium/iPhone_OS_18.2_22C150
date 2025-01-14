//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLEngineSyncTaskDelegate-Protocol.h>

@class CPLEngineStoreTransaction, CPLUploadPushedChangesTask;

@protocol CPLUploadPushedChangesTaskDelegate <CPLEngineSyncTaskDelegate>
- (_Bool)task:(CPLUploadPushedChangesTask *)arg1 shouldUploadBatchesWithDropReason:(id *)arg2 shouldQuarantineRecords:(_Bool *)arg3 inTransaction:(CPLEngineStoreTransaction *)arg4;
- (void)task:(CPLUploadPushedChangesTask *)arg1 noteSuccessfulUpdateInTransaction:(CPLEngineStoreTransaction *)arg2;
- (_Bool)task:(CPLUploadPushedChangesTask *)arg1 shouldRetryImmediatelyInTransaction:(CPLEngineStoreTransaction *)arg2;
- (_Bool)task:(CPLUploadPushedChangesTask *)arg1 checkScopeIsValidInTransaction:(CPLEngineStoreTransaction *)arg2;
@end

