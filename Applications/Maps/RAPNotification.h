//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RAPNotification : NSObject
{
}

+ (id)errorDomain;	// IMP=0x0040000000cd99f1
+ (_Bool)deleteNotificationWithID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000cd97fa
+ (_Bool)deleteNotificationWithID:(id)arg1;	// IMP=0x0010000000cd97e6
+ (_Bool)shouldDeleteNotificationWithID:(id)arg1;	// IMP=0x0010000000cd9616
+ (id)notificationCachePath;	// IMP=0x0010000000cd950c
+ (id)filenameForNotificationID:(id)arg1;	// IMP=0x0010000000cd94e7
+ (_Bool)isValidNotificationID:(id)arg1;	// IMP=0x0010000000cd94ce
+ (id)generateNotificationID;	// IMP=0x0010000000cd9477

@end

