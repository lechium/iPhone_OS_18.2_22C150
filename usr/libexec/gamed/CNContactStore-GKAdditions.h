//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNContactStore.h>

@interface CNContactStore (GKAdditions)
- (id)_gkSyncAndCollectHandlesForContacts:(id)arg1 updateExistingEntries:(_Bool)arg2 meContactID:(id)arg3 context:(id)arg4;	// IMP=0x0010000000162d62
- (void)_gkSyncWithBatchOfContactIDs:(id)arg1 playerProvider:(id)arg2 meContactID:(id)arg3 commandBatcher:(id)arg4;	// IMP=0x0010000000162962
- (id)_gkContactsWithContactIDs:(id)arg1;	// IMP=0x001000000016271c
- (void)_gkSyncAllContactsWithMeContactID:(id)arg1 playerProvider:(id)arg2 batchSize:(unsigned long long)arg3;	// IMP=0x0010000000162058
- (id)_gkMeContact;	// IMP=0x0010000000161ef0
- (void)_gkSyncWithChangeHistoryResult:(id)arg1 playerProvider:(id)arg2 meContactID:(id)arg3 batchSize:(unsigned long long)arg4;	// IMP=0x0010000000161c41
- (id)_gkChangeHistoryRequestWithToken:(id)arg1;	// IMP=0x0010000000161b98
- (void)_gkSyncContactsWithChangeHistoryToken:(id)arg1 playerProvider:(id)arg2 batchSize:(unsigned long long)arg3 changeHistoryLimit:(unsigned long long)arg4 cachedListVersion:(short)arg5;	// IMP=0x0010000000161643
- (id)_gkContactKeysToFetch;	// IMP=0x001000000016153f
@end
