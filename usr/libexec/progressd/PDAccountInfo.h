//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, CKRecordID, NSError, NSString, NSURL;

@interface PDAccountInfo : NSObject
{
    _Bool _isDataSeparatedAccount;	// 8 = 0x8
    _Bool _hasUbiquityEnabled;	// 9 = 0x9
    _Bool _mayOpenFromManagedToUnmanaged;	// 10 = 0xa
    _Bool _mayOpenFromUnmanagedToManaged;	// 11 = 0xb
    int _rosterServiceAuthenticationState;	// 12 = 0xc
    int _handoutServiceAuthenticationState;	// 16 = 0x10
    int _iCloudDriveAuthenticationState;	// 20 = 0x14
    ACAccount *_account;	// 24 = 0x18
    NSString *_dsID;	// 32 = 0x20
    NSString *_altDSID;	// 40 = 0x28
    NSString *_orionToken;	// 48 = 0x30
    NSString *_axmToken;	// 56 = 0x38
    NSString *_accountIdentifier;	// 64 = 0x40
    NSString *_personaUniqueIdentifier;	// 72 = 0x48
    NSURL *_schoolworkUbiquitousContainerURL;	// 80 = 0x50
    NSError *_schoolworkUbiquitousContainerError;	// 88 = 0x58
    CKRecordID *_orgAdminUserRecordID;	// 96 = 0x60
    NSError *_orgAdminUserFetchError;	// 104 = 0x68
    CKRecordID *_userRecordID;	// 112 = 0x70
    NSError *_userFetchError;	// 120 = 0x78
    NSURL *_multimediaCacheDirectoryURL;	// 128 = 0x80
    NSError *_multimediaCacheDirectoryURLError;	// 136 = 0x88
}

+ (id)accountInfo;	// IMP=0x0040000000040f4c
+ (void)checkForiCloudDriveInitialSync;	// IMP=0x0010000000040c76
+ (_Bool)isVerifiedMAIDAccount:(id)arg1;	// IMP=0x001000000003ffee
+ (id)tokenForAccount:(id)arg1 withAltDSID:(id)arg2 forService:(id)arg3 fromAccountStore:(id)arg4;	// IMP=0x001000000003fe77
+ (id)stringFromACAccountCredentialRenewResult:(long long)arg1;	// IMP=0x001000000003fe58
+ (id)_userRecordID:(id *)arg1;	// IMP=0x001000000003fbcc
+ (id)_orgAdminUserRecordID:(id *)arg1;	// IMP=0x001000000003f89c
+ (void)_fetchUserRecordIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003f696
+ (void)_fetchOrgAdminUserRecordIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003f490
+ (id)_cloudDocsContainer;	// IMP=0x001000000003f470
+ (id)_schoolworkUbiquitousContainerURL:(id *)arg1;	// IMP=0x001000000003f0d1
- (void).cxx_destruct;	// IMP=0x0020000000043464
- (id)description;	// IMP=0x0010000000042e64
- (void)_updateUserRecordID;	// IMP=0x0010000000042b91
- (void)_updateOrgAdminUserRecordID;	// IMP=0x0010000000042b03
- (void)updateAuthenticationState:(_Bool)arg1 forServiceID:(id)arg2 userInteractive:(_Bool)arg3;	// IMP=0x00100000000428a3

@end
