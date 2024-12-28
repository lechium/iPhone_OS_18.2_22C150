//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSUUID;

@protocol APXPCGuardService
- (void)noteAllScenesDismissedForBundleID:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)abortOngoingAuthWithCompletion:(void (^)(NSError *))arg1;
- (void)authenticateForBundle:(NSString *)arg1 interfacePresentationTarget:(const CDStruct_6ad76789 *)arg2 completion:(void (^)(NSError *))arg3;
- (void)authenticateForShieldUnlockOfBundle:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)authenticateUnconditionallyWithReason:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)getIsChallengeCurrentlyRequiredForBundle:(NSString *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)endTransactionWithUUID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)beginTransactionForAccessOfBundle:(NSString *)arg1 onBehalfOfProcessWithAuditToken:(const CDStruct_6ad76789 *)arg2 accessGrantReason:(long long)arg3 transactionUUID:(NSUUID *)arg4 completion:(void (^)(NSError *))arg5;
- (void)initiateAuthenticationWithShieldingForBundle:(NSString *)arg1 onBehalfOfProcessWithAuditToken:(const CDStruct_6ad76789 *)arg2 accessGrantReason:(long long)arg3 completion:(void (^)(NSError *))arg4;
- (void)authenticateForBundle:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)initiateAuthenticationWithShieldingForBundle:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
@end
