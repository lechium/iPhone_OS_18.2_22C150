//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NTPBSession;
@protocol NSSNewsAnalyticsAppSessionManagerObserving, NSSNewsAnalyticsSessionManagerObserving;

@protocol NSSNewsAnalyticsSessionManager
@property(readonly, nonatomic) NTPBSession *currentSession;
- (void)addAppSessionObserver:(id <NSSNewsAnalyticsAppSessionManagerObserving>)arg1;
- (void)addObserver:(id <NSSNewsAnalyticsSessionManagerObserving>)arg1;
@end
