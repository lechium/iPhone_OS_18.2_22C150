//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDMediaRemoteUIService, MRDPairingHandler, MRDTaskAssertion, MRPlaybackQueueClient, MRPlayerPath, MRXPCConnection, MRXPCConnectionMonitor, NSArray, NSData, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString;
@protocol MRDXPCMessageHandling, OS_dispatch_queue, OS_dispatch_source;

@interface MRDMediaRemoteClient : NSObject
{
    NSObject<OS_dispatch_source> *_source;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workerQueue;	// 24 = 0x18
    NSArray *_applicationPickedRoutes;	// 32 = 0x20
    NSString *_bundleIdentifier;	// 40 = 0x28
    NSString *_processName;	// 48 = 0x30
    NSMutableArray *_assertions;	// 56 = 0x38
    NSOperationQueue *_relayingMessages;	// 64 = 0x40
    unsigned long long _entitlements;	// 72 = 0x48
    NSMutableDictionary *_pendingPlaybackSessionMigrateEvents;	// 80 = 0x50
    NSMutableArray *_subscribedWakingPlayerPaths;	// 88 = 0x58
    MRXPCConnectionMonitor *_connectionMonitor;	// 96 = 0x60
    _Bool _areNotificationsPaused;	// 104 = 0x68
    NSMutableArray *_queuedNotifications;	// 112 = 0x70
    NSMutableDictionary *_criticalSectionAssertions;	// 120 = 0x78
    _Bool _isActive;	// 128 = 0x80
    _Bool _keepAlive;	// 129 = 0x81
    _Bool _hasRequestedLegacyNowPlayingInfo;	// 130 = 0x82
    _Bool _hasRequestedSupportedCommands;	// 131 = 0x83
    _Bool _declaringAirplayActive;	// 132 = 0x84
    unsigned int _hardwareRemoteBehavior;	// 136 = 0x88
    unsigned int _routeDiscoveryMode;	// 140 = 0x8c
    unsigned int _outputDeviceDiscoveryMode;	// 144 = 0x90
    id <MRDXPCMessageHandling> _messageHandler;	// 152 = 0x98
    MRXPCConnection *_connection;	// 160 = 0xa0
    MRDTaskAssertion *_currentTaskAssertion;	// 168 = 0xa8
    unsigned long long _routeDiscoveryCount;	// 176 = 0xb0
    MRDMediaRemoteUIService *_remoteUIService;	// 184 = 0xb8
    MRDPairingHandler *_pairingHandler;	// 192 = 0xc0
    MRPlayerPath *_nowPlayingAirPlaySession;	// 200 = 0xc8
    MRPlaybackQueueClient *_playbackQueueRequests;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x0020000000172a68
@property(readonly, nonatomic) MRPlaybackQueueClient *playbackQueueRequests; // @synthesize playbackQueueRequests=_playbackQueueRequests;
@property(readonly, nonatomic) unsigned long long entitlements; // @synthesize entitlements=_entitlements;
@property(retain, nonatomic) MRPlayerPath *nowPlayingAirPlaySession; // @synthesize nowPlayingAirPlaySession=_nowPlayingAirPlaySession;
@property(nonatomic) _Bool declaringAirplayActive; // @synthesize declaringAirplayActive=_declaringAirplayActive;
@property(nonatomic) _Bool hasRequestedSupportedCommands; // @synthesize hasRequestedSupportedCommands=_hasRequestedSupportedCommands;
@property(nonatomic) _Bool hasRequestedLegacyNowPlayingInfo; // @synthesize hasRequestedLegacyNowPlayingInfo=_hasRequestedLegacyNowPlayingInfo;
@property(nonatomic) _Bool keepAlive; // @synthesize keepAlive=_keepAlive;
@property(readonly, nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(retain, nonatomic) MRDPairingHandler *pairingHandler; // @synthesize pairingHandler=_pairingHandler;
@property(retain, nonatomic) MRDMediaRemoteUIService *remoteUIService; // @synthesize remoteUIService=_remoteUIService;
@property(nonatomic) unsigned int outputDeviceDiscoveryMode; // @synthesize outputDeviceDiscoveryMode=_outputDeviceDiscoveryMode;
@property(nonatomic) unsigned int routeDiscoveryMode; // @synthesize routeDiscoveryMode=_routeDiscoveryMode;
@property(readonly, nonatomic) unsigned long long routeDiscoveryCount; // @synthesize routeDiscoveryCount=_routeDiscoveryCount;
@property(nonatomic) unsigned int hardwareRemoteBehavior; // @synthesize hardwareRemoteBehavior=_hardwareRemoteBehavior;
@property(retain, nonatomic) MRDTaskAssertion *currentTaskAssertion; // @synthesize currentTaskAssertion=_currentTaskAssertion;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) MRXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <MRDXPCMessageHandling> messageHandler; // @synthesize messageHandler=_messageHandler;
- (void)_postNotification:(id)arg1;	// IMP=0x0010000000172787
- (void)_resumeConnection;	// IMP=0x00100000001722c5
- (id)_runAssertionName;	// IMP=0x001000000017228b
- (void)_invalidate;	// IMP=0x0010000000172231
- (void)_handleXPCMessage:(id)arg1;	// IMP=0x00100000001721bc
- (void)connectionDidResume:(id)arg1;	// IMP=0x00100000001721aa
- (id)createNowPlayingClient;	// IMP=0x001000000017212f
- (void)_relayXPCMessage:(id)arg1 andReply:(_Bool)arg2 resultCallback:(CDUnknownBlockType)arg3;	// IMP=0x0010000000171a6d
- (void)relayXPCMessage:(id)arg1 andReply:(_Bool)arg2 resultCallback:(CDUnknownBlockType)arg3;	// IMP=0x0010000000171872
- (void)relayXPCMessage:(id)arg1 andReply:(_Bool)arg2;	// IMP=0x001000000017185d
- (void)sendRemoteControlCommand:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000017012b
- (void)invalidateCriticalSectionAssertionForRequestID:(id)arg1;	// IMP=0x001000000016fec4
- (void)takeCriticalSectionAssertionForRequestID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000016fab2
- (_Bool)takeAssertionAndBlessForReason:(id)arg1;	// IMP=0x001000000016f9d8
- (_Bool)takeAssertion:(long long)arg1 forReason:(id)arg2 duration:(double)arg3;	// IMP=0x001000000016f42f
- (void)setWantsAssertionsForNotificationsWithPlayerPath:(id)arg1;	// IMP=0x001000000016f36f
- (_Bool)notificationRequiresTaskAssertionForPlayerPath:(id)arg1;	// IMP=0x001000000016f2a2
- (void)resumeNotifications;	// IMP=0x001000000016f04c
- (void)pauseNotifications;	// IMP=0x001000000016efe0
- (void)postNotification:(id)arg1;	// IMP=0x001000000016ed15
- (_Bool)isAllowedAccessToDataFromPlayerPath:(id)arg1;	// IMP=0x001000000016ecb3
- (_Bool)_isAllowedAccessToDataFromPlayerPath:(id)arg1;	// IMP=0x001000000016ecab
- (void)flushPendingPlaybackSessionMigrateEvents:(CDUnknownBlockType)arg1;	// IMP=0x001000000016e9c9
- (_Bool)removePendingPlaybackSessionMigrateEvent:(id)arg1;	// IMP=0x001000000016e830
- (void)addPendingPlaybackSessionMigrateEvent:(id)arg1 playerPath:(id)arg2;	// IMP=0x001000000016e6c6
- (_Bool)isEntitledFor:(unsigned long long)arg1;	// IMP=0x001000000016e6a4
@property(readonly, nonatomic, getter=isInCriticalSection) _Bool inCriticalSection;
@property(readonly, nonatomic) _Bool isMediaRemoteDaemon;
@property(readonly, nonatomic) _Bool canBeNowPlaying;
@property(copy, nonatomic) NSArray *applicationPickedRoutes;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000016ddb6
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *processName;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSData *auditToken;
@property(readonly, nonatomic) CDStruct_6ad76789 realToken;
@property(readonly, nonatomic) unsigned int euid;
@property(readonly, nonatomic) int pid;
- (id)initWithConnection:(id)arg1;	// IMP=0x001000000016c934

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

