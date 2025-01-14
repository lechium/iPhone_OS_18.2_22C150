//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDAccountController, IDSDServiceController, IDSRegistrationConductor, IDSRegistrationController, IDSServerBag, IDSUserStore;
@protocol FTPasswordManager, IDSDRegistrationControl, IDSDSignInResponderDeviceSupport;

@interface IDSDSignInResponder : NSObject
{
    IDSDAccountController *_accountController;	// 8 = 0x8
    IDSDServiceController *_serviceController;	// 16 = 0x10
    id <FTPasswordManager> _passwordManager;	// 24 = 0x18
    IDSRegistrationConductor *_registrationConductor;	// 32 = 0x20
    id <IDSDSignInResponderDeviceSupport> _deviceSupport;	// 40 = 0x28
    id <IDSDRegistrationControl> _registrationControl;	// 48 = 0x30
    IDSRegistrationController *_registrationController;	// 56 = 0x38
    IDSUserStore *_userStore;	// 64 = 0x40
    IDSServerBag *_serverBag;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000026125e
@property(retain, nonatomic) IDSServerBag *serverBag; // @synthesize serverBag=_serverBag;
@property(readonly, nonatomic) IDSUserStore *userStore; // @synthesize userStore=_userStore;
@property(readonly, nonatomic) IDSRegistrationController *registrationController; // @synthesize registrationController=_registrationController;
@property(readonly, nonatomic) id <IDSDRegistrationControl> registrationControl; // @synthesize registrationControl=_registrationControl;
@property(readonly, nonatomic) id <IDSDSignInResponderDeviceSupport> deviceSupport; // @synthesize deviceSupport=_deviceSupport;
@property(readonly, nonatomic) IDSRegistrationConductor *registrationConductor; // @synthesize registrationConductor=_registrationConductor;
@property(readonly, nonatomic) id <FTPasswordManager> passwordManager; // @synthesize passwordManager=_passwordManager;
@property(readonly, nonatomic) IDSDServiceController *serviceController; // @synthesize serviceController=_serviceController;
@property(readonly, nonatomic) IDSDAccountController *accountController; // @synthesize accountController=_accountController;
- (void)_reregisterAndReProvisionForEDULoginWithUsername:(id)arg1;	// IMP=0x0010000000260f75
- (void)_modifyGameCenterAccountPropertiesForUsername:(id)arg1;	// IMP=0x0010000000260bd1
- (void)_modifyDomainWithUsername:(id)arg1;	// IMP=0x001000000026076b
- (void)_updateDomainWithUsername:(id)arg1 accountInfo:(id)arg2;	// IMP=0x001000000025fa7e
- (void)_signOutDomain:(long long)arg1;	// IMP=0x001000000025f390
- (void)_signInDomain:(long long)arg1 withUsername:(id)arg2 authToken:(id)arg3 password:(id)arg4 accountInfo:(id)arg5 accountStatus:(id)arg6 handles:(id)arg7;	// IMP=0x001000000025e05b
- (void)updateUserWithOldUsername:(id)arg1 newUsername:(id)arg2;	// IMP=0x001000000025dc18
- (void)gameCenterModifyForUserName:(id)arg1;	// IMP=0x001000000025dc06
- (void)gameCenterSignOut;	// IMP=0x001000000025dbef
- (void)gameCenterSignInWithUsername:(id)arg1 authToken:(id)arg2 password:(id)arg3 accountInfo:(id)arg4 accountStatus:(id)arg5 handles:(id)arg6;	// IMP=0x001000000025dbb6
- (void)iTunesSignOut;	// IMP=0x001000000025db9f
- (void)iTunesSignInWithUsername:(id)arg1 authToken:(id)arg2 password:(id)arg3 accountInfo:(id)arg4 accountStatus:(id)arg5 handles:(id)arg6;	// IMP=0x001000000025db66
- (void)iCloudSignOut;	// IMP=0x001000000025db4f
- (void)iCloudModifyForUsername:(id)arg1;	// IMP=0x001000000025db3d
- (void);	// IMP=0x001000000025db2b
- (void)iCloudSignInWithUsername:(id)arg1 authToken:(id)arg2 password:(id)arg3 accountInfo:(id)arg4 accountStatus:(id)arg5 handles:(id)arg6;	// IMP=0x001000000025daf2
- (_Bool)_shouldServiceBeDisabledOnSignOut:(id)arg1 forDomain:(long long)arg2;	// IMP=0x001000000025da07
- (_Bool)_shouldServiceBeEnabledOnSignIn:(id)arg1 forDomain:(long long)arg2;	// IMP=0x001000000025d91c
- (_Bool)_gameCenterShouldSigninOnModify;	// IMP=0x001000000025d88c
- (id)accountStore;	// IMP=0x001000000025d864
- (id)initWithAccountController:(id)arg1 serviceController:(id)arg2 passwordManager:(id)arg3 registrationConductor:(id)arg4 deviceSupport:(id)arg5 registrationControl:(id)arg6 registrationController:(id)arg7 userStore:(id)arg8;	// IMP=0x001000000025d6cd
- (id)initWithUserStore:(id)arg1;	// IMP=0x001000000025d54d

@end

