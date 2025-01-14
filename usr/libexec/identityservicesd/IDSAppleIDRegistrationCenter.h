//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol FTPasswordManager, IDSAppleIDRegistrationCenterMessageDelivery;

@interface IDSAppleIDRegistrationCenter : NSObject
{
    NSMutableDictionary *_queues;	// 8 = 0x8
    NSMutableArray *_handlers;	// 16 = 0x10
    id <IDSAppleIDRegistrationCenterMessageDelivery> _messageDelivery;	// 24 = 0x18
    id <FTPasswordManager> _passwordManager;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0020000000452d4c
- (void).cxx_destruct;	// IMP=0x002000000045816b
- (void)removeListener:(id)arg1;	// IMP=0x001000000045811e
- (void)addListener:(id)arg1;	// IMP=0x001000000045809c
- (void)cancelActionsForRegistrationInfo:(id)arg1;	// IMP=0x0010000000457fec
- (_Bool)authenticateRegistration:(id)arg1;	// IMP=0x0010000000457f16
- (_Bool)authenticateRegistration:(id)arg1 requireSilentAuth:(_Bool)arg2;	// IMP=0x0010000000457e35
- (_Bool)authenticateRegistration:(id)arg1 forceNewToken:(_Bool)arg2;	// IMP=0x0010000000457d53
- (_Bool)authenticateRegistration:(id)arg1 forceNewToken:(_Bool)arg2 requireSilentAuth:(_Bool)arg3;	// IMP=0x0010000000457c6d
- (_Bool)authenticateRegistration:(id)arg1 forceRenewal:(_Bool)arg2 requireSilentAuth:(_Bool)arg3;	// IMP=0x0010000000457b84
- (_Bool)validateRegion:(id)arg1 phoneNumber:(id)arg2 forRegistration:(id)arg3;	// IMP=0x0010000000457a66
- (_Bool)queryInitialInvitationContextForRegistration:(id)arg1;	// IMP=0x0010000000457992
- (_Bool)_queryInitialInvitationContextForRegistration:(id)arg1;	// IMP=0x00100000004576c8
- (_Bool)_validateRegionID:(id)arg1 phoneNumber:(id)arg2 registration:(id)arg3;	// IMP=0x0010000000457381
- (_Bool)_registrationNeedsAuthentication:(id)arg1;	// IMP=0x00100000004572e6
- (_Bool)_registrationIsAuthenticating:(id)arg1;	// IMP=0x0010000000457265
- (_Bool)_sendAuthenticationRequest:(id)arg1 forceNew:(_Bool)arg2 forceRenewal:(_Bool)arg3 failIfNotSilent:(_Bool)arg4;	// IMP=0x0010000000456e7e
- (_Bool)_sendAuthenticationRequest:(id)arg1 forceNew:(_Bool)arg2 failIfNotSilent:(_Bool)arg3;	// IMP=0x0010000000456e66
- (_Bool)_sendAuthenticationRequest:(id)arg1 forceNew:(_Bool)arg2;	// IMP=0x0010000000456e4e
- (void)_fetchTokenForRegistrationInfo:(id)arg1 failIfNotSilent:(_Bool)arg2 failureBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000456835
- (void)_renewTokenForRegistrationInfo:(id)arg1 forceRenewal:(_Bool)arg2 failIfNotSilent:(_Bool)arg3;	// IMP=0x0010000000456288
- (void)_noteSuccessfulToken:(id)arg1 profileID:(id)arg2 selfID:(id)arg3 forRegistrationInfo:(id)arg4 wasFetched:(_Bool)arg5;	// IMP=0x0010000000455ee3
- (void)_processRegionValidationMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(long long)arg3 resultDictionary:(id)arg4;	// IMP=0x0010000000455beb
- (void)_processDefaultInvitationContextMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(long long)arg3 resultDictionary:(id)arg4;	// IMP=0x0010000000455954
- (void)_postUserNotificationWithTitle:(id)arg1 message:(id)arg2 identifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000004557b5
- (void)_notifyAuthenticationSuccess:(id)arg1;	// IMP=0x00100000004553cc
- (void)_notifyAuthenticationFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 info:(id)arg5;	// IMP=0x0010000000454d4f
- (void)_notifyAuthenticating:(id)arg1;	// IMP=0x0010000000454a79
- (void)_notifyRegionValidationFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 info:(id)arg5;	// IMP=0x00100000004542b1
- (void)_notifyRegionValidationSuccess:(id)arg1 regionID:(id)arg2 phoneNumber:(id)arg3 context:(id)arg4 verified:(_Bool)arg5;	// IMP=0x0010000000453d3e
- (void)_notifyInitialRegionQuerySuccess:(id)arg1;	// IMP=0x0010000000453a58
- (void)_removeMessageForRegistration:(id)arg1 fromQueueForKey:(id)arg2;	// IMP=0x001000000045378b
- (_Bool)_haveQueuedMessageForRegistration:(id)arg1 inQueueForKey:(id)arg2;	// IMP=0x0010000000453514
- (void)_serviceQueueForKey:(id)arg1;	// IMP=0x00100000004531a9
- (void)_setQueue:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000004530f1
- (id)_queueForKey:(id)arg1;	// IMP=0x001000000045302d
- (void)dealloc;	// IMP=0x0010000000452f6b
- (id)init;	// IMP=0x0010000000452eab
- (id)initWithMessageDelivery:(id)arg1 passwordManager:(id)arg2;	// IMP=0x0010000000452da1

@end

