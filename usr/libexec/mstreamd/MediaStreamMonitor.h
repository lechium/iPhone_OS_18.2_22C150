//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSIOSAlbumSharingDaemon, NSString, NSTimer;

@interface MediaStreamMonitor : NSObject
{
    NSTimer *_idleTimer;	// 8 = 0x8
    _Bool _lastNotifiedState;	// 16 = 0x10
    NSTimer *_idleStateNotificationTimer;	// 24 = 0x18
    MSIOSAlbumSharingDaemon *_albumSharingDaemon;	// 32 = 0x20
    int _busyCount;	// 40 = 0x28
    NSTimer *_albumSharingDaemonPokeTimer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000001ad1
@property(nonatomic) __weak MSIOSAlbumSharingDaemon *albumSharingDaemon; // @synthesize albumSharingDaemon=_albumSharingDaemon;
- (void)doNothingTimer:(id)arg1;	// IMP=0x0010000000001aa4
- (void)mstreamdIdleTimerDidFire:(id)arg1;	// IMP=0x0010000000001996
- (void)albumSharingDaemonPokeTimerDidFire:(id)arg1;	// IMP=0x00100000000018fb
- (void)MSAlbumSharingDaemonDidUnidleMomentarily:(id)arg1;	// IMP=0x00100000000018e9
- (void)MSAlbumSharingDaemonDidUnidle:(id)arg1;	// IMP=0x0010000000001884
- (void)MSAlbumSharingDaemonDidIdle:(id)arg1;	// IMP=0x0010000000001773
- (void)_didUnidle;	// IMP=0x00100000000016b0
- (void)_resetIdleTimer;	// IMP=0x00100000000015c0
- (void)_didIdle;	// IMP=0x00100000000013f3
- (void)_stopIdleTimer;	// IMP=0x0010000000001355
- (void)_startIdleTimerWithInterval:(double)arg1;	// IMP=0x0010000000001278
- (void)dealloc;	// IMP=0x0010000000001213
- (id)init;	// IMP=0x00100000000010f1
- (id)_dormantTimerWithSelector:(SEL)arg1;	// IMP=0x0010000000001061

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

