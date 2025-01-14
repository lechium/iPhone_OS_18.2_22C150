//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_nw_listener;

__attribute__((visibility("hidden")))
@interface NWListener : NSObject
{
    NSObject<OS_dispatch_queue> *listenerQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *transportQueue;	// 16 = 0x10
    NSObject<OS_dispatch_semaphore> *readySemaphore;	// 24 = 0x18
    NSObject<OS_nw_listener> *listener;	// 32 = 0x20
    int listenerState;	// 40 = 0x28
    void *layer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000021809
- (void)waitForReady;	// IMP=0x00000000000217f4
- (void)setListener:(id)arg1;	// IMP=0x00000000000212d9
- (void)stopListening;	// IMP=0x0000000000021246
- (id)initWithLayer:(void *)arg1;	// IMP=0x00000000000211e2

@end

