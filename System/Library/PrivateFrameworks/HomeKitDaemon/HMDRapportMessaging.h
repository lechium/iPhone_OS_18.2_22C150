//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableArray, NSMutableDictionary, NSObject, NSString, RPCompanionLinkClient;
@protocol HMDRapportMessagingClientFactory, HMDRapportMessagingReachabilityDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDRapportMessaging : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    id <HMDRapportMessagingReachabilityDelegate> _reachabilityDelegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    id <HMDRapportMessagingClientFactory> _clientFactory;	// 32 = 0x20
    RPCompanionLinkClient *_discoveryClient;	// 40 = 0x28
    CDUnknownBlockType _requestHandler;	// 48 = 0x30
    CDUnknownBlockType _hmmmRequestHandler;	// 56 = 0x38
    CDUnknownBlockType _hmmmEnergyRequestHandler;	// 64 = 0x40
    NSMutableArray *_requestQueue;	// 72 = 0x48
    NSMutableArray *_hmmmRequestQueue;	// 80 = 0x50
    NSMutableArray *_hmmmEnergyRequestQueue;	// 88 = 0x58
    NSMutableDictionary *_deviceClients;	// 96 = 0x60
}

+ (id)logCategory;	// IMP=0x00100000006022a6
+ (id)sharedInstance;	// IMP=0x0010000000602276
- (void).cxx_destruct;	// IMP=0x000000000060099f
@property(nonatomic) __weak id <HMDRapportMessagingReachabilityDelegate> reachabilityDelegate; // @synthesize reachabilityDelegate=_reachabilityDelegate;
- (void)_updateDevice:(id)arg1 reachable:(_Bool)arg2;	// IMP=0x00000000006008c3
- (void)_invalidateDestinationDeviceWithIDSIdentifier:(id)arg1;	// IMP=0x00000000006006a2
- (id)_createRapportClientForDevice:(id)arg1;	// IMP=0x0000000000600304
- (id)_clientForIDSIdentifier:(id)arg1 withDevice:(id)arg2;	// IMP=0x000000000060002d
- (void)_completeQueuedHMMMEnergyRequests;	// IMP=0x00000000005ffe72
- (void)_completeQueuedHMMMRequests;	// IMP=0x00000000005ffcb7
- (void)_completeQueuedRequests;	// IMP=0x00000000005ffafc
- (void)_queueHMMMEnergyRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000005ff975
- (void)_queueHMMMRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000005ff7ee
- (void)_queueRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000005ff667
- (void)_handleHMMMEnergyRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000005ff592
- (void)_handleHMMMRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000005ff4bd
- (void)_handleRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000005ff3e8
- (void)_configureDiscoveryClientWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000005febab
- (_Bool)isRapportDeviceDiscoveredWithIdentifier:(id)arg1;	// IMP=0x00000000005fe9ba
- (void)sendRequest:(id)arg1 requestID:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000005fe83f
- (void)registerHMMMEnergyRequestHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000005fe7a6
- (void)registerHMMMRequestHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000005fe70d
- (void)registerRequestHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000005fe674
- (void)configureDiscoveryClientWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000005fe5db
- (id)initWithClientFactory:(id)arg1;	// IMP=0x00000000005fe494

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

