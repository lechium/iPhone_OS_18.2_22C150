//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class NSArray, NSDate;
@protocol DNDSLifetimeMonitorDataSource, DNDSLifetimeMonitorDelegate;

@protocol DNDSLifetimeMonitor <NSObject>
@property(nonatomic) __weak id <DNDSLifetimeMonitorDelegate> delegate;
@property(nonatomic) __weak id <DNDSLifetimeMonitorDataSource> dataSource;
@property(readonly, copy, nonatomic) NSArray *activeLifetimeAssertionUUIDs;
- (void)refreshMonitorForDate:(NSDate *)arg1;
@end

