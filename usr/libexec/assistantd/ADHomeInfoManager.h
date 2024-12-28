//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADHomeInfo, ADPreferredMediaUserInfo, AFHomeAccessoryInfo, AFInstanceContext, HMAccessory, HMHome, HMHomeManager, NSHashTable, NSMutableDictionary, NSString, NSUUID, SASetHomeContext;
@protocol OS_dispatch_queue;

@interface ADHomeInfoManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    HMHomeManager *_homeManager;	// 16 = 0x10
    HMAccessory *_currentAccessory;	// 24 = 0x18
    AFHomeAccessoryInfo *_currentAccessoryInfo;	// 32 = 0x20
    NSUUID *_accessoryLoggingSalt;	// 40 = 0x28
    HMHome *_currentHome;	// 48 = 0x30
    ADHomeInfo *_currentHomeInfo;	// 56 = 0x38
    NSMutableDictionary *_homeUserSettings;	// 64 = 0x40
    _Bool _assistantRequestedToTurnOffVoiceID;	// 72 = 0x48
    NSMutableDictionary *_homeSharingStates;	// 80 = 0x50
    AFInstanceContext *_instanceContext;	// 88 = 0x58
    NSHashTable *_listeners;	// 96 = 0x60
    SASetHomeContext *_homeContext;	// 104 = 0x68
    ADPreferredMediaUserInfo *_preferredMediaUserInfo;	// 112 = 0x70
    _Bool isATVOnly;	// 120 = 0x78
}

