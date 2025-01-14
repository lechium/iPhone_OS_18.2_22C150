//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMBCloudZone, HMBLocalZone, HMDCloudShareMessenger, HMDCloudShareParticipantsManager, NSString, NSUUID;
@protocol HMDAssistantAccessControlModelUpdateReceiver, HMDDatabase, HMDMediaContentProfileAccessControlModelUpdateReceiver, HMDSettingTransactionReceiverProtocol, HMDSharedUserDataModelUpdateReceiver, HMDUserListeningHistoryUpdateControlModelUpdateReceiver, HMDUserSettingsBackingStoreControllerDelegate, HMDUserSupportsAutomaticHH2MigrationModelUpdateReceiver, HMMLogEventSubmitting, OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface HMDUserSettingsBackingStoreController : NSObject
{
    NSObject<OS_os_log> *_logger;	// 8 = 0x8
    unsigned long long _startupSignPost;	// 16 = 0x10
    id <HMDUserSettingsBackingStoreControllerDelegate> _delegate;	// 24 = 0x18
    HMBLocalZone *_localZone;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
    NSString *_zoneName;	// 48 = 0x30
    id <HMDDatabase> _database;	// 56 = 0x38
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 64 = 0x40
    HMDCloudShareMessenger *_shareMessenger;	// 72 = 0x48
    HMDCloudShareParticipantsManager *_participantsManager;	// 80 = 0x50
    HMBCloudZone *_cloudZone;	// 88 = 0x58
    long long _runState;	// 96 = 0x60
    long long _logEventRunState;	// 104 = 0x68
    id <HMDSettingTransactionReceiverProtocol> _transactionReceiver;	// 112 = 0x70
    id <HMDAssistantAccessControlModelUpdateReceiver> _assistantAccessControlModelUpdateReceiver;	// 120 = 0x78
    NSUUID *_assistantAccessControlModelID;	// 128 = 0x80
    id <HMDMediaContentProfileAccessControlModelUpdateReceiver> _mediaContentProfileAccessControlModelUpdateReceiver;	// 136 = 0x88
    NSUUID *_mediaContentProfileAccessControlModelID;	// 144 = 0x90
    NSUUID *_userListeningHistoryUpdateModelID;	// 152 = 0x98
    id <HMDUserListeningHistoryUpdateControlModelUpdateReceiver> _userListeningHistoryUpdateControlModelUpdateReceiver;	// 160 = 0xa0
    NSUUID *_userSupportsAutomaticHH2MigrationModelID;	// 168 = 0xa8
    id <HMDUserSupportsAutomaticHH2MigrationModelUpdateReceiver> _userSupportsAutomaticHH2MigrationModelUpdateReceiver;	// 176 = 0xb0
    NSUUID *_sharedUserDataModelUpdateModelID;	// 184 = 0xb8
    id <HMDSharedUserDataModelUpdateReceiver> _sharedUserDataModelUpdateReceiver;	// 192 = 0xc0
}

