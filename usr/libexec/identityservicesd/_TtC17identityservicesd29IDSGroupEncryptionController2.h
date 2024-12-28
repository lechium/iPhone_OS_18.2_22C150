//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSPushToken, IDSRealTimeEncryptionIdentity, MISSING_TYPE, NSData, NSDictionary, _TtC17identityservicesd36IDSGroupEncryptionIdentityController;
@protocol _TtP17identityservicesd19IDSDSessionProvider_, _TtP17identityservicesd27IDSGroupPushHandlerProtocol_;

@interface _TtC17identityservicesd29IDSGroupEncryptionController2 : NSObject
{
    MISSING_TYPE *l;	// 1936941420 = 0x7373616c
    MISSING_TYPE *q;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *groupsLock;	// 1871696653 = 0x6f8fd30d
    MISSING_TYPE *publicIdentitiesLock;	// 2793029005 = 0xa67a3d8d
    MISSING_TYPE *delegate;	// 0 = 0x0
    MISSING_TYPE *config;	// 7835483 = 0x778f5b
    MISSING_TYPE *identityController;	// 16417 = 0x4021
    MISSING_TYPE *sessionProvider;	// 7835483 = 0x778f5b
    MISSING_TYPE *pushHandler;	// 0 = 0x0
    MISSING_TYPE *cryptoHandler;	// 2 = 0x2
}

- (void).cxx_destruct;	// IMP=0x004000000057b890
- (id)init;	// IMP=0x001000000057b830
@property(nonatomic, readonly) IDSRealTimeEncryptionIdentity *objcPreviousIdentity;
@property(nonatomic, readonly) IDSRealTimeEncryptionIdentity *objcIdentity;
@property(nonatomic, readonly) IDSRealTimeEncryptionIdentity *objcPreviousPublicIdentity;
@property(nonatomic, readonly) IDSRealTimeEncryptionIdentity *objcPublicIdentity;
- (void)cleanUpGroupForID:(id)arg1 after:(double)arg2;	// IMP=0x001000000057b170
- (id)objcPublicIdentityForPushToken:(id)arg1;	// IMP=0x001000000057ab30
- (void)receivePublicKey:(id)arg1 forPushToken:(id)arg2 fromURI:(id)arg3 groupID:(id)arg4 sessionID:(id)arg5 serverDate:(id)arg6 wrapMode:(long long)arg7;	// IMP=0x001000000057a820
- (void)receivePublicIdentity:(id)arg1;	// IMP=0x0010000000579a00
- (id)groupForID:(id)arg1;	// IMP=0x00100000005792a0
- (id)initWithDelegate:(id)arg1 config:(id)arg2 sessionProvider:(id)arg3 identityController:(id)arg4 pushHandler:(id)arg5;	// IMP=0x00100000005790e0
@property(nonatomic, readonly) NSDictionary *publicKeys;
@property(nonatomic, readonly) NSData *previousPublicIdentityData;
@property(nonatomic, readonly) struct __SecKey *previousPublicIdentityKey;
@property(nonatomic, readonly) struct __SecKey *previousFullIdentityKey;
@property(nonatomic, readonly) NSData *publicIdentityData;
@property(nonatomic, readonly) struct __SecKey *publicIdentityKey;
@property(nonatomic, readonly) struct __SecKey *fullIdentityKey;
@property(nonatomic, readonly) long long publicIdentityWrapMode;
@property(nonatomic, readonly) IDSPushToken *pushToken;
@property(nonatomic, readonly) id <_TtP17identityservicesd27IDSGroupPushHandlerProtocol_> pushHandler; // @synthesize pushHandler;
@property(nonatomic, readonly) id <_TtP17identityservicesd19IDSDSessionProvider_> sessionProvider; // @synthesize sessionProvider;
@property(nonatomic, readonly) _TtC17identityservicesd36IDSGroupEncryptionIdentityController *identityController; // @synthesize identityController;

@end
