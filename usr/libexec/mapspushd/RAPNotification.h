//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RAPNotification : NSObject
{
}

+ (id)errorDomain;	// IMP=0x004000000001fc9d
+ (_Bool)deleteNotificationWithID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001faa6
+ (_Bool)deleteNotificationWithID:(id)arg1;	// IMP=0x001000000001fa92
+ (_Bool)shouldDeleteNotificationWithID:(id)arg1;	// IMP=0x001000000001f8c2
+ (id)notificationCachePath;	// IMP=0x001000000001f7b8
+ (id)filenameForNotificationID:(id)arg1;	// IMP=0x001000000001f793
+ (_Bool)isValidNotificationID:(id)arg1;	// IMP=0x001000000001f77a
+ (id)generateNotificationID;	// IMP=0x001000000001f723

@end

