//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface SUUISignInSettingsGroupController
{
    NSString *_accountName;	// 8 = 0x8
    _Bool _authenticating;	// 16 = 0x10
    NSMapTable *_keyMapping;	// 24 = 0x18
    NSString *_password;	// 32 = 0x20
    _Bool _valid;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002ecfc
- (void)_updateValidation;	// IMP=0x000000000002ec65
- (id)_submitSettingDescription;	// IMP=0x000000000002ead2
- (void)_signInSuccess:(id)arg1;	// IMP=0x000000000002e9ab
- (void)_signInFailed:(id)arg1 error:(id)arg2;	// IMP=0x000000000002e60a
- (id)_settingDescriptionForKey:(id)arg1;	// IMP=0x000000000002e269
- (void)_resignFirstResponder;	// IMP=0x000000000002e0ab
- (id)_keyForSettingDescription:(id)arg1;	// IMP=0x000000000002dee7
- (void)_becomeFirstResponderWithKey:(id)arg1;	// IMP=0x000000000002de54
- (void)_updateFieldsAuthenticating:(_Bool)arg1;	// IMP=0x000000000002dc94
- (void)_attemptSignInWithAccountName:(id)arg1 password:(id)arg2;	// IMP=0x000000000002d4ab
- (id)valueForSettingDescription:(id)arg1;	// IMP=0x000000000002d44c
- (void)submitSettingDescription:(id)arg1;	// IMP=0x000000000002d38d
- (void)setValue:(id)arg1 forSettingDescription:(id)arg2;	// IMP=0x000000000002d309
- (void)returnInSettingDescription:(id)arg1;	// IMP=0x000000000002d258
- (_Bool)isAuthenticating;	// IMP=0x000000000002d248

@end

