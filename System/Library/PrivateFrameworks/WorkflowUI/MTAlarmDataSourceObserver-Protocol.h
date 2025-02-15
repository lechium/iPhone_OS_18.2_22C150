//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTAlarmDataSource, NSArray;

@protocol MTAlarmDataSourceObserver
- (void)dataSourceDidReload:(MTAlarmDataSource *)arg1;

@optional
- (void)dataSource:(MTAlarmDataSource *)arg1 didRemoveAlarms:(NSArray *)arg2;
- (void)dataSource:(MTAlarmDataSource *)arg1 didUpdateAlarms:(NSArray *)arg2;
- (void)dataSource:(MTAlarmDataSource *)arg1 didAddAlarms:(NSArray *)arg2;
@end

