//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarNotification/NSObject-Protocol.h>

@class NSDate, NSDictionary, NSString;

@protocol CALNTimeToLeaveRefreshStorage <NSObject>
- (void)removeRefreshDates;
- (void)removeRefreshDateWithIdentifier:(NSString *)arg1;
- (void)addRefreshDate:(NSDate *)arg1 withIdentifier:(NSString *)arg2;
- (NSDate *)refreshDateWithIdentifier:(NSString *)arg1;
- (NSDictionary *)refreshDates;
@end
