//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActivitySharing/NSObject-Protocol.h>

@class ASUserNotificationResponse, NSNumber, NSString;

@protocol ASServerInterface <NSObject>
- (void)remote_queryAppBadgeCountWithCompletion:(void (^)(NSNumber *, _Bool, NSError *))arg1;
- (void)remote_handleNotificationResponse:(ASUserNotificationResponse *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_friendWithRemoteUUID:(NSString *)arg1 completion:(void (^)(NSData *, _Bool, NSError *))arg2;
- (void)remote_fetchAllFriendsWithCompletion:(void (^)(ASCodableFriendList *, _Bool, NSError *))arg1;
- (void)remote_expireChangeTokenWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_completeCompetitionWithFriendWithUUID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_ignoreCompetitionRequestFromFriendWithUUID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_acceptCompetitionRequestFromFriendWithUUID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_sendCompetitionRequestToFriendWithUUID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_fetchAreMultipleDevicesSharingDataForSnapshotIndex:(NSNumber *)arg1 withCompletion:(void (^)(_Bool, _Bool, NSError *))arg2;
- (void)remote_clearFriendListWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_cloudKitAccountStatusWithCompletion:(void (^)(_Bool, _Bool, NSError *))arg1;
- (void)remote_fetchAllDataIfTimeSinceLastFetchIsGreaterThan:(unsigned long long)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_fetchAllDataWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_pushFakeActivityDataWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_pushActivityDataWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_removeFriendWithUUID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_setMuteEnabled:(_Bool)arg1 forFriendWithUUID:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_setActivityDataVisible:(_Bool)arg1 toFriendWithUUID:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_ignoreInviteRequestFromFriendWithUUID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_sendWithdrawInviteRequestToFriendWithUUID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_acceptInviteRequestFromFriendWithUUID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_sendInviteRequestToDestination:(NSString *)arg1 callerID:(NSString *)arg2 serviceIdentifier:(NSString *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
@end

