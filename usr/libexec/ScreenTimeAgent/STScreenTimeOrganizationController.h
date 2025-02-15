//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NPSManager, NSFetchedResultsController, NSOperationQueue, NSString, NSUserDefaults, STAccountStateMonitor, STAppMonitor, STAppMonitorStatus, STAskForTimeManager, STConcreteOrganizationControllerConfigurationAdapter, STDebouncer, STFamilyOrganizationController, STRequestManager, STScreenTimeCapabilities, STUsageManager, STXPCEventObserver;
@protocol STAccountNotifying, STMirroringMonitor, STOrganizationControllerConfigurationAdapter, STPersistenceControllerProtocol;

@interface STScreenTimeOrganizationController : NSObject
{
    _Bool _didReadLocalPasscode;	// 8 = 0x8
    _Bool _resetAllLocalScreenTimeSettings;	// 9 = 0x9
    STFamilyOrganizationController *familyOrganizationController;	// 16 = 0x10
    STRequestManager *_requestManager;	// 24 = 0x18
    id <STPersistenceControllerProtocol> _persistenceController;	// 32 = 0x20
    NSOperationQueue *_operationQueue;	// 40 = 0x28
    id _accessLock;	// 48 = 0x30
    STAskForTimeManager *_askForTimeManager;	// 56 = 0x38
    STAccountStateMonitor *_accountMonitor;	// 64 = 0x40
    STXPCEventObserver *_deviceRenameEventObserver;	// 72 = 0x48
    STAppMonitor *_appMonitor;	// 80 = 0x50
    id <STMirroringMonitor> _mirroringMonitor;	// 88 = 0x58
    id <STAccountNotifying> _accountNotifier;	// 96 = 0x60
    NSFetchedResultsController *_settingsResultsController;	// 104 = 0x68
    NSFetchedResultsController *_organizationSettingsResultsController;	// 112 = 0x70
    NSFetchedResultsController *_blueprintsResultsController;	// 120 = 0x78
    NSFetchedResultsController *_downtimeOverridesResultsController;	// 128 = 0x80
    NSFetchedResultsController *_schedulesResultsController;	// 136 = 0x88
    NSFetchedResultsController *_usageLimitsResultsController;	// 144 = 0x90
    NSFetchedResultsController *_configurationsResultsController;	// 152 = 0x98
    STUsageManager *_usageManager;	// 160 = 0xa0
    NPSManager *_watchSyncManager;	// 168 = 0xa8
    STScreenTimeCapabilities *_capabilities;	// 176 = 0xb0
    STConcreteOrganizationControllerConfigurationAdapter *_configurationAdapter;	// 184 = 0xb8
    STDebouncer *_blueprintDebouncer;	// 192 = 0xc0
    STDebouncer *_deviceStateDebouncer;	// 200 = 0xc8
}

