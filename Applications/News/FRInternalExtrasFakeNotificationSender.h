//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FRInternalExtrasFakeNotificationSender : NSObject
{
}

- (void)_scheduleFakeNewArticleNotification:(id)arg1 whenAppEntersBackground:(id)arg2;	// IMP=0x004000000005eedc
- (void)_scheduleFakeChannelSupportNotification:(id)arg1;	// IMP=0x001000000005edf3
- (void)scheduleAnyFakeNotificationsFromInternalExtras:(id)arg1 whenAppEntersBackground:(id)arg2;	// IMP=0x001000000005ece8

@end
