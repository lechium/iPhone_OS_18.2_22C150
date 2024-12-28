//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMAccessoryCapabilities, HMDAccessorySettingsController, HMDAccessorySetupMetricDispatcher, HMDAccessorySymptomHandler, HMDAppleMediaAccessoryInfoController, HMDAppleMediaAccessoryInfoSubscriber, HMDAppleMediaAccessoryMessenger, HMDAppleMediaAccessoryMetricsDispatcher, HMDAppleMediaAccessorySensorManager, HMDAppleMediaAccessorySleepWakeStateController, HMDAudioAnalysisEventSubscriber, HMDAudioAnalysisRequestManager, HMDBackingStore, HMDCurrentAccessorySetupMetricDispatcher, HMDDevice, HMDDeviceAddress, HMDDeviceController, HMDDoorbellChimeProfile, HMDFetchedAccessorySettingsController, HMDHome, HMDMediaDestinationController, HMDMediaDestinationManager, HMDPreferredMediaUserEventController, HMDRemoteLoginHandler, HMDSoftwareUpdateEventListener, HMDTargetControlManager, HMFActivity, HMFPairingIdentity, HMFSoftwareVersion, HMFWiFiManager, HMFWiFiNetworkInfo, HMMediaDestination, HMMediaDestinationControllerData, HMSoftwareUpdateDescriptor, HMSoftwareUpdateProgress, NSArray, NSData, NSHashTable, NSObject, NSPredicate, NSString, NSUUID;
@protocol HMAccessoryCapabilities, HMDAppleMediaAccessoryDataSource, HMDAppleMediaAccessoryDependencyFactory, HMDMediaDestinationControllerFactory, HMDMediaDestinationManagerFactory, HMDMessageRouter, HMDSoftwareUpdateEventProvider, HMDSoftwareUpdateInstallProvider, HMDarwinNotificationProvider, HMEEventForwarder, HMELastEventStoreReadHandle, HMESubscriptionProviding, HMMLogEventSubmitting, OS_os_log;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaAccessory
{
    HMDDevice *_device;	// 32 = 0x20
    HMDDeviceController *_deviceController;	// 40 = 0x28
    HMMediaDestination *_committedAudioDestination;	// 48 = 0x30
    HMMediaDestinationControllerData *_committedAudioDestinationControllerData;	// 56 = 0x38
    NSObject<OS_os_log> *_logger;	// 64 = 0x40
    _Bool _deviceReachable;	// 72 = 0x48
    _Bool _shouldApplySoftwareUpdateWhenFound;	// 73 = 0x49
    _Bool _fixedPairingIdentityInCloud;	// 74 = 0x4a
    _Bool _audioAnalysisEventNotificationEnabled;	// 75 = 0x4b
    HMFPairingIdentity *_pairingIdentity;	// 80 = 0x50
    HMDRemoteLoginHandler *_remoteLoginHandler;	// 88 = 0x58
    HMFSoftwareVersion *_softwareVersion;	// 96 = 0x60
    HMFWiFiNetworkInfo *_wifiNetworkInfo;	// 104 = 0x68
    HMFWiFiNetworkInfo *_lastStagedWifiNetworkInfo;	// 112 = 0x70
    HMAccessoryCapabilities *_capabilitiesInternal;	// 120 = 0x78
    NSData *_rawCapabilities;	// 128 = 0x80
    HMDDeviceAddress *_deviceAddress;	// 136 = 0x88
    NSData *_deviceIRK;	// 144 = 0x90
    HMDTargetControlManager *_targetControlManager;	// 152 = 0x98
    unsigned long long _supportedStereoPairVersions;	// 160 = 0xa0
    long long _productColor;	// 168 = 0xa8
    NSUUID *_idsIdentifier;	// 176 = 0xb0
    HMDAccessorySettingsController *_settingsController;	// 184 = 0xb8
    NSArray *_supportedMultiUserLanguageCodes;	// 192 = 0xc0
    HMDMediaDestinationManager *_audioDestinationManager;	// 200 = 0xc8
    HMDMediaDestinationController *_audioDestinationController;	// 208 = 0xd0
    HMDAudioAnalysisRequestManager *_audioAnalysisRequestManager;	// 216 = 0xd8
    HMDAudioAnalysisEventSubscriber *_audioAnalysisEventSubscriber;	// 224 = 0xe0
    long long _fallbackMediaUserType;	// 232 = 0xe8
    HMDSoftwareUpdateEventListener *_softwareUpdateListener;	// 240 = 0xf0
    HMFPairingIdentity *_lastCreatedPairingIdentity;	// 248 = 0xf8
    CDUnknownBlockType _deviceMediaRouteIdentifierFactory;	// 256 = 0x100
    HMDAppleMediaAccessorySleepWakeStateController *_sleepWakeStateController;	// 264 = 0x108
    HMDPreferredMediaUserEventController *_preferredMediaUserEventController;	// 272 = 0x110
    id <HMDAppleMediaAccessoryDependencyFactory> _dependencyFactory;	// 280 = 0x118
    id <HMDarwinNotificationProvider> _darwinNotificationProvider;	// 288 = 0x120
    HMDAccessorySymptomHandler *_symptomsHandler;	// 296 = 0x128
    HMDAppleMediaAccessoryMessenger *_messenger;	// 304 = 0x130
    id <HMDMediaDestinationControllerFactory> _mediaDestinationControllerFactory;	// 312 = 0x138
    id <HMDMediaDestinationManagerFactory> _mediaDestinationManagerFactory;	// 320 = 0x140
    HMFWiFiManager *_wifiManager;	// 328 = 0x148
    HMDAppleMediaAccessoryMetricsDispatcher *_metricsDispatcher;	// 336 = 0x150
    NSHashTable *_hostedAccessories;	// 344 = 0x158
    id <HMDSoftwareUpdateEventProvider> _softwareUpdateProvider;	// 352 = 0x160
    id <HMDSoftwareUpdateInstallProvider> _softwareUpdateInstallProvider;	// 360 = 0x168
    id <HMDAppleMediaAccessoryDataSource> _dataSource;	// 368 = 0x170
    HMDAppleMediaAccessorySensorManager *_sensorManager;	// 376 = 0x178
    HMDFetchedAccessorySettingsController *_currentAccessorySettingsController;	// 384 = 0x180
    HMDAppleMediaAccessoryInfoController *_currentAccessoryInfoController;	// 392 = 0x188
    HMDAppleMediaAccessoryInfoSubscriber *_accessoryInfoSubscriber;	// 400 = 0x190
    unsigned long long _variant;	// 408 = 0x198
    CDUnknownBlockType _settingsConnectionFactory;	// 416 = 0x1a0
    NSPredicate *_audioAnalysisEventNotificationCondition;	// 424 = 0x1a8
}

