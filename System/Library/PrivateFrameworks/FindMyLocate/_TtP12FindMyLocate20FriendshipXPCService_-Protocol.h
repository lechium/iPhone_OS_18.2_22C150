//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@protocol _TtP12FindMyLocate20FriendshipXPCService_
- (void)stopSharingMyLocation:(NSData *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)sendFriendshipInvite:(NSData *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)sendFriendshipOffer:(NSData *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)offerExpirationForHandle:(NSData *)arg1 groupId:(NSString *)arg2 completion:(void (^)(NSDate *, NSError *))arg3;
- (void)offerExpirationForHandle:(NSData *)arg1 fromHandle:(NSData *)arg2 completion:(void (^)(NSDate *, NSError *))arg3;
- (void)friendshipStateWithRequest:(NSData *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)friendsWithTypes:(NSData *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)startFriendsUpdateWithCompletion:(void (^)(NSError *))arg1;
- (void)respondToInviteRequest:(NSData *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
@end

