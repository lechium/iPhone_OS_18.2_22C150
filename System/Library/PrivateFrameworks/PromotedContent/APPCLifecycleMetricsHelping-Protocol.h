//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@protocol APPCLifecycleMetricsHelping
- (void)manuallyDiscardWithReason:(long long)arg1;
- (void)trackImpressionWithStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2;
- (void)contentLoadFailure;
- (void)discarded;
- (void)missedOpportunity;
@end
