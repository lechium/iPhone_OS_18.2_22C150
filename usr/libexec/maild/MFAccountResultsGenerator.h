//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MailAccount;

@interface MFAccountResultsGenerator
{
    MailAccount *_account;	// 8 = 0x8
}

+ (id)resultsDictionaryFromAccount:(id)arg1 forKeys:(id)arg2;	// IMP=0x004000000005b460
- (void).cxx_destruct;	// IMP=0x002000000005c097
@property(retain, nonatomic) MailAccount *account; // @synthesize account=_account;
- (id)_restrictedFromSyncingRecents:(id)arg1;	// IMP=0x001000000005c024
- (id)_syncsReadState:(id)arg1;	// IMP=0x001000000005bfd6
- (id)_supportsThreadOperations:(id)arg1;	// IMP=0x001000000005bf9d
- (id)_restrictedFromMailDrop:(id)arg1;	// IMP=0x001000000005bf4d
- (id)_pcStyle:(id)arg1;	// IMP=0x001000000005bef3
- (id)_canFetch:(id)arg1;	// IMP=0x001000000005bea5
- (id)_isManaged:(id)arg1;	// IMP=0x001000000005be57
- (id)_supportsMailDrop:(id)arg1;	// IMP=0x001000000005be09
- (id)_restrictedFromSendingExternally:(id)arg1;	// IMP=0x001000000005bdd0
- (id)_restrictsRepliesAndForwards:(id)arg1;	// IMP=0x001000000005bd97
- (id)_isDefaultSendingAccount:(id)arg1;	// IMP=0x001000000005bd35
- (id)_isActive:(id)arg1;	// IMP=0x001000000005bcfc
- (id)_defaultAddress:(id)arg1;	// IMP=0x001000000005bccf
- (id)_fromEmailAddressesIncludingDisabled:(id)arg1;	// IMP=0x001000000005bca2
- (id)_fromEmailAddresses:(id)arg1;	// IMP=0x001000000005bc75
- (id)_emailAddressesAndAliases:(id)arg1;	// IMP=0x001000000005bc48
- (id)_emailAddresses:(id)arg1;	// IMP=0x001000000005bc1b
- (id)_username:(id)arg1;	// IMP=0x001000000005bbee
- (id)_fullUserName:(id)arg1;	// IMP=0x001000000005bbc1
- (id)_displayName:(id)arg1;	// IMP=0x001000000005bb94
- (id)_accountReference:(id)arg1;	// IMP=0x001000000005bb67
- (CDUnknownBlockType)blockForKey:(id)arg1;	// IMP=0x001000000005b535

@end
