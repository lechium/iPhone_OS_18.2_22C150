//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPSupport_VideoRangeSingleton : NSObject
{
    NSObject<OS_dispatch_queue> *_notificationQ;	// 8 = 0x8
}

+ (id)sharedFPSupportSingleton;	// IMP=0x006000000026808f
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000268236
- (void)dealloc;	// IMP=0x0000000000268207
- (id)init;	// IMP=0x000000000026817d
- (void)postNotification;	// IMP=0x0000000000268104

@end
