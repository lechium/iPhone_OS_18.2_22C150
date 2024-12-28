//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNLaunchServices, CNPublishingSubject, NSString;
@protocol CNCancelable, CNInhibitor, CNScheduler, OS_dispatch_queue;

@interface SettingsDefaultAppsService : NSObject
{
    CNPublishingSubject *_coalescer;	// 8 = 0x8
    id <CNCancelable> _coalescingToken;	// 16 = 0x10
    id <CNScheduler> _workQueue;	// 24 = 0x18
    id <CNInhibitor> _coalescingInhibitor;	// 32 = 0x20
    CNLaunchServices *_launchServices;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 48 = 0x30
}

+ (id)makeWorkQueueUsingSchedulerProvider:(id)arg1;	// IMP=0x002000000000a123
+ (id)sharedInstance;	// IMP=0x0010000000009ed7
- (void).cxx_destruct;	// IMP=0x002000000000aef0
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) CNLaunchServices *launchServices; // @synthesize launchServices=_launchServices;
@property(retain, nonatomic) id <CNInhibitor> coalescingInhibitor; // @synthesize coalescingInhibitor=_coalescingInhibitor;
@property(readonly, nonatomic) id <CNScheduler> workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) id <CNCancelable> coalescingToken; // @synthesize coalescingToken=_coalescingToken;
@property(retain, nonatomic) CNPublishingSubject *coalescer; // @synthesize coalescer=_coalescer;
- (_Bool)checkEligibleDefaultAppsCountChanged:(unsigned long long)arg1 forPersistedKey:(struct __CFString *)arg2;	// IMP=0x001000000000acc1
- (_Bool)checkDefaultAppChanged:(unsigned long long)arg1 forPersistedKey:(struct __CFString *)arg2;	// IMP=0x001000000000ab1c
- (void)checkForAnyDefaultAppChanged;	// IMP=0x001000000000a973
- (void)coalesceChangeEvent;	// IMP=0x001000000000a7d8
- (void)didChangeRelayCallingCapabilities;	// IMP=0x001000000000a74d
- (void)didChangeThumperCallingCapabilitiesForSenderIdentityWithUUID:(id)arg1;	// IMP=0x001000000000a6c2
- (void)didChangeTelephonyCallingSupport;	// IMP=0x001000000000a637
- (void)handleNotificationName:(id)arg1;	// IMP=0x001000000000a536
- (id)interestedNotifications;	// IMP=0x001000000000a529
- (void)handleCoalescedEvent:(id)arg1;	// IMP=0x001000000000a42e
- (void)configureCallCapabilitiesWithScheduler:(id)arg1;	// IMP=0x001000000000a181
- (id)init;	// IMP=0x0010000000009f5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
