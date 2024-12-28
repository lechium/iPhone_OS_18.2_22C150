//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BridgePreferences/BPSListController.h>

@class ACAccount, ACAccountStore, AKDevice, COSAppleIDAuthController, MISSING_TYPE, NRDevice, NSSManager, NSString, UITextField;
@protocol NSObject;

@interface COSAppleIDController : BPSListController
{
    _Bool _sameAccountForAllAccountTypes;	// 184 = 0xb8
    _Bool _sameiCloudAndiMessageAppleID;	// 185 = 0xb9
    _Bool _sameiCloudAndFaceTimeAppleID;	// 186 = 0xba
    _Bool _sameiCloudAndiTunesStoreAppleID;	// 187 = 0xbb
    _Bool _sameiMessageAndFaceTimeAppleID;	// 188 = 0xbc
    MISSING_TYPE *_watchSupportsFaceTime;	// 189 = 0xbd
    _Bool _watchSupportsiTunesStore;	// 190 = 0xbe
    _Bool _hasFetchedAccountsInfo;	// 191 = 0xbf
    _Bool _watchIsSignedInToiCloud;	// 192 = 0xc0
    _Bool _watchIsSignedInToiMessage;	// 193 = 0xc1
    _Bool _watchIsSignedInToFaceTime;	// 194 = 0xc2
    _Bool _watchIsSignedInToiTunesStore;	// 195 = 0xc3
    _Bool _signingInToiCloud;	// 196 = 0xc4
    _Bool _signingInToiMessage;	// 197 = 0xc5
    _Bool _signingInToFaceTime;	// 198 = 0xc6
    _Bool _signingInToiTunesStore;	// 199 = 0xc7
    _Bool _recoveringCredentialsForiCloud;	// 200 = 0xc8
    _Bool _recoveringCredentialsForiMessage;	// 201 = 0xc9
    _Bool _recoveringCredentialsForFaceTime;	// 202 = 0xca
    _Bool _recoveringCredentialsForiTunesStore;	// 203 = 0xcb
    _Bool _displayiCloudPasswordTextField;	// 204 = 0xcc
    _Bool _iCloudInteractiveAuthRequired;	// 205 = 0xcd
    _Bool _displayiMessagePasswordTextField;	// 206 = 0xce
    _Bool _iMessageInteractiveAuthRequired;	// 207 = 0xcf
    _Bool _displayFaceTimePasswordTextField;	// 208 = 0xd0
    _Bool _facetimeInteractiveAuthRequired;	// 209 = 0xd1
    _Bool _displayiTunesStorePasswordTextField;	// 210 = 0xd2
    _Bool _iTunesInteractiveAuthRequired;	// 211 = 0xd3
    NRDevice *_pairedWatch;	// 216 = 0xd8
    NSSManager *_nssManager;	// 224 = 0xe0
    ACAccountStore *_accountStore;	// 232 = 0xe8
    ACAccount *_iCloudAccount;	// 240 = 0xf0
    ACAccount *_iCloudIDMSAccount;	// 248 = 0xf8
    ACAccount *_iMessageAccount;	// 256 = 0x100
    ACAccount *_iMessageIDMSAccount;	// 264 = 0x108
    ACAccount *_faceTimeAccount;	// 272 = 0x110
    ACAccount *_faceTimeIDMSAccount;	// 280 = 0x118
    ACAccount *_iTunesStoreAccount;	// 288 = 0x120
    ACAccount *_iTunesIDMSAccount;	// 296 = 0x128
    AKDevice *_watchAKDevice;	// 304 = 0x130
    COSAppleIDAuthController *_authController;	// 312 = 0x138
    UITextField *_iCloudPasswordTextField;	// 320 = 0x140
    id <NSObject> _iCloudPasswordTextFieldTextDidChangeObserver;	// 328 = 0x148
    UITextField *_iMessagePasswordTextField;	// 336 = 0x150
    id <NSObject> _iMessagePasswordTextFieldTextDidChangeObserver;	// 344 = 0x158
    UITextField *_faceTimePasswordTextField;	// 352 = 0x160
    id <NSObject> _faceTimePasswordTextFieldTextDidChangeObserver;	// 360 = 0x168
    UITextField *_iTunesStorePasswordTextField;	// 368 = 0x170
    id <NSObject> _iTunesStorePasswordTextFieldTextDidChangeObserver;	// 376 = 0x178
}

