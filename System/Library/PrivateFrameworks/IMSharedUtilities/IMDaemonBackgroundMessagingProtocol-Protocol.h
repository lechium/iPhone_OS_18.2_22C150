//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IMBackgroundMessage, IMBackgroundMessageRecipient, NSArray;

@protocol IMDaemonBackgroundMessagingProtocol
- (void)sendBackgroundMessage:(IMBackgroundMessage *)arg1 toRecipient:(IMBackgroundMessageRecipient *)arg2 completion:(void (^)(NSError *))arg3;
- (void)checkAuthorizationStatusForRecipients:(NSArray *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)requestBackgroundMessagingAuthorizationForRecipients:(NSArray *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
@end

