//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActivitySharingDaemonCore/NSObject-Protocol.h>

@class ASUserNotificationResponse;
@protocol ASBulletinPostingManager;

@protocol ASBulletinPostingManagerDelegate <NSObject>
- (void)bulletinPostingManager:(id <ASBulletinPostingManager>)arg1 didReceiveNotificationResponse:(ASUserNotificationResponse *)arg2;
@end
