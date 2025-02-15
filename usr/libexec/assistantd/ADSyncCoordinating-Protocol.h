//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ADSynchronizedHomeAnalyticsIds, ADSynchronizedIdItem, ADSynchronizedUserAnalyticsIds, NSString, NSUUID;

@protocol ADSyncCoordinating
@property(readonly, getter=isPartOfHome) _Bool partOfHome;
@property(readonly, copy) NSUUID *currentHomeId;
@property(readonly, copy) NSString *defaultUserId;
@property(readonly) _Bool multiUserDevice;
- (_Bool)addSeedForHome:(NSUUID *)arg1 seed:(ADSynchronizedIdItem *)arg2;
- (_Bool)addAggregationIdForUser:(NSString *)arg1 aggregationId:(ADSynchronizedIdItem *)arg2;
- (_Bool)addSeedForUser:(NSString *)arg1 seed:(ADSynchronizedIdItem *)arg2;
- (ADSynchronizedHomeAnalyticsIds *)fetchSynchronizedAnalyticsIdsForHome:(NSUUID *)arg1;
- (ADSynchronizedUserAnalyticsIds *)fetchSynchronizedAnalyticsIdsForUser:(NSString *)arg1;
- (void)refreshHomeAndUserDetails;
@end

