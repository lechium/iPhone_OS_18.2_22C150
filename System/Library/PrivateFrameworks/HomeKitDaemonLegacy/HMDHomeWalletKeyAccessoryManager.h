//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFMessageReceiver-Protocol.h>

@class HMDDevice, HMDHome, HMDHomeWalletKeyAccessoryManagerDeviceCredentialKeyOperation, HMFMessageDispatcher, NSArray, NSMutableDictionary, NSMutableSet, NSNotificationCenter, NSNumber, NSObject, NSString, NSUUID;
@protocol HMDHomeWalletDataSource, HMDHomeWalletKeyAccessoryManagerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHomeWalletKeyAccessoryManager : HMFObject <HMFMessageReceiver>
{
    _Bool _currentDevicePrimaryResident;	// 8 = 0x8
    _Bool _canConfigureAccessories;	// 9 = 0x9
    id <HMDHomeWalletKeyAccessoryManagerDelegate> _delegate;	// 16 = 0x10
    HMDHome *_home;	// 24 = 0x18
    NSUUID *_uuid;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
    HMFMessageDispatcher *_messageDispatcher;	// 48 = 0x30
    NSNotificationCenter *_notificationCenter;	// 56 = 0x38
    id <HMDHomeWalletDataSource> _dataSource;	// 64 = 0x40
    NSMutableDictionary *_pendingAccessoryDeviceCredentialKeyOperationByDeviceUUID;	// 72 = 0x48
    HMDHomeWalletKeyAccessoryManagerDeviceCredentialKeyOperation *_pendingPrimaryResidentDeviceCredentialKeyOperation;	// 80 = 0x50
    NSMutableDictionary *_nfcReaderKeyConfigureStateByAccessoryUUID;	// 88 = 0x58
    NSNumber *_walletKeyColor;	// 96 = 0x60
    NSMutableSet *_logEvents;	// 104 = 0x68
}

