//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, HMFTimer, NSHashTable, NSMutableDictionary, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDNotificationRegistry : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_notificationRegistry;	// 16 = 0x10
    NSHashTable *_delegates;	// 24 = 0x18
    NSMutableSet *_chipRemoteSubscribers;	// 32 = 0x20
    HMFTimer *_pendingRequestsRetryTimer;	// 40 = 0x28
    NSMutableSet *_pendingRequests;	// 48 = 0x30
    HMDHome *_home;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_workQueue;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x001000000026c95c
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000026c954
- (void).cxx_destruct;	// IMP=0x00000000002685b0
@property(retain, nonatomic) NSMutableSet *chipRemoteSubscribers; // @synthesize chipRemoteSubscribers=_chipRemoteSubscribers;
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000267e9f
- (id)logIdentifier;	// IMP=0x0000000000267e2a
- (void)addDelegate:(id)arg1;	// IMP=0x0000000000267cd6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000267b84
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000267825
- (_Bool)setNotificationsEnabled:(_Bool)arg1 forUserID:(id)arg2 characteristicsPayload:(id)arg3 mediaPropertiesPayload:(id)arg4;	// IMP=0x00000000002669c8
- (void)removeAllReachabilityEventNotificationRegistrations;	// IMP=0x00000000002667b9
- (id)userIDsRegisteredForReachabilityEventNotificationsForAccessoryUUIDs:(id)arg1;	// IMP=0x0000000000266526
- (_Bool)disableReachabilityEventNotificationForAccessoryUUIDs:(id)arg1 forUserID:(id)arg2;	// IMP=0x00000000002663d9
- (_Bool)enableReachabilityEventNotificationForAccessoryUUIDs:(id)arg1 forUserID:(id)arg2;	// IMP=0x000000000026628c
- (void)storeCHIPRemoteSubscriberWithRemoteSourceID:(id)arg1;	// IMP=0x00000000002661c9
- (void)auditUsersForNotifications:(id)arg1 forHome:(id)arg2;	// IMP=0x00000000002656bd
- (id)usersRegisteredForNotificationsForProperties:(id)arg1;	// IMP=0x0000000000265310
- (id)usersRegisteredForNotificationsForCharacteristics:(id)arg1;	// IMP=0x0000000000265038
- (id)propertiesRegisteredForMediaProfileUniqueIdentifier:(id)arg1;	// IMP=0x0000000000264f45
- (id)filterProperties:(id)arg1 forUser:(id)arg2;	// IMP=0x0000000000264b42
- (id)filterCharacteristics:(id)arg1 forUser:(id)arg2;	// IMP=0x000000000026483e
- (_Bool)removeRegistrationsForMediaProfile:(id)arg1;	// IMP=0x00000000002644cb
- (void)removeRegistrationsForCharacteristics:(id)arg1;	// IMP=0x00000000002642d7
- (id)shortDescription;	// IMP=0x0000000000264252
- (void)clearAllRegistrations;	// IMP=0x000000000026418a
- (void)configureWithHome:(id)arg1;	// IMP=0x0000000000264010
- (id)initWithPendingRequestsRetryTimer:(id)arg1;	// IMP=0x0000000000263efc
- (id)init;	// IMP=0x0000000000263e98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
