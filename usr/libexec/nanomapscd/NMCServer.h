//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOResourceManifestConfiguration, GEOResourceManifestManager, GEOTileLoader, NMCRoutePlanningController, NMCSyncManager, NMTileMessageQueue, NRDevice, NRPairedDeviceRegistry, NSLock, NSMutableArray, NSMutableDictionary, NSString, NSURLSession, NSXPCConnection, NSXPCListener;
@protocol OS_dispatch_queue;

@interface NMCServer : NSObject
{
    NMCRoutePlanningController *_routePlanningController;	// 8 = 0x8
    GEOResourceManifestConfiguration *_manifestConfiguration;	// 16 = 0x10
    GEOResourceManifestManager *_manifestManager;	// 24 = 0x18
    GEOTileLoader *_tileLoader;	// 32 = 0x20
    NSMutableDictionary *_requestIdentifierToPendingTileLoader;	// 40 = 0x28
    NSLock *_requestIdentifierToPendingTileLoaderLock;	// 48 = 0x30
    NMCSyncManager *_syncManager;	// 56 = 0x38
    NSXPCConnection *_companionControllerConnection;	// 64 = 0x40
    NSXPCListener *_listener;	// 72 = 0x48
    NSXPCListener *_geoListener;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 88 = 0x58
    NSMutableArray *_mapsPeerConnections;	// 96 = 0x60
    NRPairedDeviceRegistry *_registry;	// 104 = 0x68
    NRDevice *_activeDevice;	// 112 = 0x70
    NSMutableDictionary *_locationManagers;	// 120 = 0x78
    NSLock *_locationManagersLock;	// 128 = 0x80
    NMTileMessageQueue *_tileMessageQueue;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_tileLoaderQueue;	// 144 = 0x90
    int _configStoreNeedsSyncToken;	// 152 = 0x98
    int _subscriptionsChangedToken;	// 156 = 0x9c
    int _pairedDeviceSubscriptionStateChangedToken;	// 160 = 0xa0
    NSURLSession *_urlSession;	// 168 = 0xa8
    CDUnknownBlockType _locationDidUpdate;	// 176 = 0xb0
}

+ (id)sharedInstance;	// IMP=0x0020000000057dc7
- (void).cxx_destruct;	// IMP=0x002000000005f7ee
@property(copy, nonatomic) CDUnknownBlockType locationDidUpdate; // @synthesize locationDidUpdate=_locationDidUpdate;
- (void)startOrStopDownloadForSubscriptionIdentifiers:(id)arg1;	// IMP=0x001000000005f6f1
- (void)updateObservedStateSubscriptionIdentifiers;	// IMP=0x001000000005f5a6
- (void)setNeedsSubscriptionSynchronizationUpdate;	// IMP=0x001000000005f592
- (void)_forgetConnection:(id)arg1 reason:(id)arg2;	// IMP=0x001000000005f3e7
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000005efbf
- (void)_registerXPCRoutes;	// IMP=0x001000000005eea3
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;	// IMP=0x001000000005ee2c
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;	// IMP=0x001000000005ee1a
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;	// IMP=0x001000000005ee14
- (void)didChangePairedDeviceReachability:(_Bool)arg1;	// IMP=0x001000000005ee0e
- (void)didChangeActiveTileGroup:(id)arg1;	// IMP=0x001000000005ee08
- (void)syncManager:(id)arg1 didRequestInitialSync:(CDUnknownBlockType)arg2;	// IMP=0x001000000005ebe3
- (void)_syncManager:(id)arg1 didUpdateDroppedPin:(id)arg2;	// IMP=0x001000000005ea2b
- (void)syncManagerDidUpdate:(id)arg1;	// IMP=0x001000000005e907
- (void)_debug_fetchDiagnosticsString:(CDUnknownBlockType)arg1;	// IMP=0x001000000005e6c2
- (void)_debug_fetchServerConfiguration:(CDUnknownBlockType)arg1;	// IMP=0x001000000005e47d
- (void)setDroppedPin:(id)arg1;	// IMP=0x001000000005e381
- (void)requestSyncUpdateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000005e36b
- (void)checkinForNavigationControl;	// IMP=0x001000000005e2a1
- (void)_sendTileGroupDidChange;	// IMP=0x001000000005e195
- (void)checkinWithCurrentTileGroupIdentifier:(id)arg1;	// IMP=0x001000000005dfec
- (void)fetchTilesForMessage:(id)arg1;	// IMP=0x001000000005da08
- (void)experimentConfigurationDidChange:(id)arg1;	// IMP=0x001000000005d989
- (void)_checkinWithSubscriptionStateSummary;	// IMP=0x001000000005d816
- (void)connectionNeedsStateSynchronization:(id)arg1;	// IMP=0x001000000005d74f
- (void)connection:(id)arg1 didChangeDeviceConnectivity:(_Bool)arg2;	// IMP=0x001000000005d57c
- (id)_locationManagerForEffectiveBundleIdentifier:(id)arg1;	// IMP=0x001000000005d15b
- (id)_locationManagerForBundleIdentifier:(id)arg1;	// IMP=0x001000000005d086
- (void)_openURL:(id)arg1 forMessage:(id)arg2 withRouteContext:(id)arg3 underAssertionNamed:(id)arg4;	// IMP=0x001000000005cbe2
- (void)_enumerateMapsPeerConnectionsUnderAssertionNamed:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000005cb5e
- (void)_syncSubscriptionInfoIfNecessaryWithExistingHash:(id)arg1;	// IMP=0x001000000005c88c
- (void)_syncConfigStore:(id)arg1;	// IMP=0x001000000005c6e1
- (void)_syncConfigStore;	// IMP=0x001000000005c636
- (void)_loadDataFromURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005c550
- (void)_performServiceRequest:(id)arg1 traits:(id)arg2 requestType:(int)arg3 auditToken:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000005bfb6
- (void)_updateManifestConfiguration;	// IMP=0x001000000005bdcf
- (void)_updatePairedDeviceConfiguration;	// IMP=0x001000000005bc8a
- (void)_registerMessageObservers;	// IMP=0x0010000000057e4c
- (void)dealloc;	// IMP=0x0010000000057cae
- (id)init;	// IMP=0x00100000000575d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

