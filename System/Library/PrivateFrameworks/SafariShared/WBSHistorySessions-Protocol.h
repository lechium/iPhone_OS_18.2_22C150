//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, WBSHistoryItem, WBSHistorySession;

@protocol WBSHistorySessions
@property(readonly, nonatomic) unsigned long long numberOfSessions;
@property(readonly, copy, nonatomic) NSArray *orderedSessions;
- (void)orderedItemsNewerThanDate:(NSDate *)arg1 maxCount:(unsigned long long)arg2 completionHandler:(void (^)(NSArray *))arg3;
- (void)enumerateOrderedItemsLastVisitedInSession:(WBSHistorySession *)arg1 usingBlock:(void (^)(WBSHistoryItem *))arg2;
- (NSArray *)itemsLastVisitedInSession:(WBSHistorySession *)arg1;
- (WBSHistoryItem *)itemLastVisitedInSession:(WBSHistorySession *)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsVisitedInSession:(WBSHistorySession *)arg1;
- (void)orderedSessionsWithCompletionHandler:(void (^)(NSArray *))arg1;
@end

