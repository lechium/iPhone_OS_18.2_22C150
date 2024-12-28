//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOOfflineDataConfiguration, GEOPairedDeviceSubscriptionStatesSummary, GEOTileDB, NRDevice, NSMutableArray, NSMutableDictionary, NSString, NSXPCConnection, geo_isolater;
@protocol GEOMapDataSubscriptionPersistence, GEOMapDataSubscriptionSyncManagerDelegate, OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOMapDataSubscriptionLocalSyncManager : NSObject
{
    id <GEOMapDataSubscriptionPersistence> _persistence;	// 8 = 0x8
    id <GEOMapDataSubscriptionSyncManagerDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    geo_isolater *_isolation;	// 32 = 0x20
    GEOTileDB *_db;	// 40 = 0x28
    GEOOfflineDataConfiguration *_offlineDataConfiguration;	// 48 = 0x30
    NSMutableArray *_observedIdentifiers;	// 56 = 0x38
    NSMutableDictionary *_observedStates;	// 64 = 0x40
    NSObject<OS_dispatch_group> *_initialNanoRegistryFetchGroup;	// 72 = 0x48
    _Bool _hasPairedDevices;	// 80 = 0x50
    NRDevice *_activeDevice;	// 88 = 0x58
    id _featureFlagObserver;	// 96 = 0x60
    GEOPairedDeviceSubscriptionStatesSummary *_subscriptionsSummary;	// 104 = 0x68
    NSXPCConnection *_pairedDeviceDaemonConnection;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000012f8786
@property(nonatomic) __weak id <GEOMapDataSubscriptionSyncManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak id <GEOMapDataSubscriptionPersistence> persistence; // @synthesize persistence=_persistence;
- (void)handlePairedDeviceStateUpdate:(id)arg1 callbackQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000012f83e9
- (void)handleSerializedPairedDeviceStateUpdate:(id)arg1 callbackQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000012f81aa
- (void)fetchSerializedPairedDeviceSubscriptionIdentifiersToObserveWithCallbackQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000012f7f7b
- (void)endMonitoringStateForPairedDeviceSubscriptionWithIdentifier:(id)arg1;	// IMP=0x00000000012f7dd7
- (void)beginMonitoringStateForPairedDeviceSubscriptionWithIdentifier:(id)arg1;	// IMP=0x00000000012f7c84
- (void)fetchStateForPairedDeviceSubscriptionWithIdentifier:(id)arg1 callbackQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000012f75b7
- (void)fetchSerializedPairedDeviceSubscriptionsSummaryWithCallbackQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000012f74c4
- (void)setPairedDeviceSubscriptionsSummary:(id)arg1 callbackQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000012f6baf
- (void)setSerializedPairedDeviceSubscriptionsSummary:(id)arg1 callbackQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000012f6a18
- (void)fetchAvailableDiskSpaceForPairedDeviceOfflineSubscriptionsWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000012f67fd
- (void)fetchLastUpdatedDateForPairedDeviceOfflineSubscriptionsWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000012f65b9
- (void)cancelDownloadForPairedDeviceSubscriptionIdentifiers:(id)arg1;	// IMP=0x00000000012f6428
- (void)startDownloadForPairedDeviceSubscriptionIdentifiers:(id)arg1 mode:(unsigned long long)arg2;	// IMP=0x00000000012f6279
- (void)fetchSubscriptionIdentifiersToSyncToPairedDeviceWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000012f60a7
- (void)setSubscriptionWithIdentifier:(id)arg1 shouldSyncToPairedDevice:(_Bool)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000012f5f44
- (void)fetchSubscriptionsForSyncToWatchWithIdentifier:(id)arg1 callbackQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000012f4ecd
- (void)didUpdateSubscriptionWithIdentifier:(id)arg1;	// IMP=0x00000000012f292b
- (void)didAddSubscription:(id)arg1;	// IMP=0x00000000012f2630
- (void)_pairedDeviceConnectivityDidChange:(id)arg1;	// IMP=0x00000000012f21e4
- (void)_pairedDevicesDidChange:(id)arg1;	// IMP=0x00000000012f212e
- (void)setNeedsPairedDeviceStateSynchronization;	// IMP=0x00000000012f1cdc
- (void)dealloc;	// IMP=0x00000000012f196e
- (id)initWithPersistence:(id)arg1 tileDB:(id)arg2 dataConfiguration:(id)arg3;	// IMP=0x00000000012f0eba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
