//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, HMDResidentReachabilityState, NSNotificationCenter, NSNumber, NSObject, NSString, NSUUID;
@protocol HMDHomePrimaryResidentInitialReachabilityManagerDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHomePrimaryResidentInitialReachabilityManager : HMFObject
{
    id <HMDHomePrimaryResidentInitialReachabilityManagerDataSource> _dataSource;	// 8 = 0x8
    NSUUID *_uuid;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    NSString *_key;	// 32 = 0x20
    HMDHome *_home;	// 40 = 0x28
    NSNotificationCenter *_notificationCenter;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x00100000009b8a20
- (void).cxx_destruct;	// IMP=0x00000000009b87bf
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, copy) NSString *key; // @synthesize key=_key;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, copy) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly) id <HMDHomePrimaryResidentInitialReachabilityManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)clearPersistedState;	// IMP=0x00000000009b868d
- (void)persistState:(id)arg1;	// IMP=0x00000000009b84af
@property(readonly, copy) HMDResidentReachabilityState *persistedState;
- (void)handlePrimaryResidentUpdated:(id)arg1 reason:(id)arg2;	// IMP=0x00000000009b7ecf
- (void)handleHomeRemovedNotification:(id)arg1;	// IMP=0x00000000009b7b82
- (void)handleResidentDeviceEnabledStateChangeNotification:(id)arg1;	// IMP=0x00000000009b7995
- (void)handleResidentDeviceManagerUpdateResidentNotification:(id)arg1;	// IMP=0x00000000009b744b
- (void)handlePrimaryResidentUpdateNotification:(id)arg1;	// IMP=0x00000000009b721e
- (id)logIdentifier;	// IMP=0x00000000009b71ce
- (void)configureWithHome:(id)arg1;	// IMP=0x00000000009b6e7a
@property(readonly, copy) NSNumber *initialReachability;
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2 notificationCenter:(id)arg3 dataSource:(id)arg4;	// IMP=0x00000000009b6a20
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2;	// IMP=0x00000000009b696d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

