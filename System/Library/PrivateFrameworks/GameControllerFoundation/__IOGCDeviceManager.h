//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCIONotificationPort;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __IOGCDeviceManager : NSObject
{
    struct __CFAllocator *_allocator;	// 8 = 0x8
    _Atomic unsigned char _state;	// 16 = 0x10
    struct __CFDictionary *_matching;	// 24 = 0x18
    struct __CFSet *_devices;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    CDUnknownBlockType _cancelHandler;	// 48 = 0x30
    GCIONotificationPort *_notificationChannel;	// 56 = 0x38
    unsigned int _deviceMatchedNotification;	// 64 = 0x40
    struct __CFDictionary *_deviceRemovedObservers;	// 72 = 0x48
    CDUnknownFunctionPointerType _deviceMatchedCallback;	// 80 = 0x50
    void *_deviceMatchedContext;	// 88 = 0x58
}

- (void)dealloc;	// IMP=0x000000000002a0d5
- (id)init;	// IMP=0x000000000002a0bd

@end
