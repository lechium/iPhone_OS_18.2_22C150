//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CMActivityManagerInternal : NSObject
{
    void *fLocationdConnection;	// 8 = 0x8
    CDUnknownBlockType fActivityHandler;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *fPrivateQueue;	// 24 = 0x18
    _Bool fSubscribedToMotionState;	// 32 = 0x20
    NSObject<OS_dispatch_semaphore> *fSidebandOverrideSemaphore;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *fSidebandOverrideQueue;	// 48 = 0x30
    _Bool fSidebandOverrideWaiting;	// 56 = 0x38
    long long fSidebandOverrideResult;	// 64 = 0x40
    NSObject<OS_dispatch_semaphore> *fMotionStateSimSemaphore;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *fMotionStateSimQueue;	// 80 = 0x50
    _Bool fMotionStateSimWaiting;	// 88 = 0x58
    long long fMotionStateSimResult;	// 96 = 0x60
    long long fMotionStateYouthSimResult;	// 104 = 0x68
}

- (void)simulateMotionStateYouthWithState:(long long)arg1;	// IMP=0x000000000020b619
- (void)simulateMotionState:(_Bool)arg1 withState:(long long)arg2;	// IMP=0x000000000020b41e
- (void)overrideOscarSideband:(_Bool)arg1 withState:(long long)arg2;	// IMP=0x000000000020b223
- (void)stopActivityUpdatesPrivate;	// IMP=0x000000000020b079
- (void)startActivityUpdatesWithHandlerPrivate:(CDUnknownBlockType)arg1;	// IMP=0x000000000020aefd
- (void)disconnect;	// IMP=0x000000000020aec3
- (void)connect;	// IMP=0x000000000020a0a0
- (void)dealloc;	// IMP=0x000000000020a01e
- (id)init;	// IMP=0x0000000000209fd0

@end

