//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCHIPThreadNetworkEventListener, HMDHomeManager, HMDUIDialogPresenter, HMFTimer, HMMTRAttestationDataStore, HMMTRResidentStateManager, HMMTRStorage, HMMTRUIDialogPresenter, NSNotificationCenter, NSNumber, NSSet, NSString;
@protocol HMDFileManager, HMMTRVendorMetadataStore;

__attribute__((visibility("hidden")))
@interface HMDCHIPDataSource : HMFObject
{
    _Bool _pnExistsOnCurrentNetwork;	// 8 = 0x8
    HMDHomeManager *_homeManager;	// 16 = 0x10
    id <HMMTRVendorMetadataStore> _vendorMetadataStore;	// 24 = 0x18
    HMMTRAttestationDataStore *_attestationDataStore;	// 32 = 0x20
    HMMTRUIDialogPresenter *_uiDialogPresenter;	// 40 = 0x28
    id <HMDFileManager> _fileManager;	// 48 = 0x30
    NSNotificationCenter *_notificationCenter;	// 56 = 0x38
    HMFTimer *_vendorMetadataRefreshTimer;	// 64 = 0x40
    HMFTimer *_attestationDataRefreshTimer;	// 72 = 0x48
    HMDUIDialogPresenter *_dialogPresenter;	// 80 = 0x50
    HMMTRResidentStateManager *_chipResidentStateManager;	// 88 = 0x58
    HMMTRStorage *_chipStorage;	// 96 = 0x60
    HMDCHIPThreadNetworkEventListener *_userPreferredThreadNetworkEventListener;	// 104 = 0x68
    unsigned long long _networkChangedLastUpdatedTime;	// 112 = 0x70
}

+ (id)logCategory;	// IMP=0x00100000006deab6
- (void).cxx_destruct;	// IMP=0x00000000006ddeca
@property(nonatomic) unsigned long long networkChangedLastUpdatedTime; // @synthesize networkChangedLastUpdatedTime=_networkChangedLastUpdatedTime;
@property _Bool pnExistsOnCurrentNetwork; // @synthesize pnExistsOnCurrentNetwork=_pnExistsOnCurrentNetwork;
@property(retain) HMDCHIPThreadNetworkEventListener *userPreferredThreadNetworkEventListener; // @synthesize userPreferredThreadNetworkEventListener=_userPreferredThreadNetworkEventListener;
@property(retain) HMMTRStorage *chipStorage; // @synthesize chipStorage=_chipStorage;
@property(retain) HMMTRResidentStateManager *chipResidentStateManager; // @synthesize chipResidentStateManager=_chipResidentStateManager;
@property(readonly) HMDUIDialogPresenter *dialogPresenter; // @synthesize dialogPresenter=_dialogPresenter;
@property(readonly) HMFTimer *attestationDataRefreshTimer; // @synthesize attestationDataRefreshTimer=_attestationDataRefreshTimer;
@property(readonly) HMFTimer *vendorMetadataRefreshTimer; // @synthesize vendorMetadataRefreshTimer=_vendorMetadataRefreshTimer;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain) id <HMDFileManager> fileManager; // @synthesize fileManager=_fileManager;
@property(retain) HMMTRUIDialogPresenter *uiDialogPresenter; // @synthesize uiDialogPresenter=_uiDialogPresenter;
@property(retain) HMMTRAttestationDataStore *attestationDataStore; // @synthesize attestationDataStore=_attestationDataStore;
@property(retain) id <HMMTRVendorMetadataStore> vendorMetadataStore; // @synthesize vendorMetadataStore=_vendorMetadataStore;
@property __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (void)browser:(id)arg1 didRemoveAccessoryPairingWithNodeID:(id)arg2;	// IMP=0x00000000006dd738
- (void)requestUserPermissionForBridgeAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000006dd61d
- (void)requestUserPermissionForUnauthenticatedAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000006dd502
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000006dd2a6
- (void)forAllPairedMatterServersFetchVidPid:(CDUnknownBlockType)arg1;	// IMP=0x00000000006dced2
- (void)forAllStorageDataSourcesDo:(CDUnknownBlockType)arg1;	// IMP=0x00000000006dcbd0
- (id)storageDataSourceForFabricWithID:(id)arg1;	// IMP=0x00000000006dc85a
- (id)appleHomeTargetFabricUUIDWithID:(id)arg1;	// IMP=0x00000000006dc461
- (id)appleHomeFabricWithUUID:(id)arg1;	// IMP=0x00000000006dc19a
- (id)appleHomeFabricWithID:(id)arg1;	// IMP=0x00000000006dbe92
@property(readonly, copy) NSNumber *currentFabricID;
@property(readonly, copy, nonatomic) NSSet *allTargetFabricUUIDs;
@property(readonly, copy, nonatomic) NSSet *allFabricIDs;
@property(readonly, copy, nonatomic) NSSet *allPairedHAPServerIdentifiers;
@property(readonly, getter=isCurrentDevicePrimaryResident) _Bool currentDevicePrimaryResident;
- (void)handleHomeRemovedNotification:(id)arg1;	// IMP=0x00000000006db2fd
- (void)handleAccessoryCHIPStorageChangedNotification:(id)arg1;	// IMP=0x00000000006db132
- (void)handleHomeCHIPStorageChangedNotification:(id)arg1;	// IMP=0x00000000006daf67
- (void)updateNotificationsEnabled:(_Bool)arg1 forHome:(id)arg2 keepAliveOnly:(_Bool)arg3;	// IMP=0x00000000006dacf1
- (void)handleResidentReachabilityNotification:(id)arg1;	// IMP=0x00000000006daac2
- (void)handlePrimaryResidentUpdatedNotification:(id)arg1;	// IMP=0x00000000006da96d
- (void)handleUpdatedDataWithIsLocalChange:(_Bool)arg1;	// IMP=0x00000000006da81d
- (id)homeWithCHIPFabric:(id)arg1;	// IMP=0x00000000006da652
- (id)home;	// IMP=0x00000000006da31a
- (void)configureWithUIDialogPresenter:(id)arg1;	// IMP=0x00000000006da17e
- (void)configureWithAttestationDataStore:(id)arg1;	// IMP=0x00000000006d9f87
- (void)configureWithVendorMetadataStore:(id)arg1;	// IMP=0x00000000006d9d61
- (void)configureWithStorage:(id)arg1;	// IMP=0x00000000006d9ae3
- (void)configureWithResidentStateManager:(id)arg1;	// IMP=0x00000000006d9828
- (void)configureWithAccessoryServerBrowser:(id)arg1;	// IMP=0x00000000006d96ee
- (id)initWithHomeManager:(id)arg1 notificationCenter:(id)arg2 vendorMetadataRefreshTimer:(id)arg3 attestationDataRefreshTimer:(id)arg4 dialogPresenter:(id)arg5;	// IMP=0x00000000006d95a2
- (id)initWithHomeManager:(id)arg1;	// IMP=0x00000000006d947e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
