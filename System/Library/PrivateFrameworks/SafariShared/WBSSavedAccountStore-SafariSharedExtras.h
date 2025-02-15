//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariCore/WBSSavedAccountStore.h>

@interface WBSSavedAccountStore (SafariSharedExtras)
- (void)_test_writeContentsOfAccountStoreToWriter:(id)arg1;	// IMP=0x003000000018ff37
- (void)_writeContentsOfAccounts:(id)arg1 toWriter:(id)arg2;	// IMP=0x003000000018f804
@property(readonly, nonatomic) unsigned long long numberOfSavedAccountsToBeExported;
- (void)exportContentsOfAccountStoreToCSVFileWithPath:(id)arg1;	// IMP=0x003000000018f6e0
- (void)exportContentsOfSavedAccounts:(id)arg1 toCSVFileWithPath:(id)arg2;	// IMP=0x003000000018f64e
@end

