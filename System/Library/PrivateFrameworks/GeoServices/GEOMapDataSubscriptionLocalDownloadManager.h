//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapDataSubscriptionDownloadGroup, GEOMapDataSubscriptionDownloader, GEOMapDataSubscriptionUpdateSession, GEOOfflineDataConfiguration, GEOOfflineDataSizeEstimationServiceRequester, GEOResourceManifestManager, GEOTileDB, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, geo_isolater;
@protocol GEOMapDataSubscriptionDownloadManagerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOMapDataSubscriptionLocalDownloadManager : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    id <GEOMapDataSubscriptionDownloadManagerDelegate> _delegate;	// 16 = 0x10
    GEOResourceManifestManager *_manifestManager;	// 24 = 0x18
    GEOOfflineDataConfiguration *_dataConfiguration;	// 32 = 0x20
    GEOMapDataSubscriptionDownloadGroup *_offlineInexpensiveDownloadGroup;	// 40 = 0x28
    GEOMapDataSubscriptionDownloadGroup *_offlineRetryFailedDownloadGroup;	// 48 = 0x30
    GEOOfflineDataSizeEstimationServiceRequester *_offlineDataSizeEstimationRequester;	// 56 = 0x38
    GEOTileDB *_tileDB;	// 64 = 0x40
    GEOMapDataSubscriptionUpdateSession *_currentUpdateSession;	// 72 = 0x48
    NSMutableArray *_pendingSubscriptionsToLoad;	// 80 = 0x50
    GEOMapDataSubscriptionDownloader *_currentDownloader;	// 88 = 0x58
    geo_isolater *_isolation;	// 96 = 0x60
    unsigned long long _stateCaptureHandle;	// 104 = 0x68
    NSMutableDictionary *_subscriptionStates;	// 112 = 0x70
    NSMutableSet *_waitingObservers;	// 120 = 0x78
    _Bool _observingWaitingReasons;	// 128 = 0x80
    NSDictionary *_currentWaitingUserInfo;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000003fbcf8
@property(nonatomic) __weak id <GEOMapDataSubscriptionDownloadManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deviceDidChangeBatteryLevel:(unsigned long long)arg1;	// IMP=0x00000000003fbccb
- (void)deviceDidChangePowerAdapterState:(_Bool)arg1;	// IMP=0x00000000003fbcc5
- (void)_networkReachabilityChanged:(id)arg1;	// IMP=0x00000000003fbc74
- (void)offlineDataConfiguration:(id)arg1 didChangeUpdateAvailability:(_Bool)arg2;	// IMP=0x00000000003fb1ff
- (void)subscriptionDownloadGroupDidDefer:(id)arg1;	// IMP=0x00000000003fb0af
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000003fac76
- (void)subscriptionDownloader:(id)arg1 didFinishWithError:(id)arg2;	// IMP=0x00000000003f8c6e
- (void)subscriptionDownloader:(id)arg1 willUseOfflineDataVersions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000003f81c7
- (id)_createDownloaderForSubscription:(id)arg1 mode:(unsigned long long)arg2 auditToken:(id)arg3;	// IMP=0x00000000003f7c4c
- (void)cancelDownloadForSubscriptionIdentifiers:(id)arg1;	// IMP=0x00000000003f78c3
- (void)forceUpdateForUserInitiatedSubscriptionsForDataType:(unsigned long long)arg1 mode:(unsigned long long)arg2 auditToken:(id)arg3;	// IMP=0x00000000003f5ebf
- (void)startDownloadForSubscriptionIdentifiers:(id)arg1 mode:(unsigned long long)arg2 auditToken:(id)arg3;	// IMP=0x00000000003f5b9c
- (void)externallyManagedDownloaderDidFinish:(id)arg1 withError:(id)arg2;	// IMP=0x00000000003f569f
- (void)registerExternallyManagedDownloader:(id)arg1;	// IMP=0x00000000003f52dd
- (void)fetchLastUpdatedDateForOfflineSubscriptionsWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003f41ef
- (void)fetchStateForSubscriptionWithIdentifier:(id)arg1 callbackQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000003f3f90
- (id)determineEstimatedSizeForSubscriptionWithRegion:(id)arg1 dataTypes:(unsigned long long)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000003f382f
- (void)didRemoveSubscriptionWithIdentifier:(id)arg1;	// IMP=0x00000000003f323e
- (void)didAddSubscription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003f23a0
- (void)didAddSubscription:(id)arg1;	// IMP=0x00000000003f238c
- (id)captureStatePlistWithHints:(struct os_state_hints_s *)arg1;	// IMP=0x00000000003f1cc6
- (void)dealloc;	// IMP=0x00000000003f1af2
- (id)initWithTileDB:(id)arg1 dataConfiguration:(id)arg2;	// IMP=0x00000000003f190b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

