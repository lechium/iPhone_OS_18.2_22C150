//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC21HealthAppHealthDaemon30HDHealthAppNotificationManager : NSObject
{
    MISSING_TYPE *summarySharingEntryManager;	// 8 = 0x8
    MISSING_TYPE *userNotificationCenter;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000010680
- (id)init;	// IMP=0x0000000000010620
- (void)removeNotificationsWithIdentifiers:(id)arg1;	// IMP=0x0000000000010580
- (void)removeNotificationWithIdentifier:(id)arg1;	// IMP=0x0000000000010480
- (id)createSharingReminderNotificationAndReturnError:(id *)arg1;	// IMP=0x00000000000102e0
- (id)initWithProfile:(id)arg1 userNotificationCenter:(id)arg2;	// IMP=0x0000000000010060
- (id)initWithProfile:(id)arg1;	// IMP=0x000000000000fdf0

@end

