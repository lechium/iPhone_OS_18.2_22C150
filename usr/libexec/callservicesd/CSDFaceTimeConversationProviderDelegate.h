//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSMutableSet;
@protocol CSDBlockUtilitiesProtocol;

@interface CSDFaceTimeConversationProviderDelegate
{
    NSMutableSet *_conversationUUIDsWaitingForRemoteJoin;	// 8 = 0x8
    NSMutableSet *_conversationUUIDsUpgradedFromAVLess;	// 16 = 0x10
    NSMutableDictionary *_recentlyDeletedCallUUIDsByConversationUUID;	// 24 = 0x18
    CDUnknownBlockType _allowsScreenSharingBlock;	// 32 = 0x20
    id <CSDBlockUtilitiesProtocol> _blockUtilities;	// 40 = 0x28
}

+ (id)callScreenShareAttributesForAction:(id)arg1;	// IMP=0x00400000001c2919
- (void).cxx_destruct;	// IMP=0x00200000001d2cdc
@property(readonly, nonatomic) id <CSDBlockUtilitiesProtocol> blockUtilities; // @synthesize blockUtilities=_blockUtilities;
@property(copy, nonatomic) CDUnknownBlockType allowsScreenSharingBlock; // @synthesize allowsScreenSharingBlock=_allowsScreenSharingBlock;
@property(readonly, nonatomic) NSMutableDictionary *recentlyDeletedCallUUIDsByConversationUUID; // @synthesize recentlyDeletedCallUUIDsByConversationUUID=_recentlyDeletedCallUUIDsByConversationUUID;
- (_Bool)shouldHandleProviderWithIdentifier:(id)arg1;	// IMP=0x00100000001d2bfc
- (_Bool)shouldHandleProvider:(id)arg1;	// IMP=0x00100000001d2bde
@property(readonly, nonatomic) NSMutableSet *conversationUUIDsUpgradedFromAVLess; // @synthesize conversationUUIDsUpgradedFromAVLess=_conversationUUIDsUpgradedFromAVLess;
- (_Bool)shouldHandleUpdateForProvider:(id)arg1;	// IMP=0x00100000001d2b7b
- (void)launchScreenSharingAppIfNecessary;	// IMP=0x00100000001d2b75
- (void)provider:(id)arg1 performSetAllowUplinkAudioInjectionAction:(id)arg2;	// IMP=0x00100000001d27ec
- (void)provider:(id)arg1 performSetScreeningCallAction:(id)arg2;	// IMP=0x00100000001d2425
- (void)provider:(id)arg1 performSetRelayingCallAction:(id)arg2;	// IMP=0x00100000001d20ee
- (void)provider:(id)arg1 performSetVideoPresentationSizeCallAction:(id)arg2;	// IMP=0x00100000001d1d81
- (void)provider:(id)arg1 performSetVideoPresentationStateCallAction:(id)arg2;	// IMP=0x00100000001d196f
- (void)provider:(id)arg1 performSetScreenShareAttributesCallAction:(id)arg2;	// IMP=0x00100000001d1795
- (void)provider:(id)arg1 performEnableVideoCallAction:(id)arg2;	// IMP=0x00100000001d13ed
- (void)provider:(id)arg1 performSetSharingScreenCallAction:(id)arg2;	// IMP=0x00100000001d0da5
- (void)provider:(id)arg1 performSetSendingVideoCallAction:(id)arg2;	// IMP=0x00100000001d05ce
- (void)provider:(id)arg1 performSetHeldCallAction:(id)arg2;	// IMP=0x00100000001d02e5
- (void)leaveConversation:(id)arg1 withCallUUID:(id)arg2 reason:(long long)arg3;	// IMP=0x00100000001cfeeb
- (void)leaveConversationForCallUUID:(id)arg1 endedReason:(long long)arg2;	// IMP=0x00100000001cfdfe
- (id)_findPendingConversationWithCallUUID:(id)arg1;	// IMP=0x00100000001cf996
- (void)proceedToNewPendingConversationForLink:(id)arg1 action:(id)arg2;	// IMP=0x00100000001cf53a
- (void)provider:(id)arg1 performJoinCallAction:(id)arg2;	// IMP=0x00100000001cf525
- (void)performJoinCallAction:(id)arg1;	// IMP=0x00100000001ccab3
- (id)validateLinkForJoinCallActionIfNecessary:(id)arg1 withError:(id *)arg2;	// IMP=0x00100000001cc479
- (id)linkForJoinCallAction:(id)arg1 withError:(id *)arg2;	// IMP=0x00100000001cc294
- (id)deletedLinkForJoinCallAction:(id)arg1 withError:(id *)arg2;	// IMP=0x00100000001cc0d5
- (id)activatedLinkForJoinCallAction:(id)arg1 withError:(id *)arg2;	// IMP=0x00100000001cbf58
- (id)linkForJoinCallAction:(id)arg1 inLinks:(id)arg2;	// IMP=0x00100000001cbbee
- (void)provider:(id)arg1 performAnswerCallAction:(id)arg2;	// IMP=0x00100000001cb535
- (void)conversationManager:(id)arg1 connectionDidStartForConversation:(id)arg2;	// IMP=0x00100000001cb442
- (void)conversationManager:(id)arg1 reportedRemoteDoesHandedOffForConversation:(id)arg2;	// IMP=0x00100000001cb205
- (void)conversationManager:(id)arg1 reportedHandedOffConversation:(id)arg2 replacedByIdentifier:(unsigned long long)arg3 localizedHandoffRecipientDeviceCategory:(id)arg4;	// IMP=0x00100000001cae2c
- (void)_failConversation:(id)arg1 failureReason:(long long)arg2 providerEndedReason:(long long)arg3;	// IMP=0x00100000001cab8b
- (void)conversationManager:(id)arg1 reportedInvalidLinkForPendingConversation:(id)arg2;	// IMP=0x00100000001cab06
- (void)conversationManager:(id)arg1 reportedLetMeInRejectedForPendingConversation:(id)arg2;	// IMP=0x00000000001caa81
- (void)conversationManager:(id)arg1 conversation:(id)arg2 changedBytesOfDataUsed:(long long)arg3;	// IMP=0x00100000001ca805
- (void)conversationManager:(id)arg1 removedConversationWithUUID:(id)arg2;	// IMP=0x00100000001ca612
- (void)conversationManager:(id)arg1 conversation:(id)arg2 addedActiveParticipant:(id)arg3;	// IMP=0x00100000001ca09e
- (void)conversationManager:(id)arg1 conversation:(id)arg2 failedWithContext:(id)arg3;	// IMP=0x00100000001c9f41
- (void)conversationManager:(id)arg1 conversation:(id)arg2 receivedMessage:(id)arg3 fromHandle:(id)arg4 withUpdate:(id)arg5;	// IMP=0x00100000001c9e78
- (_Bool)isManagingCallWithUUID:(id)arg1;	// IMP=0x00100000001c9cf5
- (void)conversationManager:(id)arg1 conversationScreenSharingChanged:(id)arg2 forParticipant:(id)arg3;	// IMP=0x00100000001c9bbc
- (void)conversationManager:(id)arg1 conversationChanged:(id)arg2;	// IMP=0x00100000001c87ff
- (void)conversationManager:(id)arg1 remoteMembersChanged:(id)arg2 forConversation:(id)arg3;	// IMP=0x00100000001c8608
- (void)conversationManager:(id)arg1 avModeChanged:(unsigned long long)arg2 toAVMode:(unsigned long long)arg3 forConversation:(id)arg4;	// IMP=0x00100000001c7ca0
- (void)conversationManager:(id)arg1 joinConversationWithRequest:(id)arg2;	// IMP=0x00100000001c7c51
- (void)declineConversation:(id)arg1 reason:(long long)arg2 destinations:(id)arg3;	// IMP=0x00100000001c7837
- (void)declineRemoteMembersForConversation:(id)arg1 reason:(long long)arg2;	// IMP=0x00100000001c75be
- (void)declineRemoteDevicesForConversation:(id)arg1 reason:(long long)arg2;	// IMP=0x00100000001c718f
- (_Bool)isUnansweredOutgoingOneToOneConversation:(id)arg1;	// IMP=0x00100000001c6f6d
- (void)startOutgoingOneToOneTimeoutIfNecessary:(id)arg1;	// IMP=0x00100000001c688b
- (void)handleRespondedElsewhereMessage:(id)arg1 forConversation:(id)arg2 fromHandle:(id)arg3;	// IMP=0x00100000001c67b7
- (void)handleRespondedElsewhereMessage:(id)arg1 forConversation:(id)arg2 fromHandle:(id)arg3 withAliases:(id)arg4;	// IMP=0x00100000001c610c
- (void)handleInvitationMessageForLetMeIn:(id)arg1 forConversation:(id)arg2 pendingConversation:(id)arg3 link:(id)arg4 fromHandle:(id)arg5;	// IMP=0x00100000001c5845
- (void)handleInvitationMessage:(id)arg1 forConversation:(id)arg2 fromHandle:(id)arg3;	// IMP=0x00100000001c4f5f
- (void)handleRemoveMembersMessage:(id)arg1 forConversation:(id)arg2;	// IMP=0x00100000001c4ca7
- (void)handleUpgradeMessage:(id)arg1 forConversation:(id)arg2 fromHandle:(id)arg3 withUpdate:(id)arg4;	// IMP=0x00100000001c3c4b
- (void)handleReceivedVideoUpgradeMessage:(id)arg1 forConversation:(id)arg2 fromHandle:(id)arg3;	// IMP=0x00100000001c3711
- (void)handleScreenShareMessage:(id)arg1 forConversation:(id)arg2 fromHandle:(id)arg3 withUpdate:(id)arg4;	// IMP=0x00100000001c36b5
- (void)handleNicknameUpdateMessage:(id)arg1 forConversation:(id)arg2 fromHandle:(id)arg3 withUpdate:(id)arg4;	// IMP=0x00100000001c3528
- (void)handleDeclineMessage:(id)arg1 forConversation:(id)arg2 fromHandle:(id)arg3 withUpdate:(id)arg4;	// IMP=0x00100000001c32c4
- (void)handleMessage:(id)arg1 forConversation:(id)arg2 fromHandle:(id)arg3 withUpdate:(id)arg4;	// IMP=0x00100000001c2ff3
- (void)cleanUpConversationIfNecessaryForConversationUUID:(id)arg1 failureContext:(id)arg2;	// IMP=0x00100000001c2f39
- (_Bool)linkContainsValidLocalHandle:(id)arg1;	// IMP=0x00100000001c2b79
- (int)TUCallRemoteVideoPresentationStateFromCXVideoPresentationState:(long long)arg1;	// IMP=0x00100000001c28fe
- (void)setWaitingForRemoteJoin:(_Bool)arg1 forConversationUUID:(id)arg2;	// IMP=0x00100000001c2856
@property(readonly, nonatomic) NSMutableSet *conversationUUIDsWaitingForRemoteJoin; // @synthesize conversationUUIDsWaitingForRemoteJoin=_conversationUUIDsWaitingForRemoteJoin;
- (_Bool)isWaitingForRemoteJoinForConversationUUID:(id)arg1;	// IMP=0x00100000001c2772
- (void)setCallUUID:(id)arg1 forConversationUUID:(id)arg2;	// IMP=0x00100000001c22ac
- (id)initWithConversationManager:(id)arg1 queue:(id)arg2 invitationResolver:(id)arg3;	// IMP=0x00100000001c21b0

@end

