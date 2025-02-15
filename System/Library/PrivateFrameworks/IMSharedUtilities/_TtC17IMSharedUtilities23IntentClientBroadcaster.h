//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC17IMSharedUtilities23IntentClientBroadcaster : NSObject
{
    MISSING_TYPE *safeRenderProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000149f90
- (id)init;	// IMP=0x0000000000149f30
- (void)fileTransferDownloadFailedWithLocalURL:(id)arg1 error:(id)arg2;	// IMP=0x0000000000142f00
- (void)fileTransferDownloadedSucceededWithLocalURL:(id)arg1;	// IMP=0x0000000000142e30
- (void)fileTransferHighQualityDownloadFailed:(id)arg1;	// IMP=0x0000000000142db0
- (void)fileTransferExplicitDownloadFailed:(id)arg1 suggestedRetryGUID:(id)arg2 error:(id)arg3;	// IMP=0x0000000000142cf0
- (void)fileTransfer:(id)arg1 explicitDownloadSucceededWithPath:(id)arg2 livePhotoBundlePath:(id)arg3;	// IMP=0x0000000000142b60
- (void)fileTransfer:(id)arg1 highQualityDownloadSucceededWithPath:(id)arg2;	// IMP=0x0000000000142000
- (void)updatePendingNicknameUpdates:(id)arg1 handledNicknames:(id)arg2 archivedNicknames:(id)arg3;	// IMP=0x0000000000143360
- (void)updateNicknameHandlesForSharing:(id)arg1 blocked:(id)arg2;	// IMP=0x00000000001432c0
- (void)lastFailedMessageDateChanged:(long long)arg1;	// IMP=0x0000000000146660
- (void)unreadCountChanged:(long long)arg1;	// IMP=0x0000000000146510
- (void)refreshStatusForKTPeerURI:(id)arg1;	// IMP=0x0000000000149770
- (void)keyTransparencyOptInStateChanged:(_Bool)arg1;	// IMP=0x00000000001496f0
- (void)didReceiveCollaborationMessage:(id)arg1 inChat:(id)arg2 style:(unsigned char)arg3 account:(id)arg4;	// IMP=0x0000000000149650
- (void)setupComplete;	// IMP=0x00000000001495e0
- (void)setupComplete:(_Bool)arg1 info:(id)arg2;	// IMP=0x0000000000149570
- (void)didUpdateSettingsKeys:(id)arg1;	// IMP=0x00000000001494d0
- (void)updateNicknameData:(id)arg1;	// IMP=0x0000000000149410
- (void)account:(id)arg1 postedError:(id)arg2;	// IMP=0x0000000000149370
- (void)account:(id)arg1 statusChanged:(id)arg2;	// IMP=0x00000000001492f0
- (void)account:(id)arg1 handleSubscriptionRequestFrom:(id)arg2 withMessage:(id)arg3;	// IMP=0x0000000000149270
- (void)account:(id)arg1 groupsChanged:(id)arg2 error:(id)arg3;	// IMP=0x00000000001491d0
- (void)account:(id)arg1 buddyProperties:(id)arg2 buddyPictures:(id)arg3;	// IMP=0x0000000000149150
- (void)account:(id)arg1 buddyPictureChanged:(id)arg2 imageData:(id)arg3 imageHash:(id)arg4;	// IMP=0x0000000000149080
- (void)account:(id)arg1 buddyPropertiesChanged:(id)arg2;	// IMP=0x0000000000149000
- (void)account:(id)arg1 blockIdleStatusChanged:(_Bool)arg2;	// IMP=0x0000000000148f80
- (void)account:(id)arg1 blockingModeChanged:(unsigned int)arg2;	// IMP=0x0000000000148f00
- (void)account:(id)arg1 allowListChanged:(id)arg2;	// IMP=0x0000000000148e80
- (void)account:(id)arg1 blockListChanged:(id)arg2;	// IMP=0x0000000000148e00
- (void)accountRemoved:(id)arg1;	// IMP=0x0000000000148d80
- (void)accountAdded:(id)arg1 defaults:(id)arg2 service:(id)arg3;	// IMP=0x0000000000148d00
- (void)account:(id)arg1 capabilitiesChanged:(unsigned long long)arg2;	// IMP=0x0000000000148c80
- (void)account:(id)arg1 defaultsChanged:(id)arg2;	// IMP=0x0000000000148c00
- (void)account:(id)arg1 loginStatusChanged:(unsigned long long)arg2 message:(id)arg3 reason:(int)arg4 properties:(id)arg5;	// IMP=0x0000000000148b50
- (void)account:(id)arg1 defaults:(id)arg2 blockList:(id)arg3 allowList:(id)arg4 blockingMode:(unsigned int)arg5 blockIdleStatus:(_Bool)arg6 status:(id)arg7 capabilities:(unsigned long long)arg8 serviceLoginStatus:(unsigned long long)arg9 loginStatusMessage:(id)arg10;	// IMP=0x0000000000148aa0
- (void)activeAccountsChanged:(id)arg1 forService:(id)arg2;	// IMP=0x0000000000148a20
- (void)showForgotPasswordNotificationForAccount:(id)arg1;	// IMP=0x00000000001489a0
- (void)showInvalidCertNotificationForAccount:(id)arg1;	// IMP=0x0000000000148920
- (void)defaultsChanged:(id)arg1 forService:(id)arg2;	// IMP=0x00000000001488a0
- (void)receivedUrgentRequestForMessages:(id)arg1;	// IMP=0x0000000000148820
- (void)updateCloudKitProgressWithDictionary:(id)arg1;	// IMP=0x00000000001487a0
- (void)updateCloudKitStateWithDictionary:(id)arg1;	// IMP=0x0000000000148720
- (void)_automation_markAsReadQuery:(id)arg1 finishedWithResult:(_Bool)arg2;	// IMP=0x00000000001486a0
- (void)frequentRepliesQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4 limit:(long long)arg5;	// IMP=0x00000000001485d0
- (void)markAsSpamQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4;	// IMP=0x0000000000148530
- (void)isDownloadingQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(_Bool)arg4;	// IMP=0x00000000001484b0
- (void)uncachedAttachmentCountQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4;	// IMP=0x0000000000148410
- (void)attachmentQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4;	// IMP=0x0000000000148370
- (void)pagedHistoryQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 numberOfMessagesBefore:(long long)arg4 numberOfMessagesAfter:(long long)arg5 finishedWithResult:(id)arg6 hasMessagesBefore:(_Bool)arg7 hasMessagesAfter:(_Bool)arg8;	// IMP=0x00000000001482d0
- (void)historyQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4 limit:(long long)arg5;	// IMP=0x0000000000148260
- (void)itemQuery:(id)arg1 finishedWithResult:(id)arg2 chatGUIDs:(id)arg3;	// IMP=0x00000000001481c0
- (void)messageItemQuery:(id)arg1 finishedWithResult:(id)arg2 chatGUIDs:(id)arg3;	// IMP=0x0000000000148120
- (void)messageQuery:(id)arg1 finishedWithResult:(id)arg2 chatGUIDs:(id)arg3;	// IMP=0x0000000000148080
- (void)account:(id)arg1 relay:(id)arg2 handleCancel:(id)arg3 fromPerson:(id)arg4;	// IMP=0x0000000000148000
- (void)account:(id)arg1 relay:(id)arg2 handleUpdate:(id)arg3 fromPerson:(id)arg4;	// IMP=0x0000000000147f80
- (void)account:(id)arg1 relay:(id)arg2 handleInitate:(id)arg3 fromPerson:(id)arg4;	// IMP=0x0000000000147f00
- (void)account:(id)arg1 avAction:(unsigned int)arg2 withArguments:(id)arg3 toAVChat:(id)arg4 isVideo:(_Bool)arg5;	// IMP=0x0000000000147e80
- (void)account:(id)arg1 conference:(id)arg2 invitationSentSuccessfully:(_Bool)arg3;	// IMP=0x0000000000147e00
- (void)account:(id)arg1 conference:(id)arg2 peerID:(id)arg3 propertiesUpdated:(id)arg4;	// IMP=0x0000000000147d60
- (void)account:(id)arg1 conference:(id)arg2 peerIDChangedFromID:(id)arg3 toID:(id)arg4;	// IMP=0x0000000000147ce0
- (void)account:(id)arg1 conference:(id)arg2 changedToNewConferenceID:(id)arg3;	// IMP=0x0000000000147c60
- (void)account:(id)arg1 conference:(id)arg2 receivedAVMessage:(unsigned int)arg3 from:(id)arg4 sessionID:(unsigned int)arg5 userInfo:(id)arg6;	// IMP=0x0000000000147bb0
- (void)account:(id)arg1 conference:(id)arg2 receivedUpdateFrom:(id)arg3 data:(id)arg4;	// IMP=0x0000000000147af0
- (void)account:(id)arg1 conference:(id)arg2 receivedCounterProposalFrom:(id)arg3 properties:(id)arg4;	// IMP=0x0000000000147a70
- (void)account:(id)arg1 conference:(id)arg2 receivedCancelInvitationFrom:(id)arg3 properties:(id)arg4;	// IMP=0x00000000001479f0
- (void)account:(id)arg1 conference:(id)arg2 receivedResponseToInvitationFrom:(id)arg3 properties:(id)arg4;	// IMP=0x0000000000147970
- (void)account:(id)arg1 conference:(id)arg2 receivedInvitationFrom:(id)arg3 properties:(id)arg4;	// IMP=0x00000000001478f0
- (void)didFetchCloudKitSyncDebuggingInfo:(id)arg1;	// IMP=0x0000000000147870
- (void)didAttemptToDisableiCloudBackups:(long long)arg1 error:(id)arg2;	// IMP=0x00000000001477d0
- (void)didFetchRampState:(id)arg1;	// IMP=0x0000000000147750
- (void)didFetchSyncStateStats:(id)arg1;	// IMP=0x00000000001476d0
- (void)oneTimeCodesDidChange:(id)arg1;	// IMP=0x0000000000147650
- (void)stickerPackRemoved:(id)arg1;	// IMP=0x00000000001475d0
- (void)stickerPackUpdated:(id)arg1;	// IMP=0x0000000000147550
- (void)persistentProperty:(id)arg1 changedTo:(id)arg2 from:(id)arg3;	// IMP=0x0000000000147440
- (void)property:(id)arg1 changedTo:(id)arg2 from:(id)arg3;	// IMP=0x00000000001473d0
- (void)networkDataAvailabilityChanged:(_Bool)arg1;	// IMP=0x0000000000147350
- (void)newSetupInfoAvailable;	// IMP=0x00000000001472d0
- (void)simSubscriptionsDidChange;	// IMP=0x0000000000147250
- (void)updatePersonalNickname:(id)arg1;	// IMP=0x00000000001471b0
- (void)updateUnknownSenderRecords:(id)arg1;	// IMP=0x0000000000147130
- (void)updateIgnoredNicknameRecords:(id)arg1;	// IMP=0x00000000001470b0
- (void)updateActiveNicknameRecords:(id)arg1;	// IMP=0x0000000000147030
- (void)updateTransitionedNicknameHandles:(id)arg1;	// IMP=0x0000000000146fb0
- (void)nicknameRequestResponse:(id)arg1 encodedNicknameData:(id)arg2;	// IMP=0x0000000000146ee0
- (void)didAttemptToDisableAllDevicesResult:(_Bool)arg1;	// IMP=0x0000000000146e60
- (void)didPerformAdditionalStorageRequiredCheckWithSuccess:(_Bool)arg1 additionalStorageRequired:(unsigned long long)arg2 forAccountId:(id)arg3 error:(id)arg4;	// IMP=0x0000000000146da0
- (void)didAttemptToSetEnabledTo:(_Bool)arg1 result:(_Bool)arg2;	// IMP=0x0000000000146d20
- (void)updateCloudKitState;	// IMP=0x0000000000146ca0
- (void)vcCapabilitiesChanged:(unsigned long long)arg1;	// IMP=0x0000000000146c20
- (void)pendingACRequestComplete;	// IMP=0x0000000000146ba0
- (void)pendingVCRequestComplete;	// IMP=0x0000000000146b20
- (void)fileTransferFinishedRemoteIntentDownload:(id)arg1;	// IMP=0x0000000000149a00
- (void)fileTransfer:(id)arg1 updatedWithCurrentBytes:(unsigned long long)arg2 totalBytes:(unsigned long long)arg3 averageTransferRate:(unsigned long long)arg4;	// IMP=0x0000000000149980
- (void)fileTransfers:(id)arg1 createdWithLocalPaths:(id)arg2;	// IMP=0x0000000000149900
- (void)fileTransfer:(id)arg1 updatedWithProperties:(id)arg2;	// IMP=0x0000000000149850
- (void)fileTransfer:(id)arg1 createdWithProperties:(id)arg2;	// IMP=0x00000000001497f0
- (void)updatedSummariesForChatsWithGUIDsAndProperties:(id)arg1;	// IMP=0x000000000014cd10
- (void)qosClassWhileServicingRequestsResponse:(unsigned int)arg1 identifier:(id)arg2;	// IMP=0x000000000014cc90
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 groupID:(id)arg5 chatPersonCentricID:(id)arg6 initialEmergencyQuestionnaireReceived:(id)arg7;	// IMP=0x000000000014cb90
- (void)collaborationNoticesDidChangeForChatGUIDs:(id)arg1;	// IMP=0x000000000014cb10
- (void)screenTimeEnablementChanged:(_Bool)arg1;	// IMP=0x000000000014ca90
- (void)pinCodeAlertCompleted:(id)arg1 deviceName:(id)arg2 deviceType:(id)arg3 phoneNumber:(id)arg4 responseFromDevice:(_Bool)arg5 wasCancelled:(_Bool)arg6;	// IMP=0x000000000014ca10
- (void)displayPinCodeForAccount:(id)arg1 pinCode:(id)arg2 deviceName:(id)arg3 deviceType:(id)arg4 phoneNumber:(id)arg5;	// IMP=0x000000000014c970
- (void)groupPhotoUpdatedForChatIdentifier:(id)arg1 style:(unsigned char)arg2 account:(id)arg3 userInfo:(id)arg4;	// IMP=0x000000000014c880
- (void)blackholedChatsExist:(_Bool)arg1;	// IMP=0x000000000014c820
- (void)previouslyBlackholedChatLoadedWithHandleIDs:(id)arg1 chat:(id)arg2;	// IMP=0x000000000014c7a0
- (void)previouslyBlackholedChatLoadedWithChatIdentifier:(id)arg1 chats:(id)arg2;	// IMP=0x000000000014c720
- (void)historicalMessageGUIDsDeleted:(id)arg1 chatGUIDs:(id)arg2 queryID:(id)arg3;	// IMP=0x000000000014c630
- (void)finishedDownloadingPurgedAssetsForChatIDs:(id)arg1;	// IMP=0x000000000014c5b0
- (void)downloadedPurgedAssetBatchForChatIDs:(id)arg1 completedTransferGUIDs:(id)arg2;	// IMP=0x000000000014c530
- (void)account:(id)arg1 handleID:(id)arg2 updatedLastReceivedOnGridMessageDate:(id)arg3;	// IMP=0x000000000014c430
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 chatPersonCentricID:(id)arg5 member:(id)arg6 statusChanged:(int)arg7;	// IMP=0x000000000014c2b0
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 groupID:(id)arg5 chatPersonCentricID:(id)arg6 statusChanged:(int)arg7 handleInfo:(id)arg8;	// IMP=0x000000000014c130
- (void)service:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 messagesUpdated:(id)arg4;	// IMP=0x000000000014c060
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messagesUpdated:(id)arg5;	// IMP=0x000000000014bf50
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messageUpdated:(id)arg5 suppressNotification:(_Bool)arg6;	// IMP=0x000000000014bf30
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messageUpdated:(id)arg5;	// IMP=0x000000000014be20
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 groupID:(id)arg5 chatPersonCentricID:(id)arg6 messagesReceived:(id)arg7 removed:(id)arg8 messagesComingFromStorage:(_Bool)arg9;	// IMP=0x000000000014bc70
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 groupID:(id)arg5 chatPersonCentricID:(id)arg6 messageReceived:(id)arg7;	// IMP=0x000000000014bb00
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 notifySentMessage:(id)arg5 sendTime:(id)arg6 isReplicating:(_Bool)arg7;	// IMP=0x000000000014b9c0
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 groupID:(id)arg5 chatPersonCentricID:(id)arg6 messageSent:(id)arg7;	// IMP=0x000000000014b840
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 invitationReceived:(id)arg5;	// IMP=0x000000000014b790
- (void)chatLoadedWithChatIdentifier:(id)arg1 chats:(id)arg2;	// IMP=0x000000000014b710
- (void)chatsNeedRemerging:(id)arg1 groupedChats:(id)arg2;	// IMP=0x000000000014b690
- (void)recoveredMessagesFromRecentlyDeletedForChatsWithGUIDs:(id)arg1;	// IMP=0x000000000014b610
- (void)permanentlyDeletedRecoverableMessagesForChatsWithGUIDs:(id)arg1 deletedChatGUIDs:(id)arg2;	// IMP=0x000000000014b590
- (void)permanentlyDeletedMessagesInChatsWithDeletedChatGUIDs:(id)arg1 queryID:(id)arg2;	// IMP=0x000000000014b510
- (void)permanentlyDeletedMessagesInChatsWithDeletedChatGUIDs:(id)arg1;	// IMP=0x000000000014b490
- (void)loadedRecoverableMessagesMetadata:(id)arg1 queryID:(id)arg2;	// IMP=0x000000000014b3d0
- (void)recoveredMessagesWithChatGUIDs:(id)arg1 queryID:(id)arg2;	// IMP=0x000000000014b350
- (void)movedMessagesToRecentlyDeletedForChatsWithGUIDs:(id)arg1 queryID:(id)arg2 deletionDate:(id)arg3;	// IMP=0x000000000014b240
- (void)movedMessagesToRecentlyDeletedWithQueryID:(id)arg1;	// IMP=0x000000000014b1e0
- (void)forcedReloadingChatRegistryWithQueryID:(id)arg1;	// IMP=0x000000000014b160
- (void)markedAsReadForMessageGUID:(id)arg1 success:(_Bool)arg2 queryID:(id)arg3;	// IMP=0x000000000014b0e0
- (void)loadedChats:(id)arg1 queryID:(id)arg2;	// IMP=0x000000000014b060
- (void)loadedChats:(id)arg1;	// IMP=0x000000000014aff0
- (void)engroupParticipantsUpdatedForChat:(id)arg1;	// IMP=0x000000000014af80
- (void)leftChat:(id)arg1;	// IMP=0x000000000014af10
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 error:(id)arg5;	// IMP=0x000000000014ae50
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 updateProperties:(id)arg5;	// IMP=0x000000000014ada0
- (void)chat:(id)arg1 uncachedAttachmentCountUpdated:(id)arg2;	// IMP=0x000000000014ad00
- (void)capabilitiesUpdatedForHandle:(id)arg1;	// IMP=0x000000000014ac80
- (void)serviceSwitchRequestReceivedForChatWithIdentifier:(id)arg1;	// IMP=0x000000000014ac00
- (void)chat:(id)arg1 lastMessageTimeStampOnLoadUpdated:(double)arg2;	// IMP=0x000000000014aa90
- (void)chat:(id)arg1 nicknamesUpdated:(id)arg2;	// IMP=0x000000000014a930
- (void)chat:(id)arg1 engramIDUpdated:(id)arg2;	// IMP=0x000000000014a8b0
- (void)chat:(id)arg1 isDeletingIncomingMessagesUpdated:(_Bool)arg2;	// IMP=0x000000000014a830
- (void)chat:(id)arg1 isRecoveredUpdated:(_Bool)arg2;	// IMP=0x000000000014a7b0
- (void)chat:(id)arg1 isFilteredUpdated:(long long)arg2;	// IMP=0x000000000014a730
- (void)chat:(id)arg1 lastAddressedHandleUpdated:(id)arg2 lastAddressedSIMIDUpdated:(id)arg3;	// IMP=0x000000000014a6b0
- (void)chat:(id)arg1 lastAddressedSIMIDUpdated:(id)arg2;	// IMP=0x000000000014a630
- (void)chat:(id)arg1 lastAddressedHandleUpdated:(id)arg2;	// IMP=0x000000000014a5b0
- (void)chat:(id)arg1 chatPersonCentricID:(id)arg2 displayNameUpdated:(id)arg3 sender:(id)arg4;	// IMP=0x000000000014a4a0
- (void)chat:(id)arg1 chatPersonCentricID:(id)arg2 displayNameUpdated:(id)arg3;	// IMP=0x000000000014a3e0
- (void)chat:(id)arg1 propertiesUpdated:(id)arg2;	// IMP=0x000000000014a2f0
- (void)chat:(id)arg1 updated:(id)arg2;	// IMP=0x000000000014a280
- (void)databaseChatSpamUpdated:(id)arg1;	// IMP=0x000000000014f220
- (void)databaseUpdated:(id)arg1;	// IMP=0x000000000014f0c0
- (void)databaseUpdated;	// IMP=0x000000000014ef60

@end

