//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (SSExtensions)
+ (id)_accountTypesCache;	// IMP=0x00600000000a6e54
- (id)_correspondingAccountWithAccountTypeIdentifier:(id)arg1 forAccount:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000a6ea9
- (id)_ss_iTunesAccountForAccount:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a6e32
- (id)_ss_IDMSAccountForAccount:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a6e10
- (id)_ss_iCloudAccountForAccount:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a6dee
- (id)_ss_appleAuthenticationAccountForAccount:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a6dcc
- (id)_ss_accountTypeWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a6c6f
@end

