//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@protocol WBSHistoryAccessSessionProtocol
- (void)getHistoryVisitsAfterDate:(NSDate *)arg1 beforeDate:(NSDate *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)getHistoryItemsVisitedAfterDate:(NSDate *)arg1 beforeDate:(NSDate *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
@end

