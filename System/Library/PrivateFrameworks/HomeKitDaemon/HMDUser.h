//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class AVOutputDeviceAuthorizedPeer, HAPPairingIdentity, HMBShareUserID, HMDAccountHandle, HMDAccountIdentifier, HMDAssistantAccessControl, HMDCloudShareMessenger, HMDCloudShareTrustManager, HMDHome, HMDPersonSettingsManager, HMDPhotosPersonManager, HMDRestrictedGuestHomeAccessSettings, HMDSiriMultiUserNewLanguageNotificationManager, HMDUserDataController, HMDUserPhotosPersonDataManager, HMDUserSettingsBackingStoreController, HMFMessageDispatcher, HMPhotosPersonManagerSettings, HMUserPresenceAuthorization, NAFuture, NSData, NSDictionary, NSNumber, NSObject, NSSet, NSString, NSUUID;
@protocol HAPKeyStore, HMDAccountMetadata, HMDUserAccessorySettingsDataController, HMDUserDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDUser : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSUUID *_uuid;	// 16 = 0x10
    _Bool _remoteAccessAllowed;	// 24 = 0x18
    HMDAccountHandle *_accountHandle;	// 32 = 0x20
    HMDAccountIdentifier *_accountIdentifier;	// 40 = 0x28
    NSString *_mergeIdentifier;	// 48 = 0x30
    _Bool _needsiTunesMultiUserRepair;	// 56 = 0x38
    _Bool _ownerCompletedSwitchingHomesOnboardingUI;	// 57 = 0x39
    _Bool _ownerDismissed2024EnergyOnboarding;	// 58 = 0x3a
    _Bool _ownerDismissedAccessCodeOnboarding;	// 59 = 0x3b
    _Bool _ownerDismissedAccessoryFirmwareUpdateOnboarding;	// 60 = 0x3c
    _Bool _ownerDismissedAnnounceOnboarding;	// 61 = 0x3d
    _Bool _ownerDismissedCameraRecordingOnboarding;	// 62 = 0x3e
    _Bool _ownerDismissedCameraRecordingSetupBanner;	// 63 = 0x3f
    _Bool _ownerDismissedCameraUpgradeOfferBanner;	// 64 = 0x40
    _Bool _ownerDismissedHomeTheaterOnboarding;	// 65 = 0x41
    _Bool _ownerDismissedIdentifyVoiceOnboarding;	// 66 = 0x42
    _Bool _ownerDismissedIdentifyVoiceSetupBanner;	// 67 = 0x43
    _Bool _ownerDismissedNaturalLightingOnboarding;	// 68 = 0x44
    _Bool _ownerDismissedTVViewingProfileOnboarding;	// 69 = 0x45
    _Bool _ownerDismissedTVViewingProfileSetupBanner;	// 70 = 0x46
    _Bool _ownerDismissedUserSplitMediaAccountWarning;	// 71 = 0x47
    _Bool _ownerDismissedWalletKeyExpressModeOnboarding;	// 72 = 0x48
    _Bool _ownerDismissedWelcomeUI;	// 73 = 0x49
    _Bool _ownerHasUserSeenRMVNewLanguageNotification;	// 74 = 0x4a
    _Bool _allowExplicitContent;	// 75 = 0x4b
    _Bool _allowiTunesAccount;	// 76 = 0x4c
    _Bool _dolbyAtmosEnabled;	// 77 = 0x4d
    _Bool _losslessMusicEnabled;	// 78 = 0x4e
    _Bool _playbackInfluencesEnabled;	// 79 = 0x4f
    _Bool _siriIdentifyVoiceEnabled;	// 80 = 0x50
    unsigned long long _privilege;	// 88 = 0x58
    HMDHome *_home;	// 96 = 0x60
    NSString *_userID;	// 104 = 0x68
    HMUserPresenceAuthorization *_presenceAuthStatus;	// 112 = 0x70
    unsigned long long _camerasAccessLevel;	// 120 = 0x78
    HAPPairingIdentity *_pairingIdentity;	// 128 = 0x80
    NSString *_displayName;	// 136 = 0x88
    HMDAssistantAccessControl *_assistantAccessControl;	// 144 = 0x90
    unsigned long long _announceAccessLevel;	// 152 = 0x98
    unsigned long long _audioAnalysisUserDropInAccessLevel;	// 160 = 0xa0
    long long _userCloudShareWithOwnerMessagingState;	// 168 = 0xa8
    HMDRestrictedGuestHomeAccessSettings *_restrictedGuestAccessSettings;	// 176 = 0xb0
    NSNumber *_matterCASEAuthenticatedTagID;	// 184 = 0xb8
    NSString *_iCloudAltDSID;	// 192 = 0xc0
    NSString *_firstName;	// 200 = 0xc8
    NSString *_lastName;	// 208 = 0xd0
    HMBShareUserID *_cloudShareID;	// 216 = 0xd8
    NAFuture *_cloudShareIDFuture;	// 224 = 0xe0
    HMDUserPhotosPersonDataManager *_photosPersonDataManager;	// 232 = 0xe8
    HMDPersonSettingsManager *_personSettingsManager;	// 240 = 0xf0
    NSString *_accessCode;	// 248 = 0xf8
    NSUUID *_accessCodeChangedByUserUUID;	// 256 = 0x100
    HMDUserDataController *_userDataController;	// 264 = 0x108
    NSDictionary *_ownerCharacteristicAuthorizationData;	// 272 = 0x110
    NSData *_acwgIssuerPublicKeyExternalRepresentation;	// 280 = 0x118
    unsigned long long _userAccessPolicy;	// 288 = 0x120
    id <HMDAccountMetadata> _accountMetadata;	// 296 = 0x128
    HMDCloudShareMessenger *_shareMessenger;	// 304 = 0x130
    HMDUserSettingsBackingStoreController *_privateBackingStoreController;	// 312 = 0x138
    id <HMDUserDataSource> _dataSource;	// 320 = 0x140
    HMDSiriMultiUserNewLanguageNotificationManager *_siriMultiUserNewLanguageNotificationManager;	// 328 = 0x148
    id <HMDUserAccessorySettingsDataController> _accessorySettingsDataController;	// 336 = 0x150
    NSSet *_cachedCurrentUserPairingIdentityIdentifiers;	// 344 = 0x158
    NSObject<OS_dispatch_queue> *_queue;	// 352 = 0x160
    HMFMessageDispatcher *_messageDispatcher;	// 360 = 0x168
    unsigned long long _announceNotificationModeForCurrentDevice;	// 368 = 0x170
    HMDCloudShareTrustManager *_cloudShareTrustManager;	// 376 = 0x178
    HMDUserSettingsBackingStoreController *_sharedBackingStoreController;	// 384 = 0x180
    id <HAPKeyStore> _keyStore;	// 392 = 0x188
    unsigned long long _ownerAddSceneButtonPresentedCount;	// 400 = 0x190
}

