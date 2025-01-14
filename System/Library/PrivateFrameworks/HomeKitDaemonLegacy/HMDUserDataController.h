//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMBModel, HMFTimer, NSArray, NSDictionary, NSMutableSet, NSNotificationCenter, NSString, NSUUID;
@protocol HMDSettingsControllerProtocol, HMDUserDataControllerDataSource, HMDUserDataControllerDelegate, HMDUserDataControllerTimerCreator, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDUserDataController : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _isModifyingState;	// 12 = 0xc
    _Bool _assistantAccessControlRequiresAuthenticationForSecureRequests;	// 13 = 0xd
    _Bool _assistantAccessControlActivityNotificationsEnabledForPersonalRequests;	// 14 = 0xe
    _Bool _supportsHH2MigrationByOwnerManual;	// 15 = 0xf
    _Bool _supportsHH2MigrationByOwnerAuto;	// 16 = 0x10
    _Bool _isCurrentUser;	// 17 = 0x11
    unsigned long long _state;	// 24 = 0x18
    NSUUID *_homeUUID;	// 32 = 0x20
    NSUUID *_userUUID;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_clientQueue;	// 48 = 0x30
    id <HMDUserDataControllerDelegate> _delegate;	// 56 = 0x38
    id <HMDUserDataControllerDataSource> _dataSource;	// 64 = 0x40
    id <HMDUserDataControllerTimerCreator> _timerCreator;	// 72 = 0x48
    NSUUID *_sharedSettingsRootUUID;	// 80 = 0x50
    NSUUID *_assistantAccessControlModelUUID;	// 88 = 0x58
    NSMutableSet *_assistantAccessControlAccessoryUUIDs;	// 96 = 0x60
    NSUUID *_mediaContentProfileAccessControlModelUUID;	// 104 = 0x68
    NSMutableSet *_mediaContentProfileAccessControlAccessories;	// 112 = 0x70
    NSUUID *_userListeningHistoryUpdateControlModelUUID;	// 120 = 0x78
    NSMutableSet *_userListeningHistoryUpdateControlModelAccessories;	// 128 = 0x80
    NSUUID *_supportsAutomaticHH2MigrationModelUUID;	// 136 = 0x88
    NSUUID *_privateSettingsRootUUID;	// 144 = 0x90
    HMFTimer *_sharedZoneFirstLoadTimer;	// 152 = 0x98
    HMFTimer *_privateZoneFirstLoadTimer;	// 160 = 0xa0
    NSNotificationCenter *_notificationCenter;	// 168 = 0xa8
    id <HMDSettingsControllerProtocol> _sharedSettingsController;	// 176 = 0xb0
    id <HMDSettingsControllerProtocol> _privateSettingsController;	// 184 = 0xb8
}