+ (id)keyPathsForValuesAffectingScreenTimeSyncingEnabled;	// IMP=0x00200000000a381a
+ (id)keyPathsForValuesAffectingScreenTimeEnabled;	// IMP=0x00100000000a2465
- (void).cxx_destruct;	// IMP=0x00200000000accef
@property(nonatomic) _Bool resetAllLocalScreenTimeSettings; // @synthesize resetAllLocalScreenTimeSettings=_resetAllLocalScreenTimeSettings;
@property(retain, nonatomic) STDebouncer *deviceStateDebouncer; // @synthesize deviceStateDebouncer=_deviceStateDebouncer;
- (void)setBlueprintDebouncer:(id)arg1;	// IMP=0x00100000000acca8
- (id)blueprintDebouncer;	// IMP=0x00100000000acc9b
@property(readonly) STConcreteOrganizationControllerConfigurationAdapter *configurationAdapter; // @synthesize configurationAdapter=_configurationAdapter;
@property(readonly) STScreenTimeCapabilities *capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) NPSManager *watchSyncManager; // @synthesize watchSyncManager=_watchSyncManager;
@property(nonatomic) _Bool didReadLocalPasscode; // @synthesize didReadLocalPasscode=_didReadLocalPasscode;
@property(retain, nonatomic) STUsageManager *usageManager; // @synthesize usageManager=_usageManager;
@property(retain, nonatomic) NSFetchedResultsController *configurationsResultsController; // @synthesize configurationsResultsController=_configurationsResultsController;
@property(retain, nonatomic) NSFetchedResultsController *usageLimitsResultsController; // @synthesize usageLimitsResultsController=_usageLimitsResultsController;
@property(retain, nonatomic) NSFetchedResultsController *schedulesResultsController; // @synthesize schedulesResultsController=_schedulesResultsController;
@property(retain, nonatomic) NSFetchedResultsController *downtimeOverridesResultsController; // @synthesize downtimeOverridesResultsController=_downtimeOverridesResultsController;
@property(retain, nonatomic) NSFetchedResultsController *blueprintsResultsController; // @synthesize blueprintsResultsController=_blueprintsResultsController;
@property(retain, nonatomic) NSFetchedResultsController *organizationSettingsResultsController; // @synthesize organizationSettingsResultsController=_organizationSettingsResultsController;
@property(retain, nonatomic) NSFetchedResultsController *settingsResultsController; // @synthesize settingsResultsController=_settingsResultsController;
@property(retain, nonatomic) id <STAccountNotifying> accountNotifier; // @synthesize accountNotifier=_accountNotifier;
@property(retain, nonatomic) id <STMirroringMonitor> mirroringMonitor; // @synthesize mirroringMonitor=_mirroringMonitor;
@property(retain, nonatomic) STAppMonitor *appMonitor; // @synthesize appMonitor=_appMonitor;
@property(readonly, nonatomic) STXPCEventObserver *deviceRenameEventObserver; // @synthesize deviceRenameEventObserver=_deviceRenameEventObserver;
@property(retain, nonatomic) STAccountStateMonitor *accountMonitor; // @synthesize accountMonitor=_accountMonitor;
@property(readonly, nonatomic) STAskForTimeManager *askForTimeManager; // @synthesize askForTimeManager=_askForTimeManager;
@property(readonly, nonatomic) id accessLock; // @synthesize accessLock=_accessLock;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) id <STPersistenceControllerProtocol> persistenceController; // @synthesize persistenceController=_persistenceController;
@property(retain) STRequestManager *requestManager; // @synthesize requestManager=_requestManager;
@property(retain, nonatomic) STFamilyOrganizationController *familyOrganizationController; // @synthesize familyOrganizationController;
- (void)debouncer:(id)arg1 didDebounce:(id)arg2;	// IMP=0x00100000000ac9da
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x00100000000ac88d
- (void)requestManager:(id)arg1 didPrepareBlueprintPayloads:(id)arg2;	// IMP=0x00100000000ac824
- (void)requestManager:(id)arg1 didPrepareRequestPayloads:(id)arg2 reason:(id)arg3;	// IMP=0x00100000000ac617
- (void)didReceiveBlueprintPayload:(id)arg1;	// IMP=0x00100000000ac2bb
- (void)lastModifcationDateForDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000abc85
- (void)lastCommunicationLimitsModifcationDateForDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ab812
- (void)triggerDowngradeMigrationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ab735
- (void)setLocationSharingModificationAllowed:(_Bool)arg1 forDSID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000aab78
- (void)isLocationSharingModificationAllowedForDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000aa12f
- (void)applyIntroductionModel:(id)arg1 forDSID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a9696
- (void)enableWebContentFilterWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a9397
- (id)getIsWebContentRestrictedAndReturnError:(id *)arg1;	// IMP=0x00100000000a89e7
- (id)getIsExplicitContentRestrictedAndReturnError:(id *)arg1;	// IMP=0x00100000000a8035
- (id)_doesNotHaveOneMoreMinuteBlueprintPassingTest:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x00100000000a79f3
- (id)shouldAllowOneMoreMinuteForCategoryIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a78bc
- (id)shouldAllowOneMoreMinuteForWebDomain:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a7785
- (id)shouldAllowOneMoreMinuteForBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a764e
- (void)permitWebFilterURL:(id)arg1 pageTitle:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a7068
- (void)contactManagementStateForDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a6d77
- (void)setContactManagementState:(long long)arg1 forDSID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a6a08
- (id)getPrimaryiCloudCardDAVAccountIdentifierWithError:(id *)arg1;	// IMP=0x00100000000a6948
- (void)communicationPoliciesForDSID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a6667
- (void)communicationPoliciesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a63ba
@property(readonly) _Bool shouldRequestMoreTime;
- (void)applyDefaultUserPoliciesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a61e6
- (void)performMigrationFromMCXSettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a61d6
@property(readonly, nonatomic) NSUserDefaults *userDefaults;
- (_Bool)authenticateRestrictionsPasscode:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a5df7
- (void)restrictionsPasscodeEntryAttemptCountAndTimeoutDateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a597b
- (void)setRestrictionsPasscode:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a55ed
- (id)getNeedsToSetRestrictionsPasscodeAndReturnError:(id *)arg1;	// IMP=0x00100000000a527e
- (id)getIsRestrictionsPasscodeSetAndReturnError:(id *)arg1;	// IMP=0x00100000000a4ee9
- (_Bool)clearRestrictionsPasscodeWithError:(id *)arg1;	// IMP=0x00100000000a420b
- (void)isContentPrivacyEnabledForDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a3c1d
- (void)setScreenTimeSyncingEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a38f1
@property(readonly, getter=isScreenTimeSyncingEnabled) _Bool screenTimeSyncingEnabled;
- (void)enableRemoteManagementForDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a3469
- (void)enableScreenTimeForDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a308c
- (void)setAppAndWebsiteActivityEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a2bbb
- (void)setScreenTimeEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a253c
@property(readonly, getter=isScreenTimeEnabled) _Bool screenTimeEnabled;
- (void)_applyDefaultUserPoliciesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a222c
- (void)migrateLegacyRestrictionsIfNeededWithMCXSettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a1f12
- (void)scheduleAppMonitorAppDiscovery;	// IMP=0x00100000000a1ed5
@property(readonly) STAppMonitorStatus *appMonitorStatus;
- (void)rollupUsageDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a1d2a
- (void)performWeeklyRollupWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a1c5e
- (void)accountDidUpdateToState:(id)arg1 initializing:(_Bool)arg2;	// IMP=0x00100000000a10f0
- (void)cleanOrphanedDatabaseEntities;	// IMP=0x00100000000a044e
- (_Bool)createMandatoryEntitiesIfNeeded;	// IMP=0x001000000009fe0a
- (void)migrateOldDefaultsIfNeeded;	// IMP=0x001000000009fd7d
- (void)_didFailDMRegistration:(id)arg1;	// IMP=0x001000000009fd07
- (void)postOrRemoveAppAndWebsiteActivityEnabledNotification:(_Bool)arg1;	// IMP=0x001000000009fbb4
- (void)performCloudSync:(CDUnknownBlockType)arg1;	// IMP=0x001000000009fa74
- (void)fetchMirroringMonitorStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000009f8cd
- (void)deleteAllLocalScreenTimeSettings;	// IMP=0x001000000009f314
- (void)processBlueprintChangesInstallOnly:(_Bool)arg1;	// IMP=0x001000000009ef87
- (void)_applyImageGenerationRestrictionIfNeeded;	// IMP=0x001000000009ee7b
- (void)updateEffectiveDeviceState:(_Bool)arg1;	// IMP=0x001000000009db58
- (void)deleteLocalUserBlueprintsFromManagedConfigurationEffectiveSettings;	// IMP=0x001000000009d6b8
- (void)_updateScreenTimeSettingsFromManagedConfigurationEffectiveSettingsWithScreenTimeSettings:(id)arg1;	// IMP=0x001000000009d57d
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x001000000009d242
- (void)_startObservingManagedConfigurationEffectiveSettings;	// IMP=0x001000000009d1ef
- (void)stopObservingBlueprints;	// IMP=0x001000000009d190
- (void)startObservingBlueprints;	// IMP=0x001000000009c681
- (void)stopObservingOrganizationSettings;	// IMP=0x001000000009c66d
- (void)startObservingOrganizationSettings;	// IMP=0x001000000009c3af
- (void)stopObservingScreenTimeSettings;	// IMP=0x001000000009c39b
- (void)startObservingScreenTimeSettings;	// IMP=0x001000000009c0dd
- (void)startMonitoringAccountChanges;	// IMP=0x001000000009bfdf
- (void)updateDeviceName;	// IMP=0x001000000009bc44
- (void)didEnableManagement;	// IMP=0x001000000009ba6e
- (void)didUpdateFamily:(id)arg1;	// IMP=0x001000000009b9e5
- (void)didLeaveFamily;	// IMP=0x000000000009b6b2
- (void)didJoinFamily:(id)arg1;	// IMP=0x001000000009b5f8
- (void)startupFamily:(id)arg1;	// IMP=0x001000000009ad7a
- (void)didDisableCloudSync;	// IMP=0x001000000009a7f2
- (void)didEnableCloudSync;	// IMP=0x001000000009a6b1
- (void)startupCloudSync;	// IMP=0x0010000000099fcf
- (void)didSignOutOfCloud:(id)arg1;	// IMP=0x00100000000997f7
- (void)didSignInToCloud:(id)arg1;	// IMP=0x0010000000099771
- (void)startupCloud;	// IMP=0x0010000000099281
- (void)attemptToAutomaticallyEnableScreenTimeSyncing;	// IMP=0x0010000000098bcb
- (void)didDisableScreenTime;	// IMP=0x00100000000982fb
- (void)didEnableScreenTime:(_Bool)arg1;	// IMP=0x001000000009808f
- (void)startupScreenTime:(_Bool)arg1;	// IMP=0x0010000000097ad6
- (void)resume;	// IMP=0x0010000000097489
@property(readonly) id <STOrganizationControllerConfigurationAdapter> adapter;
- (id)initWithPersistenceController:(id)arg1 askForTimeManager:(id)arg2 mirroringMonitor:(id)arg3 accountNotifier:(id)arg4 capabilities:(id)arg5;	// IMP=0x0010000000096fb5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

