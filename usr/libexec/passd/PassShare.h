//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PassShare
{
}

+ (id)_propertySettersForPassShare;	// IMP=0x00400000002bf4b6
+ (id)_propertyValuesForPassShare:(id)arg1;	// IMP=0x00100000002bf249
+ (id)_predicateForExternalSharesForPassPID:(long long)arg1;	// IMP=0x00100000002bf0d7
+ (id)_predicateForActiveExternalShares;	// IMP=0x00100000002beda7
+ (id)_predicateForExternalCredentialShare;	// IMP=0x00100000002bec9a
+ (id)_predicateForHasGroupIdentifier;	// IMP=0x00100000002bec7a
+ (id)_predicateForHasCredentialShares;	// IMP=0x00100000002bec5a
+ (id)_predicateForNoCredentialShares;	// IMP=0x00100000002bec3a
+ (id)_predicateForCredentialShareIdentifiers:(id)arg1;	// IMP=0x00100000002bec17
+ (id)_predicateForCredentialShareIdentifier:(id)arg1;	// IMP=0x00100000002bebf4
+ (id)_predicateForSubcredentialIdentifier:(id)arg1;	// IMP=0x00100000002bebd1
+ (id)_predicateForGroupIdentifier:(id)arg1;	// IMP=0x00100000002bebae
+ (id)_predicateForShareIdentifier:(id)arg1;	// IMP=0x00100000002beb8b
+ (id)_predicateForPassPID:(long long)arg1;	// IMP=0x00100000002beb1a
+ (_Bool)_passSharesExistWithQuery:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002be88b
+ (id)_passSharesWithQuery:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002be5a6
+ (void)_deleteForQuery:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002be486
+ (void)deletePassShareWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002be3e7
+ (void)deletePassShareForPassPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002be348
+ (long long)passPIDForShareIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002be27f
+ (id)passShareForIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002be1d5
+ (id)passShareForCredentialShareIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002be12b
+ (id)passShareForForPassPID:(long long)arg1 shareIdentifier:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002bdfaf
+ (id)passSharesPIDsForPassPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002bde57
+ (id)passSharesForSubcredentialIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002bdda7
+ (_Bool)passSharesExistForPassPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002bdd03
+ (id)passSharesForPassPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002bdc53
+ (_Bool)externalPassSharesForPassPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002bdbaf
+ (_Bool)activeExternalPassSharesInDatabase:(id)arg1;	// IMP=0x00100000002bdb11
+ (_Bool)addPassShare:(id)arg1 forPassPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002bd82e
+ (void)mergeInShares:(id)arg1 forPassPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002bcc4d
+ (void)insertOrUpdatePassShares:(id)arg1 forPassPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002bc890
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x00100000002bc321
+ (id)databaseTable;	// IMP=0x00100000002bc314
- (id)passShare;	// IMP=0x00400000002be8a0
- (void)updateWithPassShare:(id)arg1 keepingNonnilValuesFrom:(id)arg2;	// IMP=0x00100000002bc521
- (void)updateWithPassShare:(id)arg1;	// IMP=0x00100000002bc4a7
- (id)initWithPassShare:(id)arg1 forPassPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002bc3c9

@end

