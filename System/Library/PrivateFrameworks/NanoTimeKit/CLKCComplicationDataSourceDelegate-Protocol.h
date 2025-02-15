//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKit/NSObject-Protocol.h>

@class NSArray, NSDate;

@protocol CLKCComplicationDataSourceDelegate <NSObject>
- (void)invalidateSwitcherTemplate;
- (double)minimumIntervalBetweenTimelineEntries;
- (void)appendEntries:(NSArray *)arg1 withTritiumUpdatePriority:(long long)arg2;
- (void)appendEntries:(NSArray *)arg1;
- (void)setTimelineEndDate:(NSDate *)arg1;
- (void)invalidateEntriesWithTritiumUpdatePriority:(long long)arg1;
- (void)invalidateEntries;
@end

