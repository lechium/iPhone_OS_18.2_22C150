//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppPredictionClient/NSObject-Protocol.h>

@class ATXUserNotification, NSArray;

@protocol ATXLockScreenNotificationRankerProtocol <NSObject>
- (void)rankNewNotificationIntoNotificationArrays:(NSArray *)arg1 newNotification:(ATXUserNotification *)arg2 notificationArrayIndex:(unsigned long long)arg3 reply:(void (^)(unsigned long long, unsigned long long, NSError *))arg4;
- (void)rankNotificationArrays:(NSArray *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
@end
