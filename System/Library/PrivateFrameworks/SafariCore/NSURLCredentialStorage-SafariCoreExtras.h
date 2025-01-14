//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSURLCredentialStorage.h>

@class NSArray, NSDictionary;

@interface NSURLCredentialStorage (SafariCoreExtras)
+ (id)_safari_personalSidecarDictionaryForPasskeyWithUserHandle:(id)arg1 relyingPartyID:(id)arg2 groupID:(id)arg3;	// IMP=0x000000000005c5ca
+ (_Bool)safari_test_saveCredential:(id)arg1 withArbitraryProtectionSpace:(id)arg2;	// IMP=0x000000000005c1b7
+ (id)safari_test_addTestingPasskeyItemWithCredentialID:(id)arg1 groupID:(id)arg2 toRecentlyDeleted:(_Bool)arg3;	// IMP=0x000000000005b9d9
+ (void)safari_test_purgeKeychainItemsFromTestingAccessGroups;	// IMP=0x000000000005b53a
+ (void)safari_test_setUseTestingAccessGroups:(_Bool)arg1;	// IMP=0x000000000005af64
+ (void)safari_setLastUsedDate:(id)arg1 forPasskeyWithUserHandle:(id)arg2 relyingPartyID:(id)arg3 groupID:(id)arg4 context:(id)arg5;	// IMP=0x00000000000592de
+ (id)safari_customTitleForPasskeyWithUserHandle:(id)arg1 relyingPartyID:(id)arg2 groupID:(id)arg3;	// IMP=0x0000000000059241
- (id)_safari_lastModifiedDateForPasskeyCredentialOnSavedAccount:(id)arg1;	// IMP=0x001000000005c15d
- (id)_safari_lastModifiedDateForPasswordCredentialsOnSavedAccount:(id)arg1;	// IMP=0x001000000005bf00
- (id)safari_mostRecentLastModifiedDateForCredentialsOnSavedAccount:(id)arg1;	// IMP=0x001000000005be1f
- (void)safari_deletePasskeyFromSavedAccount:(id)arg1 groupID:(id)arg2;	// IMP=0x001000000005b1e8
- (void)safari_deleteAllGeneratedPasswords;	// IMP=0x001000000005adc7
- (void)safari_deleteGeneratedPassword:(id)arg1;	// IMP=0x001000000005a631
- (id)safari_updateGeneratedPassword:(id)arg1 withPassword:(id)arg2;	// IMP=0x001000000005a1a5
- (id)safari_addGeneratedPassword:(id)arg1 forProtectionSpace:(id)arg2 wasGeneratedInPrivateBrowsingSession:(_Bool)arg3;	// IMP=0x00100000000599b1
@property(readonly, nonatomic) NSArray *safari_allGeneratedPasswordItems;
- (id)_safari_accountStringForGeneratedPassword;	// IMP=0x0010000000059562
- (id)_safari_dataFromGeneratedPasswordDictionary:(id)arg1 domain:(id)arg2;	// IMP=0x0010000000059499
- (id)_safari_allRecentlyDeletedSharedSidecarItemsInGroupWithID:(id)arg1;	// IMP=0x0010000000059221
- (id)_safari_allRecentlyDeletedPersonalSidecarItemsInGroupWithID:(id)arg1;	// IMP=0x0010000000059204
- (id)_safari_allRecentlyDeletedPersonalSidecarItemsInPersonalKeychain;	// IMP=0x00100000000591e3
- (_Bool)_safari_deleteAllRecentlyDeletedPersonalSidecarsForGroupID:(id)arg1;	// IMP=0x0010000000059071
- (_Bool)_safari_deleteAllPersonalSidecarsForGroupID:(id)arg1;	// IMP=0x0010000000058eff
- (_Bool)_safari_deleteAllRecentlyDeletedSharedSidecarsForGroupID:(id)arg1;	// IMP=0x0010000000058d8d
- (_Bool)_safari_deleteAllSharedSidecarsForGroupID:(id)arg1;	// IMP=0x0010000000058c1b
- (_Bool)_safari_deleteAllRecentlyDeletedPasskeyCredentialsForGroupID:(id)arg1;	// IMP=0x0010000000058aa9
- (_Bool)_safari_deleteAllPasskeyCredentialsForGroupID:(id)arg1;	// IMP=0x0010000000058937
- (_Bool)_safari_deleteAllRecentlyDeletedPasswordCredentialsForGroupID:(id)arg1;	// IMP=0x00100000000587c5
- (_Bool)_safari_deleteAllPasswordCredentialsForGroupID:(id)arg1;	// IMP=0x0010000000058653
- (_Bool)safari_deleteAllItemsForGroupID:(id)arg1;	// IMP=0x0010000000058523
- (_Bool)_safari_copySharedSidecar:(id)arg1 fromGroupWithID:(id)arg2 toGroupWithID:(id)arg3 fromRecentlyDeleted:(_Bool)arg4;	// IMP=0x001000000005814b
- (_Bool)_safari_copyPersonalSidecar:(id)arg1 fromGroupWithID:(id)arg2 toGroupWithID:(id)arg3 fromRecentlyDeleted:(_Bool)arg4;	// IMP=0x0010000000057eac
- (_Bool)_safari_copyPersonalSidecarFromPersonalKeychainToSharedPersonalAccessGroup:(id)arg1 forGroupWithID:(id)arg2 fromRecentlyDeleted:(_Bool)arg3;	// IMP=0x0010000000057c0d
- (_Bool)_safari_copyPersonalSidecarFromSharedPersonalAccessGroupToPersonalKeychain:(id)arg1 withNewUsername:(id)arg2 fromRecentlyDeleted:(_Bool)arg3;	// IMP=0x001000000005793e
- (_Bool)_safari_copyPersonalSidecarFromSharedPersonalAccessGroupToPersonalKeychain:(id)arg1 fromRecentlyDeleted:(_Bool)arg2;	// IMP=0x0010000000057927
- (_Bool)safari_copySavedAccountWithPasskey:(id)arg1 toGroupWithID:(id)arg2;	// IMP=0x001000000005744e
- (_Bool)safari_copySavedAccountWithPasskeyToPersonalKeychain:(id)arg1;	// IMP=0x001000000005704c
- (_Bool)safari_copySavedAccountWithPassword:(id)arg1 toGroupWithID:(id)arg2;	// IMP=0x0010000000056a8b
- (_Bool)safari_copySavedAccountWithPasswordToPersonalKeychain:(id)arg1 withNewUsername:(id)arg2;	// IMP=0x0010000000056355
- (_Bool)safari_copySavedAccountWithPasswordToPersonalKeychain:(id)arg1;	// IMP=0x0010000000056341
- (void)safari_deleteSidecarOfType:(long long)arg1 forUser:(id)arg2 htmlFormProtectionSpace:(id)arg3 forGroupID:(id)arg4 fromRecentlyDeleted:(_Bool)arg5;	// IMP=0x0010000000056065
- (void)_safari_setSidecarDictionary:(id)arg1 type:(unsigned long long)arg2 credential:(id)arg3 htmlFormProtectionSpace:(id)arg4 groupID:(id)arg5 fromRecentlyDeleted:(_Bool)arg6;	// IMP=0x001000000005583a
- (void)safari_setSidecar:(id)arg1 credential:(id)arg2 htmlFormProtectionSpace:(id)arg3 forGroupID:(id)arg4 fromRecentlyDeleted:(_Bool)arg5;	// IMP=0x0010000000055583
- (id)_safari_sidecarDictionaryFromData:(id)arg1 user:(id)arg2 domain:(id)arg3;	// IMP=0x0010000000055453
- (id)_safari_dataFromSidecarDictionary:(id)arg1 user:(id)arg2 domain:(id)arg3;	// IMP=0x00100000000552d5
- (id)_safari_protectionSpaceFromKeychainDictionary:(id)arg1;	// IMP=0x00100000000551b2
- (id)safari_allPersonalSidecarsForGroupID:(id)arg1 fromRecentlyDeleted:(_Bool)arg2;	// IMP=0x0010000000054f91
- (id)safari_allSharedSidecarsForGroupID:(id)arg1 fromRecentlyDeleted:(_Bool)arg2;	// IMP=0x0010000000054d6d
- (id)_safari_allPersonalSidecarEntriesInPersonalKeychain;	// IMP=0x0010000000054d54
- (id)_safari_allRecentlyDeletedPersonalSidecarEntriesInPersonalKeychain;	// IMP=0x0010000000054d38
@property(readonly, nonatomic) NSArray *safari_allRecentlyDeletedPersonalSidecarsInPersonalKeychain;
@property(readonly, nonatomic) NSArray *safari_allPersonalSidecarsInPersonalKeychain;
- (id)_safari_allSidecarItemsOfType:(long long)arg1 groupID:(id)arg2 fromRecentlyDeleted:(_Bool)arg3;	// IMP=0x001000000005436b
- (void)_safari_addKeychainItem:(id)arg1 ofType:(long long)arg2 toSidecarDictionary:(id)arg3;	// IMP=0x0010000000054249
- (id)_safari_getKeychainItemForSidecar:(id)arg1 ofType:(long long)arg2 groupID:(id)arg3 fromRecentlyDeleted:(_Bool)arg4;	// IMP=0x0010000000053c36
- (id)_safari_getSidecarKeychainItemsByTypeForPasskeyOnSavedAccount:(id)arg1;	// IMP=0x0010000000053a7f
- (id)_safari_getSidecarKeychainItemsByTypeForPasswordOnSavedAccount:(id)arg1;	// IMP=0x00100000000538c8
- (void)_safari_migrateKeychainItemsWithInvalidAuthenticationTypes;	// IMP=0x00100000000526a5
- (void)safari_migrateKeychainItemsWithInvalidAuthenticationTypesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000052535
- (_Bool)_safari_removeDefaultCommentFromKeychainItemsMatchingQuery:(id)arg1;	// IMP=0x0010000000052433
- (id)_safari_allCredentialItemsOfType:(long long)arg1 groupID:(id)arg2 fromRecentlyDeleted:(_Bool)arg3;	// IMP=0x0010000000051f9f
- (id)safari_allRecentlyDeletedPasskeyCredentialItemsInGroupWithID:(id)arg1;	// IMP=0x0010000000051f7f
- (id)safari_allRecentlyDeletedPasswordCredentialItemsInGroupWithID:(id)arg1;	// IMP=0x0010000000051f5f
@property(readonly, nonatomic) NSArray *safari_allRecentlyDeletedPasskeyCredentialItemsInPersonalKeychain;
@property(readonly, nonatomic) NSArray *safari_allRecentlyDeletedPasswordCredentialItemsInPersonalKeychain;
- (id)safari_allPasswordCredentialItemsFromGroupID:(id)arg1;	// IMP=0x0010000000051f04
@property(readonly, nonatomic) NSArray *safari_allPasswordCredentialItemsInPersonalKeychain;
@property(readonly, nonatomic) NSDictionary *safari_allSafariCredentials;
- (void)safari_setDefaultCredential:(id)arg1 forHTMLFormProtectionSpace:(id)arg2;	// IMP=0x001000000005149a
- (id)_formattedLabelWithHost:(id)arg1 user:(id)arg2;	// IMP=0x0010000000051402
- (void)safari_deleteCredentialWithEmptyServerHostForUser:(id)arg1 forHTMLFormProtectionSpace:(id)arg2 forGroupID:(id)arg3 fromRecentlyDeleted:(_Bool)arg4;	// IMP=0x0010000000050fde
- (void)safari_deletePasswordCredentialForUser:(id)arg1 forHTMLFormProtectionSpace:(id)arg2 forGroupID:(id)arg3 fromRecentlyDeleted:(_Bool)arg4;	// IMP=0x0010000000050d10
- (_Bool)safari_setCredential:(id)arg1 forHTMLFormProtectionSpace:(id)arg2 forGroupID:(id)arg3;	// IMP=0x0010000000050698
- (id)_safari_getCredentialItemFromKeychainForPasskeyInSavedAccount:(id)arg1;	// IMP=0x00100000000501cf
- (id)_safari_getCredentialItemsFromKeychainForPasswordInSavedAccount:(id)arg1;	// IMP=0x001000000004fbad
- (_Bool)_safari_recoverSidecarItemsByType:(id)arg1 forRecentlyDeletedSavedAccount:(id)arg2;	// IMP=0x001000000004fa6f
- (_Bool)_safari_recoverPasskeySidecarsFromRecentlyDeletedSavedAccount:(id)arg1;	// IMP=0x001000000004f9fd
- (_Bool)_safari_recoverPasskeyCredentialFromRecentlyDeletedSavedAccount:(id)arg1;	// IMP=0x001000000004f929
- (_Bool)_safari_recoverPasswordSidecarsFromRecentlyDeletedSavedAccount:(id)arg1;	// IMP=0x001000000004f8b7
- (_Bool)_safari_recoverPasswordCredentialsFromRecentlyDeletedSavedAccount:(id)arg1;	// IMP=0x001000000004f7cc
- (_Bool)safari_recoverSavedAccountFromRecentlyDeleted:(id)arg1;	// IMP=0x001000000004f708
- (_Bool)_safari_moveSidecarItemsByTypeToRecentlyDeleted:(id)arg1 savedAccount:(id)arg2;	// IMP=0x001000000004f5ca
- (_Bool)_safari_movePasskeySidecarsFromSavedAccountToRecentlyDeleted:(id)arg1;	// IMP=0x001000000004f558
- (_Bool)_safari_movePasskeyCredentialFromSavedAccountToRecentlyDeleted:(id)arg1;	// IMP=0x001000000004f484
- (_Bool)_safari_movePasswordSidecarsFromSavedAccountToRecentlyDeleted:(id)arg1;	// IMP=0x001000000004f412
- (_Bool)_safari_movePasswordCredentialsFromSavedAccountToRecentlyDeleted:(id)arg1;	// IMP=0x001000000004f327
- (_Bool)safari_moveCredentialTypesToRecentlyDeleted:(long long)arg1 onSavedAccount:(id)arg2;	// IMP=0x001000000004f262
- (_Bool)_safari_moveKeychainItemsWithPersistentIdentifiers:(id)arg1 toAccessGroup:(id)arg2;	// IMP=0x001000000004ee97
@end

