//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeManager, HMDUserNotificationCenter, NAFuture, NSMutableDictionary, NSObject, NSSet, NSString;
@protocol HMDDoorbellBulletinUtilities, HMDFileManager, HMDUserNotificationCenterSettingsProviding, HMMLogEventSubmitting, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDBulletinBoard : HMFObject
{
    id <HMDFileManager> _fileManager;	// 8 = 0x8
    NSSet *_notificationCategories;	// 16 = 0x10
    NAFuture *_isConfiguredFuture;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    HMDUserNotificationCenter *_notificationCenter;	// 40 = 0x28
    NSMutableDictionary *_notificationRequests;	// 48 = 0x30
    NSMutableDictionary *_characteristicTuples;	// 56 = 0x38
    HMDHomeManager *_homeManager;	// 64 = 0x40
    Class _persistentStoreClass;	// 72 = 0x48
    id <HMDDoorbellBulletinUtilities> _doorbellBulletinUtilities;	// 80 = 0x50
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 88 = 0x58
}

+ (id)logCategory;	// IMP=0x0010000000491c11
+ (void)messageAndTitleForLockUserChangeEvent:(id *)arg1 title:(id *)arg2 accessory:(id)arg3 lockDataType:(unsigned char)arg4 dataOperationType:(unsigned char)arg5 ecosystemName:(id)arg6 isAffectedUser:(_Bool)arg7;	// IMP=0x0010000000490c14
+ (id)messageForLockOperationEvent:(id)arg1 personName:(id)arg2 lockOperationType:(unsigned char)arg3 ecosystemName:(id)arg4;	// IMP=0x0010000000490409
+ (id)messageForDoorLockAlarmEvent:(id)arg1 alarmCode:(unsigned char)arg2;	// IMP=0x001000000048ff19
+ (_Bool)presentationValueOfCharacteristic:(id)arg1 equalTo:(id)arg2;	// IMP=0x001000000048fdd8
+ (id)characteristicTupleKeyFromServiceContextID:(id)arg1 currentType:(id)arg2;	// IMP=0x001000000048fdb0
+ (unsigned long long)interruptionLevelForChangedCharacteristic:(id)arg1;	// IMP=0x001000000048fb1a
+ (id)createImageAttachmentByHardLinkingFile:(id)arg1 fileManager:(id)arg2;	// IMP=0x001000000048f64b
+ (id)attachmentsWithFileURL:(id)arg1;	// IMP=0x001000000048f427
+ (id)bulletinSupportedMatterPathsForAccessory:(id)arg1 endpointID:(id)arg2;	// IMP=0x001000000048f2de
+ (id)bulletinSupportedCharacteristicsForService:(id)arg1;	// IMP=0x001000000048ef38
+ (_Bool)isCriticalNonSecureServiceType:(id)arg1;	// IMP=0x001000000048eed8
+ (_Bool)isBulletinSupportedForNonSecureCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x001000000048ee0f
+ (_Bool)isBulletinSupportedForCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x001000000048ed32
+ (id)_supportedNonSecureServices;	// IMP=0x001000000048ed02
+ (id)_supportedSecureServices;	// IMP=0x001000000048ecd2
+ (id)notificationCategories;	// IMP=0x001000000048e845
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000048e83d
+ (id)sharedBulletinBoard;	// IMP=0x001000000048e80d
- (void).cxx_destruct;	// IMP=0x0000000000480923
@property(retain) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(retain) id <HMDDoorbellBulletinUtilities> doorbellBulletinUtilities; // @synthesize doorbellBulletinUtilities=_doorbellBulletinUtilities;
@property(retain) Class persistentStoreClass; // @synthesize persistentStoreClass=_persistentStoreClass;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly) NSMutableDictionary *characteristicTuples; // @synthesize characteristicTuples=_characteristicTuples;
@property(retain) NSMutableDictionary *notificationRequests; // @synthesize notificationRequests=_notificationRequests;
@property(readonly) HMDUserNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) NAFuture *isConfiguredFuture; // @synthesize isConfiguredFuture=_isConfiguredFuture;
@property(readonly, copy) NSSet *notificationCategories; // @synthesize notificationCategories=_notificationCategories;
@property(readonly) id <HMDFileManager> fileManager; // @synthesize fileManager=_fileManager;
- (void)notificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000004806f8
- (void)_handleDidReceiveNotificationResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000047ff42
- (void)_updateDoorbellUserInfo:(id)arg1 withSignificantEventUserInfo:(id)arg2;	// IMP=0x000000000047fca6
- (void)_submitCameraClipSignificantEventDetailsFromBulletin:(id)arg1;	// IMP=0x000000000047faed
- (void)_submitDoorbellEventDetailsFromBulletinWithDate:(id)arg1 significantEvents:(id)arg2;	// IMP=0x000000000047f85a
- (id)_copyItemAtURL:(id)arg1 toDirectory:(id)arg2;	// IMP=0x000000000047f47a
- (id)_doorbellPressNotificationsNearDate:(id)arg1 forCameraProfile:(id)arg2;	// IMP=0x000000000047f332
- (id)notificationRequestsForCameraClipUUIDs:(id)arg1;	// IMP=0x000000000047f22c
- (void)updateMessageForDoorbellPressNotificationRequestWithIdentifier:(id)arg1 cameraProfile:(id)arg2;	// IMP=0x000000000047ec85
- (_Bool)_updateDoorbellPressNotificationsWithSignificantEventBulletin:(id)arg1;	// IMP=0x000000000047ddf2
- (_Bool)_shouldPostBulletinOnCurrentValueChangeForCharacteristic:(id)arg1 includeChangeFromNil:(_Bool)arg2;	// IMP=0x000000000047d1bd
- (_Bool)_shouldSkipBulletinForChangedCharacteristic:(id)arg1;	// IMP=0x000000000047cd07
- (void)_updateCharacteristicTupleFor:(id)arg1 withCurrentType:(id)arg2 changedByThisDevice:(_Bool)arg3;	// IMP=0x000000000047c7b7
- (_Bool)_hasDuplicateBulletinForSnapshotCharacteristic:(id)arg1;	// IMP=0x000000000047c4de
- (_Bool)_hasDuplicateBulletinForCharacteristic:(id)arg1;	// IMP=0x000000000047c0a0
- (id)_insertRequestWithTitle:(id)arg1 snapshotData:(id)arg2 message:(id)arg3 requestIdentifier:(id)arg4 date:(id)arg5 bulletinType:(unsigned long long)arg6 actionURL:(id)arg7 bulletinContext:(id)arg8 actionContext:(id)arg9 interruptionLevel:(unsigned long long)arg10 logEventTopic:(long long)arg11;	// IMP=0x000000000047b80f
- (void)removeImageFilesForNotificationRequests:(id)arg1;	// IMP=0x000000000047b470
- (id)matterEventBulletinMessageFor:(id)arg1 eventPath:(id)arg2 eventFields:(id)arg3;	// IMP=0x000000000047a70d
- (void)insertBulletinForMatterEventWithAccessory:(id)arg1 eventPath:(id)arg2 eventFields:(id)arg3;	// IMP=0x000000000047a54a
- (void)insertUserPreferredHomeHubReachabilityBulletinForHome:(id)arg1 reachable:(_Bool)arg2 electedPrimary:(id)arg3 previousPrimary:(id)arg4;	// IMP=0x000000000047a333
- (void)insertBulletinForLockUserChange:(id)arg1 lockDataType:(unsigned char)arg2 dataOperationType:(unsigned char)arg3 ecosystemName:(id)arg4 isAffectedUser:(_Bool)arg5 flow:(id)arg6;	// IMP=0x000000000047a206
- (void)insertBulletinForLockOperation:(id)arg1 userDisplayName:(id)arg2 lockOperationType:(unsigned char)arg3 ecosystemName:(id)arg4 flow:(id)arg5;	// IMP=0x000000000047a0b2
- (void)insertBulletinForDoorLockAlarm:(id)arg1 alarmCode:(unsigned char)arg2 flow:(id)arg3;	// IMP=0x0000000000479fcb
- (id)messageForWindowCharacteristic:(id)arg1 personName:(id)arg2;	// IMP=0x00000000004798d7
- (id)messageForSecuritySystemCharacteristic:(id)arg1 personName:(id)arg2;	// IMP=0x0000000000479175
- (id)messageForGarageDoorCharacteristic:(id)arg1 personName:(id)arg2;	// IMP=0x0000000000478a70
- (void)resolveDisplayNameForChangedCharacteristic:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000004788a5
- (void)insertBulletinForChangedSecureClassCharacteristic:(id)arg1 attributedUser:(id)arg2;	// IMP=0x0000000000478794
- (void)_insertImageBulletinsForChangedCharacteristics:(id)arg1 attributedUsers:(id)arg2 snapshotData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000476967
- (id)removeRedundantSignificantEventNotificationsForSignificantEvents:(id)arg1;	// IMP=0x000000000047673b
- (id)titleNameForChangedCharacteristic:(id)arg1;	// IMP=0x000000000047645d
- (id)messageForLockCharacteristic:(id)arg1 personName:(id)arg2;	// IMP=0x0000000000475dc9
- (id)messageForChangedCharacteristic:(id)arg1 withSignificantEvents:(id)arg2;	// IMP=0x00000000004759c1
- (void)addNotificationRequest:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x000000000047580d
- (void)removeNotificationRequestsWithIdentifiers:(id)arg1 shouldDeleteAttachments:(_Bool)arg2;	// IMP=0x00000000004751f9
- (void)removeBulletinsUsingPredicate:(id)arg1;	// IMP=0x00000000004750e2
- (void)cullBulletinsToCount:(unsigned long long)arg1;	// IMP=0x0000000000474d94
- (void)updateContent:(id)arg1 forNotificationWithRequestIdentifier:(id)arg2;	// IMP=0x0000000000474b12
- (id)threadIdentifierForNotificationGroupWithHomeContextID:(id)arg1;	// IMP=0x00000000004745b4
- (id)notificationRequestsSortedByDate;	// IMP=0x00000000004744b1
- (void)removeAllBulletins;	// IMP=0x0000000000474440
- (void)removeBulletinWithRecordID:(id)arg1;	// IMP=0x0000000000474388
- (void)removeCameraClipBulletinsForCameraProfile:(id)arg1;	// IMP=0x00000000004742d0
- (void)removeBulletinsForTrigger:(id)arg1;	// IMP=0x0000000000474218
- (void)removeBulletinsForService:(id)arg1;	// IMP=0x0000000000474160
- (void)removeBulletinsForAccessory:(id)arg1;	// IMP=0x00000000004740a8
- (void)removeBulletinsForHome:(id)arg1;	// IMP=0x0000000000473ff0
- (void)refreshHomeBadgeNumber;	// IMP=0x0000000000473efb
- (void)insertNewRMVLanguageBulletinForHome:(id)arg1 language:(id)arg2;	// IMP=0x0000000000473d9a
- (void)fetchAreUserNotificationsEnabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000473ce2
- (void)updateDoorbellPressNotificationsWithSignificantEventBulletin:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000473c04
- (id)updateBulletinForFirmwareUpdateInHome:(id)arg1;	// IMP=0x00000000004738c9
- (void)insertHH2DuplicateUserModelBulletinForHome:(id)arg1 user:(id)arg2;	// IMP=0x00000000004737eb
- (void)insertHH2SoftwareUpdateCompleteEventBulletinForAccessory:(id)arg1;	// IMP=0x0000000000473733
- (void)updateAudioAnalysisEventNotification:(id)arg1;	// IMP=0x000000000047367b
- (void)insertAudioAnalysisEventNotification:(id)arg1;	// IMP=0x00000000004735a3
- (void)insertConnectedCHIPEcosystemsChangedBulletin:(id)arg1;	// IMP=0x00000000004734bb
- (void)insertCameraAccessModeChangedBulletin:(id)arg1;	// IMP=0x00000000004733d3
- (void)insertCameraClipSignificantEventBulletin:(id)arg1;	// IMP=0x000000000047331b
- (void)removeWalletKeyOnboardingBulletinForHome:(id)arg1;	// IMP=0x0000000000473263
- (void)insertWalletKeyExpressModeSetUpBulletinForHome:(id)arg1;	// IMP=0x00000000004731ab
- (void)insertWalletKeySupportAddedBulletinForAccessory:(id)arg1;	// IMP=0x00000000004730f3
- (void)insertLockOnboardingBulletinForHome:(id)arg1 serviceType:(id)arg2;	// IMP=0x0000000000473015
- (void)insertAccessCodeRemovedBulletinForHome:(id)arg1;	// IMP=0x0000000000472f5d
- (void)insertAccessCodeChangedBulletinForHome:(id)arg1;	// IMP=0x0000000000472ea5
- (void)insertAccessCodeAddedBulletinForHome:(id)arg1;	// IMP=0x0000000000472ded
- (void)insertHomeHubReachabilityBulletinForHome:(id)arg1 reachable:(_Bool)arg2 hasMultipleResidents:(_Bool)arg3;	// IMP=0x0000000000472d2c
- (void)insertReachabilityEventBulletinForAccessory:(id)arg1 reachable:(_Bool)arg2 date:(id)arg3;	// IMP=0x0000000000472c45
- (id)insertBulletinForSecureTrigger:(id)arg1;	// IMP=0x0000000000472b29
- (void)insertBulletinForIncompatibleInvitationFromInviterName:(id)arg1 homeName:(id)arg2;	// IMP=0x0000000000472a4b
- (id)insertBulletinForIncomingInvitation:(id)arg1;	// IMP=0x00000000004727c2
- (void)insertBulletinsForChangedCharacteristics:(id)arg1 modifiedCharacteristics:(id)arg2 changedByThisDevice:(_Bool)arg3 changeNotificationFromPrimary:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000472675
- (void)insertImageBulletinsForChangedCharacteristics:(id)arg1 snapshotData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000472545
- (void)archive;	// IMP=0x0000000000472514
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004724a4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000472247
@property(readonly) long long bulletinNotificationsGroupTimeInterval;
- (void)configureWithHomeManager:(id)arg1;	// IMP=0x0000000000472026
@property(readonly, nonatomic) id <HMDUserNotificationCenterSettingsProviding> notificationCenterSettingsProvider;
- (id)initWithNotificationCenter:(id)arg1 fileManager:(id)arg2 workQueue:(id)arg3 doorbellBulletinUtilities:(id)arg4 logEventSubmitter:(id)arg5;	// IMP=0x0000000000471e40
- (id)init;	// IMP=0x0000000000471cef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
