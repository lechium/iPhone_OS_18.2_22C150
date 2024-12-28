//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface CSDRTCReporter : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *relayDeviceRouteChangesByCallUUID;	// 16 = 0x10
    MISSING_TYPE *groupUUIDToConversationReportingSessions;	// 24 = 0x18
    MISSING_TYPE *conversationUUIDToConversationReport;	// 32 = 0x20
    MISSING_TYPE *groupUUIDToConversationInfo;	// 40 = 0x28
    MISSING_TYPE *callUUIDToCallReportingSessions;	// 48 = 0x30
    MISSING_TYPE *callUUIDToGFTCallReportingSessions;	// 56 = 0x38
    MISSING_TYPE *callUUIDtoConversationUUID;	// 64 = 0x40
    MISSING_TYPE *conversationGroupUUIDToCallUUID;	// 72 = 0x48
    MISSING_TYPE *callUUIDtoConversationGroupUUID;	// 80 = 0x50
    MISSING_TYPE *uuidToNWActivity;	// 88 = 0x58
    MISSING_TYPE *uuidToNWActivityConnecting;	// 96 = 0x60
    MISSING_TYPE *idsSessionUUIDToChatUUIDs;	// 104 = 0x68
    MISSING_TYPE *callInfosPendingScoreForCallUUIDs;	// 112 = 0x70
    MISSING_TYPE *userScoreEnabled;	// 120 = 0x78
    MISSING_TYPE *appleIDUtilities;	// 128 = 0x80
    MISSING_TYPE *chManager;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0040000000271fc0
- (id)init;	// IMP=0x0010000000271f8a
- (void)reportingController:(id)arg1 callUUID:(id)arg2 withUserScore:(int)arg3;	// IMP=0x0010000000270c88
- (void)reportingController:(id)arg1 sentLetMeInResponseForConversation:(id)arg2 isApproved:(_Bool)arg3;	// IMP=0x0010000000270716
- (void)reportingController:(id)arg1 receivedLetMeInRequestForConversation:(id)arg2;	// IMP=0x00100000002703f3
- (void)reportingController:(id)arg1 voipDOSCallIgnored:(id)arg2;	// IMP=0x001000000027012f
- (void)reportingController:(id)arg1 voipPushDroppedOnTheFloor:(id)arg2;	// IMP=0x001000000026ff22
- (void)reportingController:(id)arg1 voipAppBecameDisabledFromLaunching:(id)arg2;	// IMP=0x001000000026fe4e
- (void)reportingController:(id)arg1 voipAppFailedToPostIncomingCall:(id)arg2;	// IMP=0x001000000026fe08
- (void)reportingController:(id)arg1 receivedGroupActivitiesReports:(id)arg2 forConversation:(id)arg3;	// IMP=0x001000000026fadf
- (void)reportingController:(id)arg1 receivedConnectionSetupReport:(id)arg2 eventType:(long long)arg3 forConversation:(id)arg4;	// IMP=0x001000000026f2d2
- (void)reportingController:(id)arg1 receivedHandoffReport:(id)arg2 forConversation:(id)arg3;	// IMP=0x001000000026eb1f
- (void)reportingController:(id)arg1 receivedIDSReports:(id)arg2 forSessionWithUUID:(id)arg3;	// IMP=0x001000000026dce2
- (void)reportingController:(id)arg1 receivedIDSChat:(id)arg2;	// IMP=0x001000000026d766
- (void)reportingController:(id)arg1 receivedIDSReports:(id)arg2 forConversation:(id)arg3;	// IMP=0x001000000026d18a
- (void)reportingController:(id)arg1 avcBlobRequestMessageRetrySucceededForConversationGroupUUID:(id)arg2;	// IMP=0x001000000026cc94
- (void)reportingController:(id)arg1 avcBlobRequestMessageRetryFailedForConversationGroupUUID:(id)arg2;	// IMP=0x001000000026c9bf
- (void)reportingController:(id)arg1 avcBlobRequestMessageRetryStartedForConversationGroupUUID:(id)arg2;	// IMP=0x001000000026c993
- (void)reportingController:(id)arg1 messageRetrySucceededForConversationGroupUUID:(id)arg2;	// IMP=0x001000000026c967
- (void)reportingController:(id)arg1 messageRetryFailedForConversationGroupUUID:(id)arg2;	// IMP=0x001000000026c88b
- (void)reportingController:(id)arg1 messageRetryStartedForConversationGroupUUID:(id)arg2;	// IMP=0x001000000026c85f
- (void)reportingController:(id)arg1 oneToOneModeSwitchFailureForConversation:(id)arg2 isOneToOneMode:(_Bool)arg3;	// IMP=0x001000000026c7e0
- (void)reportingController:(id)arg1 AVCBlobRecoveryTimedOutForConversation:(id)arg2;	// IMP=0x001000000026c67c
- (void)reportingController:(id)arg1 transitionAttemptForConversation:(id)arg2;	// IMP=0x001000000026c600
- (void)reportingController:(id)arg1 remoteMemberNotInMemberListForConversation:(id)arg2;	// IMP=0x001000000026c584
- (void)reportingController:(id)arg1 AVCBlobRecoveryStartedForConversation:(id)arg2;	// IMP=0x001000000026c508
- (void)reportingController:(id)arg1 removedActiveConversation:(id)arg2;	// IMP=0x001000000026c48c
- (void)reportingController:(id)arg1 addedActiveConversation:(id)arg2;	// IMP=0x001000000026be99
- (void)reportingController:(id)arg1 activeRemoteParticipantsChangedForConversation:(id)arg2;	// IMP=0x001000000026b8c2
- (void)reportingController:(id)arg1 remoteMembersChangedForConversation:(id)arg2;	// IMP=0x001000000026b761
- (void)reportingController:(id)arg1 stateChangedForConversation:(id)arg2;	// IMP=0x001000000026b6e5
- (void)reportingController:(id)arg1 pickedRoute:(id)arg2 forCall:(id)arg3;	// IMP=0x001000000026b550
- (void)reportingController:(id)arg1 statusChangedForCall:(id)arg2 totalCallCount:(unsigned long long)arg3;	// IMP=0x001000000026b1a7
- (void)reportingController:(id)arg1 timedOutPickingRoute:(id)arg2 forCall:(id)arg3;	// IMP=0x0010000000267a3f
- (void)reportingController:(id)arg1 createConversationReportingSessionForConversation:(id)arg2;	// IMP=0x0010000000267850
- (id)initWithQueue:(id)arg1 chManager:(id)arg2;	// IMP=0x00100000002673c2
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000002671be

@end
