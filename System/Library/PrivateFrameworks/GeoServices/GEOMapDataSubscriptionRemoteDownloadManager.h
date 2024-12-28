//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOXPCConnection, NSMapTable, NSString, geo_isolater;
@protocol GEOMapDataSubscriptionDownloadManagerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOMapDataSubscriptionRemoteDownloadManager : NSObject
{
    id <GEOMapDataSubscriptionDownloadManagerDelegate> _delegate;	// 8 = 0x8
    int _geodLaunchedNotifyToken;	// 16 = 0x10
    struct GEOOnce_s _configuredConnection;	// 20 = 0x14
    NSObject<OS_dispatch_queue> *_incomingMessageQueue;	// 32 = 0x20
    GEOXPCConnection *_connection;	// 40 = 0x28
    geo_isolater *_statesLock;	// 48 = 0x30
    NSMapTable *_states;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000007a19b1
@property(nonatomic) __weak id <GEOMapDataSubscriptionDownloadManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_receivedStateUpdate:(id)arg1;	// IMP=0x00000000007a1504
- (void)_stopObservingStateForIdentifier:(id)arg1;	// IMP=0x00000000007a1405
- (void)_startObservingStateForIdentifier:(id)arg1;	// IMP=0x00000000007a12f4
- (void)_reconnectIfNecessary;	// IMP=0x00000000007a1088
- (void)fetchStateForSubscriptionWithIdentifier:(id)arg1 callbackQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000007a0b0e
- (id)determineEstimatedSizeForSubscriptionWithRegion:(id)arg1 dataTypes:(unsigned long long)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000007a07bb
- (void)fetchLastUpdatedDateForOfflineSubscriptionsWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000007a05da
- (void)forceUpdateForUserInitiatedSubscriptionsForDataType:(unsigned long long)arg1 mode:(unsigned long long)arg2 auditToken:(id)arg3;	// IMP=0x00000000007a0513
- (void)cancelDownloadForSubscriptionIdentifiers:(id)arg1;	// IMP=0x00000000007a044b
- (void)startDownloadForSubscriptionIdentifiers:(id)arg1 mode:(unsigned long long)arg2 auditToken:(id)arg3;	// IMP=0x00000000007a033c
- (void)_handleEvent:(id)arg1;	// IMP=0x000000000079ffa8
- (id)_connection;	// IMP=0x000000000079fe13
- (void)dealloc;	// IMP=0x000000000079fdda
- (id)init;	// IMP=0x000000000079fc53

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
