//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCController, GCDeviceBattery, NSString;
@protocol GCBatteryXPCProxyRemoteServerEndpointInterface, NSObject><NSCopying><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface GCBatteryXPCProxyClientEndpoint : NSObject
{
    GCController *_controller;	// 8 = 0x8
    id <GCBatteryXPCProxyRemoteServerEndpointInterface> _serverEndpoint;	// 16 = 0x10
    id _connectionInterruptionRegistration;	// 24 = 0x18
    id _connectionInvalidationRegistration;	// 32 = 0x20
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 40 = 0x28
    GCDeviceBattery *_battery;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000b062
@property(readonly, nonatomic) GCDeviceBattery *battery; // @synthesize battery=_battery;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (void)fetchObjectIdentifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000afe4
- (void)invalidateConnection;	// IMP=0x000000000000af40
- (void)refreshBattery;	// IMP=0x000000000000ae13
- (void)newBattery:(id)arg1;	// IMP=0x000000000000acf4
- (void)_remoteEndpointHasSetBattery:(id)arg1;	// IMP=0x000000000000abaf
- (void)setController:(id)arg1;	// IMP=0x000000000000ab9e
- (void)setRemoteEndpoint:(id)arg1 connection:(id)arg2;	// IMP=0x000000000000a950
- (id)init;	// IMP=0x000000000000a925
- (id)initWithIdentifier:(id)arg1 initialBattery:(id)arg2;	// IMP=0x000000000000a7e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
