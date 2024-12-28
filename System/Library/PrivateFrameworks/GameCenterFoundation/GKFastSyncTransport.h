//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKTransportContext, MISSING_TYPE, NSData;

@interface GKFastSyncTransport : NSObject
{
    MISSING_TYPE *clientDelegate;	// 8 = 0x8
    MISSING_TYPE *_lobbyChannel;	// 16 = 0x10
    MISSING_TYPE *_gameChannel;	// 24 = 0x18
    MISSING_TYPE *reporter;	// 32 = 0x20
    MISSING_TYPE *daemonProxy;	// 40 = 0x28
    MISSING_TYPE *gameChannelMigrationTask;	// 48 = 0x30
    MISSING_TYPE *lobbyChannelMigrationTask;	// 56 = 0x38
    MISSING_TYPE *newChannelObservationTask;	// 64 = 0x40
    MISSING_TYPE *_localParticipantHandle;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000012ce36
- (id)init;	// IMP=0x000000000012ce00
- (id)voiceChatWithName:(id)arg1 players:(id)arg2 transportContext:(id)arg3;	// IMP=0x000000000012cd27
- (void)chooseBestHostingPlayerWithTransportContext:(GKTransportContext *)arg1 completionHandler:(void (^)(NSString *))arg2;	// IMP=0x000000000012ca8b
- (_Bool)sendScopedDataToAll:(id)arg1 dataMode:(long long)arg2 dataScope:(long long)arg3 transportContext:(id)arg4 error:(id *)arg5;	// IMP=0x000000000012b370
- (_Bool)sendScopedData:(id)arg1 toPlayers:(id)arg2 dataMode:(long long)arg3 dataScope:(long long)arg4 transportContext:(id)arg5 error:(id *)arg6;	// IMP=0x000000000012b235
- (void)disconnectAllWithTransportContext:(GKTransportContext *)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x000000000012a5d8
- (void)connectToPlayersWithTransportContext:(GKTransportContext *)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x0000000000129b2d
- (id)initWithClientDelegate:(id)arg1 reporter:(id)arg2 daemonProxy:(id)arg3;	// IMP=0x00000000001279b6
- (void)preemptRelay:(id)arg1;	// IMP=0x000000000013151f
- (void)handleRelayPushData:(id)arg1 onlyIfPreemptive:(_Bool)arg2;	// IMP=0x00000000001314eb
- (void)acceptRelayResponse:(id)arg1 playerID:(id)arg2;	// IMP=0x0000000000131498
- (void)localConnectionDataWithCompletionHandler:(void (^)(NSData *, NSError *))arg1;	// IMP=0x000000000013128d
- (id)enrichPeerDictionariesForPlayersConnection:(id)arg1;	// IMP=0x000000000013109a
- (void)connectToNearbyPlayer:(id)arg1 withConnectionData:(id)arg2;	// IMP=0x0000000000130f4a
- (_Bool)connectToGuestPlayer:(id)arg1 withHostPlayer:(id)arg2;	// IMP=0x0000000000130e26
@property(nonatomic, readonly) NSData *nearbyConnectionData;

@end
