//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AnnounceDaemon/ANAnalyticsDailyTrackingProtocol-Protocol.h>

@class ANAnalyticsCounter;
@protocol ANAnalyticsDailyDelegate;

@protocol ANAnalyticsDailyProtocol <ANAnalyticsDailyTrackingProtocol>
@property(nonatomic) __weak id <ANAnalyticsDailyDelegate> delegate;
- (void)recordReachableHomes:(ANAnalyticsCounter *)arg1;
- (void)start;
@end