+ (id)appendRootPath:(id)arg1 withSettingPath:(id)arg2;	// IMP=0x0010000000d4f65b
+ (id)getSettingsUsingPreOrderTraversal:(id)arg1 rootUUID:(id)arg2 keyPath:(id)arg3;	// IMP=0x0010000000d4f30e
+ (id)localSharedZoneForSharedUserUUID:(id)arg1 database:(id)arg2;	// IMP=0x0010000000d4f16e
+ (id)localPrivateZoneForSharedUserUUID:(id)arg1 database:(id)arg2;	// IMP=0x0010000000d4f0c5
+ (id)_openZoneWithName:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000d4eda0
+ (void)_saveSharedUserSettingsToCoreData:(id)arg1 managedObjectContext:(id)arg2 rootShareObject:(id)arg3;	// IMP=0x0010000000d4ecdb
+ (void)__findOrCreateCKSharedUserAccessorySettingsForAccessory:(id)arg1 usingManagedObjectContext:(id)arg2 rootShareObject:(id)arg3 listeningHistoryEnabled:(id)arg4 mediaContentProfileEnabled:(id)arg5 personalRequestsEnabled:(id)arg6;	// IMP=0x0010000000d4e6f6
+ (void)_fetchAndMigrateAssistantAccessControlModelV2ToCoreDataFromLocalZone:(id)arg1 managedObjectContext:(id)arg2 rootShareObject:(id)arg3;	// IMP=0x0010000000d4e517
+ (void)_fetchAndMigrateMediaContentProfileAccessControlModelToCoreDataFromLocalZone:(id)arg1 managedObjectContext:(id)arg2 rootShareObject:(id)arg3;	// IMP=0x0010000000d4e338
+ (void)_fetchAndMigrateUserListeningHistoryUpdatedControlModelToCoreDataFromLocalZone:(id)arg1 managedObjectContext:(id)arg2 rootShareObject:(id)arg3;	// IMP=0x0010000000d4e159
+ (void)_fetchAndMigratePhotosPersonManagerSettingsFromLocalZone:(id)arg1 managedObjectContext:(id)arg2 rootShareObject:(id)arg3;	// IMP=0x0010000000d4df77
+ (void)migrateHH1SettingsToHH2ForSharedUserWithUUID:(id)arg1 homeUUID:(id)arg2 privateZone:(id)arg3 backingStoreContext:(id)arg4;	// IMP=0x0010000000d4dcde
+ (void)migrateHH1SettingsToHH2ForSharedUserWithUUID:(id)arg1 homeUUID:(id)arg2 sharedZone:(id)arg3 backingStoreContext:(id)arg4;	// IMP=0x0010000000d4da45
+ (id)userDictionaryWithUserID:(id)arg1 privilege:(unsigned long long)arg2 remoteAccessAllowed:(_Bool)arg3 cameraAccessLevel:(unsigned long long)arg4 announceAccessAllowed:(id)arg5 announceAccessLevel:(unsigned long long)arg6 audioAnalysisUserDropInAccessLevel:(unsigned long long)arg7 restrictedGuestAccessSettings:(id)arg8;	// IMP=0x0010000000d4d7ce
+ (id)userWithDictionary:(id)arg1 home:(id)arg2;	// IMP=0x0010000000d4d1b1
+ (id)userWithDictionary:(id)arg1;	// IMP=0x0010000000d4d19d
+ (unsigned long long)privilegeFromDictionary:(id)arg1;	// IMP=0x0010000000d4d146
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000d4d13e
+ (id)logCategory;	// IMP=0x0010000000d4d10e
+ (id)getSyncDataFromLocalDiskWithArchive:(id)arg1;	// IMP=0x0010000000d4cc35
+ (id)allLastUserSyncDataArchives;	// IMP=0x0010000000d4c8d3
+ (id)allowedClassesForSyncData;	// IMP=0x0010000000d4c7e8
+ (id)allowedClassesForAnnounceNotificationMode;	// IMP=0x0010000000d4c71d
+ (id)sharedZoneNameForUserUUID:(id)arg1;	// IMP=0x0010000000d4c6c3
+ (id)privateZoneNameForUserUUID:(id)arg1;	// IMP=0x0010000000d4c669
+ (id)UUIDWithUserID:(id)arg1 forHomeIdentifier:(id)arg2 uuid:(id)arg3 pairingIdentity:(id)arg4;	// IMP=0x0010000000d4c289
+ (id)userIDForAccountHandle:(id)arg1;	// IMP=0x0010000000d4c236
+ (id)ownerWithUserID:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 homeManager:(id)arg4;	// IMP=0x0010000000d4bee3
+ (id)currentUserWithPrivilege:(unsigned long long)arg1 forHome:(id)arg2;	// IMP=0x0010000000d4bece
+ (id)currentUserWithPrivilege:(unsigned long long)arg1 forHome:(id)arg2 forceHH1Key:(_Bool)arg3;	// IMP=0x0010000000d4b9f0
+ (_Bool)isAllowedToAddOrRemoveHAPPairingsOnAccessoryFor:(id)arg1;	// IMP=0x00100000000d6430
+ (id)av_authorizedPeerForPairingIdentity:(id)arg1 isOwner:(_Bool)arg2;	// IMP=0x0010000000607d9e
+ (unsigned long long)hmdUserPrivilegeFromHMMTRUserPrivilege:(unsigned long long)arg1;	// IMP=0x0010000000c47c91
+ (unsigned long long)hmmtrUserPrivilegeFromHMDUserPrivilege:(unsigned long long)arg1;	// IMP=0x0010000000c47c77
- (void).cxx_destruct;	// IMP=0x0000000000d445d1
@property _Bool siriIdentifyVoiceEnabled;
@property _Bool playbackInfluencesEnabled;
@property _Bool losslessMusicEnabled;
@property _Bool dolbyAtmosEnabled;
@property _Bool allowiTunesAccount;
@property _Bool allowExplicitContent;
@property _Bool ownerHasUserSeenRMVNewLanguageNotification;
@property _Bool ownerDismissedWelcomeUI;
@property _Bool ownerDismissedWalletKeyExpressModeOnboarding;
@property _Bool ownerDismissedUserSplitMediaAccountWarning;
@property _Bool ownerDismissedTVViewingProfileSetupBanner;
@property _Bool ownerDismissedTVViewingProfileOnboarding;
@property _Bool ownerDismissedNaturalLightingOnboarding;
@property _Bool ownerDismissedIdentifyVoiceSetupBanner;
@property _Bool ownerDismissedIdentifyVoiceOnboarding;
@property _Bool ownerDismissedHomeTheaterOnboarding;
@property _Bool ownerDismissedCameraUpgradeOfferBanner;
@property _Bool ownerDismissedCameraRecordingSetupBanner;
@property _Bool ownerDismissedCameraRecordingOnboarding;
@property _Bool ownerDismissedAnnounceOnboarding;
@property _Bool ownerDismissedAccessoryFirmwareUpdateOnboarding;
@property _Bool ownerDismissedAccessCodeOnboarding;
@property _Bool ownerDismissed2024EnergyOnboarding;
@property _Bool ownerCompletedSwitchingHomesOnboardingUI;
@property unsigned long long ownerAddSceneButtonPresentedCount;
@property(readonly) id <HAPKeyStore> keyStore;
@property(retain) HMDUserSettingsBackingStoreController *sharedBackingStoreController;
@property(retain) HMDCloudShareTrustManager *cloudShareTrustManager;
@property unsigned long long announceNotificationModeForCurrentDevice;
@property(retain) HMFMessageDispatcher *messageDispatcher;
@property(readonly) NSObject<OS_dispatch_queue> *queue;
@property(readonly) NSSet *cachedCurrentUserPairingIdentityIdentifiers; // @synthesize cachedCurrentUserPairingIdentityIdentifiers=_cachedCurrentUserPairingIdentityIdentifiers;
@property(retain) id <HMDUserAccessorySettingsDataController> accessorySettingsDataController; // @synthesize accessorySettingsDataController=_accessorySettingsDataController;
@property(retain) HMDSiriMultiUserNewLanguageNotificationManager *siriMultiUserNewLanguageNotificationManager; // @synthesize siriMultiUserNewLanguageNotificationManager=_siriMultiUserNewLanguageNotificationManager;
@property(readonly) id <HMDUserDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property _Bool needsiTunesMultiUserRepair; // @synthesize needsiTunesMultiUserRepair=_needsiTunesMultiUserRepair;
@property(retain) HMDUserSettingsBackingStoreController *privateBackingStoreController; // @synthesize privateBackingStoreController=_privateBackingStoreController;
@property(retain) HMDCloudShareMessenger *shareMessenger; // @synthesize shareMessenger=_shareMessenger;
@property(retain) id <HMDAccountMetadata> accountMetadata; // @synthesize accountMetadata=_accountMetadata;
@property(readonly) unsigned long long userAccessPolicy; // @synthesize userAccessPolicy=_userAccessPolicy;
@property(retain) NSData *acwgIssuerPublicKeyExternalRepresentation; // @synthesize acwgIssuerPublicKeyExternalRepresentation=_acwgIssuerPublicKeyExternalRepresentation;
@property(retain) NSDictionary *ownerCharacteristicAuthorizationData; // @synthesize ownerCharacteristicAuthorizationData=_ownerCharacteristicAuthorizationData;
@property(retain) HMDUserDataController *userDataController; // @synthesize userDataController=_userDataController;
@property(retain) NSUUID *accessCodeChangedByUserUUID; // @synthesize accessCodeChangedByUserUUID=_accessCodeChangedByUserUUID;
@property(copy) NSString *accessCode; // @synthesize accessCode=_accessCode;
@property(retain) HMDPersonSettingsManager *personSettingsManager; // @synthesize personSettingsManager=_personSettingsManager;
@property(retain) HMDUserPhotosPersonDataManager *photosPersonDataManager;
@property(readonly) NAFuture *cloudShareIDFuture; // @synthesize cloudShareIDFuture=_cloudShareIDFuture;
@property(retain) HMBShareUserID *cloudShareID;
@property(retain, nonatomic) NSString *iCloudAltDSID;
@property(retain, nonatomic) NSNumber *matterCASEAuthenticatedTagID; // @synthesize matterCASEAuthenticatedTagID=_matterCASEAuthenticatedTagID;
@property(copy, setter=setUUID:) NSUUID *uuid;
- (void)_pushSharedProfileMetadataToStoreForHome:(id)arg1 iCloudAltDSID:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 profilePhotoDict:(id)arg5;	// IMP=0x0000000000d43d07
@property(retain, nonatomic) NSString *lastName;
@property(retain, nonatomic) NSString *firstName;
- (void)setiCloudAltDSID:(id)arg1;	// IMP=0x0000000000d43b7f
- (void)_saveSharedUserProfileMetadataToBackingStoreContext:(id)arg1 rootShareObject:(id)arg2 iCloudAltDSID:(id)arg3 firstName:(id)arg4 lastName:(id)arg5 profilePhotoDict:(id)arg6;	// IMP=0x0000000000d4364e
- (id)allAccessoryUUID;	// IMP=0x0000000000d435cd
- (_Bool)_isExplicitContentValueEnabledForAppleMediaAccessory:(id)arg1;	// IMP=0x0000000000d434fe
- (void)applyConditionalValueUpdateToModels:(id)arg1;	// IMP=0x0000000000d43329
- (id)pushTokensForDevicesObservingSubjectDevice:(id)arg1 subActivity:(id)arg2;	// IMP=0x0000000000d4326e
- (void)deregisterIDSActivityObserver:(id)arg1;	// IMP=0x0000000000d43205
- (void)deregisterIDSActivityObserver:(id)arg1 subActivity:(id)arg2 subjectDevice:(id)arg3;	// IMP=0x0000000000d430e5
- (void)updateIDSActivityObserver:(id)arg1;	// IMP=0x0000000000d43031
- (void)registerIDSActivityObserver:(id)arg1 subActivity:(id)arg2 subjectDevice:(id)arg3;	// IMP=0x0000000000d42f11
- (void)cloudShareTrustManager:(id)arg1 didRemoveUserWithUUID:(id)arg2;	// IMP=0x0000000000d42d62
- (void)didRemoveTrustZoneInCloudShareTrustManager:(id)arg1;	// IMP=0x0000000000d42c58
- (void)didFinishConfiguringForCloudShareTrustManager:(id)arg1;	// IMP=0x0000000000d42b60
- (void)cloudShareTrustManager:(id)arg1 didFetchOwnerCloudShareID:(id)arg2;	// IMP=0x0000000000d42a27
- (_Bool)isOwnerCapableForTrustManager:(id)arg1;	// IMP=0x0000000000d429e3
- (id)homeForCloudShareTrustManager:(id)arg1;	// IMP=0x0000000000d429d1
- (id)ownerForCloudShareTrustManager:(id)arg1;	// IMP=0x0000000000d429c8
- (id)zoneNameForCloudShareTrustManager:(id)arg1;	// IMP=0x0000000000d42947
- (_Bool)cloudShareTrustManager:(id)arg1 shouldShareTrustWithUser:(id)arg2;	// IMP=0x0000000000d427d9
- (void)configureCloudShareTrustManager;	// IMP=0x0000000000d42503
- (id)trustTargetUUID;	// IMP=0x0000000000d42418
- (void)updateCloudShareID:(id)arg1;	// IMP=0x0000000000d42113
- (void)removeCloudShareID;	// IMP=0x0000000000d41fc0
- (id)setHasUserSeenRMVNewLanguageNotification:(_Bool)arg1;	// IMP=0x0000000000d41b32
- (void)userDataControllerDidUpdateUserListeningHistoryUpdateControl:(id)arg1;	// IMP=0x0000000000d41b19
- (_Bool)userDataController:(id)arg1 isHAPAccessory:(id)arg2;	// IMP=0x0000000000d418df
- (_Bool)userDataController:(id)arg1 isAppleMediaAccessory:(id)arg2;	// IMP=0x0000000000d416a5
- (id)privateZoneControllerForUserDataController:(id)arg1;	// IMP=0x0000000000d41693
- (id)sharedZoneControllerForUserDataController:(id)arg1;	// IMP=0x0000000000d41681
- (void)postUserSettingsUpdatedNotificationWithReason:(id)arg1;	// IMP=0x0000000000d415d0
- (void)userDataControllerDidUpdateMediaContentProfile:(id)arg1;	// IMP=0x0000000000d415b7
- (void)userDataControllerDidUpdateAssistantAccessControl:(id)arg1;	// IMP=0x0000000000d4159e
- (_Bool)userDataController:(id)arg1 isAccessoryUserListeningHistoryUpdateCapable:(id)arg2;	// IMP=0x0000000000d412eb
- (_Bool)userDataController:(id)arg1 isMediaContentProfileCapableAccessoryID:(id)arg2;	// IMP=0x0000000000d40fa4
- (_Bool)userDataController:(id)arg1 isPersonalRequestCapableAccessoryID:(id)arg2;	// IMP=0x0000000000d40c5d
- (void)backingStoreController:(id)arg1 didUpdatePhotosPersonManagerSettingsModel:(id)arg2 previousPhotosPersonManagerSettingsModel:(id)arg3;	// IMP=0x0000000000d40c48
- (id)ownerForUserSettingsBackingStoreController:(id)arg1;	// IMP=0x0000000000d40c3f
- (id)backingStoreController:(id)arg1 createParticipantManagerForCloudZone:(id)arg2;	// IMP=0x0000000000d40b43
- (void)didStopBackingStoreController:(id)arg1;	// IMP=0x0000000000d40949
- (void)didStartLocalZoneForBackingStoreController:(id)arg1;	// IMP=0x0000000000d407c8
- (void)didStartBackingStoreController:(id)arg1;	// IMP=0x0000000000d4075f
@property(readonly) NSUUID *userUUID;
@property(readonly) _Bool isRunningOnHomeOwnersDevice;
- (id)settingsControllerFollowerKeyPaths:(id)arg1;	// IMP=0x0000000000d4063f
- (id)dictionaryEncoding;	// IMP=0x0000000000d404ff
- (void)removeCloudData;	// IMP=0x0000000000d403dd
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x0000000000d3fc9b
- (id)newModelWithChangeType:(unsigned long long)arg1;	// IMP=0x0000000000d3fbcd
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x0000000000d3fbb6
- (id)backingStoreObjects:(long long)arg1;	// IMP=0x0000000000d3f978
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x0000000000d3f6c8
- (void)_transactionUserProfileMetaDataUpdated:(id)arg1;	// IMP=0x0000000000d3f426
- (void)_transactionPhotosPersonManagerSettingsUpdated:(id)arg1;	// IMP=0x0000000000d3f392
- (void)_transactionUserSettingsUpdated:(id)arg1;	// IMP=0x0000000000d3dfc0
- (void)_transactionAccessorySettingsUpdated:(id)arg1;	// IMP=0x0000000000d3dec3
- (void)handleUpdatedCATForUser;	// IMP=0x0000000000d3de86
- (void)_transactionUserUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000d3c40d
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000d3bf86
- (id)sharedSettingsAsDictionary;	// IMP=0x0000000000d3bd3b
- (id)ownerPrivateSettingsAsDictionary;	// IMP=0x0000000000d3b6aa
- (void)_encodeWithCoder:(id)arg1;	// IMP=0x0000000000d39f89
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000d39f3a
@property(readonly, copy, nonatomic) NSString *encodingRemoteDisplayName;
- (id)_initWithCoder:(id)arg1;	// IMP=0x0000000000d3935b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000d392f2
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