+ (id)logCategory;	// IMP=0x00100000009eaeaf
+ (id)createMatterIssuerKeyDataForUser:(id)arg1 withUserIndex:(id)arg2 flow:(id)arg3;	// IMP=0x00100000009eab9a
- (void).cxx_destruct;	// IMP=0x00000000009de873
@property(retain) NSMutableSet *logEvents; // @synthesize logEvents=_logEvents;
@property(readonly, copy) NSNumber *walletKeyColor; // @synthesize walletKeyColor=_walletKeyColor;
@property(readonly, copy) NSMutableDictionary *nfcReaderKeyConfigureStateByAccessoryUUID; // @synthesize nfcReaderKeyConfigureStateByAccessoryUUID=_nfcReaderKeyConfigureStateByAccessoryUUID;
@property(copy) HMDHomeWalletKeyAccessoryManagerDeviceCredentialKeyOperation *pendingPrimaryResidentDeviceCredentialKeyOperation; // @synthesize pendingPrimaryResidentDeviceCredentialKeyOperation=_pendingPrimaryResidentDeviceCredentialKeyOperation;
@property(readonly, copy) NSMutableDictionary *pendingAccessoryDeviceCredentialKeyOperationByDeviceUUID; // @synthesize pendingAccessoryDeviceCredentialKeyOperationByDeviceUUID=_pendingAccessoryDeviceCredentialKeyOperationByDeviceUUID;
@property _Bool canConfigureAccessories; // @synthesize canConfigureAccessories=_canConfigureAccessories;
@property(getter=isCurrentDevicePrimaryResident) _Bool currentDevicePrimaryResident; // @synthesize currentDevicePrimaryResident=_currentDevicePrimaryResident;
@property(readonly) id <HMDHomeWalletDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, copy) NSUUID *uuid; // @synthesize uuid=_uuid;
@property __weak HMDHome *home; // @synthesize home=_home;
@property __weak id <HMDHomeWalletKeyAccessoryManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x00000000009de652
- (void)updateHomeWalletKeyAddForAccessoryUUID:(id)arg1 keyType:(unsigned long long)arg2;	// IMP=0x00000000009de53b
- (void)startHomeWalletKeyAddForAccessoryUUID:(id)arg1 keyType:(unsigned long long)arg2 expectedCount:(long long)arg3;	// IMP=0x00000000009de33e
- (id)fetchWalletKeyColorForAccessories_HAP:(id)arg1 home:(id)arg2 flow:(id)arg3;	// IMP=0x00000000009ddf8e
- (id)fetchWalletKeyColorForAccessories_Matter:(id)arg1 home:(id)arg2 flow:(id)arg3;	// IMP=0x00000000009ddd09
- (void)fetchWalletKeyColorForAccessories:(id)arg1 flow:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000009dd79d
- (id)walletKeyColorWithCharacteristicValue:(id)arg1 flow:(id)arg2;	// IMP=0x00000000009dd319
- (void)fetchWalletKeyColorWithAccessory:(id)arg1 flow:(id)arg2;	// IMP=0x00000000009dd19d
- (id)writeRequestsWithAccessories:(id)arg1 home:(id)arg2 deviceCredentialKey:(id)arg3 user:(id)arg4 flow:(id)arg5;	// IMP=0x00000000009dc4f5
- (id)configureMatterAccessory:(id)arg1 withDeviceCredentialKey:(id)arg2 ofType:(long long)arg3 forUser:(id)arg4 flow:(id)arg5;	// IMP=0x00000000009dbe62
- (id)performHAPWriteRequestsHH2:(id)arg1 home:(id)arg2 flow:(id)arg3;	// IMP=0x00000000009dbbd2
- (void)configureAccessories_HH2:(id)arg1 withDeviceCredentialKey:(id)arg2 ofType:(long long)arg3 forDeviceWithUUID:(id)arg4 user:(id)arg5 flow:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000000009db124
- (void)configureAccessories_HH1:(id)arg1 withDeviceCredentialKey:(id)arg2 forDeviceWithUUID:(id)arg3 user:(id)arg4 flow:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000009da88c
- (void)configureAccessories:(id)arg1 withDeviceCredentialKey:(id)arg2 ofType:(long long)arg3 forDeviceWithUUID:(id)arg4 user:(id)arg5 flow:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000000009da62e
- (void)unregisterForNotificationsWithReason:(id)arg1;	// IMP=0x00000000009da393
- (void)handlePendingDeviceCredentialKeysSyncForAccessories:(id)arg1 withReason:(id)arg2;	// IMP=0x00000000009d9e5a
- (void)handlePendingDeviceCredentialKeysSyncForAccessory:(id)arg1 withReason:(id)arg2;	// IMP=0x00000000009d9d60
- (void)registerForNotificationsWithReason:(id)arg1;	// IMP=0x00000000009d98ca
- (void)configureNotificationsWithReason:(id)arg1;	// IMP=0x00000000009d97b6
- (void)configureAccessoryWithNfcReaderKey:(id)arg1 accessory:(id)arg2 flow:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000009d7fe8
- (void)removeNfcReaderKeyWithIdentifier:(id)arg1 accessory:(id)arg2 flow:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000009d7107
- (void)fetchIsAccessoryConfiguredWithReaderKey:(id)arg1 accessory:(id)arg2 flow:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000009d6212
- (id)configureNFCReaderKeyOnMatterAccessory:(id)arg1 flow:(id)arg2;	// IMP=0x00000000009d5f27
- (void)fetchOrConfigureNFCReaderKeyForAccessory:(id)arg1 flow:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000009d5c7f
- (void)configureNFCReaderKeyForAccessory:(id)arg1 flow:(id)arg2;	// IMP=0x00000000009d5516
- (void)configureNFCReaderKeyForAllAccessoriesWithReason:(id)arg1;	// IMP=0x00000000009d523e
- (void)requestPrimaryResident:(id)arg1 toConfigureAccessories:(id)arg2 withDeviceCredentialKey:(id)arg3 ofType:(long long)arg4 flow:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000009d4c95
- (void)configureAccessories:(id)arg1 withDeviceCredentialKey:(id)arg2 ofType:(long long)arg3 flow:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000009d4557
@property(readonly) HMDDevice *primaryResidentDevice;
@property(readonly, copy) NSString *walletKeyColorPreferenceKey;
@property(readonly, copy) NSArray *matterAccessoriesSupportingWalletKey;
@property(readonly) _Bool isPrimaryResidentOrSoleOwnerController;
- (void)handleHomeUserAddedNotification:(id)arg1;	// IMP=0x00000000009d41f7
- (void)handleWalletKeySupportDidChange:(id)arg1;	// IMP=0x00000000009d3f90
- (void)handleAccessoryConfigured:(id)arg1;	// IMP=0x00000000009d3e9a
- (void)handleHomeAccessoryRemovedNotification:(id)arg1;	// IMP=0x00000000009d3b7a
- (void)handleHomeAddedAccessoryNotification:(id)arg1;	// IMP=0x00000000009d3a58
- (void)handleHomeDidDisableCharacteristicNotification:(id)arg1;	// IMP=0x00000000009d39a0
- (void)handleHomeDidEnableCharacteristicNotification:(id)arg1;	// IMP=0x00000000009d38e8
- (void)handleHomeNFCReaderKeyKeychainItemAvailableNotification:(id)arg1;	// IMP=0x00000000009d3877
- (void)handlePrimaryResidentUpdateNotification:(id)arg1;	// IMP=0x00000000009d37bf
- (void)handleAccessoryCharacteristicsChangedNotification:(id)arg1;	// IMP=0x00000000009d33ab
- (id)_addIssuerKeyForUser:(id)arg1 toMatterAccessory:(id)arg2 flow:(id)arg3;	// IMP=0x00000000009d30c6
- (id)addIssuerKeyForUser:(id)arg1 toMatterAccessory:(id)arg2 flow:(id)arg3;	// IMP=0x00000000009d2f6e
- (id)addIssuerKeysToMatterTTUAccessoriesForUser:(id)arg1 flow:(id)arg2;	// IMP=0x00000000009d2cb1
- (id)addIssuerKeysToMatterAccessory:(id)arg1 flow:(id)arg2;	// IMP=0x00000000009d2986
- (id)addIssuerKeysToMatterAccessories:(id)arg1 flow:(id)arg2;	// IMP=0x00000000009d2755
- (void)addIssuerKeysToMatterAccessoriesWithFlow:(id)arg1;	// IMP=0x00000000009d24a6
- (void)_handleAddIssuerKeysToAccessoriesMessage:(id)arg1;	// IMP=0x00000000009d22ac
- (void)handleHMDHomeConfigureMatterAccessoryWithReaderKeyMessage:(id)arg1;	// IMP=0x00000000009d22a6
- (void)handleConfigureAccessoriesWithDeviceCredentialKeyMessage:(id)arg1;	// IMP=0x00000000009d1689
- (id)missingWalletKeysForAccessoryUUID:(id)arg1 usersByUniqueID:(id)arg2 accessoryUsersByUniqueID:(id)arg3 flow:(id)arg4;	// IMP=0x00000000009d1251
- (id)fetchMissingWalletKeysForAccessory:(id)arg1 users:(id)arg2 flow:(id)arg3;	// IMP=0x00000000009d0ddf
- (id)fetchMissingWalletKeysForUserUUID:(id)arg1 flow:(id)arg2;	// IMP=0x00000000009d08ec
- (id)fetchMissingWalletKeysForAccessoryUUID:(id)arg1 forUser:(id)arg2 flow:(id)arg3;	// IMP=0x00000000009d04b1
- (id)restoreMissingWalletKeys:(id)arg1 onAccessory:(id)arg2 flow:(id)arg3;	// IMP=0x00000000009cffd0
- (void)handleRestoreMissingWalletKeysMessage:(id)arg1;	// IMP=0x00000000009cfc9d
- (void)handleFetchMissingWalletKeysMessage:(id)arg1;	// IMP=0x00000000009cf6c5
- (void)createAccessoryDeviceCredentialKeyPendingOperationWithAccessories:(id)arg1 deviceCredentialKey:(id)arg2 user:(id)arg3 deviceUUID:(id)arg4;	// IMP=0x00000000009cf456
- (void)createAccessoryDeviceCredentialKeyPendingOperationWithAccessoriesUUIDs:(id)arg1 deviceCredentialKey:(id)arg2 user:(id)arg3 deviceUUID:(id)arg4;	// IMP=0x00000000009cf2b8
- (void)handleFetchWalletKeyColorMessage:(id)arg1;	// IMP=0x00000000009cf100
- (void)unconfigure;	// IMP=0x00000000009cf081
- (void)handleWalletKeyRemoved;	// IMP=0x00000000009cef22
- (void)fetchWalletKeyColorWithFlow:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000009ce756
- (void)configureAllAccessoriesWithDeviceCredentialKey:(id)arg1 ofType:(long long)arg2 flow:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000009ce650
- (void)configureAccessory:(id)arg1 withDeviceCredentialKey:(id)arg2 ofType:(long long)arg3 flow:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000009ce51c
- (void)configureWithHome:(id)arg1;	// IMP=0x00000000009cdd2d
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2 dataSource:(id)arg3 notificationCenter:(id)arg4;	// IMP=0x00000000009cdb97
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2;	// IMP=0x00000000009cdae4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