+ (id)sharedInfoManager;	// IMP=0x0020000000239263
- (void).cxx_destruct;	// IMP=0x0020000000231bae
@property(readonly, nonatomic) HMHome *currentHome; // @synthesize currentHome=_currentHome;
- (void)emitHomeMetricInvocationEvent;	// IMP=0x0010000000231b59
- (id)_activityNotificationsForHomes:(id)arg1;	// IMP=0x00100000002318da
- (id)updatedHomeInfoForRootInfo:(id)arg1;	// IMP=0x001000000023177c
- (id)_getAccessoryCategoryForExecutionInfo:(id)arg1;	// IMP=0x00100000002315ae
- (void)getAccessoryCategoryForExecutionInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002314f7
- (void)getLocalizedAccessoryCategoryForExecutionInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000231438
- (void)accessoriesWithSiriInTheHome:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000231423
- (void)accessoriesWithSiriInTheHome:(id)arg1 completion:(CDUnknownBlockType)arg2 queue:(id)arg3;	// IMP=0x001000000023133d
- (_Bool)_hasSiriCapableDeviceInHome:(id)arg1;	// IMP=0x0010000000231109
- (void)getHomeManagerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000231072
- (id)_homesWithSiriCapableDevices;	// IMP=0x0010000000230ea7
- (_Bool)areActivityNotificationsOffForAllHomes;	// IMP=0x0010000000230d13
- (id)rootAfHomeInfoForThisDevice;	// IMP=0x0010000000230c8d
- (void)accessoryDidUpdateSupportsThirdPartyMusic:(id)arg1;	// IMP=0x0010000000230bba
- (void)accessory:(id)arg1 didUpdateSettings:(id)arg2;	// IMP=0x00100000002309ff
- (void)accessoryDidUpdatePreferredMediaUser:(id)arg1;	// IMP=0x00100000002309f9
- (void)accessoryDidUpdateName:(id)arg1;	// IMP=0x00100000002308e3
- (void)homeDidEnableMultiUser:(id)arg1;	// IMP=0x00100000002308dd
- (void)home:(id)arg1 didUpdateRoom:(id)arg2 forAccessory:(id)arg3;	// IMP=0x00100000002307a8
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;	// IMP=0x0010000000230638
- (void)home:(id)arg1 didAddAccessory:(id)arg2;	// IMP=0x001000000023051f
- (void)home:(id)arg1 didRemoveUser:(id)arg2;	// IMP=0x0010000000230519
- (void)home:(id)arg1 didAddUser:(id)arg2;	// IMP=0x00100000002303d1
- (void)homeDidUpdateName:(id)arg1;	// IMP=0x0010000000230344
- (void)shareManager:(id)arg1 didReceiveShareInvitation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000023025a
- (void)_propagateSiriDataSharingOptInStatus:(long long)arg1 toAccessory:(id)arg2;	// IMP=0x001000000022fe5f
- (void)user:(id)arg1 didUpdateAssistantAccessControl:(id)arg2 forHome:(id)arg3;	// IMP=0x001000000022fc73
- (void)settingsWillUpdate:(id)arg1;	// IMP=0x001000000022fbee
- (void)settingsDidUpdate:(id)arg1;	// IMP=0x001000000022fae3
- (void)homeManagerDidUpdateAssistantIdentifiers:(id)arg1;	// IMP=0x001000000022fa56
- (void)homeManagerDidUpdateDataSyncState:(id)arg1;	// IMP=0x001000000022f9c9
- (void)homeManagerDidUpdateCurrentHome:(id)arg1;	// IMP=0x001000000022f93c
- (void)homeManager:(id)arg1 didUpdateStatus:(unsigned long long)arg2;	// IMP=0x001000000022f8af
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;	// IMP=0x001000000022f806
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;	// IMP=0x001000000022f66c
- (void)homeManagerDidUpdateHomes:(id)arg1;	// IMP=0x001000000022f5df
- (void)_homeManagerUpdatedHomes:(id)arg1 homesToDelete:(id)arg2;	// IMP=0x001000000022f533
- (void)_homeManagerUpdatedHomes:(id)arg1;	// IMP=0x001000000022f51f
- (void)_checkAndDisableVoiceIDIfRequired;	// IMP=0x001000000022f4ff
- (void)_startCloudKitActivityForHomes:(id)arg1 homesToDelete:(id)arg2;	// IMP=0x001000000022f4f9
- (void)fetchAccessoriesInRoom:(id)arg1 matchingCategoryTypes:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000022ef3a
- (void)fetchMultiUserMetricsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000022ebd3
- (void)_enumerateListenersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000022eaa4
- (void)removeListener:(id)arg1;	// IMP=0x001000000022ea0d
- (void)addListener:(id)arg1;	// IMP=0x001000000022e976
- (void)getCurrentAccessoryInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000022e8df
@property(readonly, nonatomic) AFHomeAccessoryInfo *currentAccessoryInfo;
@property(readonly, nonatomic) NSUUID *accessoryLoggingSalt;
- (id)_accessoryLoggingSalt;	// IMP=0x001000000022e6e3
- (void)_updateCurrentAccessoryInfoWithAccessory:(id)arg1;	// IMP=0x001000000022e447
- (id)_accessoryInfoForAccessory:(id)arg1;	// IMP=0x001000000022e011
- (id)_currentAccessoryInfo;	// IMP=0x001000000022dfc8
- (id)_currentAccessory;	// IMP=0x001000000022dfba
- (id)_accessoryForIdentifier:(id)arg1 inHome:(id *)arg2;	// IMP=0x001000000022d671
- (id)getCurrentASRLanguages;	// IMP=0x001000000022d564
- (void)getHomeContext:(CDUnknownBlockType)arg1;	// IMP=0x001000000022d4cd
- (void)JSCapableHomeAccessories:(CDUnknownBlockType)arg1;	// IMP=0x001000000022d4b9
- (void)JSCapableHomeAccessories:(CDUnknownBlockType)arg1 queue:(id)arg2;	// IMP=0x001000000022d3fa
- (id)getHomeUniqueIdentifiers;	// IMP=0x001000000022d2fe
- (id)accessoriesInHome;	// IMP=0x001000000022d202
- (id)accessoriesWithPersonalRequestsEnabled;	// IMP=0x001000000022d106
- (void)setRecognizeMyVoiceEnabled:(_Bool)arg1;	// IMP=0x001000000022d0b8
- (void)restartShareDeletion;	// IMP=0x001000000022d0b2
- (void)restartSharing;	// IMP=0x001000000022d067
- (void)getSpeakerCapabilityForAccessoryWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000022cfcf
- (void)getAccessoryInfoForAccessoryWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000022cf57
- (void)getCurrentAccessoryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000022cec0
- (void)_onceSiriDataSharingAdjustment:(id)arg1;	// IMP=0x001000000022c852
- (void)_siriDataSharingAdjustment:(id)arg1;	// IMP=0x001000000022c7b5
- (void)setAllowHeySiriHomeKitSetting:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000022c79c
- (void)setAllowJustSiriHomeKitSetting:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000022c786
- (void)setAllowJustSiriHomeKitSetting:(_Bool)arg1;	// IMP=0x001000000022c76e
- (void)initializeHomeSiriPhraseOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000022c758
- (void)isJustSiriEnabledInTheHome:(CDUnknownBlockType)arg1;	// IMP=0x001000000022c742
- (void)_updateVoiceTriggerPhrase;	// IMP=0x001000000022c651
- (void)availableLanguagesInTheHome:(CDUnknownBlockType)arg1;	// IMP=0x001000000022c53c
- (void)getHomeIdForAccessoryId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000022c45a
- (void)getVoiceSettingsForHomeMembers:(CDUnknownBlockType)arg1;	// IMP=0x001000000022c3cc
- (void)settingsForMultiUserWithRefresh:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000022c330
- (void)getCurrentHomeMemberIds:(CDUnknownBlockType)arg1;	// IMP=0x001000000022c299
- (void)_setPreferredMediaUserForAccessory:(id)arg1;	// IMP=0x001000000022bdde
- (void)_setPreferredMediaUserForAccessories:(id)arg1;	// IMP=0x001000000022ba60
- (id)preferredMediaUserInfo;	// IMP=0x001000000022b9a7
- (id)infoForThisDevice;	// IMP=0x001000000022b8ee
- (id)_homesWithMultiUserEnabled;	// IMP=0x001000000022b538
- (_Bool)_updateHomeUserSettings;	// IMP=0x001000000022a053
- (id)_settingsForHomeUser:(id)arg1 forHome:(id)arg2;	// IMP=0x0010000000229d38
- (_Bool)_allowExplicitContentSettingForUser:(id)arg1 forHome:(id)arg2;	// IMP=0x0010000000229cdf
- (void)_resolveSiriDataSharingStatusMismatch:(id)arg1;	// IMP=0x00100000002298da
- (void)_siriDataSharingOptInStatusDidChange:(id)arg1;	// IMP=0x00100000002297f2
- (void)_logRelevantAnalyticsOnHomeUserSettingsUpdateForCurrentSettings:(id)arg1 allowVoiceIdSettingValue:(long long)arg2 isPrimaryUser:(_Bool)arg3;	// IMP=0x0010000000229649
- (id)_currentHomeInfo;	// IMP=0x00100000002293c4
- (id)_currentHome;	// IMP=0x0010000000228e33
- (void)currentHomeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000228d9c
- (void)_updateHomeContext:(id)arg1;	// IMP=0x00100000002283b9
- (void)dealloc;	// IMP=0x00100000002282cf
- (id)_homeManager;	// IMP=0x00100000002281db
- (void)startAcceptingCloudSharesForMultiUserService;	// IMP=0x00100000002281d5
- (_Bool)hasOptedInHH2;	// IMP=0x0010000000228191
- (id)initWithHomeManager:(id)arg1 queue:(id)arg2;	// IMP=0x0010000000228060
- (void)updateCurrentUserRMVSettingForHome:(id)arg1 enabled:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000227f25
- (void)updateRMVSettingForUser:(id)arg1 enabled:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000227dea
- (id)_initWithContext:(id)arg1;	// IMP=0x0010000000227c30
- (id)_init;	// IMP=0x0010000000227bd6
- (void)setAllowJustSiriHomeKitSetting:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2 queue:(id)arg3;	// IMP=0x00100000000b48e2
- (void)isJustSiriEnabledInTheHome:(CDUnknownBlockType)arg1 queue:(id)arg2;	// IMP=0x00100000000b47c0
- (void)initializeHomeSiriPhraseOptions:(id)arg1 completion:(CDUnknownBlockType)arg2 queue:(id)arg3;	// IMP=0x00100000000b47ba
- (void)updateVoiceTriggerPhrase:(unsigned long long)arg1 currentAccessoryInfo:(id)arg2;	// IMP=0x00100000000b4733
- (void)setAllowHeySiriHomeKitSetting:(_Bool)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b472d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
