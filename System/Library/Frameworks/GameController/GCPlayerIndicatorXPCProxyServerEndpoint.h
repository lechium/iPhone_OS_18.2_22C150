//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol GCPlayerIndicatorXPCProxyRemoteClientEndpointInterface, GCPlayerIndicatorXPCProxyServerEndpointDelegate, NSObject><NSCopying><NSSecureCoding, _GCControllerComponentDescription, _GCIPCEndpointConnection;

__attribute__((visibility("hidden")))
@interface GCPlayerIndicatorXPCProxyServerEndpoint : NSObject
{
    id <GCPlayerIndicatorXPCProxyRemoteClientEndpointInterface> _clientEndpoint;	// 8 = 0x8
    id <_GCIPCEndpointConnection> _connection;	// 16 = 0x10
    id _connectionInterruptionRegistration;	// 24 = 0x18
    id _connectionInvalidationRegistration;	// 32 = 0x20
    unsigned long long _pendingUpdates;	// 40 = 0x28
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 48 = 0x30
    long long _playerIndex;	// 56 = 0x38
    id <GCPlayerIndicatorXPCProxyServerEndpointDelegate> _delegate;	// 64 = 0x40
    id _userInfo;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000f9b23
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak id <GCPlayerIndicatorXPCProxyServerEndpointDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long playerIndex; // @synthesize playerIndex=_playerIndex;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (void)fetchObjectIdentifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f9a63
- (void)invalidateConnection;	// IMP=0x00000000000f99b0
- (void)fetchPlayerIndexWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f9906
- (void)newPlayerIndex:(long long)arg1;	// IMP=0x00000000000f9858
- (_Bool)acceptClient:(id)arg1 onConnection:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000f9474
- (void)invalidateClient;	// IMP=0x00000000000f93b3
@property(readonly, nonatomic) id <_GCControllerComponentDescription> receiverDescription;
- (id)initWithInitialValue:(long long)arg1;	// IMP=0x00000000000f9319
- (id)initWithIdentifier:(id)arg1 initialValue:(long long)arg2;	// IMP=0x00000000000f9299

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
