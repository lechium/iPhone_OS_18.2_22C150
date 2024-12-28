//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFMessageReceiver-Protocol.h>

@class HMFMessageDispatcher, NAFuture, NSObject, NSString, NSUUID;
@protocol HMDAppleMediaAccessorySleepWakeStateControllerDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaAccessorySleepWakeStateController : HMFObject <HMFMessageReceiver>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NAFuture *_fetchSleepWakeFuture;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    NSUUID *_accessoryUUID;	// 32 = 0x20
    HMFMessageDispatcher *_messageDispatcher;	// 40 = 0x28
    id <HMDAppleMediaAccessorySleepWakeStateControllerDataSource> _dataSource;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000befa89
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_handleFetchSleepWakeStateMessage:(id)arg1;	// IMP=0x0000000000bef6b6
- (void)fetchSleepWakeStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000bef1c0
- (void)configureWithHome:(id)arg1 messageDispatcher:(id)arg2 workQueue:(id)arg3;	// IMP=0x0000000000beef82
- (id)initWithAccessoryUUID:(id)arg1 dataSource:(id)arg2;	// IMP=0x0000000000beeec5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
