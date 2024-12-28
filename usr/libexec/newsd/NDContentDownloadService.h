//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCContentManifest, FCKeyedOperationQueue, NDContentArchiveStore, NDDownloadConsumerProxy, NDDownloadLimits, NDDownloadOperationFactory, NDDownloadRequest, NDDownloadServiceStore, NSArray, NSMutableDictionary, NSMutableSet, NSString, NSXPCConnection;
@protocol FCANFHelper, FCContentContext, OS_dispatch_group, OS_dispatch_queue;

@interface NDContentDownloadService : NSObject
{
    int _batteryStateNotificationToken;	// 8 = 0x8
    NSXPCConnection *_currentConnection;	// 16 = 0x10
    NSArray *_downloadRequests;	// 24 = 0x18
    NDDownloadLimits *_downloadLimits;	// 32 = 0x20
    NDDownloadServiceStore *_store;	// 40 = 0x28
    id <FCContentContext> _contentContext;	// 48 = 0x30
    id <FCANFHelper> _ANFHelper;	// 56 = 0x38
    NDDownloadOperationFactory *_operationFactory;	// 64 = 0x40
    NSObject<OS_dispatch_group> *_prewarmGroup;	// 72 = 0x48
    FCKeyedOperationQueue *_downloadKeyedOperationQueue;	// 80 = 0x50
    NDContentArchiveStore *_contentArchiveStore;	// 88 = 0x58
    NDDownloadRequest *_activeDownloadRequest;	// 96 = 0x60
    FCContentManifest *_activeDownloadManifest;	// 104 = 0x68
    double _activeDownloadProgress;	// 112 = 0x70
    NDDownloadConsumerProxy *_currentConsumer;	// 120 = 0x78
    NSMutableSet *_downloadedContentIDs;	// 128 = 0x80
    NSMutableDictionary *_interestTokensByContentID;	// 136 = 0x88
    NSMutableDictionary *_errorsByContentID;	// 144 = 0x90
}

+ (id)_downloadQueue;	// IMP=0x002000000000d12c
+ (id)_cacheLookupQueue;	// IMP=0x001000000000d09a
- (void).cxx_destruct;	// IMP=0x002000000000d2fa
@property(retain, nonatomic) NSMutableDictionary *errorsByContentID; // @synthesize errorsByContentID=_errorsByContentID;
@property(retain, nonatomic) NSMutableDictionary *interestTokensByContentID; // @synthesize interestTokensByContentID=_interestTokensByContentID;
@property(retain, nonatomic) NSMutableSet *downloadedContentIDs; // @synthesize downloadedContentIDs=_downloadedContentIDs;
- (void)setCurrentConsumer:(id)arg1;	// IMP=0x001000000000d289
- (id)currentConsumer;	// IMP=0x001000000000d27f
@property(nonatomic) double activeDownloadProgress; // @synthesize activeDownloadProgress=_activeDownloadProgress;
@property(copy, nonatomic) FCContentManifest *activeDownloadManifest; // @synthesize activeDownloadManifest=_activeDownloadManifest;
@property(copy, nonatomic) NDDownloadRequest *activeDownloadRequest; // @synthesize activeDownloadRequest=_activeDownloadRequest;
@property(readonly, nonatomic) NDContentArchiveStore *contentArchiveStore; // @synthesize contentArchiveStore=_contentArchiveStore;
@property(readonly, nonatomic) int batteryStateNotificationToken; // @synthesize batteryStateNotificationToken=_batteryStateNotificationToken;
@property(readonly, nonatomic) FCKeyedOperationQueue *downloadKeyedOperationQueue; // @synthesize downloadKeyedOperationQueue=_downloadKeyedOperationQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *prewarmGroup; // @synthesize prewarmGroup=_prewarmGroup;
@property(readonly, nonatomic) NDDownloadOperationFactory *operationFactory; // @synthesize operationFactory=_operationFactory;
@property(readonly, nonatomic) id <FCANFHelper> ANFHelper; // @synthesize ANFHelper=_ANFHelper;
@property(readonly, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
@property(readonly, nonatomic) NDDownloadServiceStore *store; // @synthesize store=_store;
@property(retain, nonatomic) NDDownloadLimits *downloadLimits; // @synthesize downloadLimits=_downloadLimits;
@property(retain, nonatomic) NSArray *downloadRequests; // @synthesize downloadRequests=_downloadRequests;
@property(nonatomic) __weak NSXPCConnection *currentConnection; // @synthesize currentConnection=_currentConnection;
- (unsigned long long)_storageUsedByDownloads;	// IMP=0x001000000000d00e
- (_Bool)_hasReachedStorageLimits;	// IMP=0x001000000000ccce
- (void)_recordWhetherTasksAreUnfinished;	// IMP=0x001000000000cb75
- (void)_pruneUnneededInterestTokens;	// IMP=0x001000000000c877
- (_Bool)_isFatalError:(id)arg1;	// IMP=0x001000000000c80f
- (_Bool)_canRetryDownloadWithError:(id)arg1;	// IMP=0x001000000000c7af
- (id)_unfinishedRequests;	// IMP=0x001000000000c5b7
- (id)_downloadKeyQueue;	// IMP=0x001000000000bfdc
- (void)_revisitDownloadQueue;	// IMP=0x001000000000bbd5
- (void)_catchUpConsumer;	// IMP=0x001000000000afbd
- (void)_prewarmFromLastKnownRequests;	// IMP=0x001000000000a7ee
- (void)batteryStateDidChange;	// IMP=0x001000000000a791
- (void)powerStateDidChange;	// IMP=0x001000000000a734
- (void)networkReachabilityDidChange:(id)arg1;	// IMP=0x001000000000a722
- (id)keyedOperationQueue:(id)arg1 performAsyncOperationForKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000095ad
- (void)ping;	// IMP=0x0010000000009560
- (void)flushCacheLookupsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000908a
- (void)registerDownloadConsumer:(id)arg1;	// IMP=0x0010000000008414
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *xpcMessageQueue;
- (void)dealloc;	// IMP=0x001000000000833b
- (void)_initMain;	// IMP=0x00100000000081d6
- (id)initWithContentContext:(id)arg1 ANFHelper:(id)arg2;	// IMP=0x0010000000007f66

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
