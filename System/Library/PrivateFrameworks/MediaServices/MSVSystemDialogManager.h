//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MSVSystemDialogManager : NSObject
{
    struct __CFDictionary *_registeredSystemDialogs;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x0060000000049b9f
- (void).cxx_destruct;	// IMP=0x0000000000049af9
- (void)unregisterSystemDialogWithUserNotification:(struct __CFUserNotification *)arg1;	// IMP=0x0000000000049aaa
- (id)systemDialogForUserNotification:(struct __CFUserNotification *)arg1;	// IMP=0x00000000000499ed
- (void)registerSystemDialog:(id)arg1 forUserNotification:(struct __CFUserNotification *)arg2;	// IMP=0x000000000004994c
- (void)dealloc;	// IMP=0x0000000000049912
- (id)init;	// IMP=0x0000000000049893

@end
