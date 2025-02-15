//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarNotification/CalActivatable-Protocol.h>

@class CALNNotificationRequest, NSArray, NSMutableDictionary, NSSet;
@protocol CALNUserNotificationCenterDelegate;

@protocol CALNUserNotificationCenter <CalActivatable>
@property(nonatomic) __weak id <CALNUserNotificationCenterDelegate> delegate;
- (void)collectSettingsStats:(NSMutableDictionary *)arg1;
- (void)removeAllPendingNotificationRequests;
- (void)removeAllDeliveredNotifications;
- (void)removeDeliveredNotificationsWithIdentifiers:(NSArray *)arg1;
- (NSArray *)deliveredNotifications;
- (_Bool)replaceNotificationRequest:(CALNNotificationRequest *)arg1 error:(id *)arg2;
- (_Bool)addNotificationRequest:(CALNNotificationRequest *)arg1 error:(id *)arg2;
- (NSSet *)notificationCategories;
- (void)setNotificationCategories:(NSSet *)arg1;
@end

