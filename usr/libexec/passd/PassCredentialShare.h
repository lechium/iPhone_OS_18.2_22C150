//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PassCredentialShare
{
}

+ (id)_propertySettersForPassCredentialShare;	// IMP=0x00400000000f9293
+ (id)_propertyValuesForPassCredentialShare:(id)arg1;	// IMP=0x00100000000f9156
+ (id)_predicateForTransportIdentifier:(id)arg1;	// IMP=0x00100000000f9133
+ (id)_predicateForCredentialShareIdentifier:(id)arg1;	// IMP=0x00100000000f9110
+ (id)_predicateForSharePIDs:(id)arg1;	// IMP=0x00100000000f90ed
+ (id)_predicateForSharePID:(long long)arg1;	// IMP=0x00100000000f907c
+ (id)_passCredentialSharesWithQuery:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000f8ce1
+ (_Bool)deletePassCredentialShareForIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000f8c43
+ (void)deletePassCredentialShareForSharePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000f8baa
+ (id)passCredentialShareForIdentifier:(id)arg1 sharePIDs:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000f8a2a
+ (id)dbPassCredentialShareForCredentialShareIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000f8915
+ (id)passCredentialShareForTransportIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000f886b
+ (id)passCredentialShareForCredentialShareIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000f881b
+ (id)passCredentialSharesForSharePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000f876b
+ (void)mergeInCredentialShares:(id)arg1 sharePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000f83e0
+ (void)insertOrUpdatePassCredentialShares:(id)arg1 sharePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000f7f09
+ (id)databaseTable;	// IMP=0x00100000000f7cdc
- (void)setStatus:(unsigned long long)arg1;	// IMP=0x00400000000f9038
- (void)setIdentifier:(id)arg1;	// IMP=0x00100000000f901f
- (id)passCredentialShare;	// IMP=0x00100000000f8eb0
- (void)updateWithPassCredentialShare:(id)arg1 mergingInCredentialShare:(id)arg2;	// IMP=0x00100000000f7e41
- (void)updateWithPassCredentialShare:(id)arg1;	// IMP=0x00100000000f7dc7
- (id)initWithPassCredentialShare:(id)arg1 sharePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000f7ce9

@end
