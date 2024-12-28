//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (DeviceManagementClient)
- (id)_dmc_missingAccountError;	// IMP=0x0090000000005eb9
- (id)_dmc_workerQueue;	// IMP=0x0090000000005e3a
- (void)dmc_removeAccounts:(id)arg1 asynchronous:(_Bool)arg2;	// IMP=0x00900000000054b4
- (id)dmc_accountsWithPredicateBlock:(CDUnknownBlockType)arg1;	// IMP=0x009000000000511d
- (void)dmc_removeAccountWithIdentifier:(id)arg1 asynchronous:(_Bool)arg2;	// IMP=0x0090000000005062
- (void)dmc_removeMAIDRelatedAccountsWithPersonaID:(id)arg1 asynchronous:(_Bool)arg2;	// IMP=0x0090000000004edb
- (void)dmc_removeAccountsWithAltDSID:(id)arg1 asynchronous:(_Bool)arg2;	// IMP=0x0090000000004ec9
- (void)dmc_removeMAIDRelatedAccountsWithAltDSID:(id)arg1 asynchronous:(_Bool)arg2;	// IMP=0x0090000000004d42
- (_Bool)_dmc_updateAccount:(id)arg1 error:(id *)arg2 updateBlock:(CDUnknownBlockType)arg3;	// IMP=0x00900000000047f4
- (_Bool)dmc_updateAppleAccountWithPersonaID:(id)arg1 error:(id *)arg2 updateBlock:(CDUnknownBlockType)arg3;	// IMP=0x0090000000004622
- (_Bool)dmc_updateAccountWithIdentifier:(id)arg1 error:(id *)arg2 updateBlock:(CDUnknownBlockType)arg3;	// IMP=0x00900000000044e3
- (_Bool)dmc_updateAccountWithTypeIdentifier:(id)arg1 altDSID:(id)arg2 error:(id *)arg3 updateBlock:(CDUnknownBlockType)arg4;	// IMP=0x0090000000004374
- (id)_dmc_accountWithType:(id)arg1 error:(id *)arg2 criteria:(CDUnknownBlockType)arg3;	// IMP=0x00900000000040cf
- (id)dmc_iCloudAccountWithUsername:(id)arg1;	// IMP=0x0090000000003fbe
- (_Bool)dmc_conflictingAccountsExistWithAltDSID:(id)arg1 error:(id *)arg2;	// IMP=0x0090000000003c6d
- (_Bool)dmc_conflictingAccountsExistWithUsername:(id)arg1 error:(id *)arg2;	// IMP=0x00900000000038f9
- (_Bool)dmc_hasPrimaryAccount:(id *)arg1;	// IMP=0x00900000000035d2
- (id)dmc_remoteManagementAccountForManagementProfileIdentifier:(id)arg1;	// IMP=0x00900000000033ed
- (id)dmc_remoteManagementAccountForEnrollmentURL:(id)arg1;	// IMP=0x0090000000003208
- (id)dmc_remoteManagementAccountForIdentifier:(id)arg1;	// IMP=0x0090000000003023
- (id)dmc_remoteManagementAccountForDSID:(id)arg1;	// IMP=0x0090000000002e3e
- (id)dmc_remoteManagementAccountForAltDSID:(id)arg1;	// IMP=0x0090000000002c59
- (id)_dmc_AccountAssociatedWithRemoteManagementWithAccountTypeIdentifier:(id)arg1 altDSID:(id)arg2;	// IMP=0x00900000000029e5
- (id)_dmc_AccountAssociatedWithRemoteManagementWithAccountTypeIdentifier:(id)arg1;	// IMP=0x0090000000002916
- (id)dmc_iTunesAccountForRemoteManagingAccountWithAltDSID:(id)arg1;	// IMP=0x00900000000028f7
- (id)dmc_iTunesAccountForRemoteManagingAccount;	// IMP=0x00900000000028db
- (id)dmc_iCloudAccountForRemoteManagingAccountWithAltDSID:(id)arg1;	// IMP=0x00900000000028bc
- (id)dmc_iCloudAccountForRemoteManagingAccount;	// IMP=0x00900000000028a0
- (id)dmc_primaryiCloudAccount;	// IMP=0x0090000000002866
- (id)dmc_visibleSecondaryRemoteManagementAccounts;	// IMP=0x009000000000263f
- (id)dmc_visibleRemoteManagementAccounts;	// IMP=0x0090000000002591
- (id)dmc_RemoteManagementAccounts;	// IMP=0x0090000000002532
- (id)dmc_RemoteManagementAccountType;	// IMP=0x0090000000002516
@end
