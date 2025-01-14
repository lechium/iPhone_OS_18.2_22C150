//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TCCDAuthorizationRightState;

@interface TCCDSyncClientAccessAction
{
    int _clientType;	// 32 = 0x20
    NSString *_mainClientIdentifier;	// 40 = 0x28
    NSString *_replicaClientIdentifier;	// 48 = 0x30
    TCCDAuthorizationRightState *_authorizationRightState;	// 56 = 0x38
    TCCDAuthorizationRightState *_mainAuthorizationRightState;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000009177
- (void).cxx_destruct;	// IMP=0x00200000000098b2
@property(readonly) TCCDAuthorizationRightState *mainAuthorizationRightState; // @synthesize mainAuthorizationRightState=_mainAuthorizationRightState;
@property(readonly) TCCDAuthorizationRightState *authorizationRightState; // @synthesize authorizationRightState=_authorizationRightState;
@property(readonly) int clientType; // @synthesize clientType=_clientType;
@property(copy) NSString *replicaClientIdentifier; // @synthesize replicaClientIdentifier=_replicaClientIdentifier;
@property(copy) NSString *mainClientIdentifier; // @synthesize mainClientIdentifier=_mainClientIdentifier;
- (id)syncId;	// IMP=0x00100000000096c0
@property(readonly, copy) NSString *clientIdentifierForCurrentPlatform;
- (id)_description;	// IMP=0x00100000000095c5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000009478
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000009233
- (id)initWithServiceIdentifier:(id)arg1 mainClientIdentifier:(id)arg2 replicaClientIdentifier:(id)arg3 clientType:(int)arg4;	// IMP=0x001000000000917f

@end

