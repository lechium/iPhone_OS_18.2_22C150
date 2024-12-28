//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCController, GCSProfile, NSString;
@protocol GCSettingsXPCProxyRemoteServerEndpointInterface, NSObject><NSCopying><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface GCSettingsXPCProxyClientEndpoint : NSObject
{
    GCController *_controller;	// 8 = 0x8
    id <GCSettingsXPCProxyRemoteServerEndpointInterface> _serverEndpoint;	// 16 = 0x10
    id _connectionInterruptionRegistration;	// 24 = 0x18
    id _connectionInvalidationRegistration;	// 32 = 0x20
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 40 = 0x28
    GCSProfile *_settingsProfile;	// 48 = 0x30
    CDUnknownBlockType _changedHandler;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000008f9d2
@property(copy, nonatomic) CDUnknownBlockType changedHandler; // @synthesize changedHandler=_changedHandler;
@property(readonly, nonatomic) GCSProfile *settingsProfile; // @synthesize settingsProfile=_settingsProfile;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (void)fetchObjectIdentifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000008f93b
- (void)invalidateConnection;	// IMP=0x000000000008f897
- (void)refreshProfile;	// IMP=0x000000000008f778
- (void)newProfile:(id)arg1;	// IMP=0x000000000008f664
- (void)_remoteEndpointHasSetProfile:(id)arg1;	// IMP=0x000000000008f534
- (void)setController:(id)arg1;	// IMP=0x000000000008f523
- (void)setRemoteEndpoint:(id)arg1 connection:(id)arg2;	// IMP=0x000000000008f30e
- (id)init;	// IMP=0x000000000008f2e3
- (id)initWithIdentifier:(id)arg1 initialValueForProfile:(id)arg2;	// IMP=0x000000000008f1a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
