//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NCNotificationListCountIndicatorViewController, UIView;

@protocol NCNotificationListCountIndicatorViewControllerDelegate <NSObject>
- (void)notificationListCountIndicatorViewControllerDidUpdate:(NCNotificationListCountIndicatorViewController *)arg1;
- (void)notificationListCountIndicatorViewController:(NCNotificationListCountIndicatorViewController *)arg1 didChangeVisibility:(_Bool)arg2;
- (void)notificationListCountIndicatorViewControllerLongPressed:(NCNotificationListCountIndicatorViewController *)arg1 presentingView:(UIView *)arg2;
- (void)notificationListCountIndicatorViewControllerTapped:(NCNotificationListCountIndicatorViewController *)arg1;
@end
