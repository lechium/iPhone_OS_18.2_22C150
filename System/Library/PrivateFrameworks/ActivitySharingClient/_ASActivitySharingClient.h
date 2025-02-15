//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASUserNotificationResponse, MISSING_TYPE, NSString;

@interface _ASActivitySharingClient : NSObject
{
    MISSING_TYPE *transportClient;	// 8 = 0x8
    MISSING_TYPE *asListener;	// 48 = 0x30
    MISSING_TYPE *secureCloudClient;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000002b8f0
- (void)pushFakeActivityDataWithCompletion:(void (^)(_Bool, NSError *))arg1;	// IMP=0x000000000002b6a0
- (void)appBadgeCountWithCompletion:(void (^)(long long, NSError *))arg1;	// IMP=0x000000000002b260
- (void)handleNotificationResponse:(ASUserNotificationResponse *)arg1 completion:(void (^)(_Bool, NSError *))arg2;	// IMP=0x000000000002ae40
- (void)removeAllFriendsWithCompletion:(void (^)(_Bool, NSError *))arg1;	// IMP=0x000000000002aa30
- (void)removeFriendWithUUID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;	// IMP=0x000000000002a770
- (void)friendWithRemoteRelationshipUUID:(NSString *)arg1 completion:(void (^)(ASFriend *, NSError *))arg2;	// IMP=0x000000000002a080
- (void)allFriendsWithCompletion:(void (^)(NSSet *, NSError *))arg1;	// IMP=0x0000000000029ba0
- (void)areMultipleDevicesSharingDataForSnapshotIndex:(long long)arg1 completion:(void (^)(_Bool, NSError *))arg2;	// IMP=0x00000000000295e0
- (void)expireChangeTokenWithCompletion:(void (^)(_Bool, NSError *))arg1;	// IMP=0x0000000000029210
- (void)isCloudKitAccountActiveWithCompletion:(void (^)(_Bool, NSError *))arg1;	// IMP=0x0000000000028f10
- (void)fetchActivityDataIfGreaterThanLastFetchElapsedMinimum:(unsigned long long)arg1 completion:(void (^)(_Bool, NSError *))arg2;	// IMP=0x0000000000028b70
- (void)immediateFetchActivityDataWithCompletion:(void (^)(_Bool, NSError *))arg1;	// IMP=0x0000000000028690
- (void)pushActivityDataWithCompletion:(void (^)(_Bool, NSError *))arg1;	// IMP=0x0000000000028250
- (void)rollCompetitionWithFriendUUID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;	// IMP=0x0000000000027f20
- (void)completeCompetitionWithFriendUUID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;	// IMP=0x0000000000027b50
- (void)ignoreCompetitionInviteFromFriendUUID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;	// IMP=0x0000000000027830
- (void)acceptCompetitionInviteFromFriendUUID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;	// IMP=0x0000000000027510
- (void)sendCompetitionInviteToFriendUUID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;	// IMP=0x00000000000271f0
- (void)setActivityDataVisible:(_Bool)arg1 friendUUID:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;	// IMP=0x0000000000026d60
- (void)setMuteEnabled:(_Bool)arg1 friendUUID:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;	// IMP=0x00000000000266e0
- (void)ignoreFriendInviteFromFriendUUID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;	// IMP=0x0000000000026180
- (void)withdrawFriendInviteToFriendUUID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;	// IMP=0x0000000000025d50
- (void)acceptFriendInviteFromFriendUUID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;	// IMP=0x00000000000258a0
- (void)sendFriendInviteToDestination:(NSString *)arg1 callerID:(NSString *)arg2 serviceIdentifier:(NSString *)arg3 completion:(void (^)(_Bool, NSError *))arg4;	// IMP=0x0000000000025220
- (void)invalidateWithCompletionHandler:(void (^)(void))arg1;	// IMP=0x0000000000024ce0
- (void)activateWithCompletionHandler:(void (^)(void))arg1;	// IMP=0x0000000000024a10
- (id)init;	// IMP=0x00000000000240a0

@end

