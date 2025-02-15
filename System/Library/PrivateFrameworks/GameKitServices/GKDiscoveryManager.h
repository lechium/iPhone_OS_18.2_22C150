//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKDiscoveryBonjour, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GKDiscoveryManager : NSObject
{
    CDUnknownBlockType _playerFoundHandler;	// 8 = 0x8
    CDUnknownBlockType _playerLostHandler;	// 16 = 0x10
    CDUnknownBlockType _receiveDataHandler;	// 24 = 0x18
    NSString *_playerID;	// 32 = 0x20
    NSString *_deviceID;	// 40 = 0x28
    NSMutableDictionary *_peers;	// 48 = 0x30
    GKDiscoveryBonjour *_bonjour;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_peersQueue;	// 64 = 0x40
}

+ (id)parseDeviceIDFromServiceName:(id)arg1;	// IMP=0x0060000000070ef2
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(copy, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
@property(retain, nonatomic) GKDiscoveryBonjour *bonjour; // @synthesize bonjour=_bonjour;
@property(copy, nonatomic) CDUnknownBlockType receiveDataHandler; // @synthesize receiveDataHandler=_receiveDataHandler;
@property(copy, nonatomic) CDUnknownBlockType playerLostHandler; // @synthesize playerLostHandler=_playerLostHandler;
@property(copy, nonatomic) CDUnknownBlockType playerFoundHandler; // @synthesize playerFoundHandler=_playerFoundHandler;
@property(retain, nonatomic) NSMutableDictionary *peers; // @synthesize peers=_peers;
- (void)removeInterface:(unsigned int)arg1 forPeerWithServiceName:(id)arg2;	// IMP=0x0000000000072f07
- (void)didLosePeer:(id)arg1;	// IMP=0x0000000000072c1a
- (id)peersList;	// IMP=0x0000000000072a70
- (void)addInterface:(unsigned int)arg1 withDiscoveryInfo:(id)arg2 forPeerWithServiceName:(id)arg3;	// IMP=0x00000000000720bb
- (void)forgetParticipant:(id)arg1 deviceID:(id)arg2;	// IMP=0x0000000000071d7a
- (void)sendDataToParticipant:(id)arg1 deviceID:(id)arg2 data:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000719fe
- (void)stopBrowsing;	// IMP=0x00000000000718c5
- (void)startBrowsingLocalPlayer:(id)arg1;	// IMP=0x00000000000713ea
- (void)cleanUpPeersForBrowse;	// IMP=0x000000000007107c
- (void)stopAdvertising;	// IMP=0x0000000000070f43
- (id)localServiceName;	// IMP=0x0000000000070ed8
- (id)serviceNameforDeviceID:(id)arg1 playerID:(id)arg2;	// IMP=0x0000000000070e7f
- (id)startAdvertisingLocalPlayer:(id)arg1 discoveryInfo:(id)arg2;	// IMP=0x000000000006fc56
- (void)passDataToGKLayer:(id)arg1 fromPeer:(id)arg2;	// IMP=0x000000000006f9a1
- (void)processEvent:(int)arg1 forPeer:(id)arg2 withUserInfo:(id)arg3;	// IMP=0x000000000006ef33
- (void)connectToSockAddr:(struct sockaddr *)arg1 port:(unsigned short)arg2 forPeer:(id)arg3;	// IMP=0x000000000006db17
- (void)resolveForPeer:(id)arg1;	// IMP=0x000000000006ceb6
- (id)generateDeviceID;	// IMP=0x000000000006cdb5
- (void)dealloc;	// IMP=0x000000000006cd3f
- (id)initWithDomain:(id)arg1 type:(id)arg2;	// IMP=0x000000000006cc8b
- (id)init;	// IMP=0x000000000006cc65

@end

