//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessory, HMFMessage, HMFTimer, NSNotificationCenter, NSObject, NSString;
@protocol NSObject, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDRemotelyAddedAccessoryReachabilityObserver : HMFObject
{
    HMDAccessory *_accessory;	// 8 = 0x8
    HMFMessage *_message;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    NSNotificationCenter *_notificationCenter;	// 32 = 0x20
    HMFTimer *_timer;	// 40 = 0x28
    id <NSObject> _notificationToken;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x0010000000af6e20
- (void).cxx_destruct;	// IMP=0x0000000000af6c3b
@property(retain) id <NSObject> notificationToken; // @synthesize notificationToken=_notificationToken;
@property(retain) HMFTimer *timer; // @synthesize timer=_timer;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMFMessage *message; // @synthesize message=_message;
@property(readonly) HMDAccessory *accessory; // @synthesize accessory=_accessory;
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000af6a5e
- (id)logIdentifier;	// IMP=0x0000000000af69e4
- (void)_respondToMessage;	// IMP=0x0000000000af68c5
- (void)start;	// IMP=0x0000000000af64e6
- (id)initWithAccessory:(id)arg1 message:(id)arg2 workQueue:(id)arg3 timer:(id)arg4 notificationCenter:(id)arg5;	// IMP=0x0000000000af63c7
- (id)initWithAccessory:(id)arg1 message:(id)arg2 workQueue:(id)arg3;	// IMP=0x0000000000af6253

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

