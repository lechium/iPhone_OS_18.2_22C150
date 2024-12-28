//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDHouseholdActivityLogEvent, NSDate, NSDictionary, NSMutableDictionary, NSUUID;

@protocol HMDHouseholdActivityLogEventContributing
- (void)deleteCountersAfterDate:(NSDate *)arg1;
- (void)deleteCountersBeforeDate:(NSDate *)arg1;
- (void)finishCoalescingLogEvent:(HMDHouseholdActivityLogEvent *)arg1;
- (void)coalesceLogEvent:(HMDHouseholdActivityLogEvent *)arg1 fromSourceEvent:(HMDHouseholdActivityLogEvent *)arg2;
- (void)startCoalescingLogEvent:(HMDHouseholdActivityLogEvent *)arg1;
- (void)contributeLogEvent:(HMDHouseholdActivityLogEvent *)arg1 toCoreAnalyticsEvent:(NSMutableDictionary *)arg2;
- (void)deserializeLogEvent:(HMDHouseholdActivityLogEvent *)arg1 fromSerializedMetric:(NSDictionary *)arg2;
- (void)contributeLogEvent:(HMDHouseholdActivityLogEvent *)arg1 toSerializedMetric:(NSMutableDictionary *)arg2;
- (void)populateLogEvent:(HMDHouseholdActivityLogEvent *)arg1 forHomeWithUUID:(NSUUID *)arg2 associatedToDate:(NSDate *)arg3;
@end
