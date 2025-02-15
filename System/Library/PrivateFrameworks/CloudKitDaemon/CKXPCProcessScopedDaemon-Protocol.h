//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKAccountOverrideInfo, NSArray, NSFileHandle, NSString;

@protocol CKXPCProcessScopedDaemon
- (void)globalDeviceIdentifierWithCompletionHandler:(void (^)(NSString *, NSError *))arg1;
- (void)maxInlineMergeableDeltaSizeWithCompletionHandler:(void (^)(unsigned long long))arg1;
- (void)updatePushTokens;
- (void)wipeServerConfigurationsAndDie;
- (void)wipeAllCachesAndDie;
- (void)fetchUsabilityForTestAccountCredentials:(CKAccountOverrideInfo *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)accountWithID:(NSString *)arg1 changedWithChangeType:(long long)arg2;
- (void)accountsWillDeleteAccount:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)accountsDidRevokeAccessToBundleID:(NSString *)arg1 containerIdentifiers:(NSArray *)arg2;
- (void)accountsDidGrantAccessToBundleID:(NSString *)arg1 containerIdentifiers:(NSArray *)arg2;
- (void)clearPCSCachesForKnownContainersWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)dumpAllClientsStatusReportToFileHandle:(NSFileHandle *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

