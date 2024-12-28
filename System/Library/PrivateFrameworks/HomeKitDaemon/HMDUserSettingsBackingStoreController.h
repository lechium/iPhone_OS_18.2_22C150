//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMBCloudZone, HMBLocalZone, HMDCloudShareMessenger, HMDCloudShareParticipantsManager, NSString, NSUUID;
@protocol HMDAssistantAccessControlModelUpdateReceiver, HMDDatabase, HMDMediaContentProfileAccessControlModelUpdateReceiver, HMDSettingTransactionReceiverProtocol, HMDSharedUserDataModelUpdateReceiver, HMDUserListeningHistoryUpdateControlModelUpdateReceiver, HMDUserSettingsBackingStoreControllerDelegate, HMMLogEventSubmitting, OS_dispatch_queue, OS_os_log;

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
    NSUUID *_sharedUserDataModelUpdateModelID;	// 168 = 0xa8
    id <HMDSharedUserDataModelUpdateReceiver> _sharedUserDataModelUpdateReceiver;	// 176 = 0xb0
}

+ (id)logCategory;	// IMP=0x00100000003a0386
- (void).cxx_destruct;	// IMP=0x000000000039e818
@property __weak id <HMDSharedUserDataModelUpdateReceiver> sharedUserDataModelUpdateReceiver; // @synthesize sharedUserDataModelUpdateReceiver=_sharedUserDataModelUpdateReceiver;
@property(copy) NSUUID *sharedUserDataModelUpdateModelID; // @synthesize sharedUserDataModelUpdateModelID=_sharedUserDataModelUpdateModelID;
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
- (id)logIdentifier;	// IMP=0x000000000039e59a
- (void)database:(id)arg1 didRemoveZoneWithName:(id)arg2 isPrivate:(_Bool)arg3;	// IMP=0x000000000039e46b
- (void)database:(id)arg1 didCreateZoneWithName:(id)arg2 isPrivate:(_Bool)arg3;	// IMP=0x000000000039e33c
- (void)runTransaction:(id)arg1 waitForCloudPush:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000039dbd8
- (id)settingTransactionWithName:(id)arg1;	// IMP=0x000000000039db8b
- (void)runSettingTransaction:(id)arg1 waitForCloudPush:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000039db79
- (void)runSettingTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000039db62
- (void)registerForSettingsTransactions:(id)arg1;	// IMP=0x000000000039da4c
- (void)_localZone:(id)arg1 updatedModel:(id)arg2 previousModel:(id)arg3 options:(id)arg4 result:(id)arg5;	// IMP=0x000000000039cf5a
- (id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2;	// IMP=0x000000000039ce36
- (id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2;	// IMP=0x000000000039ccaa
- (id)localZone:(id)arg1 didProcessModelCreation:(id)arg2;	// IMP=0x000000000039cb86
- (void)messengerDidReceiveShareAccessRevocation:(id)arg1;	// IMP=0x000000000039cb80
- (void)messenger:(id)arg1 didReceiveInvitationRequestFromUser:(id)arg2 device:(id)arg3;	// IMP=0x000000000039c987
- (void)messenger:(id)arg1 didReceiveInvitationData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000039c588
- (void)manager:(id)arg1 didRevokeShareAccessForUser:(id)arg2;	// IMP=0x000000000039c582
- (void)manager:(id)arg1 didRequestSendForInvitation:(id)arg2 toDevice:(id)arg3;	// IMP=0x000000000039c4eb
- (void)manager:(id)arg1 didRequestSendForInvitation:(id)arg2 toUser:(id)arg3;	// IMP=0x000000000039c453
- (_Bool)manager:(id)arg1 shouldShareWithUser:(id)arg2;	// IMP=0x000000000039c3e2
- (void)_sendShareInvitation:(id)arg1 toUser:(id)arg2 device:(id)arg3;	// IMP=0x000000000039bec0
- (void)_updateLogEventRunState:(long long)arg1;	// IMP=0x000000000039bce5
- (void)_updateRunState:(long long)arg1;	// IMP=0x000000000039bb78
- (id)loadUserSettings;	// IMP=0x000000000039b8e4
- (void)_didFetchZonesWithResult:(id)arg1 isOwnedZone:(_Bool)arg2 error:(id)arg3;	// IMP=0x000000000039ac92
- (void)_startWithSharedZone;	// IMP=0x000000000039a808
- (void)_startWithOwnedZone;	// IMP=0x000000000039a6de
- (void)updateParticipants;	// IMP=0x000000000039a5cb
- (void)clearParticipants;	// IMP=0x000000000039a4b8
- (id)queryPushTokensForDevicesObservingSubjectDevice:(id)arg1 subActivity:(id)arg2;	// IMP=0x000000000039a22a
- (void)deregisterObserverDeviceIdentifier:(id)arg1;	// IMP=0x000000000039a016
- (void)deregisterObserverDeviceIdentifier:(id)arg1 observerPushToken:(id)arg2 subActivity:(id)arg3 subjectDeviceIdentifier:(id)arg4;	// IMP=0x0000000000399924
- (void)updateObserverDeviceIdentifier:(id)arg1 observerPushToken:(id)arg2;	// IMP=0x00000000003994fe
- (void)registerObserverDeviceIdentifier:(id)arg1 observerPushToken:(id)arg2 subActivity:(id)arg3 subjectDeviceIdentifier:(id)arg4;	// IMP=0x0000000000398ce8
- (void)destroyZone;	// IMP=0x0000000000398b32
- (void)_invalidate;	// IMP=0x00000000003989eb
- (void)registerForSharedUserDataModelUpdates:(id)arg1 modelID:(id)arg2;	// IMP=0x000000000039898a
- (void)registerForUserListeningHistoryUpdateControlModelUpdates:(id)arg1 modelID:(id)arg2;	// IMP=0x00000000003988e4
- (id)loadUserListeningHistoryUpdateControlModelWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000398836
- (void)registerForMediaContentAccessControlModelUpdates:(id)arg1 modelID:(id)arg2;	// IMP=0x0000000000398790
- (id)loadMediaContentAccessControlModelWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003986e2
- (void)registerForAssistantAccessControlModelUpdates:(id)arg1 modelID:(id)arg2;	// IMP=0x000000000039863c
- (id)loadAssistantAccessControlModelWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000398466
- (id)loadSharedUserDataModelWithError:(id *)arg1;	// IMP=0x00000000003983b9
- (id)loadPrivateUserDataModelWithError:(id *)arg1;	// IMP=0x000000000039830c
- (void)start;	// IMP=0x0000000000397d9c
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 zoneName:(id)arg3 database:(id)arg4 shareMessenger:(id)arg5;	// IMP=0x0000000000397c0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
