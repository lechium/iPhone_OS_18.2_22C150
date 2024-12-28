//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface SKUISignInSettingsGroupController
{
    NSString *_accountName;	// 8 = 0x8
    _Bool _authenticating;	// 16 = 0x10
    NSMapTable *_keyMapping;	// 24 = 0x18
    NSString *_password;	// 32 = 0x20
    _Bool _valid;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000ade0c
- (void)_updateValidation;	// IMP=0x00000000000add75
- (id)_submitSettingDescription;	// IMP=0x00000000000adbe2
- (void)_signInSuccess:(id)arg1;	// IMP=0x00000000000adabb
- (void)_signInFailed:(id)arg1 error:(id)arg2;	// IMP=0x00000000000ad71a
- (id)_settingDescriptionForKey:(id)arg1;	// IMP=0x00000000000ad379
- (void)_resignFirstResponder;	// IMP=0x00000000000ad1bb
- (id)_keyForSettingDescription:(id)arg1;	// IMP=0x00000000000acff7
- (void)_becomeFirstResponderWithKey:(id)arg1;	// IMP=0x00000000000acf64
- (void)_updateFieldsAuthenticating:(_Bool)arg1;	// IMP=0x00000000000acda4
- (void)_attemptSignInWithAccountName:(id)arg1 password:(id)arg2;	// IMP=0x00000000000ac646
- (id)valueForSettingDescription:(id)arg1;	// IMP=0x00000000000ac580
- (void)submitSettingDescription:(id)arg1;	// IMP=0x00000000000ac476
- (void)setValue:(id)arg1 forSettingDescription:(id)arg2;	// IMP=0x00000000000ac39e
- (void)returnInSettingDescription:(id)arg1;	// IMP=0x00000000000ac287
- (_Bool)isAuthenticating;	// IMP=0x00000000000ac22a

@end
