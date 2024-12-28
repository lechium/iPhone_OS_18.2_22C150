//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSXPCConnection, RPConnection, RPRemoteDisplayDaemon, RPRemoteDisplayDiscovery, RPRemoteDisplayServer, RPRemoteDisplaySession;
@protocol OS_dispatch_queue;

@interface RPRemoteDisplayXPCConnection : NSObject
{
    _Bool _entitled;	// 8 = 0x8
    _Bool _usingNearbyActionV2;	// 9 = 0x9
    unsigned int _xpcID;	// 12 = 0xc
    RPRemoteDisplayDiscovery *_activatedDiscovery;	// 16 = 0x10
    RPConnection *_activeNetCnx;	// 24 = 0x18
    RPRemoteDisplayServer *_activatedServer;	// 32 = 0x20
    RPRemoteDisplaySession *_activatedSession;	// 40 = 0x28
    RPConnection *_clientNetCnx;	// 48 = 0x30
    RPRemoteDisplayDaemon *_daemon;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 64 = 0x40
    NSMutableSet *_serverNetCnxs;	// 72 = 0x48
    NSXPCConnection *_xpcCnx;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000000b2f4c
@property(nonatomic) unsigned int xpcID; // @synthesize xpcID=_xpcID;
@property(readonly, nonatomic) NSXPCConnection *xpcCnx; // @synthesize xpcCnx=_xpcCnx;
@property(nonatomic) _Bool usingNearbyActionV2; // @synthesize usingNearbyActionV2=_usingNearbyActionV2;
@property(retain, nonatomic) NSMutableSet *serverNetCnxs; // @synthesize serverNetCnxs=_serverNetCnxs;
@property(readonly, nonatomic) _Bool entitled; // @synthesize entitled=_entitled;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) RPRemoteDisplayDaemon *daemon; // @synthesize daemon=_daemon;
@property(retain, nonatomic) RPConnection *clientNetCnx; // @synthesize clientNetCnx=_clientNetCnx;
@property(readonly, nonatomic) RPRemoteDisplaySession *activatedSession; // @synthesize activatedSession=_activatedSession;
@property(readonly, nonatomic) RPRemoteDisplayServer *activatedServer; // @synthesize activatedServer=_activatedServer;
@property(retain, nonatomic) RPConnection *activeNetCnx; // @synthesize activeNetCnx=_activeNetCnx;
@property(readonly, nonatomic) RPRemoteDisplayDiscovery *activatedDiscovery; // @synthesize activatedDiscovery=_activatedDiscovery;
- (void)remoteDisplayDedicatedDeviceConfirmationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b2bc7
- (void)remoteDisplayChangeDedicatedDevice:(id)arg1;	// IMP=0x00100000000b29e1
- (void)remoteDisplayChangeDiscoverySessionStateForDevice:(id)arg1 reason:(id)arg2;	// IMP=0x00100000000b25ca
- (void)remoteDisplayPersonSelected:(id)arg1 forDedicatedPairing:(_Bool)arg2;	// IMP=0x00100000000b23fb
- (void)remoteDisplayPersonCanceled:(id)arg1;	// IMP=0x00100000000b22d2
- (void)remoteDisplayTryPassword:(id)arg1;	// IMP=0x00100000000b21c7
- (void)remoteDisplaySendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b2093
- (void)remoteDisplayStopPairingServer;	// IMP=0x00100000000b206a
- (void)remoteDisplayStartPairingServerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b1f70
- (void)remoteDisplaySendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b1e1e
- (void)remoteDisplayInvalidateClientSession;	// IMP=0x00100000000b1d48
- (void)remoteDisplayInvalidateSessionID:(id)arg1;	// IMP=0x00100000000b1c6d
- (void)remoteDisplayActivateSession:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b105b
- (void)remoteDisplayActivateServer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b0d8e
- (void)remoteDisplayActivateDiscovery:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b0932
- (void)updateErrorFlags:(unsigned long long)arg1;	// IMP=0x00100000000b0823
- (void)_promptForPasswordWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;	// IMP=0x00100000000b0770
- (void)hidePasswordWithFlags:(unsigned int)arg1;	// IMP=0x00100000000b06cd
- (void)showPassword:(id)arg1 flags:(unsigned int)arg2;	// IMP=0x00100000000b060e
- (void)_authCompletion:(id)arg1;	// IMP=0x00100000000b055b
- (void)_receivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4 sessionID:(id)arg5;	// IMP=0x00100000000b0277
- (void)_receivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3 sessionID:(id)arg4;	// IMP=0x00100000000b017f
- (void)sessionEndedWithID:(id)arg1 netCnx:(id)arg2;	// IMP=0x00100000000aff26
- (void)sessionStartWithID:(id)arg1 netCnx:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000af4a8
- (_Bool)netConnectionStartWithDevice:(id)arg1 session:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000aeab1
- (_Bool)_entitledAndReturnError:(id *)arg1;	// IMP=0x00100000000ae98b
- (void)connectionInvalidated;	// IMP=0x00100000000ae600
- (id)initWithDaemon:(id)arg1 xpcCnx:(id)arg2;	// IMP=0x00100000000ae567

@end
