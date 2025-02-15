//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCDeviceAdaptiveTriggersPayload, NSArray, NSString;
@protocol GCAdaptiveTriggersXPCProxyRemoteClientEndpointInterface, GCAdaptiveTriggersXPCProxyServerEndpointDelegate, NSObject><NSCopying><NSSecureCoding, _GCControllerComponentDescription, _GCIPCEndpointConnection;

__attribute__((visibility("hidden")))
@interface GCAdaptiveTriggersXPCProxyServerEndpoint : NSObject
{
    id <GCAdaptiveTriggersXPCProxyRemoteClientEndpointInterface> _clientEndpoint;	// 8 = 0x8
    id <_GCIPCEndpointConnection> _connection;	// 16 = 0x10
    id _connectionInterruptionRegistration;	// 24 = 0x18
    id _connectionInvalidationRegistration;	// 32 = 0x20
    unsigned long long _pendingUpdates;	// 40 = 0x28
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 48 = 0x30
    GCDeviceAdaptiveTriggersPayload *_leftTrigger;	// 56 = 0x38
    GCDeviceAdaptiveTriggersPayload *_rightTrigger;	// 64 = 0x40
    NSArray *_statuses;	// 72 = 0x48
    id <GCAdaptiveTriggersXPCProxyServerEndpointDelegate> _delegate;	// 80 = 0x50
    id _userInfo;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000bd7f9
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak id <GCAdaptiveTriggersXPCProxyServerEndpointDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *statuses; // @synthesize statuses=_statuses;
@property(retain, nonatomic) GCDeviceAdaptiveTriggersPayload *rightTrigger; // @synthesize rightTrigger=_rightTrigger;
@property(retain, nonatomic) GCDeviceAdaptiveTriggersPayload *leftTrigger; // @synthesize leftTrigger=_leftTrigger;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (void)fetchObjectIdentifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bd703
- (void)invalidateConnection;	// IMP=0x00000000000bd650
- (void)newAdaptiveTriggerPayload:(id)arg1 index:(int)arg2;	// IMP=0x00000000000bd552
- (void)fetchStatusesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bd4a8
- (_Bool)acceptClient:(id)arg1 onConnection:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000bd08e
- (void)invalidateClient;	// IMP=0x00000000000bcfcd
@property(readonly, nonatomic) id <_GCControllerComponentDescription> receiverDescription;
- (id)initWithInitialStatuses:(id)arg1;	// IMP=0x00000000000bcf11
- (id)initWithIdentifier:(id)arg1 initialStatuses:(id)arg2;	// IMP=0x00000000000bce02

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

