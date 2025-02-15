//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AppStoreUtility : NSObject
{
}

+ (void)_sendSoftwareManifest:(id)arg1 withReason:(id)arg2;	// IMP=0x00400000001da662
+ (id)_newRequestWithManifest:(id)arg1;	// IMP=0x00100000001da5cd
+ (id)_newManifestWithManifestType:(long long)arg1;	// IMP=0x00100000001da592
+ (void)_checkClaimsForAccountID:(id)arg1 claimStyle:(long long)arg2 clientAuditTokenData:(id)arg3 establishActiveAccounts:(_Bool)arg4 ignoresPreviousClaimAttempts:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00100000001da004
+ (void)_addDownloads:(id)arg1 toManifest:(id)arg2 forClientID:(id)arg3;	// IMP=0x00100000001d9cfe
+ (void)sendAppStoreSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2;	// IMP=0x00100000001d9ad8
+ (void)sendActivitySubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2;	// IMP=0x00100000001d98b2
+ (void)sendNewsSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2;	// IMP=0x00100000001d968f
+ (void)sendSoftwareDownloads:(id)arg1 withReason:(id)arg2 forClientID:(id)arg3 manifestType:(long long)arg4;	// IMP=0x00100000001d9407
+ (void)sendSoftwareDownloads:(id)arg1 withReason:(id)arg2 forClientID:(id)arg3;	// IMP=0x00100000001d93f2
+ (void)sendSoftwareDownloads:(id)arg1 withReason:(id)arg2 manifestType:(long long)arg3;	// IMP=0x00100000001d93d6
+ (void)sendSoftwareDownloads:(id)arg1 withReason:(id)arg2;	// IMP=0x00100000001d93ba
+ (void)sendClusterMappings:(id)arg1;	// IMP=0x00100000001d8abc
+ (void)restoreDemotedAppsWithBundleIDs:(id)arg1;	// IMP=0x00100000001d85fd
+ (void)repairAppWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d824b
+ (void)reloadUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001d7fe3
+ (void)postBulletinWithTitle:(id)arg1 message:(id)arg2 destinations:(unsigned long long)arg3 actionButtonTitle:(id)arg4 actionButtonURL:(id)arg5 launchURL:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x00100000001d7c8b
+ (void)installManagedAppWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d78f7
+ (void)hidePendingUpdatesBadge;	// IMP=0x00100000001d7710
+ (void)claimAppsWithPurchase:(id)arg1;	// IMP=0x00100000001d70fa
+ (void)checkFirstPartyClaimsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001d70d3
+ (void)checkFirstPartyClaimsWithAuditTokenData:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d70ac
+ (void)checkDownloadQueue;	// IMP=0x00100000001d6c5b
+ (void)checkClaimsEstablishingActiveAccounts:(_Bool)arg1 ignoringPreviousClaimAttempts:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000001d6c2e

@end

