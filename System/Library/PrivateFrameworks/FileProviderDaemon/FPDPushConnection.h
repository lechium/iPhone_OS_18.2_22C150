//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FPDExtensionManager, FPProviderMonitor, NSMutableDictionary, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPDPushConnection : NSObject
{
    FPDExtensionManager *_manager;	// 8 = 0x8
    NSXPCListener *_xpcListener;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_pushQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_payloadDeliveryQueue;	// 32 = 0x20
    NSMutableDictionary *_pushConnectionsByEnvironment;	// 40 = 0x28
    NSMutableDictionary *_messageDelegates;	// 48 = 0x30
    NSMutableDictionary *_bundleIdentifierForTopic;	// 56 = 0x38
    NSMutableDictionary *_topicsForBundleIdentifier;	// 64 = 0x40
    NSMutableDictionary *_clientConnections;	// 72 = 0x48
    FPProviderMonitor *_providerMonitor;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000d0f5b
- (void)updateTopicsForProvider:(id)arg1;	// IMP=0x00000000000d0b88
- (void)providerDidEnterForeground:(id)arg1;	// IMP=0x00000000000d0b76
- (void)providerDidEnterBackground:(id)arg1;	// IMP=0x00000000000d0b64
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x00000000000d0233
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x00000000000cffe2
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x00000000000cffdc
- (void)updateTopicsForApplicationBundleIdentifier:(id)arg1 providerIdentifier:(id)arg2 requestToken:(_Bool)arg3 environment:(id)arg4;	// IMP=0x00000000000cfa34
- (void)setMessageDelegate:(id)arg1 forApplicationBundleIdentifier:(id)arg2;	// IMP=0x00000000000cf958
- (void)updateTopicsForBundleIdentifier:(id)arg1;	// IMP=0x00000000000cf5f1
- (id)_debugTopicsForApplicationIdentifier:(id)arg1;	// IMP=0x00000000000cf1fd
- (id)topicsForApplicationBundleIdentifier:(id)arg1;	// IMP=0x00000000000cf19e
- (void)fileProviderUnregister;	// IMP=0x00000000000cec82
- (void)fileProviderRegister;	// IMP=0x00000000000ce9b7
- (id)clientConnectionsForApplicationBundleIdentifier:(id)arg1;	// IMP=0x00000000000ce93b
- (void)removeClientConnection:(id)arg1 forApplicationBundleIdentifier:(id)arg2;	// IMP=0x00000000000ce87d
- (void)addClientConnection:(id)arg1 forApplicationBundleIdentifier:(id)arg2;	// IMP=0x00000000000ce7ca
- (void)performWithConnection:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cdf30
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000000cddbd
- (void)start;	// IMP=0x00000000000cdc7a
- (id)_pushConnectionWithEnvironmentName:(id)arg1;	// IMP=0x00000000000cdb9e
- (id)initWithExtensionManager:(id)arg1;	// IMP=0x00000000000cda2f
- (id)init;	// IMP=0x00000000000cd961

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
