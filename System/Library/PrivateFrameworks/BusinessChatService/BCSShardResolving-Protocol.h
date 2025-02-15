//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BusinessChatService/NSObject-Protocol.h>

@class NSString;
@protocol BCSBusinessBatchQuery, BCSResolutionMetricProtocol, BCSShardItemIdentifying;

@protocol BCSShardResolving <NSObject>
- (void)shardItemsMatching:(id <BCSBusinessBatchQuery>)arg1 metric:(id <BCSResolutionMetricProtocol>)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)shardItemMatching:(id <BCSShardItemIdentifying>)arg1 clientBundleID:(NSString *)arg2 cacheOnly:(_Bool)arg3 metric:(id <BCSResolutionMetricProtocol>)arg4 completion:(void (^)(id <BCSShardItemProtocol>, NSError *))arg5;
- (void)shardItemMatching:(id <BCSShardItemIdentifying>)arg1 clientBundleID:(NSString *)arg2 metric:(id <BCSResolutionMetricProtocol>)arg3 completion:(void (^)(id <BCSShardItemProtocol>, NSError *))arg4;
@end