+ (id)logCategory;	// IMP=0x001000000021f5c4
- (void).cxx_destruct;	// IMP=0x000000000021da23
@property __weak id <HMDSharedUserDataModelUpdateReceiver> sharedUserDataModelUpdateReceiver; // @synthesize sharedUserDataModelUpdateReceiver=_sharedUserDataModelUpdateReceiver;
@property(copy) NSUUID *sharedUserDataModelUpdateModelID; // @synthesize sharedUserDataModelUpdateModelID=_sharedUserDataModelUpdateModelID;
@property __weak id <HMDUserSupportsAutomaticHH2MigrationModelUpdateReceiver> userSupportsAutomaticHH2MigrationModelUpdateReceiver; // @synthesize userSupportsAutomaticHH2MigrationModelUpdateReceiver=_userSupportsAutomaticHH2MigrationModelUpdateReceiver;
@property(copy) NSUUID *userSupportsAutomaticHH2MigrationModelID; // @synthesize userSupportsAutomaticHH2MigrationModelID=_userSupportsAutomaticHH2MigrationModelID;
@property __weak id <HMDUserListeningHistoryUpdateControlModelUpdateReceiver> userListeningHistoryUpdateControlModelUpdateReceiver; // @synthesize userListeningHistoryUpdateControlModelUpdateReceiver=_userListeningHistoryUpdateControlModelUpdateReceiver;
@property(copy) NSUUID *userListeningHistoryUpdateModelID; // @synthesize userListeningHistoryUpdateModelID=_userListeningHistoryUpdateModelID;
@property(copy) NSUUID *mediaContentProfileAccessControlModelID; // @synthesize mediaContentProfileAccessControlModelID=_mediaContentProfileAccessControlModelID;
@property __weak id <HMDMediaContentProfileAccessControlModelUpdateReceiver> mediaContentProfileAccessControlModelUpdateReceiver; // @synthesize mediaContentProfileAccessControlModelUpdateReceiver=_mediaContentProfileAccessControlModelUpdateReceiver;
@property(copy) NSUUID *assistantAccessControlModelID; // @synthesize assistantAccessControlModelID=_assistantAccessControlModelID;
@property __weak id <HMDAssistantAccessControlModelUpdateReceiver> assistantAccessControlModelUpdateReceiver; // @synthesize assistantAccessControlModelUpdateReceiver=_assistantAccessControlModelUpdateReceiver;
@property __weak id <HMDSettingTransactionReceiverProtocol> transactionReceiver; // @synthesize transactionReceiver=_transactionReceiver;
@property long long logEventRunState; // @synthesize logEventRunState=_logEventRunState;
@property long long runState; // @synthesize runState=_runState;
@property(retain) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(retain) HMDCloudShareParticipantsManager *participantsManager; // @synthesize participantsManager=_participantsManager;
@property(readonly) HMDCloudShareMessenger *shareMessenger; // @synthesize shareMessenger=_shareMessenger;
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly) id <HMDDatabase> database; // @synthesize database=_database;
@property(readonly, copy) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(readonly) __weak id <HMDUserSettingsBackingStoreControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x000000000021d755
- (void)database:(id)arg1 didRemoveZoneWithName:(id)arg2 isPrivate:(_Bool)arg3;	// IMP=0x000000000021d626
- (void)database:(id)arg1 didCreateZoneWithName:(id)arg2 isPrivate:(_Bool)arg3;	// IMP=0x000000000021d4f7
- (void)runTransaction:(id)arg1 waitForCloudPush:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000021cd93
- (id)settingTransactionWithName:(id)arg1;	// IMP=0x000000000021cd46
- (void)runSettingTransaction:(id)arg1 waitForCloudPush:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000021cd34
- (void)runSettingTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000021cd1d
- (void)registerForSettingsTransactions:(id)arg1;	// IMP=0x000000000021cc07
- (void)_localZone:(id)arg1 updatedModel:(id)arg2 previousModel:(id)arg3 options:(id)arg4 result:(id)arg5;	// IMP=0x000000000021bff9
- (id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2;	// IMP=0x000000000021bed5
- (id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2;	// IMP=0x000000000021bd49
- (id)localZone:(id)arg1 didProcessModelCreation:(id)arg2;	// IMP=0x000000000021bc25
- (void)messengerDidReceiveShareAccessRevocation:(id)arg1;	// IMP=0x000000000021bc1f
- (void)messenger:(id)arg1 didReceiveInvitationRequestFromUser:(id)arg2 device:(id)arg3;	// IMP=0x000000000021ba26
- (void)messenger:(id)arg1 didReceiveInvitationData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000021b627
- (void)manager:(id)arg1 didRevokeShareAccessForUser:(id)arg2;	// IMP=0x000000000021b621
- (void)manager:(id)arg1 didRequestSendForInvitation:(id)arg2 toDevice:(id)arg3;	// IMP=0x000000000021b58a
- (void)manager:(id)arg1 didRequestSendForInvitation:(id)arg2 toUser:(id)arg3;	// IMP=0x000000000021b4f2
- (_Bool)manager:(id)arg1 shouldShareWithUser:(id)arg2;	// IMP=0x000000000021b481
- (void)_sendShareInvitation:(id)arg1 toUser:(id)arg2 device:(id)arg3;	// IMP=0x000000000021af5f
- (void)_updateLogEventRunState:(long long)arg1;	// IMP=0x000000000021ad84
- (void)_updateRunState:(long long)arg1;	// IMP=0x000000000021ac17
- (id)loadUserSettings;	// IMP=0x000000000021a983
- (void)_didFetchZonesWithResult:(id)arg1 isOwnedZone:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000000219d31
- (void)_startWithSharedZone;	// IMP=0x00000000002198a7
- (void)_startWithOwnedZone;	// IMP=0x000000000021977d
- (void)updateParticipants;	// IMP=0x000000000021966a
- (void)clearParticipants;	// IMP=0x0000000000219557
- (id)queryPushTokensForDevicesObservingSubjectDevice:(id)arg1 subActivity:(id)arg2;	// IMP=0x00000000002192c9
- (void)deregisterObserverDeviceIdentifier:(id)arg1;	// IMP=0x00000000002190b5
- (void)deregisterObserverDeviceIdentifier:(id)arg1 observerPushToken:(id)arg2 subActivity:(id)arg3 subjectDeviceIdentifier:(id)arg4;	// IMP=0x00000000002189c3
- (void)updateObserverDeviceIdentifier:(id)arg1 observerPushToken:(id)arg2;	// IMP=0x000000000021859d
- (void)registerObserverDeviceIdentifier:(id)arg1 observerPushToken:(id)arg2 subActivity:(id)arg3 subjectDeviceIdentifier:(id)arg4;	// IMP=0x0000000000217d87
- (void)destroyZone;	// IMP=0x0000000000217bd1
- (void)_invalidate;	// IMP=0x0000000000217a8a
- (void)registerForSharedUserDataModelUpdates:(id)arg1 modelID:(id)arg2;	// IMP=0x0000000000217a29
- (void)registerForUserSupportsAutomaticHH2MigrationModelUpdates:(id)arg1 modelID:(id)arg2;	// IMP=0x0000000000217983
- (id)loadUserSupportsAutomaticHH2MigrationModelWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002178d5
- (void)registerForUserListeningHistoryUpdateControlModelUpdates:(id)arg1 modelID:(id)arg2;	// IMP=0x000000000021782f
- (id)loadUserListeningHistoryUpdateControlModelWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000217781
- (void)registerForMediaContentAccessControlModelUpdates:(id)arg1 modelID:(id)arg2;	// IMP=0x00000000002176db
- (id)loadMediaContentAccessControlModelWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000021762d
- (void)registerForAssistantAccessControlModelUpdates:(id)arg1 modelID:(id)arg2;	// IMP=0x0000000000217587
- (id)loadAssistantAccessControlModelWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002173b1
- (id)loadSharedUserDataModelWithError:(id *)arg1;	// IMP=0x0000000000217304
- (id)loadPrivateUserDataModelWithError:(id *)arg1;	// IMP=0x0000000000217257
- (void)start;	// IMP=0x0000000000216ce7
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 zoneName:(id)arg3 database:(id)arg4 shareMessenger:(id)arg5;	// IMP=0x0000000000216b57

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

