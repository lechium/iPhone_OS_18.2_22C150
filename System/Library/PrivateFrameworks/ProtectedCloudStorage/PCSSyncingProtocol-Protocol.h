//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSString;

@protocol PCSSyncingProtocol
- (void)setupIdentitiesWithParameters:(NSDictionary *)arg1 complete:(void (^)(unsigned long long, unsigned long long, NSArray *, NSError *))arg2;
- (void)getHealthSummary:(void (^)(NSDictionary *, NSError *))arg1;
- (_Bool)shouldRoll;
- (void)checkForBackupStateChange;
- (void)triggerKeyRolling;
- (void)mobileBackupStatus:(void (^)(_Bool, NSError *))arg1;
- (void)fetchStats:(void (^)(UserRegistryStats *))arg1;
- (void)restoreMobileBackup:(_Bool)arg1 dsid:(NSString *)arg2 withReply:(void (^)(NSNumber *, NSNumber *, NSNumber *, NSError *))arg3;
- (void)userDBBackupRecordIDsWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)mobileBackupRecordIDsWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)triggerUserRegistryCheck:(NSDictionary *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)fetchAllDeviceKeys:(NSDictionary *)arg1 withReply:(void (^)(NSString *, NSData *, NSData *, NSArray *, NSError *))arg2;
- (void)keyRollPending:(NSString *)arg1 complete:(void (^)(_Bool, NSError *))arg2;
- (void)manateeStatus:(NSString *)arg1 complete:(void (^)(unsigned int))arg2;
- (void)createIdentity:(NSString *)arg1 dsid:(NSString *)arg2 roll:(_Bool)arg3 sync:(_Bool)arg4 forceSync:(_Bool)arg5 complete:(void (^)(NSData *, PCSMTT *, NSError *))arg6;
- (void)disableWalrusForAccount:(NSString *)arg1 withParameters:(NSDictionary *)arg2 complete:(void (^)(_Bool, NSError *))arg3;
- (void)enableWalrusForAccount:(NSString *)arg1 withParameters:(NSDictionary *)arg2 complete:(void (^)(_Bool, NSError *))arg3;
- (void)migrateToiCDPForAccount:(NSString *)arg1 withParameters:(NSDictionary *)arg2 complete:(void (^)(_Bool, NSError *))arg3;
- (void)setupIdentitiesForAccount:(NSString *)arg1 withParameters:(NSDictionary *)arg2 optional:(_Bool)arg3;
- (void)triggerSyncingWithEscrowProxy:(NSString *)arg1 dsid:(NSString *)arg2 publicKeys:(NSArray *)arg3 accountIdentifier:(NSString *)arg4 settingsKeyExpirationDate:(NSString *)arg5 settingsKeyIdentifier:(NSString *)arg6 complete:(void (^)(_Bool, PCSMTT *, NSError *))arg7;
- (void)triggerWatchSyncing:(void (^)(void))arg1;
- (void)triggerDaily:(NSDictionary *)arg1 withReply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)syncKeys:(NSDictionary *)arg1 withReply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)getAllClients:(void (^)(NSDictionary *, NSError *))arg1;
@end