+ (id)logCategory;	// IMP=0x00100000008e5eb0
- (void).cxx_destruct;	// IMP=0x00000000008e3bb8
@property(readonly) id <HMDSettingsControllerProtocol> privateSettingsController; // @synthesize privateSettingsController=_privateSettingsController;
@property(readonly) id <HMDSettingsControllerProtocol> sharedSettingsController; // @synthesize sharedSettingsController=_sharedSettingsController;
@property(readonly) _Bool isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
@property(retain) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) HMFTimer *privateZoneFirstLoadTimer; // @synthesize privateZoneFirstLoadTimer=_privateZoneFirstLoadTimer;
@property(retain, nonatomic) HMFTimer *sharedZoneFirstLoadTimer; // @synthesize sharedZoneFirstLoadTimer=_sharedZoneFirstLoadTimer;
@property(retain) NSUUID *privateSettingsRootUUID; // @synthesize privateSettingsRootUUID=_privateSettingsRootUUID;
@property(retain) NSUUID *supportsAutomaticHH2MigrationModelUUID; // @synthesize supportsAutomaticHH2MigrationModelUUID=_supportsAutomaticHH2MigrationModelUUID;
@property(retain) NSMutableSet *userListeningHistoryUpdateControlModelAccessories; // @synthesize userListeningHistoryUpdateControlModelAccessories=_userListeningHistoryUpdateControlModelAccessories;
@property(retain) NSUUID *userListeningHistoryUpdateControlModelUUID; // @synthesize userListeningHistoryUpdateControlModelUUID=_userListeningHistoryUpdateControlModelUUID;
@property(retain) NSMutableSet *mediaContentProfileAccessControlAccessories; // @synthesize mediaContentProfileAccessControlAccessories=_mediaContentProfileAccessControlAccessories;
@property(retain) NSUUID *mediaContentProfileAccessControlModelUUID; // @synthesize mediaContentProfileAccessControlModelUUID=_mediaContentProfileAccessControlModelUUID;
@property(retain) NSMutableSet *assistantAccessControlAccessoryUUIDs; // @synthesize assistantAccessControlAccessoryUUIDs=_assistantAccessControlAccessoryUUIDs;
@property(retain) NSUUID *assistantAccessControlModelUUID; // @synthesize assistantAccessControlModelUUID=_assistantAccessControlModelUUID;
@property(retain) NSUUID *sharedSettingsRootUUID; // @synthesize sharedSettingsRootUUID=_sharedSettingsRootUUID;
@property(readonly) id <HMDUserDataControllerTimerCreator> timerCreator; // @synthesize timerCreator=_timerCreator;
@property(readonly) __weak id <HMDUserDataControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) __weak id <HMDUserDataControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly) NSUUID *userUUID; // @synthesize userUUID=_userUUID;
@property(readonly) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property _Bool supportsHH2MigrationByOwnerAuto; // @synthesize supportsHH2MigrationByOwnerAuto=_supportsHH2MigrationByOwnerAuto;
@property _Bool supportsHH2MigrationByOwnerManual; // @synthesize supportsHH2MigrationByOwnerManual=_supportsHH2MigrationByOwnerManual;
@property _Bool assistantAccessControlActivityNotificationsEnabledForPersonalRequests; // @synthesize assistantAccessControlActivityNotificationsEnabledForPersonalRequests=_assistantAccessControlActivityNotificationsEnabledForPersonalRequests;
@property _Bool assistantAccessControlRequiresAuthenticationForSecureRequests; // @synthesize assistantAccessControlRequiresAuthenticationForSecureRequests=_assistantAccessControlRequiresAuthenticationForSecureRequests;
- (id)logIdentifier;	// IMP=0x00000000008e38c9
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000008e3811
- (void)userSupportsAutomaticHH2MigrationModelRemoved:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000008e36a9
- (void)userSupportsAutomaticHH2MigrationModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000008e332a
- (void)userListeningHistoryUpdateControlModelRemoved:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000008e319b
- (void)userListeningHistoryUpdateControlModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000008e2f0b
- (void)mediaContentProfileAccessControlModelRemoved:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000008e2d7c
- (void)mediaContentProfileAccessControlModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000008e2b25
- (long long)sharedUserSettingsLogEventBackingStoreControllerRunState;	// IMP=0x00000000008e2ab1
- (void)setHasUserSeenRMVNewLanguageNotification:(_Bool)arg1;	// IMP=0x00000000008e2810
@property(readonly) _Bool hasUserSeenRMVNewLanguageNotification;
@property(readonly) _Bool isRecognizeMyVoiceEnabled;
@property(readonly, copy) NSDictionary *privateSettingValuesByKeyPath;
@property(readonly, copy) NSDictionary *sharedSettingValuesByKeyPath;
- (void)assistantAccessControlModelRemoved:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000008e213c
- (void)assistantAccessControlModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000008e1cca
- (void)sharedUserDataModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000008e114e
- (id)updateListeningHistoryModelToReset;	// IMP=0x00000000008e1077
@property(readonly, copy) HMBModel *assistantAccessControlModelToReset;
- (void)handleRemovedAccessory:(id)arg1;	// IMP=0x00000000008e0ed5
- (void)updateSupportsHH2MigrationByOwnerManual:(_Bool)arg1 supportsHH2MigrationByOwnerAuto:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000008e08bf
- (void)enableUserListeningHistoryForAccessory:(id)arg1;	// IMP=0x00000000008e06a9
- (void)handleUserListeningHistoryUpdateControlUpdatedAccessoryUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000008dff9f
- (void)handleMediaContentProfileAccessControlUpdatedAccessoryUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000008df922
- (void)handleAssistantAccessControlAccessoryUUIDsUpdated:(id)arg1 requireAuthenticationForSecureRequests:(_Bool)arg2 activityNotificationsEnabledForPersonalRequests:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000008deee3
- (void)handleStartForZoneController:(id)arg1;	// IMP=0x00000000008dedeb
- (void)_startupPrivateZone;	// IMP=0x00000000008de9ea
- (void)_startupSharedZone;	// IMP=0x00000000008de4cd
- (void)_invalidatePrivateZoneFirstLoadTimer;	// IMP=0x00000000008de440
- (void)_startPrivateZoneFirstLoadTimer;	// IMP=0x00000000008de22d
- (void)performFirstRunOperationsOnPrivateZoneController:(id)arg1;	// IMP=0x00000000008ddd8b
- (void)_invalidateSharedZoneFirstLoadTimer;	// IMP=0x00000000008ddcfe
- (void)_startSharedZoneFirstLoadTimer;	// IMP=0x00000000008ddaeb
- (void)performFirstRunOperationsOnSharedZoneController:(id)arg1;	// IMP=0x00000000008dd1fd
- (void)initializePrivateZoneController:(id)arg1 userDataModel:(id)arg2;	// IMP=0x00000000008dd0bd
- (void)_migrateUserSupportsAutomaticHH2MigrationUserCurrentDataModel:(id)arg1 transaction:(id)arg2;	// IMP=0x00000000008dcdf4
- (id)_keyPathToModelFromKeyPath:(id)arg1 models:(id)arg2;	// IMP=0x00000000008dcc0d
- (_Bool)_userListeningHistoryValueFromModels:(id)arg1;	// IMP=0x00000000008dca1e
- (id)_migrateUserListeningHistoryUpdateControlWithUserCurrentDataModel:(id)arg1 transaction:(id)arg2 settingModels:(id)arg3;	// IMP=0x00000000008dc4a8
- (void)initializeSharedZoneController:(id)arg1 userDataModel:(id)arg2;	// IMP=0x00000000008db2a4
- (void)eventDidInitializeSharedZone;	// IMP=0x00000000008daf98
- (void)eventDidInitializePrivateZone;	// IMP=0x00000000008dac95
@property unsigned long long state; // @synthesize state=_state;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000008da93c
@property(readonly, copy) NSArray *userListeningHistoryUpdateControlModelAccessoriesToEncode;
@property(readonly, copy) NSArray *mediaContentProfileAccessControlAccessoriesToEncode;
@property(readonly, copy) NSArray *assistantAccessControlAccessoriesToEncode;
@property(readonly) _Bool isInitialized;
- (void)configure;	// IMP=0x00000000008da740
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2 queue:(id)arg3 userID:(id)arg4 homeID:(id)arg5 sharedSettingsController:(id)arg6 privateSettingsController:(id)arg7 isCurrentUser:(_Bool)arg8;	// IMP=0x00000000008da61f
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2 queue:(id)arg3 userID:(id)arg4 homeID:(id)arg5 sharedSettingsController:(id)arg6 privateSettingsController:(id)arg7 timerCreator:(id)arg8 isCurrentUser:(_Bool)arg9;	// IMP=0x00000000008da402

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

