//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSEngagementEnqueueRequest, AMSEngagementSyncRequest, NSArray, NSString;

@protocol AMSEngagementServiceProtocol
- (void)treatmentStoreServiceWithReply:(void (^)(id <AMSTreatmentStoreServiceProtocol>, NSError *))arg1;
- (void)syncWithRequest:(AMSEngagementSyncRequest *)arg1 completion:(void (^)(AMSEngagementSyncResult *, NSError *))arg2;
- (void)notifyBlockedMessages:(NSArray *)arg1;
- (void)enqueueWithRequest:(AMSEngagementEnqueueRequest *)arg1 completion:(void (^)(AMSEngagementEnqueueResult *, NSError *))arg2;
- (void)contentInfoForApp:(NSString *)arg1 cacheKey:(NSString *)arg2 version:(NSString *)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
- (void)beginObservingMessages;

@optional
- (void)manualSyncMetricsIdentifiers;
- (oneway void)fetchMetricsIdentifiers;
- (oneway void)syncMetricsIdentifiers;
@end

