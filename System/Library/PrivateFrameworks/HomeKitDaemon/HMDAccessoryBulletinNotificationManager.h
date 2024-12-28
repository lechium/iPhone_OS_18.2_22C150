//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAppleAccountManager, HMDBulletinNotificationRegistrationSource, HMDHome, HMDNotificationConditionEvaluator, HMFTimer, NSArray, NSNotificationCenter, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessoryBulletinNotificationManager : HMFObject
{
    _Bool _currentPrimary;	// 8 = 0x8
    HMDAppleAccountManager *_accountManager;	// 16 = 0x10
    NSNotificationCenter *_notificationCenter;	// 24 = 0x18
    CDUnknownBlockType _synchronizeWithPrimaryDebounceTimerFactory;	// 32 = 0x20
    HMDHome *_home;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    HMFTimer *_synchronizeWithPrimaryDebounceTimer;	// 56 = 0x38
    HMDNotificationConditionEvaluator *_evaluator;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x0010000000b3d6f9
+ (id)_characteristicBulletinRegistrationsForSource:(id)arg1 context:(id)arg2;	// IMP=0x0010000000b3d280
+ (id)matterBulletinRegistrationsForSource:(id)arg1 context:(id)arg2;	// IMP=0x00100000008cc7a5
- (void).cxx_destruct;	// IMP=0x0000000000b36677
@property(readonly) HMDNotificationConditionEvaluator *evaluator; // @synthesize evaluator=_evaluator;
@property(retain) HMFTimer *synchronizeWithPrimaryDebounceTimer; // @synthesize synchronizeWithPrimaryDebounceTimer=_synchronizeWithPrimaryDebounceTimer;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
@property(copy) CDUnknownBlockType synchronizeWithPrimaryDebounceTimerFactory; // @synthesize synchronizeWithPrimaryDebounceTimerFactory=_synchronizeWithPrimaryDebounceTimerFactory;
@property _Bool currentPrimary; // @synthesize currentPrimary=_currentPrimary;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) HMDAppleAccountManager *accountManager; // @synthesize accountManager=_accountManager;
- (id)logIdentifier;	// IMP=0x0000000000b3651c
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000b36384
- (void)handleCurrentDeviceOrAccountUpdatedNotification:(id)arg1;	// IMP=0x0000000000b362cc
- (void)handlePrimaryResidentUpdateNotification:(id)arg1;	// IMP=0x0000000000b36214
- (id)_accessoryRegistrationFromMKFRegistrationSafe:(id)arg1;	// IMP=0x0000000000b35bfd
- (id)_mkfLocalServiceRegistrationsWithManagedObjectContext:(id)arg1;	// IMP=0x0000000000b359d9
- (id)_mkfLocalCharacteristicRegistrationsWithManagedObjectContext:(id)arg1;	// IMP=0x0000000000b357b5
- (id)currentHomeAccessoryUUIDs;	// IMP=0x0000000000b35706
- (void)_updateRegistrationsOnPrimaryWithEnabledRegistrations:(id)arg1 disabledRegistrations:(id)arg2;	// IMP=0x0000000000b3533d
- (void)_handleCurrentDeviceOrAccountUpdatedNotification:(id)arg1;	// IMP=0x0000000000b35209
- (void)_handlePrimaryResidentUpdateNotification:(id)arg1;	// IMP=0x0000000000b34fd0
- (void)_synchronizeLocalRegistrationsWithPrimaryResident;	// IMP=0x0000000000b343f5
- (void)requestSynchronizeRegistrations;	// IMP=0x0000000000b34267
- (void)_handleDeviceBecameNotPrimary;	// IMP=0x0000000000b340eb
- (void)_handleDeviceBecamePrimary;	// IMP=0x0000000000b33f6c
- (void)_handleAccessoryBulletinNotificationRegistration:(id)arg1 removed:(_Bool)arg2;	// IMP=0x0000000000b33bb5
- (id)_updateReasonsByCharacteristicFromMessage:(id)arg1;	// IMP=0x0000000000b33536
- (id)_characteristicsWithPassingLocalRegistrationForCharacteristics:(id)arg1;	// IMP=0x0000000000b3345e
- (id)_devicesToNotifyForCharacteristic:(id)arg1;	// IMP=0x0000000000b3334a
- (void)handleRemovedAccessory:(id)arg1;	// IMP=0x0000000000b330ca
- (void)handleRemovedService:(id)arg1;	// IMP=0x0000000000b32e4c
- (void)handleEnabledRegistrations:(id)arg1;	// IMP=0x0000000000b32d94
- (void)handleDisabledRegistrations:(id)arg1;	// IMP=0x0000000000b32cdc
- (id)conditionsFromPredicate:(id)arg1;	// IMP=0x0000000000b32cc3
- (id)bulletinCharacteristicsFromChangedCharacteristics:(id)arg1 message:(id)arg2;	// IMP=0x0000000000b31fb5
- (id)characteristicsByDestinationForCharacteristics:(id)arg1;	// IMP=0x0000000000b31ee1
- (id)accessoryBulletinNotificationRegistrationsForCharacteristic:(id)arg1;	// IMP=0x0000000000b31d4b
- (void)updateRegistrationsWithEnabledCharacteristics:(id)arg1 disabledCharacteristics:(id)arg2 conditions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000b31998
- (void)updateServiceGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000b316c5
- (void)disableBulletinForService:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000b31496
- (void)enableBulletinForService:(id)arg1 conditions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000b31217
- (id)bulletinBoardNotificationForService:(id)arg1;	// IMP=0x0000000000b30d54
- (void)configureWithDeviceIsResidentCapable:(_Bool)arg1;	// IMP=0x0000000000b304ca
@property(readonly) HMDBulletinNotificationRegistrationSource *source;
@property(readonly) NSArray *accessoryRegistrationsForCurrentDevice;
@property(readonly) NSArray *accessoryRegistrations;
- (id)_characteristicsRegistrationsFromBulletinRegistrations:(id)arg1;	// IMP=0x0000000000b2fe2f
@property(readonly) NSArray *serviceRegistrationsForCurrentDevice;
- (id)initWithHome:(id)arg1 workQueue:(id)arg2 accountManager:(id)arg3 evaluator:(id)arg4 notificationCenter:(id)arg5;	// IMP=0x0000000000b2fb5f
- (id)matterRegistrationFromMKFRegistrationSafe:(id)arg1;	// IMP=0x00000000008c8941
- (id)mkfLocalMatterRegistrationsWithManagedObjectContext:(id)arg1;	// IMP=0x00000000008c871d
- (void)updateEndpointRegistrationsForAccessory:(id)arg1 endpoints:(id)arg2;	// IMP=0x00000000008c85ab
- (id)devicesToNotifyForMatterPath:(id)arg1;	// IMP=0x00000000008c8497
- (void)handleRemovedEndpoint:(id)arg1 fromAccessory:(id)arg2;	// IMP=0x00000000008c8225
- (id)matterBulletinNotificationRegistrationsForMatterPath:(id)arg1;	// IMP=0x00000000008c808f
- (void)updateRegistrationsWithEnabledMatterPaths:(id)arg1 disabledMatterPaths:(id)arg2 conditions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000008c7cd3
- (void)disableBulletinForAccessory:(id)arg1 endpointID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000008c7a9b
- (void)enableBulletinForAccessory:(id)arg1 endpointID:(id)arg2 conditions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000008c782a
- (id)bulletinBoardNotificationForAccessory:(id)arg1 endpointID:(id)arg2;	// IMP=0x00000000008c74be
@property(readonly) NSArray *matterRegistrations;
- (id)_matterRegistrationsFromBulletinRegistrations:(id)arg1;	// IMP=0x00000000008c7283

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
