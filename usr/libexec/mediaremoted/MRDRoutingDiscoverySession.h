//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/MRAVRoutingDiscoverySession.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MRDRoutingDiscoverySession : MRAVRoutingDiscoverySession
{
    unsigned int _discoveryMode;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workerQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000085389
- (_Bool)onlyDiscoversBluetoothDevices;	// IMP=0x0010000000085381
- (void)setOnlyDiscoversBluetoothDevices:(_Bool)arg1;	// IMP=0x001000000008537b
- (id)routingContextUID;	// IMP=0x0010000000085373
- (void)setRoutingContextUID:(id)arg1;	// IMP=0x001000000008536d
- (unsigned int)targetAudioSessionID;	// IMP=0x0010000000085365
- (void)setTargetAudioSessionID:(unsigned int)arg1;	// IMP=0x001000000008535f
- (_Bool)devicePresenceDetected;	// IMP=0x0010000000085317
- (id)availableOutputDevices;	// IMP=0x0010000000085305
- (id)availableEndpoints;	// IMP=0x0010000000085248
- (unsigned int)endpointFeatures;	// IMP=0x001000000008523d
- (void)hostedRoutingController:(id)arg1 outputDevicesDidChange:(id)arg2 forFeature:(unsigned int)arg3;	// IMP=0x0010000000085228
- (void)hostedRoutingController:(id)arg1 endpointsDidChange:(id)arg2;	// IMP=0x001000000008516c
@property(nonatomic) unsigned int discoveryMode;
@property(readonly, nonatomic) NSString *clientIdentifier;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0010000000084be9
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00100000000849ce

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