- (void).cxx_destruct;	// IMP=0x0020000000031b2f
@property(retain, nonatomic) id <NSObject> iTunesStorePasswordTextFieldTextDidChangeObserver; // @synthesize iTunesStorePasswordTextFieldTextDidChangeObserver=_iTunesStorePasswordTextFieldTextDidChangeObserver;
@property(retain, nonatomic) UITextField *iTunesStorePasswordTextField; // @synthesize iTunesStorePasswordTextField=_iTunesStorePasswordTextField;
@property(retain, nonatomic) id <NSObject> faceTimePasswordTextFieldTextDidChangeObserver; // @synthesize faceTimePasswordTextFieldTextDidChangeObserver=_faceTimePasswordTextFieldTextDidChangeObserver;
@property(retain, nonatomic) UITextField *faceTimePasswordTextField; // @synthesize faceTimePasswordTextField=_faceTimePasswordTextField;
@property(retain, nonatomic) id <NSObject> iMessagePasswordTextFieldTextDidChangeObserver; // @synthesize iMessagePasswordTextFieldTextDidChangeObserver=_iMessagePasswordTextFieldTextDidChangeObserver;
@property(retain, nonatomic) UITextField *iMessagePasswordTextField; // @synthesize iMessagePasswordTextField=_iMessagePasswordTextField;
@property(retain, nonatomic) id <NSObject> iCloudPasswordTextFieldTextDidChangeObserver; // @synthesize iCloudPasswordTextFieldTextDidChangeObserver=_iCloudPasswordTextFieldTextDidChangeObserver;
@property(retain, nonatomic) UITextField *iCloudPasswordTextField; // @synthesize iCloudPasswordTextField=_iCloudPasswordTextField;
@property(retain, nonatomic) COSAppleIDAuthController *authController; // @synthesize authController=_authController;
@property(nonatomic) _Bool iTunesInteractiveAuthRequired; // @synthesize iTunesInteractiveAuthRequired=_iTunesInteractiveAuthRequired;
@property(nonatomic) _Bool displayiTunesStorePasswordTextField; // @synthesize displayiTunesStorePasswordTextField=_displayiTunesStorePasswordTextField;
@property(nonatomic) _Bool facetimeInteractiveAuthRequired; // @synthesize facetimeInteractiveAuthRequired=_facetimeInteractiveAuthRequired;
@property(nonatomic) _Bool displayFaceTimePasswordTextField; // @synthesize displayFaceTimePasswordTextField=_displayFaceTimePasswordTextField;
@property(nonatomic) _Bool iMessageInteractiveAuthRequired; // @synthesize iMessageInteractiveAuthRequired=_iMessageInteractiveAuthRequired;
@property(nonatomic) _Bool displayiMessagePasswordTextField; // @synthesize displayiMessagePasswordTextField=_displayiMessagePasswordTextField;
@property(nonatomic) _Bool iCloudInteractiveAuthRequired; // @synthesize iCloudInteractiveAuthRequired=_iCloudInteractiveAuthRequired;
@property(nonatomic) _Bool displayiCloudPasswordTextField; // @synthesize displayiCloudPasswordTextField=_displayiCloudPasswordTextField;
@property(nonatomic) _Bool recoveringCredentialsForiTunesStore; // @synthesize recoveringCredentialsForiTunesStore=_recoveringCredentialsForiTunesStore;
@property(nonatomic) _Bool recoveringCredentialsForFaceTime; // @synthesize recoveringCredentialsForFaceTime=_recoveringCredentialsForFaceTime;
@property(nonatomic) _Bool recoveringCredentialsForiMessage; // @synthesize recoveringCredentialsForiMessage=_recoveringCredentialsForiMessage;
@property(nonatomic) _Bool recoveringCredentialsForiCloud; // @synthesize recoveringCredentialsForiCloud=_recoveringCredentialsForiCloud;
@property(nonatomic) _Bool signingInToiTunesStore; // @synthesize signingInToiTunesStore=_signingInToiTunesStore;
@property(nonatomic) _Bool signingInToFaceTime; // @synthesize signingInToFaceTime=_signingInToFaceTime;
@property(nonatomic) _Bool signingInToiMessage; // @synthesize signingInToiMessage=_signingInToiMessage;
@property(nonatomic) _Bool signingInToiCloud; // @synthesize signingInToiCloud=_signingInToiCloud;
@property(nonatomic) _Bool watchIsSignedInToiTunesStore; // @synthesize watchIsSignedInToiTunesStore=_watchIsSignedInToiTunesStore;
@property(nonatomic) _Bool watchIsSignedInToFaceTime; // @synthesize watchIsSignedInToFaceTime=_watchIsSignedInToFaceTime;
@property(nonatomic) _Bool watchIsSignedInToiMessage; // @synthesize watchIsSignedInToiMessage=_watchIsSignedInToiMessage;
@property(nonatomic) _Bool watchIsSignedInToiCloud; // @synthesize watchIsSignedInToiCloud=_watchIsSignedInToiCloud;
@property(nonatomic) _Bool hasFetchedAccountsInfo; // @synthesize hasFetchedAccountsInfo=_hasFetchedAccountsInfo;
@property(nonatomic) _Bool watchSupportsiTunesStore; // @synthesize watchSupportsiTunesStore=_watchSupportsiTunesStore;
@property(nonatomic) _Bool watchSupportsFaceTime; // @synthesize watchSupportsFaceTime=_watchSupportsFaceTime;
@property(nonatomic) _Bool sameiMessageAndFaceTimeAppleID; // @synthesize sameiMessageAndFaceTimeAppleID=_sameiMessageAndFaceTimeAppleID;
@property(nonatomic) _Bool sameiCloudAndiTunesStoreAppleID; // @synthesize sameiCloudAndiTunesStoreAppleID=_sameiCloudAndiTunesStoreAppleID;
@property(nonatomic) _Bool sameiCloudAndFaceTimeAppleID; // @synthesize sameiCloudAndFaceTimeAppleID=_sameiCloudAndFaceTimeAppleID;
@property(nonatomic) _Bool sameiCloudAndiMessageAppleID; // @synthesize sameiCloudAndiMessageAppleID=_sameiCloudAndiMessageAppleID;
@property(nonatomic) _Bool sameAccountForAllAccountTypes; // @synthesize sameAccountForAllAccountTypes=_sameAccountForAllAccountTypes;
@property(retain, nonatomic) AKDevice *watchAKDevice; // @synthesize watchAKDevice=_watchAKDevice;
@property(retain, nonatomic) ACAccount *iTunesIDMSAccount; // @synthesize iTunesIDMSAccount=_iTunesIDMSAccount;
@property(retain, nonatomic) ACAccount *iTunesStoreAccount; // @synthesize iTunesStoreAccount=_iTunesStoreAccount;
@property(retain, nonatomic) ACAccount *faceTimeIDMSAccount; // @synthesize faceTimeIDMSAccount=_faceTimeIDMSAccount;
@property(retain, nonatomic) ACAccount *faceTimeAccount; // @synthesize faceTimeAccount=_faceTimeAccount;
@property(retain, nonatomic) ACAccount *iMessageIDMSAccount; // @synthesize iMessageIDMSAccount=_iMessageIDMSAccount;
@property(retain, nonatomic) ACAccount *iMessageAccount; // @synthesize iMessageAccount=_iMessageAccount;
@property(retain, nonatomic) ACAccount *iCloudIDMSAccount; // @synthesize iCloudIDMSAccount=_iCloudIDMSAccount;
@property(retain, nonatomic) ACAccount *iCloudAccount; // @synthesize iCloudAccount=_iCloudAccount;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) NSSManager *nssManager; // @synthesize nssManager=_nssManager;
@property(retain, nonatomic) NRDevice *pairedWatch; // @synthesize pairedWatch=_pairedWatch;
- (id)appleIDAuthControllerRequestsPresentingViewController:(id)arg1;	// IMP=0x001000000003149d
- (void)appleIDAuthController:(id)arg1 didSignInWithSuccess:(_Bool)arg2 error:(id)arg3;	// IMP=0x00100000000310a7
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0010000000030fc0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000030424
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000000303a3
- (void)_textFieldValueDidChange:(id)arg1;	// IMP=0x001000000003023e
- (void)tappedForgotButton;	// IMP=0x0010000000030054
- (void)tappedForgotiTunesStoreButton;	// IMP=0x001000000002ffd3
- (void)tappedForgotFaceTimeButton;	// IMP=0x001000000002ff52
- (void)tappedForgotiMessageButton;	// IMP=0x001000000002fed1
- (void)tappedForgotiCloudButton;	// IMP=0x001000000002fe50
- (void)stopNetworkRequest;	// IMP=0x001000000002fd8b
- (void)startNetworkRequest;	// IMP=0x001000000002fc42
- (void)loggedInSuccessfullyToAccount:(id)arg1;	// IMP=0x001000000002f750
- (void)_removeAppleIDFollowUp;	// IMP=0x001000000002f695
- (void)_removeStoreFollowUp;	// IMP=0x001000000002f5da
- (void)tappedSignInToiTunesStore;	// IMP=0x001000000002f3ef
- (void)tappedSignInToFaceTime;	// IMP=0x001000000002f204
- (void)tappedSignInToiMessage;	// IMP=0x001000000002f019
- (void)tappedSignInToiCloud;	// IMP=0x001000000002ed73
- (void)enableSignInButtons:(_Bool)arg1;	// IMP=0x001000000002ebbc
- (void)openiCloudPaneInSettingsApp;	// IMP=0x001000000002eb79
- (void)setPassword:(id)arg1 withSpecifier:(id)arg2;	// IMP=0x001000000002eb73
- (id)getiTunesStoreUsernameForSpecifier:(id)arg1;	// IMP=0x001000000002eb4c
- (id)getFaceTimeUsernameForSpecifier:(id)arg1;	// IMP=0x001000000002eb25
- (id)getiMessageUsernameForSpecifier:(id)arg1;	// IMP=0x001000000002eafe
- (id)getiCloudUsernameForSpecifier:(id)arg1;	// IMP=0x001000000002ead7
- (void)handleAccountsInfoReply:(id)arg1 error:(id)arg2;	// IMP=0x001000000002de46
- (void)queryWatchForAccountsInfo;	// IMP=0x001000000002d93d
- (_Bool)signingIn;	// IMP=0x001000000002d91a
- (id)newPasswordTextFieldSpecifierWithID:(id)arg1;	// IMP=0x001000000002d78e
- (void)removeForgotPasswordFooterFromSpecifier:(id)arg1;	// IMP=0x001000000002d6e3
- (void)addForgotPasswordFooterToSpecifier:(id)arg1 withActionSelector:(SEL)arg2;	// IMP=0x001000000002d4ee
- (id)specifiers;	// IMP=0x001000000002bcc9
- (void)dealloc;	// IMP=0x001000000002baa6
- (_Bool)_federatedAuthRequiredForAccount:(id)arg1;	// IMP=0x001000000002ba50
- (id)init;	// IMP=0x001000000002afc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
