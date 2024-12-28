//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapDataSubscription, GEOResourceManifestManager, GEOTileDB, NSError, NSProgress, NSString, _GEOMapDataSubscriptionBatchTileRequester;
@protocol GEOMapDataSubscriptionDataDownloaderDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOMapDataSubscriptionTileDownloader : NSObject
{
    _GEOMapDataSubscriptionBatchTileRequester *_batchRequester;	// 8 = 0x8
    id <GEOMapDataSubscriptionDataDownloaderDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 24 = 0x18
    GEOTileDB *_diskCache;	// 32 = 0x20
    GEOResourceManifestManager *_manifestManager;	// 40 = 0x28
    NSError *_firstError;	// 48 = 0x30
}

+ (id)loggingDescription;	// IMP=0x0010000001274962
- (void).cxx_destruct;	// IMP=0x0000000001274fd8
@property(nonatomic) __weak id <GEOMapDataSubscriptionDataDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)batchTileRequesterDidFinish:(id)arg1;	// IMP=0x0000000001274f3c
- (void)batchTileRequester:(id)arg1 failedToLoadKey:(struct _GEOTileKey)arg2 error:(id)arg3;	// IMP=0x0000000001274f0b
- (void)batchTileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned int)arg3 tileSet:(CDUnion_20bcf645)arg4 etag:(id)arg5 forKey:(struct _GEOTileKey)arg6 userInfo:(id)arg7;	// IMP=0x0000000001274c86
@property(readonly, nonatomic) unsigned long long bytesDownloaded;
@property(readonly, nonatomic) unsigned long long failedTiles;
@property(readonly, nonatomic) unsigned long long successfulTiles;
@property(readonly, nonatomic) unsigned long long numberOfTilesAttempted;
@property(readonly, nonatomic) unsigned long long numberOfTilesConsidered;
- (void)cancel;	// IMP=0x0000000001274c02
- (void)pause;	// IMP=0x0000000001274bec
- (void)resume;	// IMP=0x0000000001274bd6
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property(readonly) NSProgress *progress;
@property(readonly, nonatomic) GEOMapDataSubscription *subscription;
- (id)initWithSubscription:(id)arg1 diskCache:(id)arg2 reason:(unsigned char)arg3 requestOptions:(unsigned long long)arg4 auditToken:(id)arg5 manifestManager:(id)arg6 delegate:(id)arg7 delegateQueue:(id)arg8 log:(id)arg9 logPrefix:(id)arg10 tileRequesterCreationBlock:(CDUnknownBlockType)arg11;	// IMP=0x000000000127496f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
