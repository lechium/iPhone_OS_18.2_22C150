//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsUI2/UNUserNotificationCenterDelegate-Protocol.h>

@class UNNotificationResponse, UNNotificationSettings, UNUserNotificationCenter;

@protocol UNUserNotificationCenterDelegatePrivate <UNUserNotificationCenterDelegate>

@optional
- (void)userNotificationCenter:(UNUserNotificationCenter *)arg1 didOpenApplicationForResponse:(UNNotificationResponse *)arg2;
- (void)userNotificationCenter:(UNUserNotificationCenter *)arg1 didChangeSettings:(UNNotificationSettings *)arg2;
@end
