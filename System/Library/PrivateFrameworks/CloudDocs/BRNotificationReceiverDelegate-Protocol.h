//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudDocs/NSObject-Protocol.h>

@class BRNotificationReceiver;

@protocol BRNotificationReceiverDelegate <NSObject>
- (void)notificationReceiverDidReceiveNotifications:(BRNotificationReceiver *)arg1;
- (void)notificationsReceiverDidReceiveNotificationsBatch:(BRNotificationReceiver *)arg1;
- (void)notificationsReceiverDidFinishGathering:(BRNotificationReceiver *)arg1;
- (void)notificationsReceiverDidInvalidate:(BRNotificationReceiver *)arg1;
@end

