//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccountStore.h>

@class ACAccount, NSArray;

@interface ACAccountStore (ICAccountStoreAdditions)
+ (_Bool)ic_canAccessAppleAccounts;	// IMP=0x00200000000e1b00
+ (_Bool)ic_canAccessAccountStore;	// IMP=0x00200000000e1ad5
+ (id)ic_sharedAccountStore;	// IMP=0x00200000000e1aa5
- (id)_ic_storeAccountType;	// IMP=0x00100000000e0366
- (id)ic_storeAccountForStoreAccountID:(id)arg1;	// IMP=0x00100000000e0227
@property(retain, nonatomic, setter=ic_setActiveLockerAccount:) ACAccount *ic_activeLockerAccount;
@property(retain, nonatomic, setter=ic_setActiveStoreAccount:) ACAccount *ic_activeStoreAccount;
@property(readonly, nonatomic) ACAccount *ic_primaryAppleAccount;
@property(readonly, copy, nonatomic) NSArray *ic_allStoreAccounts;
- (id)ic_localStoreAccountWithError:(id *)arg1;	// IMP=0x00100000000dfa6c
- (void)ic_localStoreAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000df9de
- (id)ic_storeAccountForHomeUserIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000df732
- (void)ic_storeAccountForHomeUserIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000df5fb
- (id)ic_storeAccountTypeWithError:(id *)arg1;	// IMP=0x00100000000df4e6
- (void)ic_storeAccountTypeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000df447
- (id)ic_storeAccountForStoreAccountID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000df19b
- (void)ic_storeAccountForStoreAccountID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000df064
- (id)ic_primaryAppleAccountWithError:(id *)arg1;	// IMP=0x00100000000dee83
- (void)ic_primaryAppleAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000dedf5
- (_Bool)ic_disableActiveLockerAccount:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000debed
- (_Bool)ic_setActiveLockerAccount:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000de8f1
- (void)ic_setActiveLockerAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000de716
- (id)ic_activeLockerAccountWithError:(id *)arg1;	// IMP=0x00100000000de676
- (void)ic_activeLockerAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000de5e8
- (_Bool)ic_setActiveStoreAccount:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000de1d9
- (void)ic_setActiveStoreAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000de11f
- (id)ic_activeStoreAccountWithError:(id *)arg1;	// IMP=0x00100000000ddf37
- (void)ic_activeStoreAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ddea9
- (id)ic_allStoreAccountsWithError:(id *)arg1;	// IMP=0x00100000000ddcd6
- (void)ic_allStoreAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ddc44
@end
