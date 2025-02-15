//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, NSMapTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface ADPeerCloudService : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    IDSService *_service;	// 16 = 0x10
    NSMutableDictionary *_completions;	// 24 = 0x18
    NSMapTable *_sharedDataObservers;	// 32 = 0x20
    NSMapTable *_sharedDataRequestObservers;	// 40 = 0x28
    NSMapTable *_remoteRequestObservers;	// 48 = 0x30
    NSString *_companionIdentifier;	// 56 = 0x38
    NSString *_airPlayRouteIdentifier;	// 64 = 0x40
    _Bool _airPlayRouteIdentifierNeedsUpdate;	// 72 = 0x48
    NSMutableSet *_deviceIdentifiers;	// 80 = 0x50
    NSMutableDictionary *_peerSharedData;	// 88 = 0x58
    _Bool _hasActiveAccount;	// 96 = 0x60
}

+ (id)_pointerToBlockMap;	// IMP=0x00200000001a750c
+ (id)_wrappedSendFailureError:(id)arg1;	// IMP=0x00100000001a7410
+ (id)_timedOutError;	// IMP=0x00100000001a73d8
+ (id)_unexpectedMessageError;	// IMP=0x00100000001a73a3
+ (id)sharedInstance;	// IMP=0x00100000001a7373
- (void).cxx_destruct;	// IMP=0x00200000001a49a8
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x00100000001a484d
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x00100000001a4773
- (void)_handleMessageResponse:(id)arg1 ofType:(unsigned short)arg2 orError:(id)arg3 fromID:(id)arg4 handler:(id)arg5;	// IMP=0x00100000001a4226
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x00100000001a40c9
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000001a3add
- (_Bool)_handleRemoteExecution:(id)arg1 peer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a3777
- (void)_notifyObserversOfRequestInfo:(id)arg1 fromPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a33ed
- (void)setRemoteRequestObserver:(CDUnknownBlockType)arg1 withHandle:(void *)arg2;	// IMP=0x00100000001a334d
- (void)startListeningForRemote;	// IMP=0x00100000001a32a3
- (void)startRemoteSerialzedCommandExecution:(id)arg1 onPeer:(id)arg2 allowsRelay:(_Bool)arg3 allowFallbackOnAWDL:(_Bool)arg4 executionContext:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000001a2f58
- (void)startRemoteExecution:(id)arg1 onPeer:(id)arg2 allowsRelay:(_Bool)arg3 throughProxyDevice:(id)arg4 executionContext:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000001a2dcd
- (void)startRemoteRequest:(id)arg1 onPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a2cb3
- (void)_startRemoteRequest:(id)arg1 onPeers:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a29bf
- (void)_notifyObserversOfSharedDataRequestFromPeer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a2667
- (void)setSharedDataRequestObserver:(CDUnknownBlockType)arg1 withHandler:(void *)arg2;	// IMP=0x00100000001a25c7
- (void)getSharedDataFromPeers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a247a
- (void)_notifyObserversOfSharedData:(id)arg1 fromPeer:(id)arg2;	// IMP=0x00100000001a21db
- (void)setSharedDataObserver:(CDUnknownBlockType)arg1 withHandle:(void *)arg2;	// IMP=0x00100000001a20cb
- (void)sendSharedData:(id)arg1 toPeers:(id)arg2;	// IMP=0x00100000001a1f79
- (void)_updateAirPlayRouteIdentifierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a1e1d
- (void)_airplayRouteDidChange:(id)arg1;	// IMP=0x00100000001a1d57
- (void)_companionIdentifierDidChangeNotification:(id)arg1;	// IMP=0x00100000001a1c6f
- (void)_updateActiveAccountState;	// IMP=0x00100000001a1a62
- (void)_setCachedSharedData:(id)arg1 forUniqueId:(id)arg2;	// IMP=0x00100000001a19bc
- (id)_cachedSharedDataForUniqueId:(id)arg1;	// IMP=0x00100000001a195f
- (id)cachedSharedDataForUniqueId:(id)arg1;	// IMP=0x00100000001a184d
- (id)_peerInfoForAssistantId:(id)arg1 allowNonPeers:(_Bool)arg2;	// IMP=0x00100000001a1790
- (id)peerInfoForAssistantId:(id)arg1 allowNonPeers:(_Bool)arg2;	// IMP=0x00100000001a1676
- (id)companionPeerUniqueIdentifier;	// IMP=0x00100000001a15bd
- (id)_companionPeer;	// IMP=0x00100000001a156e
- (id)companionPeer;	// IMP=0x00100000001a11d5
- (id)localPeerIDSDeviceUniqueIdentifier;	// IMP=0x00100000001a10ea
- (id)_peerInfoForIDSDeviceUniqueIdentifier:(id)arg1 allowNonPeers:(_Bool)arg2;	// IMP=0x00100000001a0e9d
- (id)peerInfoForIDSDeviceUniqueIdentifier:(id)arg1 allowNonPeers:(_Bool)arg2;	// IMP=0x00100000001a0d93
- (id)_uniqueIdentifierForPeer:(id)arg1;	// IMP=0x00100000001a0be5
- (id)uniqueIdentifierForPeer:(id)arg1;	// IMP=0x00100000001a0ae7
- (id)peers;	// IMP=0x00100000001a0a2e
- (id)_peers;	// IMP=0x00100000001a077a
- (_Bool)hasActiveAccount;	// IMP=0x00100000001a0771
- (void)_sendProto:(id)arg1 ofType:(unsigned short)arg2 originalRequestId:(id)arg3 toPeers:(id)arg4 responseType:(unsigned short)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000001a0026
- (void)_sendProto:(id)arg1 ofType:(unsigned short)arg2 toPeers:(id)arg3 responseType:(unsigned short)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000001a0002
- (void)_sendProto:(id)arg1 ofType:(unsigned short)arg2 toPeers:(id)arg3;	// IMP=0x001000000019ffde
- (id)_destinationsForPeers:(id)arg1;	// IMP=0x001000000019fb01
- (id)_service;	// IMP=0x001000000019faf3
- (id)_init;	// IMP=0x001000000019fa16

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

