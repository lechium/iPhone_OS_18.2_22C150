//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

@protocol SDLockHandlerDelegate
- (void)unlocked;
- (void)lockedCx;
- (void)lockingCx;
- (void)locked;
- (void)locking;
- (void)firstUnlockSBCompleted;
- (void)migrationCompleted;
- (void)deviceStateWillChange:(_Bool)arg1;
- (NSObject<OS_dispatch_queue> *)indexQueue;
@end

