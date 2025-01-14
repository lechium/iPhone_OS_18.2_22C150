//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface UserNotificationCenter : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSMutableArray *_userNotifications;	// 16 = 0x10
}

+ (id)defaultCenter;	// IMP=0x004000000011b780
- (void)_showPreparedNotification:(id)arg1;	// IMP=0x002000000011c37c
- (void)_finishUserNotification:(struct __CFUserNotification *)arg1 withResponseFlags:(unsigned long long)arg2;	// IMP=0x001000000011c129
- (void)updateUserNotification:(id)arg1 withUserNotification:(id)arg2;	// IMP=0x001000000011c0c8
- (void)updateUserNotification:(id)arg1 withDictionary:(struct __CFDictionary *)arg2 options:(unsigned long long)arg3;	// IMP=0x001000000011c029
- (void)updateUserNotification:(id)arg1 withDialog:(id)arg2;	// IMP=0x001000000011bfdd
- (id)showUserNotification:(struct __CFDictionary *)arg1 withOptions:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000011be01
- (id)showUserNotification:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000011bda0
- (void)showPreparedNotification:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000011bd11
- (id)showDialog:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000011bcbe
- (id)prepareUserNotificationWithDialog:(id)arg1;	// IMP=0x001000000011bc3e
- (void)cancelUserNotifications:(id)arg1;	// IMP=0x001000000011b85a
- (void)cancelUserNotification:(id)arg1;	// IMP=0x001000000011b7fd
- (void)dealloc;	// IMP=0x001000000011b73c
- (id)init;	// IMP=0x001000000011b6de

@end

