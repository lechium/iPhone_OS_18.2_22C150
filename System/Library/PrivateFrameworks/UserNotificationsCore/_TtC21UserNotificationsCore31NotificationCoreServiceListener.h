//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC21UserNotificationsCore31NotificationCoreServiceListener : NSObject
{
    MISSING_TYPE *notificationRepository;	// 8 = 0x8
    MISSING_TYPE *categoryRepository;	// 16 = 0x10
    MISSING_TYPE *queue;	// 24 = 0x18
    MISSING_TYPE *queue_listener;	// 32 = 0x20
    MISSING_TYPE *queue_connections;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000c5150
- (id)init;	// IMP=0x00000000000c50f0
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x00000000000c56a0

@end
