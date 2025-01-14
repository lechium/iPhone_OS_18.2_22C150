//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSURLSession.h"

@class NSHashTable, NSMutableArray, NSObject, NSString, NSURLSessionConfiguration;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __NSURLSessionLocal : NSURLSession
{
    unsigned long long _identSeed;	// 8 = 0x8
    void *_tubeManager;	// 16 = 0x10
    NSMutableArray *_outstandingTasks;	// 24 = 0x18
    NSHashTable *_unownedUnresumedTasks;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_invalidateQueue;	// 40 = 0x28
    CDUnknownBlockType _invalidateCallback;	// 48 = 0x30
    const struct XCookieStorage *_xCookies;	// 56 = 0x38
    const struct XCredentialStorage *_xCreds;	// 64 = 0x40
    _Bool _xCookiesInitComplete;	// 72 = 0x48
    _Bool _xCredsInitComplete;	// 73 = 0x49
    struct mutex _xCookieStorageInitLock;	// 80 = 0x50
    struct mutex _xCredStorageInitLock;	// 144 = 0x90
    _Bool _isInvalid;	// 208 = 0xd0
    NSURLSessionConfiguration *_proxyConfig;	// 216 = 0xd8
    NSURLSession *_proxySession;	// 224 = 0xe0
    _Bool _shouldRecreateProxySession;	// 232 = 0xe8
    NSURLSession *_sessionForCacheLookups;	// 240 = 0xf0
    struct os_unfair_lock_s _unownedUnresumedTasksLock;	// 248 = 0xf8
}

- (id).cxx_construct;	// IMP=0x0000000000006d48
- (void).cxx_destruct;	// IMP=0x0000000000006d1b
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x0000000000006ce3
- (void)_onqueue_completeInvalidation:(_Bool)arg1;	// IMP=0x00000000000068b5
- (void)_onqueue_markConnectionsReusedAfterAPSleepWake;	// IMP=0x0000000000006865
- (void)_onqueue_getTasksWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000667d
- (void)_onqueue_flushWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000666e
- (void)_onqueue_resetStorageWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000665c
- (void)_onqueue_handleConnectionsAtAPSleep;	// IMP=0x00000000000065e0
- (id)AVAggregateAssetDownloadTaskForURLAsset:(id)arg1 mediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5;	// IMP=0x00000000000065ac
- (id)AVAssetDownloadTaskForURLAsset:(id)arg1 assetTitle:(id)arg2 assetArtworkData:(id)arg3 options:(id)arg4 downloadConfiguration:(id)arg5;	// IMP=0x0000000000006578
- (id)AVAssetDownloadTaskForURLAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;	// IMP=0x0000000000006544
- (id)_AVAssetDownloadTaskForURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;	// IMP=0x0000000000006510
- (id)_downloadTaskWithTaskForClass:(id)arg1;	// IMP=0x0000000000005121
- (id)_uploadTaskWithTaskForClass:(id)arg1;	// IMP=0x000000000000475b
- (id)webSocketTaskForURL:(id)arg1 protocols:(id)arg2;	// IMP=0x0000000000004542
- (id)webSocketTaskForRequest:(id)arg1;	// IMP=0x0000000000004319
- (id)_dataTaskWithTaskForClass:(id)arg1;	// IMP=0x00000000000042d5
- (void)dealloc;	// IMP=0x0000000000004206
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 delegateDispatchQueue:(id)arg4;	// IMP=0x0000000000003efe
- (void)_useTLSSessionCacheFromSession:(id)arg1;	// IMP=0x0000000000003e6d
- (unsigned long long)nextSeed;	// IMP=0x0000000000003e3b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003e22

// Remaining properties
@property(readonly) __weak NSURLSessionConfiguration *_groupConfiguration;
@property(readonly) __weak NSURLSession *_groupSession;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

