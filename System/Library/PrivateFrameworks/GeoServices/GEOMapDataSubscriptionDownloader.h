//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, GEOMapDataSubscription, GEOMapDataSubscriptionTileDownloader, GEOPowerAssertion, GEOResourceManifestManager, GEOTileDB, NSMutableArray, NSProgress, NSString;
@protocol GEOMapDataSubscriptionDataDownloader, GEOMapDataSubscriptionDownloaderDelegate, NSObject, OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface GEOMapDataSubscriptionDownloader : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    id <GEOMapDataSubscriptionDownloaderDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 24 = 0x18
    NSProgress *_progress;	// 32 = 0x20
    GEOPowerAssertion *_powerAssertion;	// 40 = 0x28
    id <NSObject> _transaction;	// 48 = 0x30
    NSObject<OS_os_log> *_log;	// 56 = 0x38
    NSString *_logPrefix;	// 64 = 0x40
    GEOMapDataSubscription *_subscription;	// 72 = 0x48
    GEOApplicationAuditToken *_auditToken;	// 80 = 0x50
    GEOTileDB *_diskCache;	// 88 = 0x58
    GEOResourceManifestManager *_manifestManager;	// 96 = 0x60
    GEOMapDataSubscriptionTileDownloader *_tileDownloader;	// 104 = 0x68
    id <GEOMapDataSubscriptionDataDownloader> _currentDownloader;	// 112 = 0x70
    NSMutableArray *_remainingDownloaders;	// 120 = 0x78
    long long _updateType;	// 128 = 0x80
    struct GEOOnce_s _finished;	// 136 = 0x88
    _Bool _paused;	// 144 = 0x90
    _Bool _canceled;	// 145 = 0x91
}

- (void).cxx_destruct;	// IMP=0x000000000067c105
@property(readonly, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, nonatomic) GEOMapDataSubscription *subscription; // @synthesize subscription=_subscription;
@property(readonly, nonatomic) __weak id <GEOMapDataSubscriptionDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)offlineDownloader:(id)arg1 willUseDataVersions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000067bf89
- (void)downloader:(id)arg1 didFinishWithError:(id)arg2;	// IMP=0x000000000067bd0a
@property(readonly, nonatomic) unsigned long long bytesDownloaded;
@property(readonly, nonatomic) unsigned long long failedTiles;
@property(readonly, nonatomic) unsigned long long successfulTiles;
@property(readonly, nonatomic) unsigned long long numberOfTilesAttempted;
@property(readonly, nonatomic) unsigned long long numberOfTilesConsidered;
- (void)cancel;	// IMP=0x000000000067bab3
- (void)_finishWithError:(id)arg1;	// IMP=0x000000000067b90b
- (void)pause;	// IMP=0x000000000067b861
- (void)resume;	// IMP=0x000000000067b6a2
@property(readonly) NSProgress *progress;
- (id)initWithSubscription:(id)arg1 diskCache:(id)arg2 requiredOfflineLayers:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 reason:(unsigned char)arg6 requestOptions:(unsigned long long)arg7 auditToken:(id)arg8 manifestManager:(id)arg9 log:(id)arg10 logPrefix:(id)arg11 tileRequesterCreationBlock:(CDUnknownBlockType)arg12 tileDownloader:(id)arg13 offlineDownloader:(id)arg14 updateType:(long long)arg15 dataTypeMask:(unsigned long long)arg16;	// IMP=0x000000000067ac68
- (id)initWithSubscription:(id)arg1 diskCache:(id)arg2 requiredOfflineLayers:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 reason:(unsigned char)arg6 requestOptions:(unsigned long long)arg7 auditToken:(id)arg8 manifestManager:(id)arg9 log:(id)arg10 logPrefix:(id)arg11 tileRequesterCreationBlock:(CDUnknownBlockType)arg12 tileDownloader:(id)arg13 offlineDownloader:(id)arg14 updateType:(long long)arg15;	// IMP=0x000000000067ac05

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
