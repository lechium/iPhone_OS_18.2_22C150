//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDHome, NSMutableDictionary, NSNotificationCenter, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessoryNetworkProtectionGroupRegistry : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_groupRecords;	// 16 = 0x10
    HMDHome *_home;	// 24 = 0x18
    NSNotificationCenter *_notificationCenter;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00100000006f08e2
- (void).cxx_destruct;	// IMP=0x00000000006ef6cb
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) __weak HMDHome *home; // @synthesize home=_home;
- (void)handleAccessoryTransportAdded:(id)arg1;	// IMP=0x00000000006ef5ca
- (id)accessoriesForGroupWithUUID:(id)arg1;	// IMP=0x00000000006ef4df
- (_Bool)updateTargetProtectionModeForGroupWithUUID:(id)arg1 protectionMode:(long long)arg2 error:(id *)arg3 requestMessage:(id)arg4;	// IMP=0x00000000006ef081
- (_Bool)updateTargetProtectionModeForGroupWithUUID:(id)arg1 protectionMode:(long long)arg2 error:(id *)arg3;	// IMP=0x00000000006ef06c
- (long long)targetProtectionModeForGroupWithUUID:(id)arg1;	// IMP=0x00000000006ef01f
- (void)handleRemovedAccessory:(id)arg1;	// IMP=0x00000000006eef92
- (void)handleAddedAccessory:(id)arg1;	// IMP=0x00000000006eef05
- (void)handleRemoveAccessoryNetworkProtectionGroupModel:(id)arg1 message:(id)arg2;	// IMP=0x00000000006eeb6c
- (void)handleAddOrUpdateAccessoryNetworkProtectionGroupModel:(id)arg1 message:(id)arg2;	// IMP=0x00000000006ee5c9
- (void)configure;	// IMP=0x00000000006ee59b
- (void)addActiveSurrogateGroupForAccessory:(id)arg1 shouldNotifyChange:(_Bool)arg2;	// IMP=0x00000000006eddc1
- (void)notifyClientsOfRemovedGroup:(id)arg1;	// IMP=0x00000000006edb7e
- (void)notifyClientsOfAddedGroup:(id)arg1;	// IMP=0x00000000006ed969
- (_Bool)_updateGroupWithUUID:(id)arg1 active:(_Bool)arg2;	// IMP=0x00000000006ed477
- (_Bool)_evaluateActiveStatusForGroupWithUUID:(id)arg1;	// IMP=0x00000000006ed160
- (void)_setupProtectionGroupForAccessory:(id)arg1 shouldNotifyChange:(_Bool)arg2;	// IMP=0x00000000006ecd95
- (void)_setupActiveGroupsForHome;	// IMP=0x00000000006ec9b0
- (void)_registerForAccessoryChanges:(id)arg1;	// IMP=0x00000000006ec735
- (void)handleUpdatedAccessoryConfiguredNetworkProtectionGroup:(id)arg1;	// IMP=0x00000000006ec5c2
- (void)handleUpdatedAccessoryInitialManufacturerOrCategory:(id)arg1;	// IMP=0x00000000006ec44f
- (void)handleUpdateAccessoryNetworkProtectionGroupProtectionMode:(id)arg1;	// IMP=0x00000000006ebf9a
- (void)_registerForMessages;	// IMP=0x00000000006ebe59
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x00000000006ebd7d
- (id)markGroupWithUUID:(id)arg1 active:(_Bool)arg2;	// IMP=0x00000000006ebb62
- (id)removeGroupWithUUID:(id)arg1;	// IMP=0x00000000006eb9d5
- (_Bool)addActiveSurrogateGroup:(id)arg1;	// IMP=0x00000000006eb73e
- (id)groupWithUUID:(id)arg1;	// IMP=0x00000000006eb6ee
- (id)groupRecordWithUUID:(id)arg1;	// IMP=0x00000000006eb672
@property(readonly, copy) NSSet *activeGroups;
@property(readonly, copy) NSSet *persistedGroups;
- (id)initWithHome:(id)arg1 notificationCenter:(id)arg2 persistedGroups:(id)arg3;	// IMP=0x00000000006eacb6
- (id)initWithHome:(id)arg1 notificationCenter:(id)arg2;	// IMP=0x00000000006eabc9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

