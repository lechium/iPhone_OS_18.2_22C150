//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, WBSSavedAccount;

__attribute__((visibility("hidden")))
@interface _SFAirDropAccountSharingAuthenticationContext : NSObject
{
    _Bool _hasBeenAuthenticated;	// 8 = 0x8
    WBSSavedAccount *_savedAccount;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000096dcb
@property(readonly, nonatomic) WBSSavedAccount *savedAccount; // @synthesize savedAccount=_savedAccount;
@property(nonatomic) _Bool hasBeenAuthenticated; // @synthesize hasBeenAuthenticated=_hasBeenAuthenticated;
@property(readonly, copy, nonatomic) NSString *authenticationPrompt;
@property(readonly, nonatomic) _Bool showsAuthenticationPromptAsTitle;
@property(readonly, copy, nonatomic) NSDictionary *customLocalAuthenticationOptions;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSDictionary",?,R,C,N

@property(readonly, nonatomic) long long authenticationPolicy;
- (id)_passcodeTitleForSharingPasswordWithAirDrop;	// IMP=0x0000000000096cc0
- (id)_passcodeTitleForSharingPasskeyWithAirDrop;	// IMP=0x0000000000096c40
- (id)_localAuthenticationOptionsForSharingPasswordWithAirDrop;	// IMP=0x0000000000096b56
- (id)_localAuthenticationOptionsForSharingPasskeyWithAirDrop;	// IMP=0x0000000000096a6c
- (id)initWithSavedAccount:(id)arg1;	// IMP=0x00000000000969ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool shouldAuthenticateBeforeShowingSettings;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly) Class superclass;

@end
