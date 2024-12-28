//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCController, GCDeviceLight, NSString;
@protocol GCLightXPCProxyRemoteServerEndpointInterface, NSObject><NSCopying><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface GCLightXPCProxyClientEndpoint : NSObject
{
    GCController *_controller;	// 8 = 0x8
    id <GCLightXPCProxyRemoteServerEndpointInterface> _serverEndpoint;	// 16 = 0x10
    id _connectionInterruptionRegistration;	// 24 = 0x18
    id _connectionInvalidationRegistration;	// 32 = 0x20
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 40 = 0x28
    GCDeviceLight *_light;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000007798b
@property(readonly, nonatomic) GCDeviceLight *light; // @synthesize light=_light;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (void)fetchObjectIdentifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000007790d
- (void)invalidateConnection;	// IMP=0x0000000000077869
- (void)refreshLight;	// IMP=0x000000000007773c
- (void)newLight:(id)arg1;	// IMP=0x000000000007761d
- (void)_remoteEndpointHasSetLight:(id)arg1;	// IMP=0x00000000000774ca
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000007747c
- (void)setController:(id)arg1;	// IMP=0x000000000007746b
- (void)setRemoteEndpoint:(id)arg1 connection:(id)arg2;	// IMP=0x000000000007723d
- (void)stopObservingChangesForLight:(id)arg1;	// IMP=0x000000000007721b
- (void)observeChangesForLight:(id)arg1;	// IMP=0x00000000000771f3
- (id)init;	// IMP=0x00000000000771c8
- (id)initWithIdentifier:(id)arg1 initialLight:(id)arg2;	// IMP=0x0000000000077070

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
