//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSStewieCTMessagingClient, IMNetworkConnectionMonitor, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface IDSDXPCOffGridMessenger : NSObject
{
    IDSStewieCTMessagingClient *_ctClient;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableDictionary *_clientRemoteObjectsByService;	// 24 = 0x18
    IMNetworkConnectionMonitor *_connectionMonitor;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000003322a6
@property(retain, nonatomic) IMNetworkConnectionMonitor *connectionMonitor; // @synthesize connectionMonitor=_connectionMonitor;
@property(retain, nonatomic) NSMutableDictionary *clientRemoteObjectsByService; // @synthesize clientRemoteObjectsByService=_clientRemoteObjectsByService;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) IDSStewieCTMessagingClient *ctClient; // @synthesize ctClient=_ctClient;
- (id)identifierFromMessage:(id)arg1 senderURI:(id)arg2 receiverURI:(id)arg3 senderKey:(id)arg4 ratchetCounter:(unsigned int)arg5 authTag:(id)arg6;	// IMP=0x0010000000331dab
- (_Bool)_isDeviceOnline;	// IMP=0x0010000000331d95
- (void)incomingOffGridSummaryMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000331b74
- (void)incomingOffGridMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000331953
- (void)sendFetchRequestForHandles:(id)arg1 fromHandle:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000003313e6
- (void)sendEncryptedOffGridMessage:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000003307c2
- (void)decryptOffGridMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000033037b
- (void)encryptOffGridMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000032fc45
- (void)resultsForDestinationURIs:(id)arg1 senderURI:(id)arg2 service:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000032eabc
- (void)donateHandlesForMessagingKeys:(id)arg1 fromURI:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000032e52d
- (void)setupOffGridMessengerClient:(id)arg1 withUUID:(id)arg2 forService:(id)arg3;	// IMP=0x001000000032e042
- (_Bool)isCTClientActive;	// IMP=0x001000000032df7e
- (id)peerIDManager;	// IMP=0x001000000032df65
- (void)monitorConnection:(id)arg1;	// IMP=0x001000000032dea3
- (id)initWithQueue:(id)arg1;	// IMP=0x001000000032dd3e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
