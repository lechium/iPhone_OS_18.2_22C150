//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDAVRoutingDataSource, MRDIDSService, NSMutableDictionary, NSString;
@protocol MRDIDSRemoteControlServiceDelegate, OS_dispatch_queue;

@interface MRDIDSRemoteControlService : NSObject
{
    MRDAVRoutingDataSource *_routingDataSource;	// 8 = 0x8
    id <MRDIDSRemoteControlServiceDelegate> _delegate;	// 16 = 0x10
    id _serviceToken;	// 24 = 0x18
    MRDIDSService *_service;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workerQueue;	// 40 = 0x28
    NSMutableDictionary *_discoveryChannels;	// 48 = 0x30
    NSMutableDictionary *_remoteControlChannels;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000007b43c
@property(retain, nonatomic) NSMutableDictionary *remoteControlChannels; // @synthesize remoteControlChannels=_remoteControlChannels;
@property(retain, nonatomic) NSMutableDictionary *discoveryChannels; // @synthesize discoveryChannels=_discoveryChannels;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(retain, nonatomic) MRDIDSService *service; // @synthesize service=_service;
@property(retain, nonatomic) id serviceToken; // @synthesize serviceToken=_serviceToken;
@property(nonatomic) __weak id <MRDIDSRemoteControlServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MRDAVRoutingDataSource *routingDataSource; // @synthesize routingDataSource=_routingDataSource;
- (void)_removeAuthorizationCallbackForOutputDevice:(id)arg1;	// IMP=0x001000000007b334
- (void)_addAuthorizationCallbackForOutputDevice:(id)arg1 destination:(id)arg2 session:(id)arg3;	// IMP=0x001000000007af9a
- (void)_onWorkerQueue_sendEndpoint:(id)arg1 toClient:(id)arg2 options:(id)arg3;	// IMP=0x001000000007ae14
- (void)_intializeClient:(id)arg1 forRemoteControlChannel:(id)arg2 authCallback:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000007a8bb
- (id)_createRemoteControlChannelForIDSConnection:(id)arg1 deviceInfo:(id)arg2 destination:(id)arg3 session:(id)arg4 userInfo:(id)arg5;	// IMP=0x001000000007a135
- (id)_createDiscoveryChannelForIDSConnection:(id)arg1 deviceInfo:(id)arg2;	// IMP=0x0010000000079ee7
- (void)_handleConnectRemoteControlMessage:(id)arg1 fromDevice:(id)arg2 destination:(id)arg3 session:(id)arg4;	// IMP=0x00100000000797f6
- (void)_handleDiscoveryMessage:(id)arg1 fromDevice:(id)arg2;	// IMP=0x0010000000079424
- (void)handleSetDiscoveryModeMessage:(id)arg1 forClient:(id)arg2;	// IMP=0x001000000007925d
- (void)handleSetConnectionStateMessage:(id)arg1 forClient:(id)arg2;	// IMP=0x0010000000079242
- (void)clientDidDisconnect:(id)arg1 error:(id)arg2;	// IMP=0x0010000000079057
- (void)clientConnection:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x0010000000078fc3
- (void)stop;	// IMP=0x0010000000078f75
- (void)start;	// IMP=0x0010000000078c80
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (id)initWithRoutingDataSource:(id)arg1;	// IMP=0x0010000000078a0f

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