- (id)messageDestination;	// IMP=0x0000000000d39274
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x0000000000d39212
@property(readonly, copy) NSData *publicKey;
@property(readonly, copy) NSString *pairingUsername;
@property(copy, nonatomic) NSString *userID;
- (void)sendSharedUserProfileMetadataUpdatedMessage;	// IMP=0x0000000000d38f94
- (void)_handleFetchProfilePhoto:(id)arg1;	// IMP=0x0000000000d38ea3
- (void)_handleFMFDeviceChangedNotification:(id)arg1;	// IMP=0x0000000000d38e51
- (void)__handleModifiedAccount:(id)arg1;	// IMP=0x0000000000d38dec
- (void)pushMetadataToStoreForHome:(id)arg1;	// IMP=0x0000000000d38db9
@property(readonly) NSNumber *uniqueIDForAccessories;
- (double)configuredProofOfLocalityTimeout;	// IMP=0x0000000000d38b9e
- (_Bool)shouldWeOverrideRemoteAccessAllowedDespiteNoRemoteAccessAllowed;	// IMP=0x0000000000d3873d
- (_Bool)canGetUpdatesRemotely;	// IMP=0x0000000000d3872b
- (void)handlePrimaryResidentUpdateNotification:(id)arg1;	// IMP=0x0000000000d38664
- (_Bool)areAccessoriesInAllowedList:(id)arg1;	// IMP=0x0000000000d385c1
@property(readonly) _Bool isAccessCurrentlyAllowedBySchedule;
- (void)_notifyEveryOneAboutRestrictedGuestScheduleNotification:(id)arg1;	// IMP=0x0000000000d38251
- (void)handleRestrictedGuestScheduleTimer:(id)arg1;	// IMP=0x0000000000d38199
- (void)_handleRestrictedGuestNewSchedule:(id)arg1;	// IMP=0x0000000000d37da7
- (void)cancelRestrictedGuestScheduledTimers;	// IMP=0x0000000000d37cf4
- (void)scheduleRestrictedGuestAccessTimersWithReason:(id)arg1;	// IMP=0x0000000000d37c3c
- (void)updateRestrictedGuestSettingsFromWorkingStoreIfNeeded;	// IMP=0x0000000000d37ba1
@property(retain) HMDRestrictedGuestHomeAccessSettings *restrictedGuestAccessSettings; // @synthesize restrictedGuestAccessSettings=_restrictedGuestAccessSettings;
- (id)restrictedGuestScheduleEndTimerID;	// IMP=0x0000000000d37a7a
- (id)restrictedGuestScheduleStartTimerID;	// IMP=0x0000000000d379ed
@property(readonly) NSNumber *notificationContextNFCIdentifier;
@property(readonly) NSNumber *notificationContextHAPIdentifier;
- (void)configurePersonSettingsManager;	// IMP=0x0000000000d375f3
- (void)configurePhotosPersonDataManager;	// IMP=0x0000000000d37464
@property(readonly) HMDPhotosPersonManager *photosPersonManager;
@property(readonly, copy) HMPhotosPersonManagerSettings *photosPersonManagerSettings;
- (id)announceNotificationFileName;	// IMP=0x0000000000d37324
- (id)announceNotificationFileNameForUserUUID:(id)arg1;	// IMP=0x0000000000d372a8
- (void)_removeAnnounceNotificationModeFileFromDiskForUserUUID:(id)arg1;	// IMP=0x0000000000d370ea
- (void)_migrateAnnounceNotificationModeIfNeeded;	// IMP=0x0000000000d36551
- (id)userIDsToMigrateAnnounceSettingsFrom;	// IMP=0x0000000000d3641b
- (void)_readAnnounceNotificationModeFromLocalStore;	// IMP=0x0000000000d361bb
- (void)_updateAnnounceNotificationModeToLocalStore:(unsigned long long)arg1 managedObjectContext:(id)arg2;	// IMP=0x0000000000d35e25
- (void)_saveAnnounceSettingsToLocalStore:(unsigned long long)arg1;	// IMP=0x0000000000d35d20
- (void)_updateAnnounceNotificationMode:(unsigned long long)arg1;	// IMP=0x0000000000d35a94
- (void)updateAnnounceNotificationMode:(unsigned long long)arg1;	// IMP=0x0000000000d35a18
- (void)_handleAnnounceSettingsUpdate:(id)arg1;	// IMP=0x0000000000d35676
- (void)handleRemovedAccessory:(id)arg1;	// IMP=0x0000000000d3551e
- (void)removeAccessoriesFromAssistantAccessControlList:(id)arg1;	// IMP=0x0000000000d354a6
- (void)enableUserListeningHistoryForAccessory:(id)arg1;	// IMP=0x0000000000d35412
- (void)_handleUserListeningHistoryUpdateControlUpdatedAccessoryUUIDs:(id)arg1;	// IMP=0x0000000000d34bbe
- (void)handleUserListeningHistoryUpdateControlUpdatedAccessoryUUIDs:(id)arg1;	// IMP=0x0000000000d34b2a
- (void)_handleMediaContentProfileAccessControlUpdate:(id)arg1;	// IMP=0x0000000000d3431f
- (void)handleMediaContentProfileAccessControlUpdate:(id)arg1;	// IMP=0x0000000000d3428b
- (void)_handleAssistantAccessControlUpdate:(id)arg1;	// IMP=0x0000000000d332ff
- (void)handleAssistantAccessControlUpdate:(id)arg1;	// IMP=0x0000000000d3326b
- (_Bool)isCurrentUserAndOwner;	// IMP=0x0000000000d330e9
@property(retain) HMDAssistantAccessControl *assistantAccessControl; // @synthesize assistantAccessControl=_assistantAccessControl;
@property(readonly) NSUUID *assistantAccessControlModelUUID;
@property(readonly, getter=isValid) _Bool valid;
@property(readonly, getter=isRemoteGateway) _Bool remoteGateway;
@property unsigned long long audioAnalysisUserDropInAccessLevel;
@property unsigned long long announceAccessLevel;
- (unsigned long long)defaultAnnounceUserAccessLevel;	// IMP=0x0000000000d32e96
@property(readonly, getter=isAnnounceAccessAllowed) _Bool announceAccessAllowed;
@property unsigned long long camerasAccessLevel;
- (_Bool)_setRemoteAccessAllowed:(_Bool)arg1;	// IMP=0x0000000000d32d65
@property(getter=isRemoteAccessAllowed) _Bool remoteAccessAllowed;
- (_Bool)refreshDisplayName;	// IMP=0x0000000000d32c52
- (void)setDisplayName:(id)arg1;	// IMP=0x0000000000d32bc7
@property(readonly, copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy) HMUserPresenceAuthorization *presenceAuthStatus;
- (void)__handleRemovedAccount:(id)arg1;	// IMP=0x0000000000d328a6
- (void)__handleAddedAccount:(id)arg1;	// IMP=0x0000000000d325e7
- (_Bool)requiresMakoSupport;	// IMP=0x0000000000d3259e
- (id)account;	// IMP=0x0000000000d32433
- (void)_handleNeedsiTunesMultiUserRepair:(id)arg1;	// IMP=0x0000000000d31fb2
- (void)_handleShareClientRepairRequest:(id)arg1;	// IMP=0x0000000000d31435
- (void)_sendAccountMessage:(id)arg1 payload:(id)arg2 deviceCapabilities:(id)arg3 multicast:(_Bool)arg4 preferPrimary:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000d310c7
- (void)_sendSecureShareClientPayloadToMostEligibleDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000d30c9a
- (void)_handleMultiUserSharePayloadRequest:(id)arg1;	// IMP=0x0000000000d2ff16
- (void)_handleShareLookupInfoRequest:(id)arg1;	// IMP=0x0000000000d2f96c
- (void)_handleLegacyPairingIdentityRequest:(id)arg1;	// IMP=0x0000000000d2f3c7
- (void)fetchPairingIdentityForClientWithMessage:(id)arg1;	// IMP=0x0000000000d2eb36
- (void)_handlePairingIdentityRequest:(id)arg1;	// IMP=0x0000000000d2e967
- (_Bool)matchingPairingIdentityIdentifier:(id)arg1;	// IMP=0x0000000000d2e8d2
- (void)deregisterIdentity;	// IMP=0x0000000000d2e857
- (void)registerIdentity;	// IMP=0x0000000000d2e7aa
@property(copy) HAPPairingIdentity *pairingIdentity;
@property(readonly, copy, nonatomic) NSUUID *spiClientIdentifier;
@property(copy) NSString *mergeIdentifier;
@property(copy) HMDAccountIdentifier *accountIdentifier;
- (void)setAccountHandle:(id)arg1;	// IMP=0x0000000000d2e3ef
- (id)accountHandle;	// IMP=0x0000000000d2e3a9
@property(readonly) _Bool isCurrentUser;
- (_Bool)updateAdministrator:(_Bool)arg1;	// IMP=0x0000000000d2e2f8
@property unsigned long long privilege;
@property(readonly) _Bool isRestrictedGuest;
@property(readonly, getter=isPending) _Bool pending;
@property(readonly, getter=isOwner) _Bool owner;
@property(readonly, getter=isAdministrator) _Bool administrator;
- (unsigned long long)_compatiblePrivilege;	// IMP=0x0000000000d2e090
@property __weak HMDHome *home; // @synthesize home=_home;
- (unsigned long long)allowedRemoteEventAccessUserTypes;	// IMP=0x0000000000d2dfca
- (void)deregisterForMessages;	// IMP=0x0000000000d2deba
- (void)registerForMessages;	// IMP=0x0000000000d2d973
- (void)unconfigure;	// IMP=0x0000000000d2d8e6
- (void)_recoverTrustManagerDueToUUIDChange;	// IMP=0x0000000000d2d7a6
- (void)updateSharedBackingStoreControllerParticipants;	// IMP=0x0000000000d2d754
- (void)_recoverUserSettingsDueToUUIDChange;	// IMP=0x0000000000d2d3c5
- (void)recoverUserCloudDataDueToUUIDChangeFromOldUUID:(id)arg1;	// IMP=0x0000000000d2d331
- (void)_handleCloudShareWithOwnerMessageError;	// IMP=0x0000000000d2d2f1
@property long long userCloudShareWithOwnerMessagingState;
- (long long)sharedUserSettingsLogEventBackingStoreControllerRunState;	// IMP=0x0000000000d2d233
- (void)initializeUserSettingsWithHome:(id)arg1;	// IMP=0x0000000000d2ce5f
- (id)sharedZoneName;	// IMP=0x0000000000d2cdf5
- (id)privateZoneName;	// IMP=0x0000000000d2cd8b
- (void)handleUserDataControllerInitialized:(id)arg1;	// IMP=0x0000000000d2cd39
- (void)configureWithHome:(id)arg1;	// IMP=0x0000000000d2c6e2
- (_Bool)isSharedUsersMeDeviceForProfileMetadata;	// IMP=0x0000000000d2c681
- (_Bool)hasDeviceWithHomeKitVersionGreaterThanVersion:(id)arg1;	// IMP=0x0000000000d2c456
- (id)dumpState;	// IMP=0x0000000000d2bbfc
- (id)attributeDescriptions;	// IMP=0x0000000000d2b4c6
- (id)shortDescription;	// IMP=0x0000000000d2b404
- (_Bool)isAccountEqualWithUser:(id)arg1;	// IMP=0x0000000000d2b27d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d2af22
@property(readonly) unsigned long long hash;
- (void)dealloc;	// IMP=0x0000000000d2ae53
- (id)initWithAccountHandle:(id)arg1 homeUUID:(id)arg2 pairingIdentity:(id)arg3 privilege:(unsigned long long)arg4 keyStore:(id)arg5 dataSource:(id)arg6;	// IMP=0x0000000000d2ab53
- (id)initWithAccountHandle:(id)arg1 homeUUID:(id)arg2 pairingIdentity:(id)arg3 privilege:(unsigned long long)arg4;	// IMP=0x0000000000d2aa73
- (id)initWithAccountHandle:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 privilege:(unsigned long long)arg4 dataSource:(id)arg5;	// IMP=0x0000000000d2a957
- (id)initWithAccountHandle:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 privilege:(unsigned long long)arg4;	// IMP=0x0000000000d2a8ac
- (id)initWithModelObject:(id)arg1;	// IMP=0x0000000000d2a1db
- (id)privateSettingValuesByKeyPath;	// IMP=0x0000000000d2a18b
- (id)sharedSettingValuesByKeyPath;	// IMP=0x0000000000d2a13b
- (void)_setUuidUnsafely:(id)arg1;	// IMP=0x0000000000d2a127
@property(nonatomic, readonly) _Bool isAllowedToContributeActivityStates;
- (_Bool)isLocalAccessoryCommunicationAllowed;	// IMP=0x00000000000d6390
- (_Bool)isAllowedToHaveCATId;	// IMP=0x00000000000d6310
- (_Bool)isAllowedToAccessActivityHistory;	// IMP=0x00000000000d6290
- (_Bool)isAllowedToSharePhotosPersonManagerData;	// IMP=0x00000000000d6210
- (_Bool)isAllowedToAddOrRemoveHAPPairingsOnAccessory;	// IMP=0x00000000000d61e0
- (_Bool)isAccessPolicySet;	// IMP=0x00000000000d6160
@property(readonly, copy) AVOutputDeviceAuthorizedPeer *av_authorizedPeer;
@property(readonly) _Bool hasCameraClipsAccess;
@property(readonly, copy) NSData *nfcIssuerKeyIdentifier;

// Remaining properties
@property(readonly, getter=isCurrentUser) _Bool currentUser;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

