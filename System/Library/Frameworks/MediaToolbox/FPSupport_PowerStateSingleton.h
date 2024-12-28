//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPSupport_PowerStateSingleton : NSObject
{
    NSObject<OS_dispatch_queue> *_notificationQ;	// 8 = 0x8
}

+ (id)sharedFPSupportPowerStateSingleton;	// IMP=0x0060000000267e9f
- (void)dealloc;	// IMP=0x000000000026802d
- (id)init;	// IMP=0x0000000000267f9f
- (void)postNotification;	// IMP=0x0000000000267f26
- (void)_didChangePowerState:(id)arg1;	// IMP=0x0000000000267f14

@end
