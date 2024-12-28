//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NCNotificationListRevealCoordinator, NSArray;

@protocol NCNotificationListRevealCoordinatorDelegate <NSObject>
- (void)revealCoordinatorDidScrollToReveal:(NCNotificationListRevealCoordinator *)arg1;
- (void)notificationListRevealCoordinator:(NCNotificationListRevealCoordinator *)arg1 updatedRevealPercentage:(double)arg2;
- (void)notificationListRevealCoordinator:(NCNotificationListRevealCoordinator *)arg1 updatedRevealState:(_Bool)arg2;
- (NSArray *)subListsForNotificationListRevealCoordinator:(NCNotificationListRevealCoordinator *)arg1;
- (_Bool)notificationListRevealCoordinatorShouldAllowRevealTransition:(NCNotificationListRevealCoordinator *)arg1;
- (_Bool)notificationListRevealCoordinatorShouldAllowReveal:(NCNotificationListRevealCoordinator *)arg1;
@end
