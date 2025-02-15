//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASAuthorizationController, NSDictionary, NSString;
@protocol MABrainSoftwareUpdateExtensibleSSOAuthenticatorDelegate;

__attribute__((visibility("hidden")))
@interface SoftwareUpdateExtensibleSSOAuthenticator : NSObject
{
    id <MABrainSoftwareUpdateExtensibleSSOAuthenticatorDelegate> _delegate;	// 8 = 0x8
    NSString *_appIdentifier;	// 16 = 0x10
    NSString *_envIdentifier;	// 24 = 0x18
    NSString *_username;	// 32 = 0x20
    NSString *_interactivity;	// 40 = 0x28
    NSDictionary *_otherParameters;	// 48 = 0x30
    ASAuthorizationController *_authenticationController;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000003854
@property(retain, nonatomic) ASAuthorizationController *authenticationController; // @synthesize authenticationController=_authenticationController;
@property(retain, nonatomic) NSDictionary *otherParameters; // @synthesize otherParameters=_otherParameters;
@property(retain, nonatomic) NSString *interactivity; // @synthesize interactivity=_interactivity;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *envIdentifier; // @synthesize envIdentifier=_envIdentifier;
@property(retain, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
@property(nonatomic) __weak id <MABrainSoftwareUpdateExtensibleSSOAuthenticatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)authorizationController:(id)arg1 didCompleteWithError:(id)arg2;	// IMP=0x0000000000003694
- (void)authorizationController:(id)arg1 didCompleteWithAuthorization:(id)arg2;	// IMP=0x0000000000003514
- (_Bool)authenticationSupported;	// IMP=0x0000000000003425
- (void)authenticate;	// IMP=0x0000000000002c7c
- (id)copyQueryItemsWithParameters:(id)arg1;	// IMP=0x0000000000002ad1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

