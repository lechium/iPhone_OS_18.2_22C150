//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableSet, NSNotificationCenter, NSObject, NSString;
@protocol HMDSiriEndpointSettingsSyncManagerDataSource, HMESubscriptionProviding, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDSiriEndpointSettingsSyncManager : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    id <HMDSiriEndpointSettingsSyncManagerDataSource> _dataSource;	// 16 = 0x10
    id <HMESubscriptionProviding> _subscriptionProvider;	// 24 = 0x18
    NSMutableSet *_homeUUIDsManagedByCurrentDevice;	// 32 = 0x20
    NSNotificationCenter *_notificationCenter;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x001000000076124c
+ (id)siriEndPointHomeKitBackedKeyPaths;	// IMP=0x001000000076121c
- (void).cxx_destruct;	// IMP=0x000000000075f2f7
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) NSMutableSet *homeUUIDsManagedByCurrentDevice; // @synthesize homeUUIDsManagedByCurrentDevice=_homeUUIDsManagedByCurrentDevice;
@property(readonly) id <HMESubscriptionProviding> subscriptionProvider; // @synthesize subscriptionProvider=_subscriptionProvider;
@property(readonly) __weak id <HMDSiriEndpointSettingsSyncManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (long long)siriEndpointCertificationReasonForAccessoryUUID:(id)arg1 homeUUID:(id)arg2 error:(id *)arg3;	// IMP=0x000000000075f09d
- (id)readValueValueForAccessoryUUID:(id)arg1 homeUUID:(id)arg2 forKeyPath:(id)arg3;	// IMP=0x000000000075eb12
- (void)_matchingHomeforUUID:(id)arg1 accessoryUUID:(id)arg2 home:(id *)arg3 accessory:(id *)arg4;	// IMP=0x000000000075e7b9
- (void)writeSettingValue:(id)arg1 accessoryUUID:(id)arg2 homeUUID:(id)arg3 forKeyPath:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000075e3d0
- (void)_writeSettingValue:(id)arg1 toAccessory:(id)arg2 forKeyPath:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000075d444
- (void)_writeSettingValue:(id)arg1 toAccessory:(id)arg2 forKeyPath:(id)arg3;	// IMP=0x000000000075d42f
- (void)_writeSetting:(id)arg1 toAccessory:(id)arg2 forKeyPath:(id)arg3;	// IMP=0x000000000075d253
- (void)_synchronizeSettingsForAccessoryUUID:(id)arg1 homeUUID:(id)arg2;	// IMP=0x000000000075cd25
- (void)handleAccessoryIsReachableNotification:(id)arg1;	// IMP=0x000000000075c89f
- (void)handleHAPMediaProfileAddedNotification:(id)arg1;	// IMP=0x000000000075c419
- (void)handleCompositeSettingsControllerDidConfigureNotification:(id)arg1;	// IMP=0x000000000075bf86
- (void)handleSiriEndPointAddedNotification:(id)arg1;	// IMP=0x000000000075bbd1
- (void)handleHomeAddedNotification:(id)arg1;	// IMP=0x000000000075ba74
- (void)handleHomeRemovedNotification:(id)arg1;	// IMP=0x000000000075b6a9
- (void)handlePrimaryResidentUpdateNotification:(id)arg1;	// IMP=0x000000000075b51b
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;	// IMP=0x000000000075aa6a
- (void)_updateManagedHomes;	// IMP=0x000000000075a21e
- (void)unregisterFromAccessoryNotificationsOnHapAccessory:(id)arg1;	// IMP=0x000000000075a16b
- (void)registerForAccessoryNotificationsOnHapAccessory:(id)arg1;	// IMP=0x000000000075a0aa
- (void)_stopManagingAccessory:(id)arg1 forHome:(id)arg2;	// IMP=0x0000000000759ee7
- (void)_beginManagingAccessory:(id)arg1 forHome:(id)arg2;	// IMP=0x0000000000759cda
- (void)_stopManagingHome:(id)arg1;	// IMP=0x0000000000759af7
- (void)_beginManagingHome:(id)arg1;	// IMP=0x0000000000759914
- (void)configure;	// IMP=0x0000000000759662
- (id)initWithDataSource:(id)arg1 subscriptionProvider:(id)arg2 notificationCenter:(id)arg3 workQueue:(id)arg4;	// IMP=0x0000000000759536

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