+ (id)logCategory;	// IMP=0x00100000009162f5
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000009162ed
+ (_Bool)shouldAcceptMessage:(id)arg1 home:(id)arg2 privilege:(unsigned long long)arg3;	// IMP=0x0010000000915cd8
- (void).cxx_destruct;	// IMP=0x000000000090e6ea
@property(retain) NSPredicate *audioAnalysisEventNotificationCondition;
@property(getter=isAudioAnalysisEventNotificationEnabled) _Bool audioAnalysisEventNotificationEnabled;
@property(copy) CDUnknownBlockType settingsConnectionFactory;
@property unsigned long long variant;
@property(retain) HMDAppleMediaAccessoryInfoSubscriber *accessoryInfoSubscriber;
@property(retain) HMDAppleMediaAccessoryInfoController *currentAccessoryInfoController;
@property(retain) HMDFetchedAccessorySettingsController *currentAccessorySettingsController;
@property(retain) HMDAppleMediaAccessorySensorManager *sensorManager;
@property __weak id <HMDAppleMediaAccessoryDataSource> dataSource;
@property(nonatomic) _Bool fixedPairingIdentityInCloud;
@property(retain) id <HMDSoftwareUpdateInstallProvider> softwareUpdateInstallProvider;
@property(retain) id <HMDSoftwareUpdateEventProvider> softwareUpdateProvider;
@property(readonly) NSHashTable *hostedAccessories;
@property(retain) HMDAppleMediaAccessoryMetricsDispatcher *metricsDispatcher;
@property(retain) HMFWiFiManager *wifiManager;
@property __weak id <HMDMediaDestinationManagerFactory> mediaDestinationManagerFactory;
@property __weak id <HMDMediaDestinationControllerFactory> mediaDestinationControllerFactory;
@property(retain) HMDAppleMediaAccessoryMessenger *messenger;
@property(retain) HMDAccessorySymptomHandler *symptomsHandler; // @synthesize symptomsHandler=_symptomsHandler;
@property(retain, nonatomic) id <HMDarwinNotificationProvider> darwinNotificationProvider; // @synthesize darwinNotificationProvider=_darwinNotificationProvider;
@property _Bool shouldApplySoftwareUpdateWhenFound; // @synthesize shouldApplySoftwareUpdateWhenFound=_shouldApplySoftwareUpdateWhenFound;
@property(retain, nonatomic) id <HMDAppleMediaAccessoryDependencyFactory> dependencyFactory; // @synthesize dependencyFactory=_dependencyFactory;
@property(retain) HMDPreferredMediaUserEventController *preferredMediaUserEventController; // @synthesize preferredMediaUserEventController=_preferredMediaUserEventController;
@property(retain) HMDAppleMediaAccessorySleepWakeStateController *sleepWakeStateController; // @synthesize sleepWakeStateController=_sleepWakeStateController;
@property(readonly, copy) CDUnknownBlockType deviceMediaRouteIdentifierFactory; // @synthesize deviceMediaRouteIdentifierFactory=_deviceMediaRouteIdentifierFactory;
@property(retain, nonatomic) HMFPairingIdentity *lastCreatedPairingIdentity; // @synthesize lastCreatedPairingIdentity=_lastCreatedPairingIdentity;
@property(retain) HMDSoftwareUpdateEventListener *softwareUpdateListener; // @synthesize softwareUpdateListener=_softwareUpdateListener;
@property(readonly, nonatomic) long long fallbackMediaUserType; // @synthesize fallbackMediaUserType=_fallbackMediaUserType;
@property(retain) HMDAudioAnalysisEventSubscriber *audioAnalysisEventSubscriber; // @synthesize audioAnalysisEventSubscriber=_audioAnalysisEventSubscriber;
@property(retain) HMDAudioAnalysisRequestManager *audioAnalysisRequestManager; // @synthesize audioAnalysisRequestManager=_audioAnalysisRequestManager;
@property(retain) HMDMediaDestinationController *audioDestinationController; // @synthesize audioDestinationController=_audioDestinationController;
@property(retain) HMDMediaDestinationManager *audioDestinationManager; // @synthesize audioDestinationManager=_audioDestinationManager;
@property(retain) NSArray *supportedMultiUserLanguageCodes; // @synthesize supportedMultiUserLanguageCodes=_supportedMultiUserLanguageCodes;
@property(retain) HMDAccessorySettingsController *settingsController;
@property(retain, nonatomic) HMDTargetControlManager *targetControlManager; // @synthesize targetControlManager=_targetControlManager;
@property(readonly) HMDRemoteLoginHandler *remoteLoginHandler; // @synthesize remoteLoginHandler=_remoteLoginHandler;
- (void)performAfterDelay:(double)arg1 block:(CDUnknownBlockType)arg2 queue:(id)arg3;	// IMP=0x000000000090e15a
- (id)keychainStoreForAppleMediaAccessorySensorManager:(id)arg1;	// IMP=0x000000000090e141
- (id)firstCloudKitImportFutureForAppleMediaAccessorySensorManager:(id)arg1;	// IMP=0x000000000090e0ea
- (id)residentSyncClientDidSyncFutureForAppleMediaAccessorySensorManager:(id)arg1;	// IMP=0x000000000090e09a
- (id)logSubmitterForAppleMediaAccessorySensorManager:(id)arg1;	// IMP=0x000000000090e081
- (_Bool)isReadyForSensorPairing:(id)arg1;	// IMP=0x000000000090dfa2
- (id)hostUUIDForAppleMediaAccessorySensorManager:(id)arg1;	// IMP=0x000000000090df90
- (id)accessoriesWithHostUUID:(id)arg1 forAppleMediaAccessorySensorManager:(id)arg2;	// IMP=0x000000000090dea5
- (id)residentNotificationObjectForAppleMediaAccessorySensorManager:(id)arg1;	// IMP=0x000000000090de55
- (void)renameService:(id)arg1 name:(id)arg2;	// IMP=0x000000000090da3f
- (void)performLocalAddAccessoryWithDescription:(id)arg1 progressHandlerDelegate:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000090d960
- (id)messageDispatcherForAppleMediaAccessorySensorManager:(id)arg1;	// IMP=0x000000000090d94e
- (id)notificationCenterForAppleMediaAccessorySensorManager:(id)arg1;	// IMP=0x000000000090d935
- (_Bool)isResidentConfirmedForAppleMediaAccessorySensorManager:(id)arg1;	// IMP=0x000000000090d8c7
- (id)homeUUIDForAppleMediaAccessorySensorManager:(id)arg1;	// IMP=0x000000000090d877
- (id)accessoryWithUUID:(id)arg1 forAppleMediaAccessorySensorManager:(id)arg2;	// IMP=0x000000000090d7fd
- (id)addAccessoryNotificationObjectForAppleMediaAccessorySensorManager:(id)arg1;	// IMP=0x000000000090d7eb
- (id)accessoryBrowserForAppleMediaAccessorySensorManager:(id)arg1;	// IMP=0x000000000090d79b
- (void)infoSubscriber:(id)arg1 didReceiveWiFiInfoUpdate:(id)arg2;	// IMP=0x000000000090d678
- (_Bool)isMatchingCachedEventPublicPairingIdentity:(id)arg1;	// IMP=0x000000000090d5b6
- (id)cachedEventPairingIdentity;	// IMP=0x000000000090d2e9
- (id)pairingIdentityTopic;	// IMP=0x000000000090d13d
- (void)forwardAccessoryPublicPairingIdentity:(id)arg1;	// IMP=0x000000000090cd00
- (id)appleMediaProfileForAccessoryUUID:(id)arg1;	// IMP=0x000000000090cca9
- (id)currentDeviceProductInfoForAppleMediaAccessorySleepWakeStateController:(id)arg1;	// IMP=0x000000000090cc90
- (id)deviceForAppleMediaAccessorySleepWakeStateController:(id)arg1;	// IMP=0x000000000090cc7e
- (void)currentAccessorySensorStatusFlagsForAppleMediaAccessoryMetricsDispatcher:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000090cc6e
- (id)workQueueForAppleMediaAccessoryMetricsDispatcher:(id)arg1;	// IMP=0x000000000090cc5c
- (long long)numberOfActionSetsWithCurrentAccessoryMediaActionForAppleMediaAccessoryMetricsDispatcher:(id)arg1;	// IMP=0x000000000090cb90
- (long long)numberOfTriggersWithCurrentAccessoryPairedSensorsForAppleMediaAccessoryMetricsDispatcher:(id)arg1;	// IMP=0x000000000090c9d1
- (long long)numberOfCurrentAccessoryPairedSensorsForAppleMediaAccessoryMetricsDispatcher:(id)arg1;	// IMP=0x000000000090c932
- (id)currentRoomForAppleMediaAccessoryMetricsDispatcher:(id)arg1;	// IMP=0x000000000090c8c0
- (void)_handleAudioAnalysisBulletinBoardCommit:(id)arg1;	// IMP=0x000000000090c53f
- (id)logIdentifier;	// IMP=0x000000000090c4ef
- (id)_dumpStateCachedSettingsForHome:(id)arg1 accessory:(id)arg2 eventStoreReadHandle:(id)arg3;	// IMP=0x000000000090c099
- (id)dumpStateLocalSettings;	// IMP=0x000000000090bdfb
- (id)dumpSimpleState;	// IMP=0x000000000090bcb8
- (id)dumpState;	// IMP=0x000000000090ba02
- (void)encodeFlagsFromHostedAccessories:(id)arg1 coder:(id)arg2;	// IMP=0x000000000090b954
- (void)encodeServicesFromHostedAccessories:(id)arg1 coder:(id)arg2;	// IMP=0x000000000090b856
- (void)_encodeWithCoder:(id)arg1;	// IMP=0x000000000090ae9f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000090ae50
- (void)removeHostedAccessory:(id)arg1;	// IMP=0x000000000090adbc
- (void)addHostedAccessory:(id)arg1;	// IMP=0x000000000090ad28
- (void)_legacyEncodeMediaDestinationAndControllerDataWithCoder:(id)arg1;	// IMP=0x000000000090ac49
- (void)_encodeMediaDestinationAndControllerDataWithCoder:(id)arg1;	// IMP=0x000000000090ab61
- (id)_initWithCoder:(id)arg1;	// IMP=0x000000000090a373
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000090a30a
- (void)accessoryInfoController:(id)arg1 didUpdateWifiInfo:(id)arg2;	// IMP=0x000000000090a2b6
- (id)currentAccessorySoftwareVersion;	// IMP=0x000000000090a25f
- (id)accessoryInfoControllerSoftwareVersionTopicForController:(id)arg1;	// IMP=0x000000000090a195
- (id)eventSourceIdentifierNameForAccessoryInfoController:(id)arg1;	// IMP=0x000000000090a145
- (id)accessoryInfoControllerTopicForWifiInfo;	// IMP=0x000000000090a07b
@property(readonly) HMDCurrentAccessorySetupMetricDispatcher *currentAccessorySetupMetricDispatcher;
- (id)eventSourceIdentifierNameForFetchedSettingsController:(id)arg1;	// IMP=0x0000000000909fb1
- (id)controller:(id)arg1 topicForKeyPath:(id)arg2;	// IMP=0x0000000000909ef2
@property(readonly) id <HMELastEventStoreReadHandle> eventStoreReadHandle;
@property(readonly) id <HMESubscriptionProviding> subscriptionProvider;
@property(readonly) id <HMEEventForwarder> eventForwarder;
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter;
- (id)accessoryUUID;	// IMP=0x0000000000909d22
- (id)homeUUID;	// IMP=0x0000000000909cd2
- (void)languagesChangedForAccessorySettingsController:(id)arg1;	// IMP=0x0000000000909bdf
- (id)assistantAccessControlModelWithRemovedAccessoriesForAccessorySettingsController:(id)arg1;	// IMP=0x0000000000909aeb
- (id)remoteMessageDestinationForAccessorySettingsController:(id)arg1 target:(id)arg2;	// IMP=0x0000000000909a35
- (id)supportedMultiUserLanguageCodesForAccessorySettingsController:(id)arg1;	// IMP=0x0000000000909a23
- (_Bool)isMultiUserEnabledForAccessorySettingsController:(id)arg1;	// IMP=0x00000000009099df
- (void)accessorySettingsController:(id)arg1 saveWithReason:(id)arg2;	// IMP=0x0000000000909921
- (void)accessorySettingsController:(id)arg1 saveWithReason:(id)arg2 model:(id)arg3;	// IMP=0x00000000009098a1
- (void)removeManagedConfigurationProfileWithProfileData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000009095d6
- (id)modelsToMigrateSettingsForController:(id)arg1;	// IMP=0x000000000090952b
- (id)modelsToMakeSettingsForController:(id)arg1 parentUUID:(id)arg2;	// IMP=0x000000000090939d
@property double setupStartTimestamp;
- (void)setSetupActivity:(id)arg1;	// IMP=0x0000000000909156
@property(readonly) HMDAccessorySetupMetricDispatcher *accessorySetupMetricDispatcher;
@property(readonly) HMFActivity *setupActivity;
@property(readonly) HMDBackingStore *backingStore;
- (void)mediaDestinationManagerDidUpdateStagedValues:(id)arg1;	// IMP=0x0000000000908db3
- (id)mediaDestinationManagerWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 backingStore:(id)arg4 targetDevice:(_Bool)arg5 dataSource:(id)arg6 delegate:(id)arg7;	// IMP=0x0000000000908cb4
- (id)mediaGroupParticipantLocalDataStorageForMediaDestinationManager:(id)arg1;	// IMP=0x0000000000908c3a
- (id)rootDestinationManagerForMediaDestinationManager:(id)arg1;	// IMP=0x0000000000908b99
- (id)mediaDestinationManager:(id)arg1 destinationControllerWithIdentifier:(id)arg2;	// IMP=0x0000000000908b1f
- (id)targetAccessoryForMediaDestinationManager:(id)arg1;	// IMP=0x0000000000908b16
- (id)mediaDestinationControllerWithData:(id)arg1 backingStore:(id)arg2 messageDispatcher:(id)arg3 notificationCenter:(id)arg4 logEventSubmitter:(id)arg5 dailyScheduler:(id)arg6 targetDevice:(_Bool)arg7 dataSource:(id)arg8 delegate:(id)arg9;	// IMP=0x00000000009089d6
- (void)mediaDestinationControllerDidUpdateStagedValues:(id)arg1;	// IMP=0x00000000009087a4
- (id)currentDestinationTypeForMediaDestinationControllerMetricsEventDispatcher:(id)arg1;	// IMP=0x0000000000908600
- (long long)mediaDestinationControllerMetricsEventDispatcher:(id)arg1 destinationTypeForDestinationWithIdentifier:(id)arg2;	// IMP=0x0000000000908495
- (_Bool)isTriggeredOnControllerDeviceForMediaDestinationControllerMetricsEventDispatcher:(id)arg1;	// IMP=0x0000000000908483
- (id)currentUserForMediaDestinationControllerMetricsEventDispatcher:(id)arg1;	// IMP=0x0000000000908433
- (id)mediaGroupLocalDataStorageForMediaDestinationController:(id)arg1;	// IMP=0x000000000090813a
- (id)mediaDestinationController:(id)arg1 rootDestinationWithDecendantIdentifier:(id)arg2;	// IMP=0x0000000000907fa6
- (id)targetAccessoryForMediaDestinationController:(id)arg1;	// IMP=0x0000000000907f9d
- (id)mediaDestinationController:(id)arg1 destinationWithParentIdentifier:(id)arg2;	// IMP=0x0000000000907e09
- (id)mediaDestinationController:(id)arg1 destinationManagerWithIdentifier:(id)arg2;	// IMP=0x0000000000907d24
- (id)availableDestinationIdentifiersForMediaDestinationController:(id)arg1;	// IMP=0x0000000000907acc
- (void)deviceController:(id)arg1 didUpdateDevice:(id)arg2;	// IMP=0x0000000000907abf
- (void)handleRemovedMediaDestinationControllerModel:(id)arg1 message:(id)arg2;	// IMP=0x00000000009077e4
- (void)handleRemovedMediaDestinationModel:(id)arg1 message:(id)arg2;	// IMP=0x00000000009074cc
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000009073ab
- (void)handleUpdatedMediaDestinationModel:(id)arg1 message:(id)arg2;	// IMP=0x0000000000906d82
- (void)handleUpdatedMediaDestinationControllerModel:(id)arg1 message:(id)arg2;	// IMP=0x000000000090662b
- (void)handleTransactionUpdatedPublicPairingIdentity:(id)arg1 result:(id)arg2;	// IMP=0x00000000009063c6
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000009060bd
- (id)backingStoreObjectForMediaDestinationControllerData;	// IMP=0x0000000000906035
- (id)backingStoreObjectForMediaDestination;	// IMP=0x0000000000905fad
- (id)backingStoreObjects:(long long)arg1;	// IMP=0x0000000000905e6e
- (void)populateModelObject:(id)arg1 version:(long long)arg2;	// IMP=0x000000000090579f
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x000000000090574f
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;	// IMP=0x0000000000905694
- (id)messageSendPolicy;	// IMP=0x0000000000905644
- (id)remoteMessageDestination;	// IMP=0x0000000000905585
- (void)_relayRequestMessage:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000905067
- (void)handleCurrentNetworkChangedNotification:(id)arg1;	// IMP=0x0000000000904f5a
- (void)updateWiFiNetworkInfo;	// IMP=0x0000000000904ee9
@property(retain) HMFWiFiNetworkInfo *lastStagedWifiNetworkInfo; // @synthesize lastStagedWifiNetworkInfo=_lastStagedWifiNetworkInfo;
- (void)setWifiNetworkInfo:(id)arg1;	// IMP=0x0000000000904d7b
@property(readonly) HMFWiFiNetworkInfo *wifiNetworkInfo; // @synthesize wifiNetworkInfo=_wifiNetworkInfo;
- (void)handleSoftwareUpdateV2Scan:(id)arg1;	// IMP=0x0000000000904b28
- (id)_scanForSoftwareUpdate;	// IMP=0x0000000000904895
- (id)_scanForSoftwareUpdateWithRetries;	// IMP=0x00000000009043c0
- (id)_softwareUpdateV2FromDescriptor:(id)arg1;	// IMP=0x0000000000904294
- (void)_applySoftwareUpdateWithDescriptor:(id)arg1;	// IMP=0x0000000000903e5d
- (void)handleSoftwareUpdateDidBecomeAvailableWithDescriptor:(id)arg1;	// IMP=0x0000000000903da5
- (void)_scanForSoftwareUpdateRepeatedlyAndInstallUpdate:(_Bool)arg1;	// IMP=0x00000000009039bd
- (void)handleSoftwareUpdateV2ScanRepeatedlyAndApplyMessage:(id)arg1;	// IMP=0x0000000000903729
- (void)createSoftwareUpdateEventListenerIfNecessary;	// IMP=0x0000000000903458
- (void)createOrUpdateSoftwareUpdateEventProviderIfNecessary;	// IMP=0x0000000000903452
@property(retain) NSData *deviceIRK; // @synthesize deviceIRK=_deviceIRK;
@property(retain) HMDDeviceAddress *deviceAddress; // @synthesize deviceAddress=_deviceAddress;
- (void)runTransactionWithPreferredMediaUserUUID:(id)arg1 selectionType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000902f5a
- (void)updatePreferredMediaUser:(id)arg1 selectionType:(unsigned long long)arg2;	// IMP=0x0000000000902d85
- (void)updatePreferredMediaUserWithUUID:(id)arg1 selectionType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000902bed
- (void)handleUpdatePreferredMediaUser:(id)arg1;	// IMP=0x0000000000902440
- (void)handleDeleteSiriHistoryRequest:(id)arg1;	// IMP=0x0000000000901f93
- (void)_startUpdate:(id)arg1;	// IMP=0x0000000000901628
- (_Bool)_allowSoftwareUpdateChangeFromSource:(unsigned long long)arg1;	// IMP=0x0000000000901620
- (void)_applySoftwareUpdateModel:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000009015b1
- (_Bool)supportsSoftwareUpdate;	// IMP=0x00000000009014d1
- (void)_updateSoftwareVersion:(id)arg1;	// IMP=0x000000000090126e
@property(retain) HMFSoftwareVersion *softwareVersion;
- (void)postDeviceIRKIfDifferent:(id)arg1;	// IMP=0x00000000009009ee
- (void)handleCurrentDeviceIRKUpdated:(id)arg1;	// IMP=0x0000000000900884
- (void)handleRoomChanged:(id)arg1;	// IMP=0x0000000000900672
- (void)handleRoomNameChanged:(id)arg1;	// IMP=0x00000000009004b9
@property unsigned long long supportedStereoPairVersions; // @synthesize supportedStereoPairVersions=_supportedStereoPairVersions;
- (void)handleHomeUserRemovedNotification:(id)arg1;	// IMP=0x00000000009002bf
- (void)pairingsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000900187
- (void)removeUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000900040
- (void)addUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000008ffef9
@property(readonly) _Bool supportsUserManagement;
- (void)setPairingIdentity:(id)arg1;	// IMP=0x00000000008ffe6e
- (void)_handleTriggerPairingIdentityUpdateNotification:(id)arg1;	// IMP=0x00000000008ffd4b
- (void)notifyFrameworkOfUpdatedPairingIdentity;	// IMP=0x00000000008ffba4
@property(readonly, copy) HMFPairingIdentity *pairingIdentity; // @synthesize pairingIdentity=_pairingIdentity;
- (void)_handleUpdatedName:(id)arg1;	// IMP=0x00000000008ffb2f
- (id)runtimeState;	// IMP=0x00000000008ff9f4
- (long long)reachableTransports;	// IMP=0x00000000008ff976
- (void)setRemotelyReachable:(_Bool)arg1;	// IMP=0x00000000008ff930
- (_Bool)isRemotelyReachable;	// IMP=0x00000000008ff8d8
- (void)removeAdvertisement:(id)arg1;	// IMP=0x00000000008ff7db
- (void)addAdvertisement:(id)arg1;	// IMP=0x00000000008ff6de
- (void)handleDeviceIsNotReachable:(id)arg1;	// IMP=0x00000000008ff5fc
- (void)handleDeviceIsReachable:(id)arg1;	// IMP=0x00000000008ff51a
- (void)startMonitoringReachability;	// IMP=0x00000000008ff329
- (id)deviceMonitor;	// IMP=0x00000000008ff26c
- (void)notifyClientsOfUpdatedAccessoryControllableValue:(_Bool)arg1;	// IMP=0x00000000008ff161
@property(nonatomic, getter=isDeviceReachable) _Bool deviceReachable; // @synthesize deviceReachable=_deviceReachable;
- (void)updateReachabilityOfCurrentDevice;	// IMP=0x00000000008fefb2
- (void)_installManagedConfigurationProfileWithData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000008fed45
- (void)_removeManagedConfigurationProfileWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000008feaad
- (void)handleInstallManagedConfigurationProfile:(id)arg1;	// IMP=0x00000000008fe71a
- (void)handleRemoveManagedConfigurationProfile:(id)arg1;	// IMP=0x00000000008fe387
- (void)handleFetchManagedConfigurationProfiles:(id)arg1;	// IMP=0x00000000008fdaf7
- (void)handleCurrentDeviceUpdated:(id)arg1;	// IMP=0x00000000008fda23
- (_Bool)shouldUpdateWithDevice:(id)arg1 initialConfiguration:(_Bool)arg2;	// IMP=0x00000000008fd4f0
- (void)updateWithDevice:(id)arg1;	// IMP=0x00000000008fcd40
- (void)setDeviceController:(id)arg1;	// IMP=0x00000000008fcc16
@property(readonly) id <HMDMessageRouter> messageRouter;
@property(readonly) HMDDevice *device;
@property(readonly) HMDDevice *deviceForDirectMessaging;
- (_Bool)isHomePod2ndGen;	// IMP=0x00000000008fca68
- (_Bool)isHomePodMini;	// IMP=0x00000000008fca4e
- (_Bool)supportsSoftwareUpdateV2;	// IMP=0x00000000008fc9ef
- (_Bool)supportsJustSiri;	// IMP=0x00000000008fc983
- (_Bool)supportsRMVonAppleTV;	// IMP=0x00000000008fc8f6
- (_Bool)supportsMessagedHomePodSettings;	// IMP=0x00000000008fc8ee
- (_Bool)supportsPersonalRequests;	// IMP=0x00000000008fc8dc
- (_Bool)supportsMediaContentProfile;	// IMP=0x00000000008fc828
- (_Bool)requiresHomeAppForManagement;	// IMP=0x00000000008fc816
@property(readonly) HMSoftwareUpdateProgress *lastSentSoftwareUpdateProgress;
@property(readonly) HMSoftwareUpdateDescriptor *lastSentSoftwareUpdateDescriptor;
- (_Bool)supportsManagedConfigurationProfile;	// IMP=0x00000000008fc7c2
- (_Bool)supportsMediaActions;	// IMP=0x00000000008fc756
- (_Bool)supportsAnnounce;	// IMP=0x00000000008fc6ea
- (_Bool)supportsTVOSUpdateManualUpdateAvailableNotification;	// IMP=0x00000000008fc630
- (_Bool)supportsCoordinationFreeDoorbellChime;	// IMP=0x00000000008fc576
- (_Bool)supportsCoordinationDoorbellChime;	// IMP=0x00000000008fc4bc
@property(readonly) _Bool supportsUserMediaSettings;
- (_Bool)supportsDoorbellChime;	// IMP=0x00000000008fc348
- (_Bool)supportsDropIn;	// IMP=0x00000000008fc225
- (_Bool)supportsAudioAnalysis;	// IMP=0x00000000008fc102
- (_Bool)supportsPreferredMediaUser;	// IMP=0x00000000008fc096
- (_Bool)supportsThirdPartyMusic;	// IMP=0x00000000008fbfdc
- (_Bool)supportsMusicAlarm;	// IMP=0x00000000008fbf70
- (_Bool)supportsCompanionInitiatedObliterate;	// IMP=0x00000000008fbf04
- (_Bool)supportsCompanionInitiatedRestart;	// IMP=0x00000000008fbe98
- (_Bool)supportsAudioReturnChannel;	// IMP=0x00000000008fbe2c
@property(readonly) _Bool legacyLocationServicesEnabled;
- (_Bool)supportsHomeLevelLocationServiceSetting;	// IMP=0x00000000008fbb56
- (_Bool)supportsMultiUser;	// IMP=0x00000000008fbaea
- (_Bool)supportsTargetControl;	// IMP=0x00000000008fba7e
- (_Bool)isCurrentAccessory;	// IMP=0x00000000008fb986
@property(retain) NSUUID *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
- (id)idsIdentifierInternal;	// IMP=0x00000000008fb8ec
@property long long productColor;
@property(readonly) unsigned long long homePodVariant;
@property(retain, nonatomic) NSData *rawCapabilities; // @synthesize rawCapabilities=_rawCapabilities;
@property(retain, nonatomic) HMAccessoryCapabilities *capabilitiesInternal; // @synthesize capabilitiesInternal=_capabilitiesInternal;
@property(readonly, nonatomic) id <HMAccessoryCapabilities> capabilities;
- (void)configureTargetController:(id)arg1;	// IMP=0x00000000008fb5a4
- (void)autoConfigureTargetControllers;	// IMP=0x00000000008fb4d9
- (void)_fixCloudKeyIfNeeded;	// IMP=0x00000000008fb01b
- (void)_fetchMultiUserLanguages;	// IMP=0x00000000008fae9c
- (id)_createMediaProfile;	// IMP=0x00000000008fae66
- (void)removeAudioDestination;	// IMP=0x00000000008fac18
- (id)mediaGroupParticipantDataLocalStorage;	// IMP=0x00000000008faa9a
- (void)legacyCreateAudioDestinationWithIdentifier:(id)arg1 supportedOptions:(unsigned long long)arg2;	// IMP=0x00000000008fa977
- (id)defaultAudioGroupIdentifier;	// IMP=0x00000000008fa96f
- (void)createAudioDestination;	// IMP=0x00000000008fa3d7
- (unsigned long long)expectedDestinationSupportOptions;	// IMP=0x00000000008fa38f
- (void)migrateLocalParticipantData;	// IMP=0x00000000008fa254
- (void)configureAudioDestinationManager;	// IMP=0x00000000008f9ef4
- (void)mergeAudioDestination:(id)arg1;	// IMP=0x00000000008f9b1c
- (void)unsetAudioDestination;	// IMP=0x00000000008f9ad9
- (id)legacyAudioDestination;	// IMP=0x00000000008f9a47
@property(readonly) HMMediaDestination *audioDestination;
- (id)legacyCommittedAudioDestination;	// IMP=0x00000000008f983d
- (id)committedAudioDestination;	// IMP=0x00000000008f9766
- (void)legacyCreateAudioDestinationControllerWithControllerIdentifier:(id)arg1;	// IMP=0x00000000008f962c
- (void)createAudioDestinationController;	// IMP=0x00000000008f90fd
- (_Bool)hasValidHome:(id)arg1 backingStore:(id)arg2 messageDispatcher:(id)arg3;	// IMP=0x00000000008f8f8d
- (void)configureAudioDestinationController;	// IMP=0x00000000008f8b25
- (void)mergeAudioDestinationControllerData:(id)arg1;	// IMP=0x00000000008f8766
- (void)unsetAudioDestinationControllerData;	// IMP=0x00000000008f8723
- (id)legacyCommittedAudioDestinationControllerData;	// IMP=0x00000000008f8691
- (id)committedAudioDestinationControllerData;	// IMP=0x00000000008f85ba
- (id)legacyAudioDestinationControllerData;	// IMP=0x00000000008f8528
@property(readonly) HMMediaDestinationControllerData *audioDestinationControllerData;
@property(readonly, copy) NSUUID *sensorAccessoryUUID;
- (void)configureSensors;	// IMP=0x00000000008f835a
@property(readonly, nonatomic) _Bool isDoorbellChimeSettingEnabled;
- (void)createAccessoryInfoSubscriberIfNecessary;	// IMP=0x00000000008f80cf
@property(readonly) _Bool isAppleTV;
@property(readonly) _Bool isHomePod;
- (void)updateProductInformation;	// IMP=0x00000000008f7a8f
- (void)createNewPairingIdentity;	// IMP=0x00000000008f7608
- (void)configurePairingIdentity;	// IMP=0x00000000008f7425
- (void)registerForDarwinNotificationsOnCurrentAccessory;	// IMP=0x00000000008f741f
- (void)configureWithHome:(id)arg1 msgDispatcher:(id)arg2 configurationTracker:(id)arg3 initialConfiguration:(_Bool)arg4;	// IMP=0x00000000008f5c76
- (void)_configureGroupParticipantLocalDataStorageWithHome:(id)arg1;	// IMP=0x00000000008f59c1
@property(readonly, nonatomic) HMDDoorbellChimeProfile *doorbellChimeProfile;
- (_Bool)_shouldFilterAccessoryProfileForEntitledClients:(id)arg1;	// IMP=0x00000000008f57b2
- (_Bool)_shouldFilterAccessoryProfileForUnentitledClients:(id)arg1;	// IMP=0x00000000008f5722
- (void)_registerForMessages;	// IMP=0x00000000008f51ef
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000008f4eaa
- (id)initWithDeviceController:(id)arg1 deviceIdentifierFactory:(CDUnknownBlockType)arg2;	// IMP=0x00000000008f4e0e
- (id)init;	// IMP=0x00000000008f4c83
- (id)initWithDependencyFactory:(id)arg1 deviceMediaRouteIdentifierFactory:(CDUnknownBlockType)arg2;	// IMP=0x00000000008f4be2
- (id)initWithTransaction:(id)arg1 home:(id)arg2 dependencyFactory:(id)arg3;	// IMP=0x00000000008f433e
- (id)initWithTransaction:(id)arg1 home:(id)arg2;	// IMP=0x00000000008f42b8
- (void)deleteSiriHistoryForAccessoryWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000176a39
- (_Bool)supportsHomeHub;	// IMP=0x00000000001768be
- (id)accessoryWithUUID:(id)arg1 forAppleMediaAccessoryLocalMessageHandler:(id)arg2;	// IMP=0x0000000000721c69
- (id)assistantObject;	// IMP=0x0000000000a36e96
- (id)languageValueList;	// IMP=0x0000000000a4766e
- (id)createAppleMediaAccessoryMessengerWithIdentifier:(id)arg1 messageDispatcher:(id)arg2 router:(id)arg3 localHandler:(id)arg4;	// IMP=0x0000000000b27304
- (void)configureAppleMediaAccessoryMessengerWithFactory:(id)arg1;	// IMP=0x0000000000b27032
- (_Bool)isCurrentDevicePrimaryResident;	// IMP=0x0000000000d59bd6
- (id)deviceForAppleMediaAccessoryMessageRouter:(id)arg1 message:(id)arg2;	// IMP=0x0000000000d59bc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property __weak HMDHome *home;
@property(readonly) Class superclass;

@end
