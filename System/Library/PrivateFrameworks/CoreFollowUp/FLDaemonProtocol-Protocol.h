//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreFollowUp/NSObject-Protocol.h>

@class FLFollowUpItem, FLHSA2LoginNotification, FLHSA2PasswordResetNotification, NSArray, NSNumber, NSString;

@protocol FLDaemonProtocol <NSObject>
- (void)postHSA2PasswordResetNotification:(FLHSA2PasswordResetNotification *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)didActivateHSA2LoginNotificationNotification:(FLHSA2LoginNotification *)arg1;
- (void)tearDownHSA2LoginNotificationWithPushMessageID:(NSString *)arg1;
- (void)postHSA2PasswordChangeForAppleID:(NSString *)arg1 completion:(void (^)(unsigned long long, NSError *))arg2;
- (void)postHSA2LoginCode:(NSNumber *)arg1 withNotification:(FLHSA2LoginNotification *)arg2 completion:(void (^)(unsigned long long, NSError *))arg3;
- (void)postHSA2LoginNotification:(FLHSA2LoginNotification *)arg1 completion:(void (^)(unsigned long long, NSError *))arg2;
- (void)updateBadgesForTimer;
- (void)clearNotificationForItem:(FLFollowUpItem *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)clearPendingFollowUpItemsForClientIdentifier:(NSString *)arg1 uniqueIdentifiers:(NSArray *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)clearPendingFollowUpItemsForClientIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)pendingFollowUpItemsForClientIdentifier:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)countOfPendingFollowUpItemsForClientIdentifier:(NSString *)arg1 completion:(void (^)(unsigned long long, NSError *))arg2;
- (void)postFollowUpItem:(FLFollowUpItem *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

