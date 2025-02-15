//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ManageSubscriptionsRequest, NSNumber, NSString;

@protocol InAppEngagementService
- (void)presentCodeRedemptionSheetWithSceneID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)presentRefundRequestSheetForTransactionID:(NSNumber *)arg1 sceneID:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (void)presentManageSubscriptionsWithRequest:(ManageSubscriptionsRequest *)arg1 reply:(void (^)(NSError *))arg2;
- (void)manageSubscriptionsEngagementRequestWithRequest:(ManageSubscriptionsRequest *)arg1 reply:(void (^)(NSError *, NSData *))arg2;
@end

