//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailDaemon/NSObject-Protocol.h>

@class EDRemindMeNotificationController, NSDate;
@protocol EDPersistedMessage;

@protocol EDRemindMeNotificationControllerEventDelegate <NSObject>
- (void)controller:(EDRemindMeNotificationController *)arg1 scheduleAlarmForMessage:(id <EDPersistedMessage>)arg2 date:(NSDate *)arg3;
@end

